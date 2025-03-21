/*

Original file: https://github.com/alexforencich/verilog-axi/blob/master/rtl/axi_ram.v

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
 * AXI4 RAM
 */
module axi_sa_32x32 #
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
    input  wire                   clock,
    input  wire                   reset,

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

    reg [0:0] read_state = READ_STATE_IDLE, read_state_next;

    localparam [1:0]
        WRITE_STATE_IDLE = 2'd0,
        WRITE_STATE_BURST = 2'd1,
        WRITE_STATE_RESP = 2'd2;

    reg [1:0] write_state = WRITE_STATE_IDLE, write_state_next;

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

    // (* RAM_STYLE="BLOCK" *)
    reg [DATA_WIDTH-1:0] data_mem[(2**VALID_ADDR_WIDTH):0];   // read, write Memory
    reg [DATA_WIDTH-1:0] output_mem[(2**VALID_ADDR_WIDTH)-1:0];   // systolic array 

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

    initial begin
        // two nested loops for smaller number of iterations per loop
        // workaround for synthesizer complaints about large loop counts
        data_mem[0] = current_state; // Store current_state at the 0th location
        for (i = 1; i < 2**VALID_ADDR_WIDTH; i = i + 2**(VALID_ADDR_WIDTH/2)) begin
            for (j = i; j < i + 2**(VALID_ADDR_WIDTH/2); j = j + 1) begin
                data_mem[j] = 0;
            end
        end
        for (i = 0; i < 2**VALID_ADDR_WIDTH; i = i + 2**(VALID_ADDR_WIDTH/2)) begin
            for (j = i; j < i + 2**(VALID_ADDR_WIDTH/2); j = j + 1) begin
                output_mem[j] = 0;
            end
        end
    end

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

        case (write_state)
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

    always @(posedge clock) begin
        if (reset) begin
            write_state <= WRITE_STATE_IDLE;
            s_axi_awready_reg <= 1'b0;
            s_axi_wready_reg <= 1'b0;
            s_axi_bvalid_reg <= 1'b0;
        end else begin
            write_state <= write_state_next;
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

        for (i = 0; i < WORD_WIDTH; i = i + 1) begin
            if (mem_wr_en & s_axi_wstrb[i]) begin
                data_mem[write_addr_valid + 1][WORD_SIZE*i +: WORD_SIZE] <= s_axi_wdata[WORD_SIZE*i +: WORD_SIZE];
            end
        end
        data_mem[0] <= current_state; // Initialize the additional memory location
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

        case (read_state)
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

    always @(posedge clock) begin
        if (reset) begin
            read_state <= READ_STATE_IDLE;
            s_axi_arready_reg <= 1'b0;
            s_axi_rvalid_reg <= 1'b0;
            s_axi_rvalid_pipe_reg <= 1'b0;
        end else begin
            read_state <= read_state_next;
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

        if (mem_rd_en) begin
            s_axi_rdata_reg <= data_mem[read_addr_valid];
        end

        if (!s_axi_rvalid_pipe_reg || s_axi_rready) begin
            s_axi_rid_pipe_reg <= s_axi_rid_reg;
            s_axi_rdata_pipe_reg <= s_axi_rdata_reg;
            s_axi_rlast_pipe_reg <= s_axi_rlast_reg;
        end
    end

    // ===========================================================================================================
    /* TODO */
    // systolic array parameter
    parameter NUM_INPUTA = 32; 
    parameter NUM_INPUTB = 32;
    parameter NUM_OUTPUTC = 32;
    
    reg [31:0] counter;
    reg [19:0] prev_outputC [0:NUM_OUTPUTC-1]; // Define prev_outputC
    always@(posedge clock or posedge reset) begin
        if (reset) begin
            counter <= 0;
        end else begin
            counter <= counter + 1;
        end
    end

    // systolic array register
    reg [7:0] inputA [0:NUM_INPUTA-1];
    reg [7:0] inputB [0:NUM_INPUTB-1];
    reg propagateB [0:31];
    wire [20:0] outputC [0:NUM_OUTPUTC-1];

    // Processing registers
    reg processing_start;
    reg stable_outputC_result;
    
    reg [DATA_WIDTH-1:0] proc_mem [0:99]; // Limited to 100 entries
    reg [7:0] proc_write_index;

    parameter [2:0] IDLE = 3'b000, COMPUTING = 3'b001, STORE = 3'b010, OUTPUT = 3'b011;

    reg [2:0] current_state = IDLE, state_next = IDLE;

    always @(posedge clock or posedge reset) begin
        if (reset) begin
            current_state <= IDLE;
        end else begin
            current_state <= state_next;
        end
    end

    always @(current_state, s_axi_wvalid, stable_outputC_result) begin
        state_next = current_state; 
        case (current_state)
            IDLE: begin     // 0
                if (s_axi_wvalid) begin
                    state_next = COMPUTING;
                end
            end
            COMPUTING: begin    // 1
                if (final_time > 0) begin
                    state_next = STORE;
                end
            end
            STORE: begin    // 2
                if (stable_outputC_result) begin
                    state_next = OUTPUT;
                end
            end
            OUTPUT: begin   // 3
                state_next = IDLE;
            end
            default: begin
                state_next = IDLE;
            end
        endcase
    end
    
    reg processing_active;

    always @(posedge clock or posedge reset) begin
        if (reset) begin
            processing_start <= 1'b0;
            processing_active <= 1'b0;
        end else if (s_axi_wlast && !processing_active) begin
            processing_start <= 1'b1;
            processing_active <= 1'b1; 
        end else begin
            processing_start <= 1'b0;
        end
    end

    reg [7:0] output_counter; 

    reg prev_wvalid;  

    always @(posedge clock or posedge reset) begin
        if (reset) begin
            proc_write_index <= 0;
            prev_wvalid <= 0;
            for (i = 0; i < 100; i = i + 1) begin
                proc_mem[i] = 0;
            end
        end else if (s_axi_wvalid && !prev_wvalid) begin 
            if (proc_write_index < (NUM_INPUTA + NUM_INPUTB)) begin
                proc_mem[proc_write_index] <= s_axi_wdata;  
                proc_write_index <= proc_write_index + 1;
            end
        end
        prev_wvalid <= s_axi_wvalid;  
    end
    
    always @* begin
        for (i = 0; i < NUM_INPUTA; i = i + 1) begin
            inputA[i] = proc_mem[i][7:0];
        end
        for (i = 0; i < NUM_INPUTB; i = i + 1) begin
            inputB[i] = proc_mem[NUM_INPUTA + i][7:0];
        end
        for (i = 0; i < 32; i = i + 1) begin
            propagateB[i] = 1;
        end
    end

    always @(posedge clock or posedge reset) begin
        if (reset) begin
            for (i = 0; i < NUM_OUTPUTC; i = i + 1) begin
                output_mem[i] <= 0;
            end
        end else if (current_state == STORE) begin
            for (i = 0; i < NUM_OUTPUTC; i = i + 1) begin
                output_mem[i] <= outputC[i];
            end            
        end
    end

    reg [31:0] start_time;
    reg [31:0] end_time;
    reg [31:0] final_time;
    reg input_detected;
    reg output_detected;
    reg final_output_detected;
    reg [5:0] stable_count; 

    reg [5:0] stable_cycles;  

    always @(posedge clock or posedge reset) begin
        if (reset) begin
            start_time = 0;
            end_time = 0;
            final_time = 0;

            input_detected <= 1'b0;
            output_detected <= 1'b0;
            final_output_detected <= 1'b0;
            stable_count = 0;
            stable_cycles = 0;  
            stable_outputC_result <= 1'b0;  

            for (int i = 0; i < NUM_OUTPUTC; i = i + 1) begin
                prev_outputC[i] <= 0;
            end
        end else begin
            if (!input_detected && inputA[0] != 0) begin
                start_time = counter;
                input_detected <= 1'b1;
                $display("\n[TIME] Input detected at clock %d", counter);
            end

            if (!output_detected && outputC[0] != 0) begin
                end_time = counter;
                output_detected <= 1'b1;
                // $display("[TIME] OutputC_0 detected at clock %d", counter);
                // $display("[TIME] Computation time until first output: %d clocks", 
                //         (end_time > start_time) ? (end_time - start_time) : 0); 
                // $display("\n");
            end

            if (output_detected && !final_output_detected) begin
                stable_count = 0;
                for (int i = 0; i < NUM_OUTPUTC; i = i + 1) begin
                    if (outputC[i] == prev_outputC[i]) begin
                        stable_count = stable_count + 1;
                    end
                    prev_outputC[i] = outputC[i];  
                end

                if (stable_count == NUM_OUTPUTC) begin
                    stable_cycles = stable_cycles + 1;
                end 
                else begin
                    stable_cycles = 0;  
                end

                if (stable_cycles >= 5) begin
                    final_time = counter;
                    final_output_detected <= 1'b1;
                    stable_outputC_result <= 1'b1; 

                    $display("[TIME] All outputs stabilized at clock: %d clocks", counter);
                    // $display("[TIME] Output computation and stabilization time: %d clocks", 
                    //         (final_time > end_time) ? (final_time - end_time) : 0); 
                    $display("[TIME] Total computation and stabilization time: %d clocks", 
                            (final_time > start_time) ? (final_time - start_time) : 0);
                    // $display("\n");
                end
            end
        end
    end

    always @(posedge clock) begin
        if (current_state == OUTPUT) begin
            $display("\nComputation Complete. OutputC Values:");
            for (i = 0; i < NUM_OUTPUTC; i = i + 8) begin
                if (i + 7 < NUM_OUTPUTC) begin
                    $display("%08X %08X %08X %08X %08X %08X %08X %08X", 
                        output_mem[i], output_mem[i+1], output_mem[i+2], output_mem[i+3], 
                        output_mem[i+4], output_mem[i+5], output_mem[i+6], output_mem[i+7]); 
                end else begin
                    case (NUM_OUTPUTC - i)
                        1: $display("%08X", output_mem[i]);
                        2: $display("%08X %08X", output_mem[i], output_mem[i+1]);
                        3: $display("%08X %08X %08X", output_mem[i], output_mem[i+1], output_mem[i+2]);
                        4: $display("%08X %08X %08X %08X", output_mem[i], output_mem[i+1], output_mem[i+2], output_mem[i+3]);
                        5: $display("%08X %08X %08X %08X %08X", output_mem[i], output_mem[i+1], output_mem[i+2], output_mem[i+3], output_mem[i+4]);
                        6: $display("%08X %08X %08X %08X %08X %08X", output_mem[i], output_mem[i+1], output_mem[i+2], output_mem[i+3], output_mem[i+4], output_mem[i+5]);
                        7: $display("%08X %08X %08X %08X %08X %08X %08X", output_mem[i], output_mem[i+1], output_mem[i+2], output_mem[i+3], output_mem[i+4], output_mem[i+5], output_mem[i+6]);
                    endcase
                end
            end
            // $display("\n");
        end
    end

    reg [2:0] prev_state = IDLE;

    always @(posedge clock or posedge reset) begin
        if (reset) begin
            prev_state <= IDLE; 
        end else if (current_state != prev_state) begin
            $display("==========================================================================");
            $display("[State Change] %0d -> %0d", prev_state, current_state);
            prev_state <= current_state; 
        end
    end

    ws_sta_32x32x1x1x1 uut (
        .clock(clock),
        .reset(reset),
        // Connect inputA
        .io_inputA_0(inputA[0]),   .io_inputA_1(inputA[1]),   .io_inputA_2(inputA[2]),   .io_inputA_3(inputA[3]),
        .io_inputA_4(inputA[4]),   .io_inputA_5(inputA[5]),   .io_inputA_6(inputA[6]),   .io_inputA_7(inputA[7]),
        .io_inputA_8(inputA[8]),   .io_inputA_9(inputA[9]),   .io_inputA_10(inputA[10]), .io_inputA_11(inputA[11]),
        .io_inputA_12(inputA[12]), .io_inputA_13(inputA[13]), .io_inputA_14(inputA[14]), .io_inputA_15(inputA[15]),
        .io_inputA_16(inputA[16]), .io_inputA_17(inputA[17]), .io_inputA_18(inputA[18]), .io_inputA_19(inputA[19]),
        .io_inputA_20(inputA[20]), .io_inputA_21(inputA[21]), .io_inputA_22(inputA[22]), .io_inputA_23(inputA[23]),
        .io_inputA_24(inputA[24]), .io_inputA_25(inputA[25]), .io_inputA_26(inputA[26]), .io_inputA_27(inputA[27]),
        .io_inputA_28(inputA[28]), .io_inputA_29(inputA[29]), .io_inputA_30(inputA[30]), .io_inputA_31(inputA[31]),

        // Connect inputB
        .io_inputB_0(inputB[0]),   .io_inputB_1(inputB[1]),   .io_inputB_2(inputB[2]),   .io_inputB_3(inputB[3]),
        .io_inputB_4(inputB[4]),   .io_inputB_5(inputB[5]),   .io_inputB_6(inputB[6]),   .io_inputB_7(inputB[7]),
        .io_inputB_8(inputB[8]),   .io_inputB_9(inputB[9]),   .io_inputB_10(inputB[10]), .io_inputB_11(inputB[11]),
        .io_inputB_12(inputB[12]), .io_inputB_13(inputB[13]), .io_inputB_14(inputB[14]), .io_inputB_15(inputB[15]),
        .io_inputB_16(inputB[16]), .io_inputB_17(inputB[17]), .io_inputB_18(inputB[18]), .io_inputB_19(inputB[19]),
        .io_inputB_20(inputB[20]), .io_inputB_21(inputB[21]), .io_inputB_22(inputB[22]), .io_inputB_23(inputB[23]),
        .io_inputB_24(inputB[24]), .io_inputB_25(inputB[25]), .io_inputB_26(inputB[26]), .io_inputB_27(inputB[27]),
        .io_inputB_28(inputB[28]), .io_inputB_29(inputB[29]), .io_inputB_30(inputB[30]), .io_inputB_31(inputB[31]),

        // Connect propagateB
        .io_propagateB_0(propagateB[0]),   .io_propagateB_1(propagateB[1]),   .io_propagateB_2(propagateB[2]),    .io_propagateB_3(propagateB[3]),   
        .io_propagateB_4(propagateB[4]),   .io_propagateB_5(propagateB[5]),   .io_propagateB_6(propagateB[6]),    .io_propagateB_7(propagateB[7]),   
        .io_propagateB_8(propagateB[8]),   .io_propagateB_9(propagateB[9]),   .io_propagateB_10(propagateB[10]),  .io_propagateB_11(propagateB[11]),
        .io_propagateB_12(propagateB[12]), .io_propagateB_13(propagateB[13]), .io_propagateB_14(propagateB[14]),  .io_propagateB_15(propagateB[15]), 
        .io_propagateB_16(propagateB[16]), .io_propagateB_17(propagateB[17]), .io_propagateB_18(propagateB[18]),  .io_propagateB_19(propagateB[19]),  
        .io_propagateB_20(propagateB[20]), .io_propagateB_21(propagateB[21]), .io_propagateB_22(propagateB[22]),  .io_propagateB_23(propagateB[23]),
        .io_propagateB_24(propagateB[24]), .io_propagateB_25(propagateB[25]), .io_propagateB_26(propagateB[26]),  .io_propagateB_27(propagateB[27]), 
        .io_propagateB_28(propagateB[28]), .io_propagateB_29(propagateB[29]), .io_propagateB_30(propagateB[30]),  .io_propagateB_31(propagateB[31]),

        // Connect outputC
        .io_outputC_0(outputC[0]),   .io_outputC_1(outputC[1]),   .io_outputC_2(outputC[2]),   .io_outputC_3(outputC[3]),
        .io_outputC_4(outputC[4]),   .io_outputC_5(outputC[5]),   .io_outputC_6(outputC[6]),   .io_outputC_7(outputC[7]),
        .io_outputC_8(outputC[8]),   .io_outputC_9(outputC[9]),   .io_outputC_10(outputC[10]), .io_outputC_11(outputC[11]),
        .io_outputC_12(outputC[12]), .io_outputC_13(outputC[13]), .io_outputC_14(outputC[14]), .io_outputC_15(outputC[15]),
        .io_outputC_16(outputC[16]), .io_outputC_17(outputC[17]), .io_outputC_18(outputC[18]), .io_outputC_19(outputC[19]),
        .io_outputC_20(outputC[20]), .io_outputC_21(outputC[21]), .io_outputC_22(outputC[22]), .io_outputC_23(outputC[23]),
        .io_outputC_24(outputC[24]), .io_outputC_25(outputC[25]), .io_outputC_26(outputC[26]), .io_outputC_27(outputC[27]),
        .io_outputC_28(outputC[28]), .io_outputC_29(outputC[29]), .io_outputC_30(outputC[30]), .io_outputC_31(outputC[31])
    );

endmodule
