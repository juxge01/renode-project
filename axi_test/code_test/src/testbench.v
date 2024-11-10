`timescale 1ns / 1ps

module testbench;

    parameter DATA_WIDTH = 32;
    parameter ADDR_WIDTH = 16;
    parameter STRB_WIDTH = (DATA_WIDTH / 8);
    parameter ID_WIDTH = 8;
    parameter PWIDTH = 32;
    parameter PDEPTH = (1 << ADDR_WIDTH - $clog2(STRB_WIDTH));
    // ---------------------------------------------------------------------
    parameter VALID_ADDR_WIDTH = ADDR_WIDTH - $clog2(STRB_WIDTH);
    // ---------------------------------------------------------------------

    reg clk;
    reg rst;

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

    axi_pim #(
        .DATA_WIDTH(DATA_WIDTH),
        .ADDR_WIDTH(ADDR_WIDTH),
        .STRB_WIDTH(STRB_WIDTH),
        .ID_WIDTH(ID_WIDTH),
        .PWIDTH(PWIDTH),
        .PDEPTH(PDEPTH)
    ) uut (
        .clk(clk),
        .rst(rst),
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

    initial clk = 0;
    always #5 clk = ~clk;

    task reset_cpu;
        begin
            @(negedge clk);
            rst = 1;
            @(negedge clk);
            rst = 0;
            @(negedge clk);
        end
    endtask

    always #5 clk = ~clk;

    initial begin
        rst = 1;
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

        $display("Starting AXI PIM Testbench...\n");
        reset_cpu();

		$display("[TEST] WRITE TEST");
		for (i = 0; i < 100; i++) begin
            address = $urandom & ((1 << ADDR_WIDTH) - 1);
            write_data = $urandom;

            $display("-------------------------------------------------------------------");
            $display("[%t] Starting test case with Random Address: 0x%04X, Random Data: 0x%08X", $time, address, write_data);

            write_task(i, address, write_data); 
        end

        $display("==========================================================================");
        $display("[TEST] READ TEST");
        for (i = 0; i < 100; i++) begin
            address = $urandom & ((1 << ADDR_WIDTH) - 1);

            read_task(i, address); 
        end

        $display("==========================================================================");
        $display("[TEST] Mac TEST");
        for (i = 0; i < 10; i++) begin
            write_task(8'h80, address, write_data); 
        end
        $display("==========================================================================");

        $display("-------------------------------------------------------------------\n");

        // uut.mem1 출력
        $display("uut.mem1 contents:");
        for (k = 0; k < (2**VALID_ADDR_WIDTH); k = k + 32) begin
            $display("%08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X", 
                    uut.mem1[k], uut.mem1[k+1], uut.mem1[k+2], uut.mem1[k+3], uut.mem1[k+4], uut.mem1[k+5], uut.mem1[k+6], uut.mem1[k+7], 
                    uut.mem1[k+8], uut.mem1[k+9], uut.mem1[k+10], uut.mem1[k+11], uut.mem1[k+12], uut.mem1[k+13], uut.mem1[k+14], uut.mem1[k+15],
                    uut.mem1[k+16], uut.mem1[k+17], uut.mem1[k+18], uut.mem1[k+19], uut.mem1[k+20], uut.mem1[k+21], uut.mem1[k+22], uut.mem1[k+23],
                    uut.mem1[k+24], uut.mem1[k+25], uut.mem1[k+26], uut.mem1[k+27], uut.mem1[k+28], uut.mem1[k+29], uut.mem1[k+30], uut.mem1[k+31]);
        end

        // uut.mem2 출력
        $display("uut.mem2 contents:");
        for (k = 0; k < (2**VALID_ADDR_WIDTH); k = k + 32) begin
            $display("%08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X", 
                    uut.mem2[k], uut.mem2[k+1], uut.mem2[k+2], uut.mem2[k+3], uut.mem2[k+4], uut.mem2[k+5], uut.mem2[k+6], uut.mem2[k+7], 
                    uut.mem2[k+8], uut.mem2[k+9], uut.mem2[k+10], uut.mem2[k+11], uut.mem2[k+12], uut.mem2[k+13], uut.mem2[k+14], uut.mem2[k+15],
                    uut.mem2[k+16], uut.mem2[k+17], uut.mem2[k+18], uut.mem2[k+19], uut.mem2[k+20], uut.mem2[k+21], uut.mem2[k+22], uut.mem2[k+23],
                    uut.mem2[k+24], uut.mem2[k+25], uut.mem2[k+26], uut.mem2[k+27], uut.mem2[k+28], uut.mem2[k+29], uut.mem2[k+30], uut.mem2[k+31]);
        end

        $display("=============================================================================================");
        $display("Non-zero mem1 contents:");
        for (k = 0; k < (2**VALID_ADDR_WIDTH); k = k + 1) begin
            if (uut.mem1[k] != 0) begin
                $display("mem1[%04X] = 0x%08X", k, uut.mem1[k]);
            end
        end
        $display("=============================================================================================");

        $display("=============================================================================================");
        $display("Non-zero mem2 contents:");
        for (k = 0; k < (2**VALID_ADDR_WIDTH); k = k + 1) begin
            if (uut.mem2[k] != 0) begin
                $display("mem2[%04X] = 0x%08X", k, uut.mem2[k]);
            end
        end
        $display("=============================================================================================");

        $finish;
    end

     // Task for write operation
    task write_task(input [ID_WIDTH-1:0] id, input [ADDR_WIDTH-1:0] addr, input [DATA_WIDTH-1:0] data);
        begin
            @(posedge clk);
            s_axi_awid = id;
            s_axi_awaddr = addr;
            s_axi_awlen = 8'd0;
            s_axi_awsize = 3'b010;
            s_axi_awburst = 2'b01;
            s_axi_awvalid = 1;
            @(posedge clk);
            while (!s_axi_awready) @(posedge clk);
            s_axi_awvalid = 0;

            s_axi_wdata = data;
            s_axi_wstrb = {STRB_WIDTH{1'b1}};
            s_axi_wlast = 1;
            s_axi_wvalid = 1;
            @(posedge clk);
            while (!s_axi_wready) @(posedge clk);
            s_axi_wvalid = 0;

            s_axi_bready = 1;
            @(posedge clk);
            while (!s_axi_bvalid) @(posedge clk);
            $display("Write [%04X] = 0x%08X", addr, data);
            s_axi_bready = 0;
        end
    endtask

    // Task for read operation
    task read_task(input [ID_WIDTH-1:0] id, input [ADDR_WIDTH-1:0] addr);
        begin
            @(posedge clk);
            s_axi_arid = id;
            s_axi_araddr = addr;
            s_axi_arlen = 8'd0;
            s_axi_arsize = 3'b010;
            s_axi_arburst = 2'b01;
            s_axi_arvalid = 1;
            @(posedge clk);
            while (!s_axi_arready) @(posedge clk);
            s_axi_arvalid = 0;

            s_axi_rready = 1;
            @(posedge clk);
            while (!s_axi_rvalid) @(posedge clk);
            $display("Read [%04X] = 0x%08X", addr, s_axi_rdata);
            s_axi_rready = 0;
        end
    endtask

    initial begin
        // for simulation
        $dumpfile("test.vcd");
		$dumpvars(-1, uut);
    end

endmodule

