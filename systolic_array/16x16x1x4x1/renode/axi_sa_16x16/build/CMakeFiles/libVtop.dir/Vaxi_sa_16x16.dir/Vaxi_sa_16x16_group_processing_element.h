// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaxi_sa_16x16.h for the primary calling header

#ifndef VERILATED_VAXI_SA_16X16_GROUP_PROCESSING_ELEMENT_H_
#define VERILATED_VAXI_SA_16X16_GROUP_PROCESSING_ELEMENT_H_  // guard

#include "verilated.h"

class Vaxi_sa_16x16__Syms;

class Vaxi_sa_16x16_group_processing_element final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_inputA_0,7,0);
    VL_IN8(io_inputB_0,7,0);
    VL_IN8(io_inputB_1,7,0);
    VL_IN8(io_inputB_2,7,0);
    VL_IN8(io_inputB_3,7,0);
    VL_IN8(io_propagateB_0,0,0);
    VL_OUT8(io_outputA_0,7,0);
    VL_OUT8(io_outputB_0,7,0);
    VL_OUT8(io_outputB_1,7,0);
    VL_OUT8(io_outputB_2,7,0);
    VL_OUT8(io_outputB_3,7,0);
    CData/*7:0*/ __PVT__REG_0;
    CData/*7:0*/ __PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
    CData/*7:0*/ __PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
    CData/*7:0*/ __PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
    CData/*7:0*/ __PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
    VL_OUT16(io_outputC_0,15,0);
    VL_OUT16(io_outputC_1,15,0);
    VL_OUT16(io_outputC_2,15,0);
    VL_OUT16(io_outputC_3,15,0);
    SData/*15:0*/ __PVT__io_outputC_0_REG;
    SData/*15:0*/ __PVT__io_outputC_1_REG;
    SData/*15:0*/ __PVT__io_outputC_2_REG;
    SData/*15:0*/ __PVT__io_outputC_3_REG;
    SData/*15:0*/ __PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG;
    SData/*15:0*/ __PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
    SData/*15:0*/ __PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG;
    SData/*15:0*/ __PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
    SData/*15:0*/ __PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG;
    SData/*15:0*/ __PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
    SData/*15:0*/ __PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG;
    SData/*15:0*/ __PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;

    // INTERNAL VARIABLES
    Vaxi_sa_16x16__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaxi_sa_16x16_group_processing_element(Vaxi_sa_16x16__Syms* symsp, const char* name);
    ~Vaxi_sa_16x16_group_processing_element();
    VL_UNCOPYABLE(Vaxi_sa_16x16_group_processing_element);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
