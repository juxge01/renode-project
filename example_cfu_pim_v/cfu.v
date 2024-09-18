// Copyright 2021 The CFU-Playground Authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.



module Cfu #(
    parameter PIM_ADDR_BEGIN = 'h000,
    parameter DWIDTH = 32,   // DATA WIDTH
    parameter AWIDTH = 8,    // ADDRESS WIDTH
    parameter PWIDTH = 32,   // PIM WIDTH
    parameter PDEPTH = (1 << AWIDTH) // PIM DEPTH
)(
    output [PWIDTH-1:0] q,
    output [DWIDTH-1:0] mac_out,
    output [DWIDTH-1:0] rsp_payload_outputs_0,  // Output signal added
    input [PWIDTH-1:0] cmd_payload_inputs_0,
    input [AWIDTH-1:0] cmd_payload_function_id,
    input [PDEPTH-1:0] rwl,
    input w_en,
    input p_en,
    input clk,
    input reset,
    input cmd_valid,
    input [31:0] cmd_payload_inputs_1,  // Declared but not used
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
                    mem[cmd_payload_function_id] <= cmd_payload_inputs_0;
                end
                else begin // Memory Read Enable
                    q_reg <= mem[cmd_payload_function_id];
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

    // Select output based on p_en and w_en
    // assign rsp_payload_outputs_0 = p_en ? mac_out_reg : (w_en ? 32'h00000000 : q_reg);
    reg [PWIDTH-1:0] rsp_payload_outputs_0_reg;

    always @(posedge clk or negedge reset) begin
      if (reset) begin
        rsp_payload_outputs_0_reg <= 32'd0;
      end
      else begin
        rsp_payload_outputs_0_reg <= p_en ? mac_out_reg : (w_en ? rsp_payload_outputs_0 : q_reg);
      end
    end
    assign rsp_payload_outputs_0 = rsp_payload_outputs_0_reg;

    // assign rsp_payload_outputs_0 = p_en ? mac_out_reg : (w_en ? rsp_payload_outputs_0 : q_reg);

endmodule

//   input               cmd_valid,
//   output              cmd_ready,
//   input      [9:0]    cmd_payload_function_id,
//   input      [31:0]   cmd_payload_inputs_0,
//   input      [31:0]   cmd_payload_inputs_1,
//   output              rsp_valid,
//   input               rsp_ready,
//   output     [31:0]   rsp_payload_outputs_0,
//   input               clk,
//   input               reset
// );

//   assign rsp_valid = cmd_valid;
//   assign cmd_ready = rsp_ready;

//   //  byte sum (unsigned)
//   wire [31:0] cfu0;
//   assign cfu0[31:0] =  cmd_payload_inputs_0[7:0]   + cmd_payload_inputs_1[7:0] +
//                        cmd_payload_inputs_0[15:8]  + cmd_payload_inputs_1[15:8] +
//                        cmd_payload_inputs_0[23:16] + cmd_payload_inputs_1[23:16] +
//                        cmd_payload_inputs_0[31:24] + cmd_payload_inputs_1[31:24];

//   // byte swap
//   wire [31:0] cfu1;
//   assign cfu1[31:24] =     cmd_payload_inputs_0[7:0];
//   assign cfu1[23:16] =     cmd_payload_inputs_0[15:8];
//   assign cfu1[15:8] =      cmd_payload_inputs_0[23:16];
//   assign cfu1[7:0] =       cmd_payload_inputs_0[31:24];

//   // bit reverse
//   wire [31:0] cfu2;
//   genvar n;
//   generate
//       for (n=0; n<32; n=n+1) begin
//           assign cfu2[n] =     cmd_payload_inputs_0[31-n];
//       end
//   endgenerate


//   //
//   // select output -- note that we're not fully decoding the 3 function_id bits
//   //
//   assign rsp_payload_outputs_0 = cmd_payload_function_id[1] ? cfu2 :
//                                       ( cmd_payload_function_id[0] ? cfu1 : cfu0);


// endmodule
