/*

Original file: https://github.com/alexforencich/verilog=axi/blob/master/rtl/axi_ram.v

Copyright (c) 2018 Alex Forencich

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

*/

// Language: Verilog 2001

`timescale 1ns / 1ps

/*
 * AXI4 RAM + systolic array 1
 */
module axi_sa_16x16 #
(
    // Width of data bus in bits
    parameter DATA_WIDTH = 32,
    // Width of address bus in bits
    parameter ADDR_WIDTH = 20,
    // Width of wstrb (width of data bus in words)
    parameter STRB_WIDTH = (DATA_WIDTH/8),
    // Width of ID signal
    parameter ID_WIDTH = 8,
    // Extra pipeline register on output
    parameter PIPELINE_OUTPUT = 0
)
(
    input  wire                   clk,
    input  wire                   rst,

    input  wire [ID_WIDTH-1:0]    s_axi_awid,
    input  wire [ADDR_WIDTH-1:0]  s_axi_awaddr,
    input  wire [7:0]             s_axi_awlen,
    input  wire [2:0]             s_axi_awsize,
    input  wire [1:0]             s_axi_awburst,
    input  wire                   s_axi_awlock,
    input  wire [3:0]             s_axi_awcache,
    input  wire [2:0]             s_axi_awprot,
    input  wire                   s_axi_awvalid,
    output wire                   s_axi_awready,
    input  wire [DATA_WIDTH-1:0]  s_axi_wdata,
    input  wire [STRB_WIDTH-1:0]  s_axi_wstrb,
    input  wire                   s_axi_wlast,
    input  wire                   s_axi_wvalid,
    output wire                   s_axi_wready,
    output wire [ID_WIDTH-1:0]    s_axi_bid,
    output wire [1:0]             s_axi_bresp,
    output wire                   s_axi_bvalid,
    input  wire                   s_axi_bready,
    input  wire [ID_WIDTH-1:0]    s_axi_arid,
    input  wire [ADDR_WIDTH-1:0]  s_axi_araddr,
    input  wire [7:0]             s_axi_arlen,
    input  wire [2:0]             s_axi_arsize,
    input  wire [1:0]             s_axi_arburst,
    input  wire                   s_axi_arlock,
    input  wire [3:0]             s_axi_arcache,
    input  wire [2:0]             s_axi_arprot,
    input  wire                   s_axi_arvalid,
    output wire                   s_axi_arready,
    output wire [ID_WIDTH-1:0]    s_axi_rid,
    output wire [DATA_WIDTH-1:0]  s_axi_rdata,
    output wire [1:0]             s_axi_rresp,
    output wire                   s_axi_rlast,
    output wire                   s_axi_rvalid,
    input  wire                   s_axi_rready
);

    parameter VALID_ADDR_WIDTH = ADDR_WIDTH - $clog2(STRB_WIDTH);
    
    // ==================================================
    // ================= systolic array =================
    // parameter
    parameter NUM_INPUTA = 16; 
    parameter NUM_INPUTB = 64; 
    parameter NUM_OUTPUTC = 64;

    // inputs
    reg [7:0] io_inputA [0:NUM_INPUTA-1];
    reg [7:0] io_inputB [0:NUM_INPUTB-1];
    reg io_propagateB [0:15];
    
    // outputs
    wire [19:0] io_outputC [0:NUM_OUTPUTC-1];
    // ==================================================
    // ==================================================


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

    // reg mem_wr_en;
    // reg mem_rd_en;

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

    // (* RAM_STYLE="BLOCK" *)
    // reg [DATA_WIDTH-1:0] mem[(2**VALID_ADDR_WIDTH)-1:0];

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

    integer i, j;

    // initial begin
    //     // two nested loops for smaller number of iterations per loop
    //     // workaround for synthesizer complaints about large loop counts
    //     for (i = 0; i < 2**VALID_ADDR_WIDTH; i = i + 2**(VALID_ADDR_WIDTH/2)) begin
    //         for (j = i; j < i + 2**(VALID_ADDR_WIDTH/2); j = j + 1) begin
    //             mem[j] = 0;
    //         end
    //     end
    // end

    always @* begin
        write_state_next = WRITE_STATE_IDLE;

        // mem_wr_en = 1'b0;

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
                    write_id_next = s_axi_awid;
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
                    if (write_addr_next[ADDR_WIDTH-1:ADDR_WIDTH-2] == 2'b00) begin
                        io_inputA[write_addr_next[3:0]] = s_axi_wdata[7:0];
						$display("io_inputA - Write : %d", io_inputA[write_addr_next[3:0]]);
                    end
                    else if (write_addr_next[ADDR_WIDTH-1:ADDR_WIDTH-2] == 2'b01) begin
                        io_inputB[write_addr_next[3:0]] = s_axi_wdata[7:0];
						$display("io_inputB - Write : %d", io_inputB[write_addr_next[3:0]]);
                    end
                    else begin
                        io_propagateB[write_addr_next[3:0]] = s_axi_wdata[0];
						$display("io_propagateB - Write : %d", io_propagateB[write_addr_next[3:0]]);
                    end
                    // mem_wr_en = 1'b1;

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
        if (rst) begin
            write_state_reg <= WRITE_STATE_IDLE;
            s_axi_awready_reg <= 1'b0;
            s_axi_wready_reg <= 1'b0;
            s_axi_bvalid_reg <= 1'b0;
        end else begin
            write_state_reg <= write_state_next;
            s_axi_awready_reg <= s_axi_awready_next;
            s_axi_wready_reg <= s_axi_wready_next;
            s_axi_bvalid_reg <= s_axi_bvalid_next;
        end

        write_id_reg <= write_id_next;
        write_addr_reg <= write_addr_next;
        write_count_reg <= write_count_next;
        write_size_reg <= write_size_next;
        write_burst_reg <= write_burst_next;

        s_axi_bid_reg <= s_axi_bid_next;

        // for (i = 0; i < WORD_WIDTH; i = i + 1) begin
        //     if (mem_wr_en & s_axi_wstrb[i]) begin
        //         if (write_addr_next[ADDR_WIDTH-1] == 1'b0) begin
        //             io_inputA[write_addr_next[3:0]] <= s_axi_wdata[7:0]; 
        //         end else begin
        //             io_inputB[write_addr_next[3:0]] <= s_axi_wdata[7:0];
        //         end
                
        //         // mem[write_addr_valid][WORD_SIZE*i +: WORD_SIZE] <= s_axi_wdata[WORD_SIZE*i +: WORD_SIZE];
        //     end
        // end
    end

    always @* begin
        read_state_next = READ_STATE_IDLE;

        // mem_rd_en = 1'b0;

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
                    read_id_next = s_axi_arid;
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
                    // mem_rd_en = 1'b1;
                    s_axi_rvalid_next = 1'b1;
                    s_axi_rid_next = read_id_reg;

                    // if (read_addr_next[ADDR_WIDTH-1:ADDR_WIDTH-2] == 2'b00) begin
                    //     s_axi_rdata_next <= io_inputA[read_addr_next[3:0]];
                    // end
                    // else if (read_addr_next[ADDR_WIDTH-1:ADDR_WIDTH-2] == 2'b01) begin
                    //     s_axi_rdata_next <= io_inputB[read_addr_next[3:0]];
                    // end
                    // else begin
                    //     s_axi_rdata_next <= io_propagateB[read_addr_next[3:0]];
                    // end


                    s_axi_rdata_next = io_outputC[read_addr_next[3:0]];
					$display("Read : %d", s_axi_rdata_next);

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
        if (rst) begin
            read_state_reg <= READ_STATE_IDLE;
            s_axi_arready_reg <= 1'b0;
            s_axi_rvalid_reg <= 1'b0;
            s_axi_rvalid_pipe_reg <= 1'b0;
        end else begin
            read_state_reg <= read_state_next;
            s_axi_arready_reg <= s_axi_arready_next;
            s_axi_rvalid_reg <= s_axi_rvalid_next;

            if (!s_axi_rvalid_pipe_reg || s_axi_rready) begin
                s_axi_rvalid_pipe_reg <= s_axi_rvalid_reg;
            end
        end

        read_id_reg <= read_id_next;
        read_addr_reg <= read_addr_next;
        read_count_reg <= read_count_next;
        read_size_reg <= read_size_next;
        read_burst_reg <= read_burst_next;

        s_axi_rid_reg <= s_axi_rid_next;
        s_axi_rlast_reg <= s_axi_rlast_next;

        // if (mem_rd_en) begin
        //     s_axi_rdata_reg <= mem[read_addr_valid];
        // end

        if (!s_axi_rvalid_pipe_reg || s_axi_rready) begin
            s_axi_rid_pipe_reg <= s_axi_rid_reg;
            s_axi_rdata_pipe_reg <= s_axi_rdata_reg;
            s_axi_rlast_pipe_reg <= s_axi_rlast_reg;
        end
    end


    dimension_aligned_ws_sta_16x16x1x4x1 uut (
        .clock(clk),
        .reset(rst),
        // Connect io_inputA
        .io_inputA_0(io_inputA[0]),
        .io_inputA_1(io_inputA[1]),
        .io_inputA_2(io_inputA[2]),
        .io_inputA_3(io_inputA[3]),
        .io_inputA_4(io_inputA[4]),
        .io_inputA_5(io_inputA[5]),
        .io_inputA_6(io_inputA[6]),
        .io_inputA_7(io_inputA[7]),
        .io_inputA_8(io_inputA[8]),
        .io_inputA_9(io_inputA[9]),
        .io_inputA_10(io_inputA[10]),
        .io_inputA_11(io_inputA[11]),
        .io_inputA_12(io_inputA[12]),
        .io_inputA_13(io_inputA[13]),
        .io_inputA_14(io_inputA[14]),
        .io_inputA_15(io_inputA[15]),
        // Connect io_inputB
        .io_inputB_0(io_inputB[0]),
        .io_inputB_1(io_inputB[1]),
        .io_inputB_2(io_inputB[2]),
        .io_inputB_3(io_inputB[3]),
        .io_inputB_4(io_inputB[4]),
        .io_inputB_5(io_inputB[5]),
        .io_inputB_6(io_inputB[6]),
        .io_inputB_7(io_inputB[7]),
        .io_inputB_8(io_inputB[8]),
        .io_inputB_9(io_inputB[9]),
        .io_inputB_10(io_inputB[10]),
        .io_inputB_11(io_inputB[11]),
        .io_inputB_12(io_inputB[12]),
        .io_inputB_13(io_inputB[13]),
        .io_inputB_14(io_inputB[14]),
        .io_inputB_15(io_inputB[15]),
        .io_inputB_16(io_inputB[16]),
        .io_inputB_17(io_inputB[17]),
        .io_inputB_18(io_inputB[18]),
        .io_inputB_19(io_inputB[19]),
        .io_inputB_20(io_inputB[20]),
        .io_inputB_21(io_inputB[21]),
        .io_inputB_22(io_inputB[22]),
        .io_inputB_23(io_inputB[23]),
        .io_inputB_24(io_inputB[24]),
        .io_inputB_25(io_inputB[25]),
        .io_inputB_26(io_inputB[26]),
        .io_inputB_27(io_inputB[27]),
        .io_inputB_28(io_inputB[28]),
        .io_inputB_29(io_inputB[29]),
        .io_inputB_30(io_inputB[30]),
        .io_inputB_31(io_inputB[31]),
        .io_inputB_32(io_inputB[32]),
        .io_inputB_33(io_inputB[33]),
        .io_inputB_34(io_inputB[34]),
        .io_inputB_35(io_inputB[35]),
        .io_inputB_36(io_inputB[36]),
        .io_inputB_37(io_inputB[37]),
        .io_inputB_38(io_inputB[38]),
        .io_inputB_39(io_inputB[39]),
        .io_inputB_40(io_inputB[40]),
        .io_inputB_41(io_inputB[41]),
        .io_inputB_42(io_inputB[42]),
        .io_inputB_43(io_inputB[43]),
        .io_inputB_44(io_inputB[44]),
        .io_inputB_45(io_inputB[45]),
        .io_inputB_46(io_inputB[46]),
        .io_inputB_47(io_inputB[47]),
        .io_inputB_48(io_inputB[48]),
        .io_inputB_49(io_inputB[49]),
        .io_inputB_50(io_inputB[50]),
        .io_inputB_51(io_inputB[51]),
        .io_inputB_52(io_inputB[52]),
        .io_inputB_53(io_inputB[53]),
        .io_inputB_54(io_inputB[54]),
        .io_inputB_55(io_inputB[55]),
        .io_inputB_56(io_inputB[56]),
        .io_inputB_57(io_inputB[57]),
        .io_inputB_58(io_inputB[58]),
        .io_inputB_59(io_inputB[59]),
        .io_inputB_60(io_inputB[60]),
        .io_inputB_61(io_inputB[61]),
        .io_inputB_62(io_inputB[62]),
        .io_inputB_63(io_inputB[63]),
        // Connect io_propagateB
        .io_propagateB_0(io_propagateB[0]),
        .io_propagateB_1(io_propagateB[1]),
        .io_propagateB_2(io_propagateB[2]),
        .io_propagateB_3(io_propagateB[3]),
        .io_propagateB_4(io_propagateB[4]),
        .io_propagateB_5(io_propagateB[5]),
        .io_propagateB_6(io_propagateB[6]),
        .io_propagateB_7(io_propagateB[7]),
        .io_propagateB_8(io_propagateB[8]),
        .io_propagateB_9(io_propagateB[9]),
        .io_propagateB_10(io_propagateB[10]),
        .io_propagateB_11(io_propagateB[11]),
        .io_propagateB_12(io_propagateB[12]),
        .io_propagateB_13(io_propagateB[13]),
        .io_propagateB_14(io_propagateB[14]),
        .io_propagateB_15(io_propagateB[15]),
        // Connect io_outputC
        .io_outputC_0(io_outputC[0]),
        .io_outputC_1(io_outputC[1]),
        .io_outputC_2(io_outputC[2]),
        .io_outputC_3(io_outputC[3]),
        .io_outputC_4(io_outputC[4]),
        .io_outputC_5(io_outputC[5]),
        .io_outputC_6(io_outputC[6]),
        .io_outputC_7(io_outputC[7]),
        .io_outputC_8(io_outputC[8]),
        .io_outputC_9(io_outputC[9]),
        .io_outputC_10(io_outputC[10]),
        .io_outputC_11(io_outputC[11]),
        .io_outputC_12(io_outputC[12]),
        .io_outputC_13(io_outputC[13]),
        .io_outputC_14(io_outputC[14]),
        .io_outputC_15(io_outputC[15]),
        .io_outputC_16(io_outputC[16]),
        .io_outputC_17(io_outputC[17]),
        .io_outputC_18(io_outputC[18]),
        .io_outputC_19(io_outputC[19]),
        .io_outputC_20(io_outputC[20]),
        .io_outputC_21(io_outputC[21]),
        .io_outputC_22(io_outputC[22]),
        .io_outputC_23(io_outputC[23]),
        .io_outputC_24(io_outputC[24]),
        .io_outputC_25(io_outputC[25]),
        .io_outputC_26(io_outputC[26]),
        .io_outputC_27(io_outputC[27]),
        .io_outputC_28(io_outputC[28]),
        .io_outputC_29(io_outputC[29]),
        .io_outputC_30(io_outputC[30]),
        .io_outputC_31(io_outputC[31]),
        .io_outputC_32(io_outputC[32]),
        .io_outputC_33(io_outputC[33]),
        .io_outputC_34(io_outputC[34]),
        .io_outputC_35(io_outputC[35]),
        .io_outputC_36(io_outputC[36]),
        .io_outputC_37(io_outputC[37]),
        .io_outputC_38(io_outputC[38]),
        .io_outputC_39(io_outputC[39]),
        .io_outputC_40(io_outputC[40]),
        .io_outputC_41(io_outputC[41]),
        .io_outputC_42(io_outputC[42]),
        .io_outputC_43(io_outputC[43]),
        .io_outputC_44(io_outputC[44]),
        .io_outputC_45(io_outputC[45]),
        .io_outputC_46(io_outputC[46]),
        .io_outputC_47(io_outputC[47]),
        .io_outputC_48(io_outputC[48]),
        .io_outputC_49(io_outputC[49]),
        .io_outputC_50(io_outputC[50]),
        .io_outputC_51(io_outputC[51]),
        .io_outputC_52(io_outputC[52]),
        .io_outputC_53(io_outputC[53]),
        .io_outputC_54(io_outputC[54]),
        .io_outputC_55(io_outputC[55]),
        .io_outputC_56(io_outputC[56]),
        .io_outputC_57(io_outputC[57]),
        .io_outputC_58(io_outputC[58]),
        .io_outputC_59(io_outputC[59]),
        .io_outputC_60(io_outputC[60]),
        .io_outputC_61(io_outputC[61]),
        .io_outputC_62(io_outputC[62]),
        .io_outputC_63(io_outputC[63])
    );


endmodule
