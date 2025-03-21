module pim_model#(
    parameter PIM_ADDR_BEGIN = 'h000,
    parameter DWIDTH = 32,   // DATA WIDTH
    parameter AWIDTH = 8,    // ADDRESS WIDTH
    parameter PWIDTH = 32,   // PIM WIDTH
    parameter PDEPTH = (1 << AWIDTH) // PIM DEPTH
)(
    output [PWIDTH-1:0] q,
    output [DWIDTH-1:0] mac_out,
    input [PWIDTH-1:0] d,
    input [AWIDTH-1:0] addr,
    input [PDEPTH-1:0] rwl,
    input w_en,
    input p_en,
    input clk,
    input reset,
    input cmd_valid,
    output cmd_ready,
    output rsp_valid,
    input rsp_ready,
    output rsp_payload_response_ok
);

    reg [PWIDTH-1:0] mem [PIM_ADDR_BEGIN:PIM_ADDR_BEGIN+PDEPTH-1];
    reg [DWIDTH-1:0] adc_out [0:PWIDTH-1];
    reg [4:0] shift_cnt;
    reg [DWIDTH-1:0] acc_result [0:PWIDTH-1];
    reg [DWIDTH-1:0] sum_acc_result;
    reg [DWIDTH-1:0] mac_out_reg;
    reg [PWIDTH-1:0] q_reg;

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
                    mem[addr] <= d;
                end
                else begin // Memory Read Enable
                    q_reg <= mem[addr];
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
                end
                shift_cnt <= shift_cnt + 1;

                // Initialize sum_acc_result
                sum_acc_result <= 0;
                
                temp_sum_acc_result = 0;
                for (i = 0; i < PWIDTH; i = i+1) begin
                    temp_sum_acc_result = temp_sum_acc_result + acc_result[i];
                    sum_acc_result <= temp_sum_acc_result;
                end
                mac_out_reg <= sum_acc_result;
            end
			$display("mac_out: %h", mac_out);
        end
    end

    assign q = q_reg;
    assign mac_out = mac_out_reg;

    always @(*) begin
        for (i = 0; i < PWIDTH; i = i+1) begin
            adc_out[i] = 0;
            for (j = 0; j < PDEPTH; j = j+1) begin
                adc_out[i] = adc_out[i] + ({PWIDTH{mem[PIM_ADDR_BEGIN + j][i]}} & {PWIDTH{rwl[j]}});
            end
        end
	end
	
endmodule
