`timescale 1ns / 1ps

// Testbench for ws_sta_32x32x1x1x1
module ws_sta_32x32x1x1x1_tb;

  // Parameters
  localparam CLK_PERIOD = 10; // Clock period in ns
  localparam NUM_INPUTA = 32;
  localparam NUM_INPUTB = 32;
  localparam NUM_OUTPUTC = 32;

  // Inputs
  reg clock;
  reg reset;
  reg [7:0] io_inputA [0:NUM_INPUTA-1];
  reg [7:0] io_inputB [0:NUM_INPUTB-1];
  reg io_propagateB [0:31];

  // Outputs
  wire [20 :0] io_outputC [0:NUM_OUTPUTC-1];

  integer i;

  // Instantiate the Unit Under Test (UUT)
  ws_sta_32x32x1x1x1 uut (
    .clock(clock),
    .reset(reset),
    // Connect io_inputA
    .io_inputA_0(io_inputA[0]), .io_inputA_1(io_inputA[1]), .io_inputA_2(io_inputA[2]), .io_inputA_3(io_inputA[3]),
    .io_inputA_4(io_inputA[4]), .io_inputA_5(io_inputA[5]), .io_inputA_6(io_inputA[6]), .io_inputA_7(io_inputA[7]),
    .io_inputA_8(io_inputA[8]), .io_inputA_9(io_inputA[9]), .io_inputA_10(io_inputA[10]), .io_inputA_11(io_inputA[11]),
    .io_inputA_12(io_inputA[12]), .io_inputA_13(io_inputA[13]), .io_inputA_14(io_inputA[14]), .io_inputA_15(io_inputA[15]),
    .io_inputA_16(io_inputA[16]), .io_inputA_17(io_inputA[17]), .io_inputA_18(io_inputA[18]), .io_inputA_19(io_inputA[19]),
    .io_inputA_20(io_inputA[20]), .io_inputA_21(io_inputA[21]), .io_inputA_22(io_inputA[22]), .io_inputA_23(io_inputA[23]),
    .io_inputA_24(io_inputA[24]), .io_inputA_25(io_inputA[25]), .io_inputA_26(io_inputA[26]), .io_inputA_27(io_inputA[27]),
    .io_inputA_28(io_inputA[28]), .io_inputA_29(io_inputA[29]), .io_inputA_30(io_inputA[30]), .io_inputA_31(io_inputA[31]),
    // Connect io_inputB
    .io_inputB_0(io_inputB[0]), .io_inputB_1(io_inputB[1]), .io_inputB_2(io_inputB[2]), .io_inputB_3(io_inputB[3]),
    .io_inputB_4(io_inputB[4]), .io_inputB_5(io_inputB[5]), .io_inputB_6(io_inputB[6]), .io_inputB_7(io_inputB[7]),
    .io_inputB_8(io_inputB[8]), .io_inputB_9(io_inputB[9]), .io_inputB_10(io_inputB[10]), .io_inputB_11(io_inputB[11]),
    .io_inputB_12(io_inputB[12]), .io_inputB_13(io_inputB[13]), .io_inputB_14(io_inputB[14]), .io_inputB_15(io_inputB[15]),
    .io_inputB_16(io_inputB[16]), .io_inputB_17(io_inputB[17]), .io_inputB_18(io_inputB[18]), .io_inputB_19(io_inputB[19]),
    .io_inputB_20(io_inputB[20]), .io_inputB_21(io_inputB[21]), .io_inputB_22(io_inputB[22]), .io_inputB_23(io_inputB[23]),
    .io_inputB_24(io_inputB[24]), .io_inputB_25(io_inputB[25]), .io_inputB_26(io_inputB[26]), .io_inputB_27(io_inputB[27]),
    .io_inputB_28(io_inputB[28]), .io_inputB_29(io_inputB[29]), .io_inputB_30(io_inputB[30]), .io_inputB_31(io_inputB[31]),
    // Connect io_propagateB
    .io_propagateB_0(io_propagateB[0]), .io_propagateB_1(io_propagateB[1]), .io_propagateB_2(io_propagateB[2]), 
    .io_propagateB_3(io_propagateB[3]), .io_propagateB_4(io_propagateB[4]), .io_propagateB_5(io_propagateB[5]), 
    .io_propagateB_6(io_propagateB[6]), .io_propagateB_7(io_propagateB[7]), .io_propagateB_8(io_propagateB[8]), 
    .io_propagateB_9(io_propagateB[9]), .io_propagateB_10(io_propagateB[10]), .io_propagateB_11(io_propagateB[11]),
    .io_propagateB_12(io_propagateB[12]), .io_propagateB_13(io_propagateB[13]), .io_propagateB_14(io_propagateB[14]),
    .io_propagateB_15(io_propagateB[15]), .io_propagateB_16(io_propagateB[16]), .io_propagateB_17(io_propagateB[17]),
    .io_propagateB_18(io_propagateB[18]), .io_propagateB_19(io_propagateB[19]), .io_propagateB_20(io_propagateB[20]),
    .io_propagateB_21(io_propagateB[21]), .io_propagateB_22(io_propagateB[22]), .io_propagateB_23(io_propagateB[23]),
    .io_propagateB_24(io_propagateB[24]), .io_propagateB_25(io_propagateB[25]), .io_propagateB_26(io_propagateB[26]),
    .io_propagateB_27(io_propagateB[27]), .io_propagateB_28(io_propagateB[28]), .io_propagateB_29(io_propagateB[29]),
    .io_propagateB_30(io_propagateB[30]), .io_propagateB_31(io_propagateB[31]),
    // Connect io_outputC
    .io_outputC_0(io_outputC[0]), .io_outputC_1(io_outputC[1]), .io_outputC_2(io_outputC[2]), .io_outputC_3(io_outputC[3]),
    .io_outputC_4(io_outputC[4]), .io_outputC_5(io_outputC[5]), .io_outputC_6(io_outputC[6]), .io_outputC_7(io_outputC[7]),
    .io_outputC_8(io_outputC[8]), .io_outputC_9(io_outputC[9]), .io_outputC_10(io_outputC[10]), .io_outputC_11(io_outputC[11]),
    .io_outputC_12(io_outputC[12]), .io_outputC_13(io_outputC[13]), .io_outputC_14(io_outputC[14]), .io_outputC_15(io_outputC[15]),
    .io_outputC_16(io_outputC[16]), .io_outputC_17(io_outputC[17]), .io_outputC_18(io_outputC[18]), .io_outputC_19(io_outputC[19]),
    .io_outputC_20(io_outputC[20]), .io_outputC_21(io_outputC[21]), .io_outputC_22(io_outputC[22]), .io_outputC_23(io_outputC[23]),
    .io_outputC_24(io_outputC[24]), .io_outputC_25(io_outputC[25]), .io_outputC_26(io_outputC[26]), .io_outputC_27(io_outputC[27]),
    .io_outputC_28(io_outputC[28]), .io_outputC_29(io_outputC[29]), .io_outputC_30(io_outputC[30]), .io_outputC_31(io_outputC[31])
  );

  // Clock generation
  initial begin
    clock = 0;
    forever #(CLK_PERIOD/2) clock = ~clock;
  end

  // Initialize inputs
  initial begin
    // Initialize all inputs to zero
    reset = 1;
    for (i = 0; i < NUM_INPUTA; i = i + 1) begin
      io_inputA[i] = 8'd0;
    end
    for (i = 0; i < NUM_INPUTB; i = i + 1) begin
      io_inputB[i] = 8'd0;
    end
    for (i = 0; i < 16; i = i + 1) begin
      io_propagateB[i] = 1'b0;
    end

    // Apply reset
    #(CLK_PERIOD) reset = 0;
  end

  // Apply test stimuli
  initial begin
    // Wait for reset de-assertion
    @(negedge reset);

    // Test Vector 1
    // Apply some values to io_inputA and io_inputB
    for (i = 0; i < NUM_INPUTA; i = i + 1) begin
      io_inputA[i] = i + 1; // Example: 1, 2, 3, ..., 32
    end

    for (i = 0; i < NUM_INPUTB; i = i + 1) begin
      io_inputB[i] = i + 1; // Example: 1, 2, 3, ..., 32
    end

    // Set propagateB signals
    for (i = 0; i < 32; i = i + 1) begin
      io_propagateB[i] = (i % 2) ? 1'b1 : 1'b0; // Example pattern
    end

    // Wait for some clock cycles
    #(CLK_PERIOD * 20);

    // Test Vector 2
    // Change inputs to different values
    for (i = 0; i < NUM_INPUTA; i = i + 1) begin
      io_inputA[i] = 8'd255 - i; // Example: 255, 254, ..., 240
    end

    for (i = 0; i < NUM_INPUTB; i = i + 1) begin
      io_inputB[i] = 8'd255 - i; // Example: 255, 254, ..., 192
    end

    // Update propagateB signals
    for (i = 0; i < 32; i = i + 1) begin
      io_propagateB[i] = (i < 8) ? 1'b1 : 1'b0; // Different pattern
    end

    // Wait for more clock cycles
    #(CLK_PERIOD * 20);

    // Add more test vectors as needed
    // ...

    // Finish simulation
    $display("Testbench simulation completed.");
    $finish;
  end

  // Monitor outputs using an always block with $display
  always @(posedge clock) begin
    // Display a subset of outputs to avoid excessive logging
    // Modify as needed to monitor different or additional signals
    $display("Time=%0t | Reset=%b", $time, reset);
    for (i = 0; i < 4; i = i + 1) begin
      $display("Time=%0t | io_outputC_%0d = %h", $time, i, io_outputC[i]);
    end
    // Optionally, monitor more outputs or all outputs
    /*
    for (i = 0; i < NUM_OUTPUTC; i = i + 1) begin
      $display("Time=%0t | io_outputC_%0d = %h", $time, i, io_outputC[i]);
    end
    */
  end

  // Optionally, write all outputs to a file for detailed analysis
  initial begin
    $dumpfile("ws_sta_32x32x1x1x1.vcd");
    $dumpvars(0, ws_sta_32x32x1x1x1_tb);
  end

endmodule
