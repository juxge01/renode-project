`timescale 1ns / 1ps

module tb_ws_sta_16x16x1x4x1;

    // Parameters
    localparam CLK_PERIOD = 10;  // Clock period in nanoseconds

    // Clock and reset
    reg clock;
    reg reset;

    // Inputs
    reg [7:0] io_inputA [0:15];
    reg [7:0] io_inputB [0:63];
    reg io_propagateB [0:15];

    // Outputs
    wire [19:0] io_outputC [0:63];

    // DUT instantiation
    ws_sta_16x16x1x4x1 dut (
        .clock(clock),
        .reset(reset),
        .io_inputA_0(io_inputA[0]),
        .io_inputA_1(io_inputA[1]),
        .io_inputA_2(io_inputA[2]),
        .io_inputA_3(io_inputA[3]),
        .io_inputA_4(io_inputA[4]),
        .io_inputA_5(io_inputA[5]),
        .io_inputA_6(io_inputA[6]),
        .io_inputA_7(io_inputA[7]),
        .io_inputA_8(io_inputA[8]),
        .io_inputA_9(io_inputA[9]),
        .io_inputA_10(io_inputA[10]),
        .io_inputA_11(io_inputA[11]),
        .io_inputA_12(io_inputA[12]),
        .io_inputA_13(io_inputA[13]),
        .io_inputA_14(io_inputA[14]),
        .io_inputA_15(io_inputA[15]),
        .io_inputB_0(io_inputB[0]),
        .io_inputB_1(io_inputB[1]),
        .io_inputB_2(io_inputB[2]),
        .io_inputB_3(io_inputB[3]),
        .io_inputB_4(io_inputB[4]),
        .io_inputB_5(io_inputB[5]),
        .io_inputB_6(io_inputB[6]),
        .io_inputB_7(io_inputB[7]),
        .io_inputB_8(io_inputB[8]),
        .io_inputB_9(io_inputB[9]),
        .io_inputB_10(io_inputB[10]),
        .io_inputB_11(io_inputB[11]),
        .io_inputB_12(io_inputB[12]),
        .io_inputB_13(io_inputB[13]),
        .io_inputB_14(io_inputB[14]),
        .io_inputB_15(io_inputB[15]),
        .io_inputB_16(io_inputB[16]),
        .io_inputB_17(io_inputB[17]),
        .io_inputB_18(io_inputB[18]),
        .io_inputB_19(io_inputB[19]),
        .io_inputB_20(io_inputB[20]),
        .io_inputB_21(io_inputB[21]),
        .io_inputB_22(io_inputB[22]),
        .io_inputB_23(io_inputB[23]),
        .io_inputB_24(io_inputB[24]),
        .io_inputB_25(io_inputB[25]),
        .io_inputB_26(io_inputB[26]),
        .io_inputB_27(io_inputB[27]),
        .io_inputB_28(io_inputB[28]),
        .io_inputB_29(io_inputB[29]),
        .io_inputB_30(io_inputB[30]),
        .io_inputB_31(io_inputB[31]),
        .io_inputB_32(io_inputB[32]),
        .io_inputB_33(io_inputB[33]),
        .io_inputB_34(io_inputB[34]),
        .io_inputB_35(io_inputB[35]),
        .io_inputB_36(io_inputB[36]),
        .io_inputB_37(io_inputB[37]),
        .io_inputB_38(io_inputB[38]),
        .io_inputB_39(io_inputB[39]),
        .io_inputB_40(io_inputB[40]),
        .io_inputB_41(io_inputB[41]),
        .io_inputB_42(io_inputB[42]),
        .io_inputB_43(io_inputB[43]),
        .io_inputB_44(io_inputB[44]),
        .io_inputB_45(io_inputB[45]),
        .io_inputB_46(io_inputB[46]),
        .io_inputB_47(io_inputB[47]),
        .io_inputB_48(io_inputB[48]),
        .io_inputB_49(io_inputB[49]),
        .io_inputB_50(io_inputB[50]),
        .io_inputB_51(io_inputB[51]),
        .io_inputB_52(io_inputB[52]),
        .io_inputB_53(io_inputB[53]),
        .io_inputB_54(io_inputB[54]),
        .io_inputB_55(io_inputB[55]),
        .io_inputB_56(io_inputB[56]),
        .io_inputB_57(io_inputB[57]),
        .io_inputB_58(io_inputB[58]),
        .io_inputB_59(io_inputB[59]),
        .io_inputB_60(io_inputB[60]),
        .io_inputB_61(io_inputB[61]),
        .io_inputB_62(io_inputB[62]),
        .io_inputB_63(io_inputB[63]),
        .io_propagateB_0(io_propagateB[0]),
        .io_propagateB_1(io_propagateB[1]),
        .io_propagateB_2(io_propagateB[2]),
        .io_propagateB_3(io_propagateB[3]),
        .io_propagateB_4(io_propagateB[4]),
        .io_propagateB_5(io_propagateB[5]),
        .io_propagateB_6(io_propagateB[6]),
        .io_propagateB_7(io_propagateB[7]),
        .io_propagateB_8(io_propagateB[8]),
        .io_propagateB_9(io_propagateB[9]),
        .io_propagateB_10(io_propagateB[10]),
        .io_propagateB_11(io_propagateB[11]),
        .io_propagateB_12(io_propagateB[12]),
        .io_propagateB_13(io_propagateB[13]),
        .io_propagateB_14(io_propagateB[14]),
        .io_propagateB_15(io_propagateB[15]),
        .io_outputC_0(io_outputC[0]),
        .io_outputC_1(io_outputC[1]),
        .io_outputC_2(io_outputC[2]),
        .io_outputC_3(io_outputC[3]),
        .io_outputC_4(io_outputC[4]),
        .io_outputC_5(io_outputC[5]),
        .io_outputC_6(io_outputC[6]),
        .io_outputC_7(io_outputC[7]),
        .io_outputC_8(io_outputC[8]),
        .io_outputC_9(io_outputC[9]),
        .io_outputC_10(io_outputC[10]),
        .io_outputC_11(io_outputC[11]),
        .io_outputC_12(io_outputC[12]),
        .io_outputC_13(io_outputC[13]),
        .io_outputC_14(io_outputC[14]),
        .io_outputC_15(io_outputC[15]),
        .io_outputC_16(io_outputC[16]),
        .io_outputC_17(io_outputC[17]),
        .io_outputC_18(io_outputC[18]),
        .io_outputC_19(io_outputC[19]),
        .io_outputC_20(io_outputC[20]),
        .io_outputC_21(io_outputC[21]),
        .io_outputC_22(io_outputC[22]),
        .io_outputC_23(io_outputC[23]),
        .io_outputC_24(io_outputC[24]),
        .io_outputC_25(io_outputC[25]),
        .io_outputC_26(io_outputC[26]),
        .io_outputC_27(io_outputC[27]),
        .io_outputC_28(io_outputC[28]),
        .io_outputC_29(io_outputC[29]),
        .io_outputC_30(io_outputC[30]),
        .io_outputC_31(io_outputC[31]),
        .io_outputC_32(io_outputC[32]),
        .io_outputC_33(io_outputC[33]),
        .io_outputC_34(io_outputC[34]),
        .io_outputC_35(io_outputC[35]),
        .io_outputC_36(io_outputC[36]),
        .io_outputC_37(io_outputC[37]),
        .io_outputC_38(io_outputC[38]),
        .io_outputC_39(io_outputC[39]),
        .io_outputC_40(io_outputC[40]),
        .io_outputC_41(io_outputC[41]),
        .io_outputC_42(io_outputC[42]),
        .io_outputC_43(io_outputC[43]),
        .io_outputC_44(io_outputC[44]),
        .io_outputC_45(io_outputC[45]),
        .io_outputC_46(io_outputC[46]),
        .io_outputC_47(io_outputC[47]),
        .io_outputC_48(io_outputC[48]),
        .io_outputC_49(io_outputC[49]),
        .io_outputC_50(io_outputC[50]),
        .io_outputC_51(io_outputC[51]),
        .io_outputC_52(io_outputC[52]),
        .io_outputC_53(io_outputC[53]),
        .io_outputC_54(io_outputC[54]),
        .io_outputC_55(io_outputC[55]),
        .io_outputC_56(io_outputC[56]),
        .io_outputC_57(io_outputC[57]),
        .io_outputC_58(io_outputC[58]),
        .io_outputC_59(io_outputC[59]),
        .io_outputC_60(io_outputC[60]),
        .io_outputC_61(io_outputC[61]),
        .io_outputC_62(io_outputC[62]),
        .io_outputC_63(io_outputC[63])
    );

    // Clock generation
    always #(CLK_PERIOD / 2) clock = ~clock;
      
    integer i, j;

    initial begin
        for (j = 0; j < 10; j = j + 1) begin
            $display("Iteration %d:", j + 1);
            clock = 0;
            reset = 1;

            // Reset inputs
            for (i = 0; i < 16; i = i + 1) begin
                io_inputA[i] = 0;
                io_propagateB[i] = 0;
            end
            for (i = 0; i < 64; i = i + 1) begin
                io_inputB[i] = 0;
            end

            #(CLK_PERIOD * 2);
            reset = 0;

            for (i = 0; i < 16; i = i + 1) begin
                io_inputA[i] = i + j;
                io_propagateB[i] = (i + j) % 2;
            end
            for (i = 0; i < 64; i = i + 1) begin
                io_inputB[i] = i + j;
            end

            #(CLK_PERIOD * 10);

            for (i = 0; i < 64; i = i + 1) begin
                $display("io_outputC[%d]=%h", i, io_outputC[i]);
            end
        end
        $finish;
    end


    // Optionally, write all outputs to a file for detailed analysis
    initial begin
      $dumpfile("ws_sta_16x16x1x4x1.vcd");
      $dumpvars(0, tb_ws_sta_16x16x1x4x1);
    end

endmodule
