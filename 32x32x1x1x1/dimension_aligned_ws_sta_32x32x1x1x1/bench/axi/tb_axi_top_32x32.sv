`timescale 1ns / 1ps

module tb_axi_top_32x32;

    // Parameters
    parameter DATA_WIDTH = 32;
    parameter ADDR_WIDTH = 20;
    parameter STRB_WIDTH = DATA_WIDTH / 8;
    parameter ID_WIDTH = 8;
    parameter PIPELINE_OUTPUT = 0;

    // Clock and reset
    reg clk;
    reg rst;

    // AXI4 signals
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

    // Instantiate the DUT
    axi_top_32x32 #(
        .DATA_WIDTH(DATA_WIDTH),
        .ADDR_WIDTH(ADDR_WIDTH),
        .STRB_WIDTH(STRB_WIDTH),
        .ID_WIDTH(ID_WIDTH),
        .PIPELINE_OUTPUT(PIPELINE_OUTPUT)
    ) dut (
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

    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;  // 100 MHz clock
    end

    // Reset generation
    initial begin
        rst = 1;
        #20 rst = 0;  // Release reset after 20 ns
    end

    // Testbench logic
    initial begin
        // Initialize signals
        s_axi_awid = 0;
        s_axi_awaddr = 0;
        s_axi_awlen = 0;
        s_axi_awsize = 3'b010;  // 4-byte transfer
        s_axi_awburst = 2'b01; // INCR mode
        s_axi_awlock = 0;
        s_axi_awcache = 4'b0011;
        s_axi_awprot = 3'b000;
        s_axi_awvalid = 0;

        s_axi_wdata = 0;
        s_axi_wstrb = {STRB_WIDTH{1'b1}}; // All bytes enabled
        s_axi_wlast = 0;
        s_axi_wvalid = 0;

        s_axi_bready = 0;

        s_axi_arid = 0;
        s_axi_araddr = 0;
        s_axi_arlen = 0;
        s_axi_arsize = 3'b010;  // 4-byte transfer
        s_axi_arburst = 2'b01; // INCR mode
        s_axi_arlock = 0;
        s_axi_arcache = 4'b0011;
        s_axi_arprot = 3'b000;
        s_axi_arvalid = 0;

        s_axi_rready = 0;

        // Wait for reset to be deasserted
        @(negedge rst);

        // Write transaction
        $display("Starting write transaction...");
        s_axi_awid = 8'h1;                // ID for write transaction
        s_axi_awaddr = 20'h00010;         // Target address
        s_axi_awlen = 8'h00;              // Single transfer
        s_axi_awvalid = 1;

        @(posedge clk);
        while (!s_axi_awready) @(posedge clk);
        s_axi_awvalid = 0;

        s_axi_wdata = 32'hDEADBEEF;       // Data to write
        s_axi_wlast = 1;
        s_axi_wvalid = 1;

        @(posedge clk);
        while (!s_axi_wready) @(posedge clk);
        s_axi_wvalid = 0;

        s_axi_bready = 1;                 // Ready to accept write response
        @(posedge clk);
        while (!s_axi_bvalid) @(posedge clk);
        $display("Write transaction complete. Response: %b", s_axi_bresp);
        s_axi_bready = 0;

        // Read transaction
        $display("Starting read transaction...");
        s_axi_arid = 8'h2;                // ID for read transaction
        s_axi_araddr = 20'h00010;         // Target address
        s_axi_arlen = 8'h00;              // Single transfer
        s_axi_arvalid = 1;

        @(posedge clk);
        while (!s_axi_arready) @(posedge clk);
        s_axi_arvalid = 0;

        s_axi_rready = 1;                 // Ready to accept read data
        @(posedge clk);
        while (!s_axi_rvalid) @(posedge clk);
        $display("Read transaction complete. Data: %h, Response: %b", s_axi_rdata, s_axi_rresp);
        s_axi_rready = 0;

        $finish;
    end

  initial begin
    $dumpfile("dimension_aligned_ws_sta_32x32x1x1x1_axi.vcd");
    $dumpvars(0, tb_axi_top_32x32);
  end


endmodule
