module cfu#(
    parameter PIM_ADDR_BEGIN = 'h000,
    parameter DWIDTH = 32,   // DATA WIDTH
    parameter AWIDTH = 10,    // ADDRESS WIDTH
    parameter PWIDTH = 32,   // PIM WIDTH
    parameter PDEPTH = (1 << AWIDTH) // PIM DEPTH
)(
    // output [PWIDTH-1:0] q,
    // output [DWIDTH-1:0] mac_out,
    input [PWIDTH-1:0] cmd_payload_inputs_1,    // not using
    input [PWIDTH-1:0] cmd_payload_inputs_0,    
    input [AWIDTH-1:0] cmd_payload_function_id,
    // input [PDEPTH-1:0] rwl,
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

    wire [7:0] mem_addr = cmd_payload_function_id[AWIDTH-1:AWIDTH-8];

    assign rsp_valid = cmd_valid;
    assign cmd_ready = rsp_ready;
    assign rsp_payload_response_ok = 1'b1;

    integer i, j;

	initial begin 
	     for (i = PIM_ADDR_BEGIN; i < PIM_ADDR_BEGIN + PDEPTH; i = i+1) begin
                mem[i] = 0; // Use non-blocking assignment
         end
    end	

	reg [DWIDTH-1:0] temp_sum_acc_result;

    reg [PDEPTH-1:0] rwl;
    always @(posedge clk or negedge reset) begin
        if (reset) begin
            rwl <= 0;  // Reset rwl
        end else begin
            rwl <= $random;  // Generate random rwl
        end
    end
    
	always @(posedge clk or negedge reset) begin
        if (reset) begin
            shift_cnt <= 0;
            for (i = 0; i < PWIDTH; i = i+1) begin
                acc_result[i] <= 0;
                adc_out[i] <= 0; // Initialize adc_out
            end
            sum_acc_result <= 0;
            q_reg <= 0;
            mac_out_reg <= 0;
        end
        else begin
            if (!p_en) begin // Processing Disabled -> Memory operation
                if (w_en) begin // Memory Write Enable
                    mem[mem_addr] <= cmd_payload_inputs_0;
                end
                else begin // Memory Read Enable
                    q_reg <= mem[mem_addr];
                end
                // Initialize accumulation
                shift_cnt <= 0;
                for (i = 0; i < PWIDTH; i = i+1) begin
                    acc_result[i] <= 0;
                end
            end
            else begin // Processing Enabled -> MAC operation
                for (i = 0; i < PWIDTH; i = i+1) begin
                    acc_result[i] <= (shift_cnt == 0) ? adc_out[i] : acc_result[i] + (adc_out[i] << shift_cnt);
		            $display("acc_result[%d]: %h <- shift_cnt: %b", i, acc_result[i], shift_cnt);
		        end
                shift_cnt <= shift_cnt + 1;

                // Initialize sum_acc_result
                sum_acc_result <= 0;
                
                temp_sum_acc_result = 0;
                for (i = 0; i < PWIDTH; i = i+1) begin
                    temp_sum_acc_result = temp_sum_acc_result + acc_result[i];
                    sum_acc_result <= temp_sum_acc_result;
                    $display("temp_sum_acc_result: %h", temp_sum_acc_result);
                    $display("sum_acc_result: %h", sum_acc_result);
                end
                mac_out_reg <= sum_acc_result;
            end
        end
    end

    // assign q = q_reg;
    // assign mac_out = mac_out_reg;

    always @(*) begin
        for (i = 0; i < PWIDTH; i = i+1) begin
            adc_out[i] = 0;
            for (j = 0; j < PDEPTH; j = j+1) begin
                adc_out[i] = adc_out[i] + ({PWIDTH{mem[PIM_ADDR_BEGIN + j][i]}} & {PWIDTH{rwl[j]}});
            end
        end
	end

    always @(posedge clk or posedge reset) begin
        if(reset) out <= 32'd0;
        else begin
	    if (p_en) begin
		out <= mac_out_reg;
		$display("MacOut: %h", mac_out_reg); // p_en, w_en = b'10 or 11
	    end
            else begin
	        if (w_en) begin
		    out <= mem[mem_addr];
		    $display("Write: %h", mem[mem_addr]); // p_en, w_en = b'01
	        end
	        else begin 
		    out <= q_reg;
		    $display("Read: %h", q_reg); // p_en, w_en = b'00
	        end
            end
        end
    end

    assign rsp_payload_outputs_0 = out;
	
endmodule
