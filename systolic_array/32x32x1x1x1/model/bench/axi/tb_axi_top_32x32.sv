`timescale 1ns / 1ps

module tb_axi_top_16x16;

    parameter DATA_WIDTH = 32;
    parameter ADDR_WIDTH = 16;
    parameter STRB_WIDTH = (DATA_WIDTH / 8);
    parameter ID_WIDTH = 8;
    // ---------------------------------------------------------------------
    parameter VALID_ADDR_WIDTH = ADDR_WIDTH - $clog2(STRB_WIDTH);
    // ---------------------------------------------------------------------

    reg clock;
    reg reset;

    reg [ID_WIDTH-1:0] s_axi_awid;
    reg [ADDR_WIDTH-1:0] s_axi_awaddr;
    reg [7:0] s_axi_awlen;
    reg [2:0] s_axi_awsize;
    reg [1:0] s_axi_awburst;
    reg s_axi_awlock;
    reg [3:0] s_axi_awcache;
    reg [2:0] s_axi_awprot;
    reg s_axi_awvalid;
    wire s_axi_awready;

    reg [DATA_WIDTH-1:0] s_axi_wdata;
    reg [STRB_WIDTH-1:0] s_axi_wstrb;
    reg s_axi_wlast;
    reg s_axi_wvalid;
    wire s_axi_wready;

    wire [ID_WIDTH-1:0] s_axi_bid;
    wire [1:0] s_axi_bresp;
    wire s_axi_bvalid;
    reg s_axi_bready;

    reg [ID_WIDTH-1:0] s_axi_arid;
    reg [ADDR_WIDTH-1:0] s_axi_araddr;
    reg [7:0] s_axi_arlen;
    reg [2:0] s_axi_arsize;
    reg [1:0] s_axi_arburst;
    reg s_axi_arlock;
    reg [3:0] s_axi_arcache;
    reg [2:0] s_axi_arprot;
    reg s_axi_arvalid;
    wire s_axi_arready;

    wire [ID_WIDTH-1:0] s_axi_rid;
    wire [DATA_WIDTH-1:0] s_axi_rdata;
    wire [1:0] s_axi_rresp;
    wire s_axi_rlast;
    wire s_axi_rvalid;
    reg s_axi_rready;

    axi_top_32x32 #(
        .DATA_WIDTH(DATA_WIDTH),
        .ADDR_WIDTH(ADDR_WIDTH),
        .STRB_WIDTH(STRB_WIDTH),
        .ID_WIDTH(ID_WIDTH)
    ) uut (
        .clock(clock),
        .reset(reset),
        .s_axi_awid(s_axi_awid),
        .s_axi_awaddr(s_axi_awaddr),
        .s_axi_awlen(s_axi_awlen),
        .s_axi_awsize(s_axi_awsize),
        .s_axi_awburst(s_axi_awburst),
        .s_axi_awlock(s_axi_awlock),
        .s_axi_awcache(s_axi_awcache),
        .s_axi_awprot(s_axi_awprot),
        .s_axi_awvalid(s_axi_awvalid),
        .s_axi_awready(s_axi_awready),
        .s_axi_wdata(s_axi_wdata),
        .s_axi_wstrb(s_axi_wstrb),
        .s_axi_wlast(s_axi_wlast),
        .s_axi_wvalid(s_axi_wvalid),
        .s_axi_wready(s_axi_wready),
        .s_axi_bid(s_axi_bid),
        .s_axi_bresp(s_axi_bresp),
        .s_axi_bvalid(s_axi_bvalid),
        .s_axi_bready(s_axi_bready),
        .s_axi_arid(s_axi_arid),
        .s_axi_araddr(s_axi_araddr),
        .s_axi_arlen(s_axi_arlen),
        .s_axi_arsize(s_axi_arsize),
        .s_axi_arburst(s_axi_arburst),
        .s_axi_arlock(s_axi_arlock),
        .s_axi_arcache(s_axi_arcache),
        .s_axi_arprot(s_axi_arprot),
        .s_axi_arvalid(s_axi_arvalid),
        .s_axi_arready(s_axi_arready),
        .s_axi_rid(s_axi_rid),
        .s_axi_rdata(s_axi_rdata),
        .s_axi_rresp(s_axi_rresp),
        .s_axi_rlast(s_axi_rlast),
        .s_axi_rvalid(s_axi_rvalid),
        .s_axi_rready(s_axi_rready)
    );
    
    reg [ADDR_WIDTH-1:0] address;
    reg [DATA_WIDTH-1:0] write_data;
	integer i, k;

    initial clock = 0;
    // always #0.5 clock = ~clock;
    always #5 clock = ~clock;

	integer input_valid = 0;
	integer cycle_count = 0;
	always @(posedge clock) begin
		cycle_count = cycle_count + 1;
	end

    task reset_cpu;
        begin
            @(negedge clock);
            reset = 1;
            @(negedge clock);
            reset = 0;
            @(negedge clock);
        end
    endtask

    initial begin
        reset = 1;
        s_axi_awid = 0;
        s_axi_awaddr = 0;
        s_axi_awlen = 0;
        s_axi_awsize = 0;
        s_axi_awburst = 0;
        s_axi_awvalid = 0;
        s_axi_wdata = 0;
        s_axi_wstrb = 0;
        s_axi_wlast = 0;
        s_axi_wvalid = 0;
        s_axi_bready = 0;
        s_axi_arid = 0;
        s_axi_araddr = 0;
        s_axi_arlen = 0;
        s_axi_arsize = 0;
        s_axi_arburst = 0;
        s_axi_arvalid = 0;
        s_axi_rready = 0;

        // $display("Starting Systolic Array AXI Testbench...\n");
        reset_cpu();

		// $display("\n ==========================================================================");
		// $display("[TEST] WRITE TEST") ;
		input_valid = 1;
        // for (i = 0; i < 80; i++) begin
        for (i = 0; i < 64; i++) begin
            // address = $urandom & ((1 << ADDR_WIDTH) - 1);
            address = i * 4;
            write_data = i + 1 + 65536;
            // write_data = $urandom;

            // $display("-------------------------------------------------------------------");
            // $display("[%t] Starting test case with Random Address: 0x%04X, Random Data: 0x%08X", $time, address, write_data);

            write_task(i, address, write_data); 
            @(posedge clock);
        end
        
		// $display("\n ==========================================================================");
        // $display("[TEST] READ TEST");
        // for (i = 0; i < 80; i++) begin
        for (i = 0; i < 64; i++) begin
            // address = $urandom & ((1 << ADDR_WIDTH) - 1);
			address = i * 4;
            read_task(i, address); 
			@(posedge clock);
        end
		
        // $display("-------------------------------------------------------------------\n");

        // $display("=============================================================================================");
        // $display("Non-zero data_mem contents:");
        // for (k = 0; k < (2**VALID_ADDR_WIDTH); k = k + 1) begin
        //     if (uut.data_mem[k] != 0) begin
        //         $display("data_mem[%04X] = 0x%08X", k, uut.data_mem[k]);
        //     end
        // end
        // $display("=============================================================================================");

        // $display("=============================================================================================");
        // $display("Non-zero output_mem contents:");
        // for (k = 0; k < (2**VALID_ADDR_WIDTH); k = k + 1) begin
        //     if (uut.output_mem[k] != 0) begin
        //         $display("output_mem[%04X] = 0x%08X", k, uut.output_mem[k]);
        //     end
        // end
        // $display("=============================================================================================");

        $finish;
    end

	initial begin
		#10000000;
		$display("[INFO] Total clock cycles: %d", cycle_count);
		$finish;
	end

    // Task for write operation
    task write_task(input [ID_WIDTH-1:0] id, input [ADDR_WIDTH-1:0] addr, input [DATA_WIDTH-1:0] data);
        begin
			// $display("1");
            @(posedge clock);
            s_axi_awid = id;
            s_axi_awaddr = addr;
            s_axi_awlen = 8'd0;
            s_axi_awsize = 3'b010;
            s_axi_awburst = 2'b01;
            s_axi_awvalid = 1;
            @(posedge clock);
            while (!s_axi_awready) @(posedge clock);
            s_axi_awvalid = 0;

            s_axi_wdata = data;
            s_axi_wstrb = {STRB_WIDTH{1'b1}};
            s_axi_wlast = 1;
            s_axi_wvalid = 1;
            @(posedge clock);
            while (!s_axi_wready) @(posedge clock);
			s_axi_awvalid = 0;
            s_axi_wvalid = 0;

            s_axi_bready = 1;
            @(posedge clock);
            while (!s_axi_bvalid) @(posedge clock);
            s_axi_bready = 0;
			s_axi_wlast = 0;

            // $display("[DEBUG] Write [%04X] = 0x%08X", addr, data);
        end
    endtask

    // Task for read operation
    task read_task(input [ID_WIDTH-1:0] id, input [ADDR_WIDTH-1:0] addr);
        begin
            @(posedge clock);
            s_axi_arid = id;
            s_axi_araddr = addr;
            s_axi_arlen = 8'd0;
            s_axi_arsize = 3'b010;
            s_axi_arburst = 2'b01;
            s_axi_arvalid = 1;
            @(posedge clock);
            while (!s_axi_arready) @(posedge clock);
            s_axi_arvalid = 0;

            s_axi_rready = 1;
            @(posedge clock);
            while (!s_axi_rvalid) @(posedge clock);
            s_axi_rready = 0;

            // $display("[DEBUG] Read [%04X] = 0x%08X", addr, s_axi_rdata);
        end
    endtask

    initial begin
        // for simulation
        $dumpfile("ws_sta_32x32x1x1x1_axi.vcd");
		$dumpvars(-1, uut);
    end

endmodule
