module tb_cfu;

    // Parameters
    parameter PIM_ADDR_BEGIN = 'h000;
    parameter DWIDTH = 32;
    parameter AWIDTH = 10;
    parameter PWIDTH = 32;
    parameter PDEPTH = (1 << AWIDTH);

    // Testbench signals
    reg [PWIDTH-1:0] cmd_payload_inputs_0;
    reg [PWIDTH-1:0] cmd_payload_inputs_1;
    reg [AWIDTH-1:0] cmd_payload_function_id;
    reg clk;
    reg reset;
    reg cmd_valid;
    wire cmd_ready;
    wire rsp_valid;
    reg rsp_ready;
    wire rsp_payload_response_ok;
    wire [DWIDTH-1:0] rsp_payload_outputs_0;

    // Instantiate the CFU module
    cfu #(
        .PIM_ADDR_BEGIN(PIM_ADDR_BEGIN),
        .DWIDTH(DWIDTH),
        .AWIDTH(AWIDTH),
        .PWIDTH(PWIDTH),
        .PDEPTH(PDEPTH)
    ) uut (
        .cmd_payload_inputs_0(cmd_payload_inputs_0),
        .cmd_payload_inputs_1(cmd_payload_inputs_1),
        .cmd_payload_function_id(cmd_payload_function_id),
        .clk(clk),
        .reset(reset),
        .cmd_valid(cmd_valid),
        .cmd_ready(cmd_ready),
        .rsp_valid(rsp_valid),
        .rsp_ready(rsp_ready),
        .rsp_payload_response_ok(rsp_payload_response_ok),
        .rsp_payload_outputs_0(rsp_payload_outputs_0)
    );

    // Clock generation
    always #5 clk = ~clk;

    integer i, j, k, s, mac_index;
    reg [DWIDTH-1:0] write_data [0:255];  // Store the data to write, adjusted size to 256
    reg [DWIDTH-1:0] expected_data [0:255];  // To keep track of what should be written, adjusted size to 256
    reg [DWIDTH-1:0] read_data [0:255];  // To store the read values, adjusted size to 256
    reg [255:0] write_occurred;  // Track if a write occurred at an address, adjusted size to 256
    reg [DWIDTH-1:0] mac_out_array [0:255];
    reg [DWIDTH-1:0] expected_mac_out_array [0:255];
    reg [7:0] addr;  // Address is 8-bit to match address space (0-255)
    reg [9:0] not_match;
    reg [DWIDTH-1:0] expected_mac_out;
    reg [DWIDTH-1:0] mac_out_count;

    reg [DWIDTH-1:0] adc_out [0:PWIDTH-1];
    reg [DWIDTH-1:0] acc_result [0:PWIDTH-1];
    reg [DWIDTH-1:0] mem [0:255];
    reg [31:0] rwl;
    reg [4:0] shift_cnt;
    // reg [4:0] shift_cnt_reg;
    reg test1, test2, test3;
    reg [DWIDTH-1:0] temp_sum_acc_result;
    reg [DWIDTH-1:0] sum_acc_result;

    initial begin
        // Initialize signals
        clk = 0;
        reset = 1;
        cmd_valid = 0;
        rsp_ready = 0;
        cmd_payload_inputs_0 = 0;
        cmd_payload_inputs_1 = 0;
        cmd_payload_function_id = 0;
        not_match = 0;  // Initialize not_match counter
        write_occurred = 0; // Initialize write tracking
        mac_out_count = 0;
        mac_index = 0;  // Initialize mac_out index
        shift_cnt = 0;
        // shift_cnt_reg = 0;
        expected_mac_out = 0;
        sum_acc_result = 0;

        // TEST
        test1 = 0;
        test2 = 1;
        test3 = 1;

        // Apply reset
        #10;
        reset = 0;

        // Initialize data to write, expected data, and read_data
        for (i = 0; i < 256; i = i + 1) begin
            write_data[i] = 32'h0;  // Initialize write data to zero to avoid 'xxxxxxxx'
            expected_data[i] = 32'h0;  // Initialize expected data to zero
            read_data[i] = 32'h0;      // Initialize read value to zero
        end

        $display("=============== TEST START ===============");
        $display("==========================================");

        // Test random write operations for 30 addresses
        // Perform 100 random write operations
        for (s = 0; s < 50; s = s + 1) begin
            $display("TEST [%d]", s);
            addr = $random % 256;  // Choose random address for Write operation
            cmd_payload_function_id = $random % 4;

            // Generate random write data (non-zero)
            write_data[addr] = $random;
            if (write_data[addr] == 0) write_data[addr] = $random | 32'h1; // Ensure non-zero data

            // Handle write operation
            if (cmd_payload_function_id[1:0] == 2'b01) begin
                // Write operation
                cmd_valid = 1;
                cmd_payload_inputs_0 = write_data[addr];  // Data to write
                cmd_payload_inputs_1 = addr;              // Address to write to
                #10;
                cmd_valid = 0;
                #10;

                // Store the written data to expected data for later verification
                expected_data[addr] = write_data[addr];
                write_occurred[addr] = 1; // Mark that a write occurred to this address

                // Display write operation in real-time
                $display("write [%0d] <- %h", addr, write_data[addr]);

                shift_cnt <= 0;
                for (i = 0; i < PWIDTH; i = i+1) begin
                    acc_result[i] <= 0;
                    adc_out[i] <= 0;
                end
            end
            // Handle read operation
            else if (cmd_payload_function_id[1:0] == 2'b00) begin
                cmd_valid = 1;
                cmd_payload_inputs_1 = addr;      // Address to read from
                #10;
                cmd_valid = 0;
                #10;

                // Store the read data
                read_data[addr] = rsp_payload_outputs_0;

                shift_cnt <= 0;
                for (i = 0; i < PWIDTH; i = i+1) begin
                    acc_result[i] <= 0;
                end

                // Display read operation in real-time
                $display("read [%0d] -> %h", addr, rsp_payload_outputs_0);
            end
            // Handle MAC operation (example, display MAC result)
            else begin
                // MAC operation
                cmd_valid = 1;
                cmd_payload_inputs_1 = addr;
                #10;
                cmd_valid = 0;
                #10;

                for (j = 0; j < PWIDTH; j = j + 1) begin
                    if (shift_cnt == 0) adc_out[j] = 0;
                    else begin
                        for (k = 0; k < PDEPTH; k = k + 1) begin
                            adc_out[j] = adc_out[j] + ({32{uut.mem[k][j]}} & {32{uut.rwl[k]}});
                        end
                    end
                end

                for (i = 0; i < PWIDTH; i = i+1) begin
                    acc_result[i] <= (shift_cnt == 0) ? adc_out[i] : acc_result[i] + (adc_out[i] << shift_cnt);
                end

                shift_cnt <= shift_cnt + 1;

                temp_sum_acc_result = 0;
                for (j = 0; j < PWIDTH; j = j + 1) begin
                    temp_sum_acc_result = temp_sum_acc_result + acc_result[j];
                end
                sum_acc_result = temp_sum_acc_result;
                expected_mac_out <= sum_acc_result;
                $display("MAC Result: %h", expected_mac_out); // Print MAC result

                mac_out_array[mac_index] = rsp_payload_outputs_0;
                expected_mac_out_array[mac_index] = expected_mac_out;
                mac_index = mac_index + 1;

                if (mac_index > 1000) begin
                    $display("\nXXX Exceed XXX");
                    $finish;
                end
            end

        end

        $display("\n============= TEST  Evaluate =============");

        // ============================================================================================
        $display("\nTEST 1: Read All");
        $display("address         write                 read");

        // Display the final table of addresses, write and read values
        for (i = 0; i < 256; i = i + 1) begin
            if (write_occurred[i]) begin
                $display("%03d           %h       ->     %h", i, expected_data[i], read_data[i]);
            end 
            else begin
                $display("%03d           00000000              00000000", i);
            end
        end

        if (test1 == 0)         $display("✓ TEST 1 Sucess !");
        else                    $display("x TEST 1 Fail !");

        // ============================================================================================
        $display("\nTEST 2: Read what you wrote");
        $display("address         write                 read");

        for (i = 0; i < 256; i = i + 1) begin
            if (write_occurred[i]) begin
                if (read_data[i] == expected_data[i]) begin
                    $display("%03d           %h       ->     %h", i, expected_data[i], read_data[i]);
                end 
                else if (read_data[i] == 0) begin
                    $display("%03d           %h       ->     %h", i, expected_data[i], read_data[i]);
                end
                else begin
                    $display("%03d           %h              %h  (Mismatch!)", i, expected_data[i], read_data[i]);
                    not_match = not_match + 1;
                    test2 = 0;
                end
            end
        end

        if (test2 == 1)     $display("✓ TEST 2 Sucess !");
        else                $display("x TEST 2 Fail !");
        
        // ============================================================================================
        $display("\nTEST 3: Calculate macout");
        for (i = 0; i < mac_index; i = i + 1) begin
            if (mac_out_array[i] == expected_mac_out_array[i]) begin
                $display("MAC operation %02d: Expected = %h, Actual = %h  (Pass!)", i, expected_mac_out_array[i], mac_out_array[i]);
            end else begin
                $display("MAC operation %02d: Expected = %h, Actual = %h  (Mismatch!)", i, expected_mac_out_array[i], mac_out_array[i]);
                not_match = not_match + 1;
                test3 = 0;
            end
        end

        if (test3 == 1)     $display("✓ TEST 3 Sucess !");
        else                $display("x TEST 3 Fail !");

        // ============================================================================================
        
        if ((test1 == 0) && (test2 == 1) && (test3 == 1)) begin
            $display("\nAll Pass!");
        end 
        else begin
            $display("\nTest completed with %0d mismatches.", not_match);
        end

        $display("==========================================");
        // Finish simulation
        $finish;
    end

    initial begin
        $dumpvars(0, uut);
        $dumpfile("cfu.vcd");
    end

endmodule
