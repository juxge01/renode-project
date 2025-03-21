module tb_pim_model;

    parameter DWIDTH = 32;
    parameter AWIDTH = 8;
    parameter PWIDTH = 32;
    parameter PDEPTH = 256;

    reg clk;
    reg reset;

    reg [PWIDTH-1:0] d;
    reg [AWIDTH-1:0] addr;
    reg [PDEPTH-1:0] rwl;
    reg w_en;
    reg p_en;
    reg cmd_valid;
    reg rsp_ready;

    wire [PWIDTH-1:0] q;
    wire [DWIDTH-1:0] mac_out;
    wire cmd_ready;
    wire rsp_valid;

    integer i;

    reg [AWIDTH-1:0] write_addrs [0:PDEPTH-1];
    integer write_index;

    pim_model #(
        .PIM_ADDR_BEGIN(8'h00),
        .DWIDTH(DWIDTH),
        .AWIDTH(AWIDTH),
        .PWIDTH(PWIDTH),
        .PDEPTH(PDEPTH)
    ) dut (
        .q(q),
        .mac_out(mac_out),
        .d(d),
        .addr(addr),
        .rwl(rwl),
        .w_en(w_en),
        .p_en(p_en),
        .clk(clk),
        .reset(reset),
        .cmd_valid(cmd_valid),
        .cmd_ready(cmd_ready),
        .rsp_valid(rsp_valid),
        .rsp_ready(rsp_ready)
    );

    initial begin
        clk = 0;
        forever #5 clk = ~clk; 
    end

    integer j;
    reg found;
    
    // Test stimulus
    initial begin
        // Initialize signals
        clk = 0;
        reset = 1;
        d = 0;
        addr = 0;
        rwl = 0;
        w_en = 0;
        p_en = 0;
        cmd_valid = 0;
        rsp_ready = 0;

        // Reset the design
        #10 reset = 0;

        // Write some data to memory
        for (i = 0; i < PDEPTH; i = i + 1) begin
            @(posedge clk);
            d = $random;
            addr = $random % 256;

            w_en = $random % 2;
            p_en = $random % 2;

            rwl = $random;

            if (!w_en && !p_en) begin
                $display("Read !!");
                found = 0;
    
                for (j = 0; j < write_index; j = j + 1) begin
                    if (write_addrs[j] == addr) begin
                        found = 1;
                    	$display("existing address %h", addr);
                    end
                end
                if (!found) begin
                    $display("No data at address %h", addr);
                end
                $display("mem[%h] -> %h", addr, q);
            end
            else if (w_en && !p_en) begin
                $display("Write !!");
                write_addrs[write_index] = addr;
                write_index = write_index + 1;
                $display("mem[%h] <- %h", addr, d);
            end else begin
                $display("MAC_OUT !!");
                $display("Processing value %h", mac_out);
            end
            $display("=============================");
            // rwl = $random & ((1 << PDEPTH) - 1);
            @(posedge clk);
        end
        #100;

        $finish;
    end

    initial begin
        $dumpvars(2, dut);
        $dumpfile("pim_module.vcd");
    end

endmodule
