`resetall
`timescale 1ns/1ps
`default_nettype none

module axi_pim#(
    // Width of data bus in bits
    parameter DATA_WIDTH = 32,
    // Width of address bus in bits
    parameter ADDR_WIDTH = 16,
    // Width of wstrb (width of data bus in words)
    parameter STRB_WIDTH = (DATA_WIDTH/8),
    // Width of ID signal
    parameter ID_WIDTH = 8,
    // Extra pipeline register on output
    parameter PIPELINE_OUTPUT = 0,
    parameter PWIDTH = 32,
    parameter PDEPTH = (1<<ADDR_WIDTH-$clog2(STRB_WIDTH))
)(
    input  wire                   clk,
    input  wire                   rst,

    input  wire [ID_WIDTH-1:0]    s_axi_awid,
    input  wire [ADDR_WIDTH-1:0]  s_axi_awaddr,     // cmd_payload_inputs_1, addr
    input  wire [7:0]             s_axi_awlen,
    input  wire [2:0]             s_axi_awsize,
    input  wire [1:0]             s_axi_awburst,
    input  wire                   s_axi_awlock,
    input  wire [3:0]             s_axi_awcache,
    input  wire [2:0]             s_axi_awprot,
    input  wire                   s_axi_awvalid,
    output wire                   s_axi_awready,
    input  wire [DATA_WIDTH-1:0]  s_axi_wdata,      // cmd_payload_inputs_0, d
    input  wire [STRB_WIDTH-1:0]  s_axi_wstrb,
    input  wire                   s_axi_wlast,
    input  wire                   s_axi_wvalid,     // cmd_valid
    output wire                   s_axi_wready,     // cmd_ready
    output wire [ID_WIDTH-1:0]    s_axi_bid,
    output wire [1:0]             s_axi_bresp,
    output wire                   s_axi_bvalid,
    input  wire                   s_axi_bready,
    input  wire [ID_WIDTH-1:0]    s_axi_arid,
    input  wire [ADDR_WIDTH-1:0]  s_axi_araddr,     // cmd_payload_inputs_1, addr
    input  wire [7:0]             s_axi_arlen,
    input  wire [2:0]             s_axi_arsize,
    input  wire [1:0]             s_axi_arburst,
    input  wire                   s_axi_arlock,
    input  wire [3:0]             s_axi_arcache,
    input  wire [2:0]             s_axi_arprot,
    input  wire                   s_axi_arvalid,
    output wire                   s_axi_arready,
    output wire [ID_WIDTH-1:0]    s_axi_rid,
    output wire [DATA_WIDTH-1:0]  s_axi_rdata,      // rsp_payload_outputs_0
    output wire [1:0]             s_axi_rresp,      // rsp_payload_response_ok
    output wire                   s_axi_rlast,
    output wire                   s_axi_rvalid,     // rsp_valid
    input  wire                   s_axi_rready      // rsp_ready
);
    // -------------------------------------------------------------------
    // calculate Mac
    reg [DATA_WIDTH-1:0] adc_out [0:PWIDTH-1];
    reg [4:0] shift_cnt;
    reg [DATA_WIDTH-1:0] acc_result [0:PWIDTH-1];
    reg [DATA_WIDTH-1:0] sum_acc_result;
    reg [DATA_WIDTH-1:0] mac_out_reg;
    // reg [PWIDTH-1:0] q_reg;
    reg [DATA_WIDTH-1:0] out;
    reg [DATA_WIDTH-1:0] temp_sum_acc_result;
    reg [PDEPTH-1:0] rwl;
    // -------------------------------------------------------------------

    // -------------------------------------------------------------------
    // axi_ram module
    parameter VALID_ADDR_WIDTH = ADDR_WIDTH - $clog2(STRB_WIDTH);
    parameter WORD_WIDTH = STRB_WIDTH;
    parameter WORD_SIZE = DATA_WIDTH/WORD_WIDTH;

    // bus width assertions
    initial begin
        if (WORD_SIZE * STRB_WIDTH != DATA_WIDTH) begin
            $error("Error: AXI data width not evenly divisble (instance %m)");
            $finish;
        end

        if (2**$clog2(WORD_WIDTH) != WORD_WIDTH) begin
            $error("Error: AXI word width must be even power of two (instance %m)");
            $finish;
        end
    end

    localparam [0:0]
        READ_STATE_IDLE = 1'd0,
        READ_STATE_BURST = 1'd1;

    reg [0:0] read_state_reg = READ_STATE_IDLE, read_state_next;

    localparam [1:0]
        WRITE_STATE_IDLE = 2'd0,
        WRITE_STATE_BURST = 2'd1,
        WRITE_STATE_RESP = 2'd2;

    reg [1:0] write_state_reg = WRITE_STATE_IDLE, write_state_next;

    reg mem_wr_en;
    reg mem_rd_en;

    reg [ID_WIDTH-1:0] read_id_reg = {ID_WIDTH{1'b0}}, read_id_next;
    reg [ADDR_WIDTH-1:0] read_addr_reg = {ADDR_WIDTH{1'b0}}, read_addr_next;
    reg [7:0] read_count_reg = 8'd0, read_count_next;
    reg [2:0] read_size_reg = 3'd0, read_size_next;
    reg [1:0] read_burst_reg = 2'd0, read_burst_next;
    reg [ID_WIDTH-1:0] write_id_reg = {ID_WIDTH{1'b0}}, write_id_next;
    reg [ADDR_WIDTH-1:0] write_addr_reg = {ADDR_WIDTH{1'b0}}, write_addr_next;
    reg [7:0] write_count_reg = 8'd0, write_count_next;
    reg [2:0] write_size_reg = 3'd0, write_size_next;
    reg [1:0] write_burst_reg = 2'd0, write_burst_next;

    reg s_axi_awready_reg = 1'b0, s_axi_awready_next;
    reg s_axi_wready_reg = 1'b0, s_axi_wready_next;
    reg [ID_WIDTH-1:0] s_axi_bid_reg = {ID_WIDTH{1'b0}}, s_axi_bid_next;
    reg s_axi_bvalid_reg = 1'b0, s_axi_bvalid_next;
    reg s_axi_arready_reg = 1'b0, s_axi_arready_next;
    reg [ID_WIDTH-1:0] s_axi_rid_reg = {ID_WIDTH{1'b0}}, s_axi_rid_next;
    reg [DATA_WIDTH-1:0] s_axi_rdata_reg = {DATA_WIDTH{1'b0}}, s_axi_rdata_next;
    reg s_axi_rlast_reg = 1'b0, s_axi_rlast_next;
    reg s_axi_rvalid_reg = 1'b0, s_axi_rvalid_next;
    reg [ID_WIDTH-1:0] s_axi_rid_pipe_reg = {ID_WIDTH{1'b0}};
    reg [DATA_WIDTH-1:0] s_axi_rdata_pipe_reg = {DATA_WIDTH{1'b0}};
    reg s_axi_rlast_pipe_reg = 1'b0;
    reg s_axi_rvalid_pipe_reg = 1'b0;

    // -------------------------------------------------------------------
    // Dual memory declaration

    // (* RAM_STYLE="BLOCK" *)
    reg [DATA_WIDTH-1:0] mem1[(2**VALID_ADDR_WIDTH)-1:0];   // Read, Write Mode
    reg [DATA_WIDTH-1:0] mem2[(2**VALID_ADDR_WIDTH)-1:0];   // MacOut Mode
    
    integer i, j;
    integer k;

    initial begin
        // two nested loops for smaller number of iterations per loop
        // workaround for synthesizer complaints about large loop counts
        for (i = 0; i < 2**VALID_ADDR_WIDTH; i = i + 2**(VALID_ADDR_WIDTH/2)) begin
            for (j = i; j < i + 2**(VALID_ADDR_WIDTH/2); j = j + 1) begin
                mem1[j] = 0;
            end
        end

        for (i = 0; i < 2**VALID_ADDR_WIDTH; i = i + 2**(VALID_ADDR_WIDTH/2)) begin
            for (j = i; j < i + 2**(VALID_ADDR_WIDTH/2); j = j + 1) begin
                mem2[j] = 0;
            end
        end
    end
    // -------------------------------------------------------------------

    wire [VALID_ADDR_WIDTH-1:0] s_axi_awaddr_valid = s_axi_awaddr >> (ADDR_WIDTH - VALID_ADDR_WIDTH);
    wire [VALID_ADDR_WIDTH-1:0] s_axi_araddr_valid = s_axi_araddr >> (ADDR_WIDTH - VALID_ADDR_WIDTH);
    wire [VALID_ADDR_WIDTH-1:0] read_addr_valid = read_addr_reg >> (ADDR_WIDTH - VALID_ADDR_WIDTH);
    wire [VALID_ADDR_WIDTH-1:0] write_addr_valid = write_addr_reg >> (ADDR_WIDTH - VALID_ADDR_WIDTH);

    assign s_axi_awready = s_axi_awready_reg;
    assign s_axi_wready = s_axi_wready_reg;
    assign s_axi_bid = s_axi_bid_reg;
    assign s_axi_bresp = 2'b00;
    assign s_axi_bvalid = s_axi_bvalid_reg;
    assign s_axi_arready = s_axi_arready_reg;
    assign s_axi_rid = PIPELINE_OUTPUT ? s_axi_rid_pipe_reg : s_axi_rid_reg;
    assign s_axi_rdata = PIPELINE_OUTPUT ? s_axi_rdata_pipe_reg : s_axi_rdata_reg;
    assign s_axi_rresp = 2'b00;
    assign s_axi_rlast = PIPELINE_OUTPUT ? s_axi_rlast_pipe_reg : s_axi_rlast_reg;
    assign s_axi_rvalid = PIPELINE_OUTPUT ? s_axi_rvalid_pipe_reg : s_axi_rvalid_reg;


    always @* begin
        write_state_next = WRITE_STATE_IDLE;

        mem_wr_en = 1'b0;

        write_id_next = write_id_reg;
        write_addr_next = write_addr_reg;
        write_count_next = write_count_reg;
        write_size_next = write_size_reg;
        write_burst_next = write_burst_reg;

        s_axi_awready_next = 1'b0;
        s_axi_wready_next = 1'b0;
        s_axi_bid_next = s_axi_bid_reg;
        s_axi_bvalid_next = s_axi_bvalid_reg && !s_axi_bready;

        case (write_state_reg)
            WRITE_STATE_IDLE: begin
                s_axi_awready_next = 1'b1;

                if (s_axi_awready && s_axi_awvalid) begin
                    write_id_next = s_axi_awid_reg;
                    write_addr_next = s_axi_awaddr;
                    write_count_next = s_axi_awlen;
                    write_size_next = s_axi_awsize < $clog2(STRB_WIDTH) ? s_axi_awsize : $clog2(STRB_WIDTH);
                    write_burst_next = s_axi_awburst;

                    s_axi_awready_next = 1'b0;
                    s_axi_wready_next = 1'b1;
                    write_state_next = WRITE_STATE_BURST;
                end else begin
                    write_state_next = WRITE_STATE_IDLE;
                end
            end
            WRITE_STATE_BURST: begin
                s_axi_wready_next = 1'b1;

                if (s_axi_wready && s_axi_wvalid) begin
                    mem_wr_en = 1'b1;
                    if (write_burst_reg != 2'b00) begin
                        write_addr_next = write_addr_reg + (1 << write_size_reg);
                    end
                    write_count_next = write_count_reg - 1;
                    if (write_count_reg > 0) begin
                        write_state_next = WRITE_STATE_BURST;
                    end else begin
                        s_axi_wready_next = 1'b0;
                        if (s_axi_bready || !s_axi_bvalid) begin
                            s_axi_bid_next = write_id_reg;
                            s_axi_bvalid_next = 1'b1;
                            s_axi_awready_next = 1'b1;
                            write_state_next = WRITE_STATE_IDLE;
                        end else begin
                            write_state_next = WRITE_STATE_RESP;
                        end
                    end
                end else begin
                    write_state_next = WRITE_STATE_BURST;
                end
            end
            WRITE_STATE_RESP: begin
                if (s_axi_bready || !s_axi_bvalid) begin
                    s_axi_bid_next = write_id_reg;
                    s_axi_bvalid_next = 1'b1;
                    s_axi_awready_next = 1'b1;
                    write_state_next = WRITE_STATE_IDLE;
                end else begin
                    write_state_next = WRITE_STATE_RESP;
                end
            end
        endcase
    end

    always @(posedge clk) begin
        write_state_reg <= write_state_next;

        write_id_reg <= write_id_next;
        write_addr_reg <= write_addr_next;
        write_count_reg <= write_count_next;
        write_size_reg <= write_size_next;
        write_burst_reg <= write_burst_next;

        s_axi_awready_reg <= s_axi_awready_next;
        s_axi_wready_reg <= s_axi_wready_next;
        s_axi_bid_reg <= s_axi_bid_next;
        s_axi_bvalid_reg <= s_axi_bvalid_next;

        for (i = 0; i < WORD_WIDTH; i = i + 1) begin
            if (mem_wr_en & s_axi_wstrb[i]) begin
                mem1[write_addr_valid][WORD_SIZE*i +: WORD_SIZE] <= s_axi_wdata[WORD_SIZE*i +: WORD_SIZE];
            end
        end

        if (rst) begin
            write_state_reg <= WRITE_STATE_IDLE;

            s_axi_awready_reg <= 1'b0;
            s_axi_wready_reg <= 1'b0;
            s_axi_bvalid_reg <= 1'b0;
        end
    end

    always @* begin
        read_state_next = READ_STATE_IDLE;

        mem_rd_en = 1'b0;

        s_axi_rid_next = s_axi_rid_reg;
        s_axi_rlast_next = s_axi_rlast_reg;
        s_axi_rvalid_next = s_axi_rvalid_reg && !(s_axi_rready || (PIPELINE_OUTPUT && !s_axi_rvalid_pipe_reg));

        read_id_next = read_id_reg;
        read_addr_next = read_addr_reg;
        read_count_next = read_count_reg;
        read_size_next = read_size_reg;
        read_burst_next = read_burst_reg;

        s_axi_arready_next = 1'b0;

        case (read_state_reg)
            READ_STATE_IDLE: begin
                s_axi_arready_next = 1'b1;

                if (s_axi_arready && s_axi_arvalid) begin
                    read_id_next = s_axi_arid_reg;
                    read_addr_next = s_axi_araddr;
                    read_count_next = s_axi_arlen;
                    read_size_next = s_axi_arsize < $clog2(STRB_WIDTH) ? s_axi_arsize : $clog2(STRB_WIDTH);
                    read_burst_next = s_axi_arburst;

                    s_axi_arready_next = 1'b0;
                    read_state_next = READ_STATE_BURST;
                end else begin
                    read_state_next = READ_STATE_IDLE;
                end
            end
            READ_STATE_BURST: begin
                if (s_axi_rready || (PIPELINE_OUTPUT && !s_axi_rvalid_pipe_reg) || !s_axi_rvalid_reg) begin
                    mem_rd_en = 1'b1;
                    s_axi_rvalid_next = 1'b1;
                    s_axi_rid_next = read_id_reg;
                    s_axi_rlast_next = read_count_reg == 0;
                    if (read_burst_reg != 2'b00) begin
                        read_addr_next = read_addr_reg + (1 << read_size_reg);
                    end
                    read_count_next = read_count_reg - 1;
                    if (read_count_reg > 0) begin
                        read_state_next = READ_STATE_BURST;
                    end else begin
                        s_axi_arready_next = 1'b1;
                        read_state_next = READ_STATE_IDLE;
                    end
                end else begin
                    read_state_next = READ_STATE_BURST;
                end
            end
        endcase
    end

    always @(posedge clk) begin
        read_state_reg <= read_state_next;

        read_id_reg <= read_id_next;
        read_addr_reg <= read_addr_next;
        read_count_reg <= read_count_next;
        read_size_reg <= read_size_next;
        read_burst_reg <= read_burst_next;

        s_axi_arready_reg <= s_axi_arready_next;
        s_axi_rid_reg <= s_axi_rid_next;
        s_axi_rlast_reg <= s_axi_rlast_next;
        s_axi_rvalid_reg <= s_axi_rvalid_next;

        // if (mem_rd_en) begin
        //     s_axi_rdata_reg <= mem1[read_addr_valid];
        // end

        if (!s_axi_rvalid_pipe_reg || s_axi_rready) begin
            s_axi_rid_pipe_reg <= s_axi_rid_reg;
            s_axi_rdata_pipe_reg <= s_axi_rdata_reg;
            s_axi_rlast_pipe_reg <= s_axi_rlast_reg;
            s_axi_rvalid_pipe_reg <= s_axi_rvalid_reg;
        end

        if (rst) begin
            read_state_reg <= READ_STATE_IDLE;

            s_axi_arready_reg <= 1'b0;
            s_axi_rvalid_reg <= 1'b0;
            s_axi_rvalid_pipe_reg <= 1'b0;
        end
    end
    // ---------------------------------------------------------------------------

    reg p_en;
    reg [ID_WIDTH-1:0]    s_axi_awid_reg;
    reg [ID_WIDTH-1:0]    s_axi_arid_reg;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            s_axi_awid_reg <= 0;
            s_axi_arid_reg <= 0;

            p_en <= 0;
        end
        else begin
            if (s_axi_awid == 0 || s_axi_arid == 0) begin
                s_axi_awid_reg <= s_axi_awid_reg + 1;
                s_axi_arid_reg <= s_axi_arid_reg + 1;
                $display("PIM Mode Enabled with Incremented ID! %h -> %h, %h -> %h", s_axi_awid, s_axi_awid_reg, s_axi_arid, s_axi_arid_reg);

                if (s_axi_awid_reg >= 8'h80 || s_axi_arid_reg >= 8'h80) begin
                    p_en <= 1'b1;
                    $display("\nPIM Mode Start ! : [mem1] ------> [mem2]");
                end
                else if (s_axi_awid_reg >= 8'hFF || s_axi_arid_reg >= 8'hFF) begin
                    p_en <= 1'b0;
                    $display("\nMEM Mode Start ! : [mem2] ------> [mem1]");
                end
                else begin
                    p_en <= 1'b0;
                end
            end
            else begin
                p_en <= 1'b0;
            end
        end
    end

    wire mode;
    // mode 1 -> using mem1 : MEM 
    // mode 2 -> using mem2 : PIM
    assign mode = (p_en) ? 1'b1 : 1'b0;

    reg w_en;
    always@* begin
		if (mem_wr_en) w_en = 1'b1;
		else begin
			if (mem_rd_en) w_en = 1'b0;
			else 		   w_en = 1'bx;
		end
        // w_en = (mem_wr_en) ? 1'b1 : (mem_rd_en) ? 1'b0 : 1'bx;
    end

    reg [31:0] count;

    // -------------------------------------------------------------------
    // calculate Mac

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            rwl <= 0;
            count <= 0;
        end else begin
            if (count != 0) rwl <= rwl;
            else begin
                rwl <= $urandom;
            end
            // $display("rwl: %h", rwl);
        end
    end

    always @(posedge clk or posedge rst) begin
        if (rst) begin 
            shift_cnt <= 0;
            for (i = 0; i < PWIDTH; i = i+1) begin
                acc_result[i] <= 0;
                adc_out[i] <= 0;
            end
            sum_acc_result <= 0;
            // q_reg <= 0;
            mac_out_reg <= 0;
            count <= 0;
            // temp_sum_acc_result <= 0;
        end 
        else begin
            if (!p_en) begin // Memory operation
                count <= 0;
                if (w_en) begin
                    $display("[Write] p_en = %0d, w_en = %0d", p_en, w_en);
                    $display("[Write] mem1[0x%04X] <- 0x%08X", write_addr_valid, s_axi_wdata);
                end 
                else if (!w_en) begin
                    // q_reg <= mem1[read_addr_valid];
                    $display("[Read] p_en = %0d, w_en = %0d", p_en, w_en);
                end
                else begin
                    $display("Waiting .. .. .. ..");
                end
                shift_cnt <= 0;
                for (i = 0; i < PWIDTH; i = i+1) begin
                    acc_result[i] <= 0;
                end
            end 
            else begin // MAC operation
                $display("[MAC] p_en = %0d, w_en = %0d", p_en, w_en);
                count <= count + 1;
                
                // for (i = 0; i < PWIDTH; i = i+1) begin
                //     $display("adc_out[%0d]: %h", i, adc_out[i]);
                // end
                
                for (i = 0; i < PWIDTH; i = i+1) begin
                    acc_result[i] <= (shift_cnt == 0) ? adc_out[i] : acc_result[i] + (adc_out[i] << shift_cnt);
                    // if (shift_cnt == 0) $display("After  Accumulate: shift_cnt : %0d, acc_result[%0d] = %h", shift_cnt, i, adc_out[i]);
                    // else $display("After  Accumulate: shift_cnt : %0d, acc_result[%0d] = %h <= %h + %h << %h", shift_cnt, i, acc_result[i] + (adc_out[i] << shift_cnt), acc_result[i], adc_out[i], shift_cnt);                       
                end
                shift_cnt <= shift_cnt + 1;

                temp_sum_acc_result = 0;
                
                for (i = 0; i < PWIDTH; i = i+1) begin
                    temp_sum_acc_result = temp_sum_acc_result + acc_result[i];
                    sum_acc_result <= temp_sum_acc_result;
                end
                mac_out_reg <= sum_acc_result;
                $display("[MAC] mac_out_reg : 0x%08X", mac_out_reg);
                // ---------------------------------------------------------------
                // TODO
                if (mac_out_reg != 32'd0) begin
                    mem2[write_addr_valid] <= mac_out_reg;
                    // $display("mem2[0x%08X] : 0x%08X", write_addr_valid, mem2[write_addr_valid]);
                end
                // ---------------------------------------------------------------
            end
        end
    end

    always @(shift_cnt) begin
        if (shift_cnt == 0) begin
            for (i = 0; i < PWIDTH; i++) begin
                adc_out[i] = 0;
            end
        end
        else begin
            for (i = 0; i < 2**VALID_ADDR_WIDTH; i = i + 2**(VALID_ADDR_WIDTH/2)) begin
                for (j = i; j < i + 2**(VALID_ADDR_WIDTH/2); j = j + 1) begin
                    for (k = 0; k < DATA_WIDTH; k = k + 1) begin
                        adc_out[k] = adc_out[k] + ({DATA_WIDTH{mem1[j][k]}} & {DATA_WIDTH{rwl[j - i]}});
                    end
                end
            end
        end
    end
    //     for (i = 0; i < PWIDTH; i = i+1) begin  
    //         for (j = 0; j < VALID_ADDR_WIDTH; j = j+1) begin
    //             if (shift_cnt == 0)     adc_out[i] = 0;
    //             else begin
    //                 adc_out[i] = adc_out[i] + ({PWIDTH{mem1[j][i]}} & {PWIDTH{rwl[j]}});
    //                 if (mem1[j][i] != 0) begin
    //                     $display("adc_out[%0d] after update: %h, mem1[%0d][%0d]: %h, rwl[%0d]: %h", i, adc_out[i], j, i, mem1[j][i], j, rwl[j]);
    //                 end
    //             end
    //         end
    //     end
    // end
    // -------------------------------------------------------------------
    
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            s_axi_rdata_reg <= 32'd0;
        end
        else begin
            // No regardless mem_rd_en, mem_wr_en
            if (mode) begin
                // --------------------------------------------------------------- 
                // TODO
                s_axi_rdata_reg <= mem2[read_addr_valid];
                $display("[PIM mode] s_axi_rdata_reg : 0x%08X\n", s_axi_rdata_reg);
                // ---------------------------------------------------------------
            end // PIM mode
            else begin
                s_axi_rdata_reg <= mem1[read_addr_valid];
                $display("[MEM mode] s_axi_rdata_reg : 0x%08X\n", s_axi_rdata_reg);
            end // MEM mode
        end
    end

endmodule

`resetall

