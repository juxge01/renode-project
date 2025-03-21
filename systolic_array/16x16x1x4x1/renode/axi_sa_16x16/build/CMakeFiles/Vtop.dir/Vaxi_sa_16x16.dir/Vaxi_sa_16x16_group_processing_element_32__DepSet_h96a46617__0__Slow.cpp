// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxi_sa_16x16.h for the primary calling header

#include "verilated.h"

#include "Vaxi_sa_16x16_group_processing_element_32.h"

VL_ATTR_COLD void Vaxi_sa_16x16_group_processing_element_32___ctor_var_reset(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_inputA_0 = VL_RAND_RESET_I(8);
    vlSelf->io_inputB_0 = VL_RAND_RESET_I(8);
    vlSelf->io_inputB_1 = VL_RAND_RESET_I(8);
    vlSelf->io_inputB_2 = VL_RAND_RESET_I(8);
    vlSelf->io_inputB_3 = VL_RAND_RESET_I(8);
    vlSelf->io_inputC_0 = VL_RAND_RESET_I(18);
    vlSelf->io_inputC_1 = VL_RAND_RESET_I(18);
    vlSelf->io_inputC_2 = VL_RAND_RESET_I(18);
    vlSelf->io_inputC_3 = VL_RAND_RESET_I(18);
    vlSelf->io_propagateB_0 = VL_RAND_RESET_I(1);
    vlSelf->io_outputA_0 = VL_RAND_RESET_I(8);
    vlSelf->io_outputB_0 = VL_RAND_RESET_I(8);
    vlSelf->io_outputB_1 = VL_RAND_RESET_I(8);
    vlSelf->io_outputB_2 = VL_RAND_RESET_I(8);
    vlSelf->io_outputB_3 = VL_RAND_RESET_I(8);
    vlSelf->io_outputC_0 = VL_RAND_RESET_I(18);
    vlSelf->io_outputC_1 = VL_RAND_RESET_I(18);
    vlSelf->io_outputC_2 = VL_RAND_RESET_I(18);
    vlSelf->io_outputC_3 = VL_RAND_RESET_I(18);
    vlSelf->__PVT__REG_0 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__io_outputC_0_REG = VL_RAND_RESET_I(18);
    vlSelf->__PVT__io_outputC_1_REG = VL_RAND_RESET_I(18);
    vlSelf->__PVT__io_outputC_2_REG = VL_RAND_RESET_I(18);
    vlSelf->__PVT__io_outputC_3_REG = VL_RAND_RESET_I(18);
    vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG = VL_RAND_RESET_I(19);
    vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = VL_RAND_RESET_I(16);
    vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG = VL_RAND_RESET_I(19);
    vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = VL_RAND_RESET_I(16);
    vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG = VL_RAND_RESET_I(19);
    vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = VL_RAND_RESET_I(16);
    vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG = VL_RAND_RESET_I(19);
    vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = VL_RAND_RESET_I(16);
}
