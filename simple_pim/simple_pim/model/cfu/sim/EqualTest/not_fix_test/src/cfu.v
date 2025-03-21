module cfu#(
    parameter PIM_ADDR_BEGIN = 'h000,
    parameter DWIDTH = 32,   // DATA WIDTH
    parameter AWIDTH = 10,    // ADDRESS WIDTH
    parameter PWIDTH = 32,   // PIM WIDTH
    parameter PDEPTH = (1 << AWIDTH) // PIM DEPTH
)(
    input [PWIDTH-1:0] cmd_payload_inputs_0,    // d
    input [PWIDTH-1:0] cmd_payload_inputs_1,    // addr
    input [AWIDTH-1:0] cmd_payload_function_id,
    input clk,
    input reset,
    input cmd_valid,
    output cmd_ready,
    output rsp_valid,
    input rsp_ready,
    output rsp_payload_response_ok,
    output [DWIDTH-1:0] rsp_payload_outputs_0
);

    reg [PWIDTH-1:0] mem [PIM_ADDR_BEGIN:PIM_ADDR_BEGIN+PDEPTH-1];
    reg [DWIDTH-1:0] adc_out [0:PWIDTH-1];
    reg [4:0] shift_cnt;
    reg [DWIDTH-1:0] acc_result [0:PWIDTH-1];
    reg [DWIDTH-1:0] sum_acc_result;
    reg [DWIDTH-1:0] mac_out_reg;
    reg [PWIDTH-1:0] q_reg;
    reg [DWIDTH-1:0] out;

    wire p_en, w_en;
    assign p_en = cmd_payload_function_id[1];
    assign w_en = cmd_payload_function_id[0];

    wire [7:0] mem_addr = cmd_payload_inputs_1[7:0];

    reg ready;
    reg valid;
    assign cmd_ready = ready;
    assign rsp_valid = valid;

    assign rsp_payload_response_ok = 1'b1;

    integer i, j;

    initial begin 
        for (i = PIM_ADDR_BEGIN; i < PIM_ADDR_BEGIN + PDEPTH; i = i+1) begin
            mem[i] = 0;
        end
    end

    reg [DWIDTH-1:0] temp_sum_acc_result;

    reg [PDEPTH-1:0] rwl;
    reg [31:0] count;

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            rwl <= 0;
            count <= 0;
        end else begin
            if (count != 0) rwl <= rwl;
            else begin
                rwl <= $urandom;
            end
        end
    end

    always @(posedge clk or posedge reset) begin
        if (reset) begin 
            shift_cnt <= 0;
            for (i = 0; i < PWIDTH; i = i+1) begin
                acc_result[i] <= 0;
                adc_out[i] <= 0;
            end
            sum_acc_result <= 0;
            q_reg <= 0;
            mac_out_reg <= 0;
            count <= 0;

            ready <= 1'b0;
            valid <= 1'b0;
        end else begin
            if (cmd_valid) begin
                ready <= 1'b1;
                if (!p_en) begin // Memory operation
                    count <= 0;
                    // $display("rwl :  %h", rwl);
                    if (w_en) begin
                        mem[mem_addr] <= cmd_payload_inputs_0;
                        $display("p_en = %0d, w_en = %0d", p_en, w_en);
                        // $display("Write: mem[%d] <= %h", mem_addr, cmd_payload_inputs_0);
                        // $display("=====================================================");
                    end else begin
                        q_reg <= mem[mem_addr];
                        $display("p_en = %0d, w_en = %0d", p_en, w_en);
                        // $display("Read: mem[%d] -> %h", mem_addr, mem[mem_addr]);
                        // $display("=====================================================");
                    end
                    shift_cnt <= 0;
                    for (i = 0; i < PWIDTH; i = i+1) begin
                        acc_result[i] <= 0;
                    end
                end 
                else begin // MAC operation
                    // 
                    $display("p_en = %0d, w_en = %0d", p_en, w_en);
                    // $display("rwl : %h", rwl);
                    count <= count + 1;

                    // for (j = 0; j < PDEPTH; j = j + 1) begin
                    //     $display("mem[%0d]: %h, rwl[%0d]: %b", j, mem[j], j, rwl[j]);
                    // end

                    // for (i = 0; i < PWIDTH; i = i+1) begin
                    //     $display("adc_out[%0d]: %h", i, adc_out[i]);
                    // end
                    
                    for (i = 0; i < PWIDTH; i = i+1) begin
                        // $display("Before Accumulate: acc_result[%0d] = %h", i, acc_result[i]);
                        acc_result[i] <= (shift_cnt == 0) ? adc_out[i] : acc_result[i] + (adc_out[i] << shift_cnt);
                        // if (shift_cnt == 0) $display("After  Accumulate: shift_cnt : %0d, acc_result[%0d] = %h", shift_cnt, i, adc_out[i]);
                        // else $display("After  Accumulate: shift_cnt : %0d, acc_result[%0d] = %h <= %h + %h << %h", shift_cnt, i, acc_result[i] + (adc_out[i] << shift_cnt), acc_result[i], adc_out[i], shift_cnt);                       
                    end
                    // $display("before shift_cnt: %0d", shift_cnt);
                    shift_cnt <= shift_cnt + 1;
                    // $display("After  shift_cnt: %0d", shift_cnt + 1);

                    temp_sum_acc_result = 0;
                    
                    for (i = 0; i < PWIDTH; i = i+1) begin
                        temp_sum_acc_result = temp_sum_acc_result + acc_result[i];
                        sum_acc_result <= temp_sum_acc_result;
                    end
                    // $display("Sum Accumulate Result: %h", sum_acc_result);
                    mac_out_reg <= sum_acc_result;
                    $display("MAC Result: %h", mac_out_reg); // Print MAC result
                end
                valid <= 1'b1;
            end 
            else begin
                ready <= 1'b0;
                valid <= 1'b0;                
            end
        end
    end

    always @(*) begin
        for (i = 0; i < PWIDTH; i = i+1) begin  
            for (j = 0; j < PDEPTH; j = j+1) begin
                if (shift_cnt == 0)     adc_out[i] = 0;
                else                    adc_out[i] = adc_out[i] + ({PWIDTH{mem[PIM_ADDR_BEGIN + j][i]}} & {PWIDTH{rwl[j]}});
                // else                    adc_out[i] = adc_out[i] + ({32{mem[PIM_ADDR_BEGIN + j][i]}} & {32{rwl[j]}});

            end
        end
    end

    always @(posedge clk or posedge reset) begin
        if(reset) begin
            out <= 32'd0;
        end else begin
            if (p_en) begin
                out <= mac_out_reg;
            end else begin
                if (w_en) begin
                    out <= cmd_payload_inputs_0; 
                    // out <= mem[mem_addr]; 
                end else begin 
                    out <= q_reg;
                end
            end
        end
    end

    assign rsp_payload_outputs_0 = out;

endmodule
