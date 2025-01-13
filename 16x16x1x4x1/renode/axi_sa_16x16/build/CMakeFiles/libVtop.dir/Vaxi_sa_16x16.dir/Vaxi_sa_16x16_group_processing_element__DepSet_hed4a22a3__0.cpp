// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxi_sa_16x16.h for the primary calling header

#include "verilated.h"

#include "Vaxi_sa_16x16__Syms.h"
#include "Vaxi_sa_16x16_group_processing_element.h"

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element__1(Vaxi_sa_16x16_group_processing_element* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element__1\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__io_outputC_3_REG = 0U;
        vlSelf->__PVT__io_outputC_2_REG = 0U;
        vlSelf->__PVT__io_outputC_1_REG = 0U;
        vlSelf->__PVT__io_outputC_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 = 0U;
    } else {
        vlSelf->__PVT__io_outputC_3_REG = vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_2_REG = vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_1_REG = vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_0_REG = vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_0_r) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_0_r)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_0_r) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_0_r)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_0_r) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_0_r)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_0_r) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_0_r)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_0) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_3_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_2_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_1_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_0_REG;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element__2(Vaxi_sa_16x16_group_processing_element* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_0_r));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_1__1(Vaxi_sa_16x16_group_processing_element* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_1__1\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__io_outputC_3_REG = 0U;
        vlSelf->__PVT__io_outputC_2_REG = 0U;
        vlSelf->__PVT__io_outputC_1_REG = 0U;
        vlSelf->__PVT__io_outputC_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 = 0U;
    } else {
        vlSelf->__PVT__io_outputC_3_REG = vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_2_REG = vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_1_REG = vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_0_REG = vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_0) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_7_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_6_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_5_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_4_REG;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_1__2(Vaxi_sa_16x16_group_processing_element* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_1__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_2__1(Vaxi_sa_16x16_group_processing_element* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_2__1\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__io_outputC_3_REG = 0U;
        vlSelf->__PVT__io_outputC_2_REG = 0U;
        vlSelf->__PVT__io_outputC_1_REG = 0U;
        vlSelf->__PVT__io_outputC_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 = 0U;
    } else {
        vlSelf->__PVT__io_outputC_3_REG = vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_2_REG = vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_1_REG = vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_0_REG = vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_1.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_1.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_1.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_1.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_1.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_1.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_1.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_1.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_0) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_11_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_10_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_9_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_8_REG;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_2__2(Vaxi_sa_16x16_group_processing_element* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_2__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_1.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_3__1(Vaxi_sa_16x16_group_processing_element* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_3__1\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__io_outputC_3_REG = 0U;
        vlSelf->__PVT__io_outputC_2_REG = 0U;
        vlSelf->__PVT__io_outputC_1_REG = 0U;
        vlSelf->__PVT__io_outputC_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 = 0U;
    } else {
        vlSelf->__PVT__io_outputC_3_REG = vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_2_REG = vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_1_REG = vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_0_REG = vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_2.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_2.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_2.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_2.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_2.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_2.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_2.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_2.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_0) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_15_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_14_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_13_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_12_REG;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_3__2(Vaxi_sa_16x16_group_processing_element* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_3__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_2.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_4__1(Vaxi_sa_16x16_group_processing_element* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_4__1\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__io_outputC_3_REG = 0U;
        vlSelf->__PVT__io_outputC_2_REG = 0U;
        vlSelf->__PVT__io_outputC_1_REG = 0U;
        vlSelf->__PVT__io_outputC_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 = 0U;
    } else {
        vlSelf->__PVT__io_outputC_3_REG = vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_2_REG = vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_1_REG = vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_0_REG = vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_3.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_3.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_3.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_3.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_3.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_3.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_3.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_3.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_0) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_19_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_18_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_17_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_16_REG;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_4__2(Vaxi_sa_16x16_group_processing_element* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_4__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_3.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_5__1(Vaxi_sa_16x16_group_processing_element* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_5__1\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__io_outputC_3_REG = 0U;
        vlSelf->__PVT__io_outputC_2_REG = 0U;
        vlSelf->__PVT__io_outputC_1_REG = 0U;
        vlSelf->__PVT__io_outputC_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 = 0U;
    } else {
        vlSelf->__PVT__io_outputC_3_REG = vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_2_REG = vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_1_REG = vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_0_REG = vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_4.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_4.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_4.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_4.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_4.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_4.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_4.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_4.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_0) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_23_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_22_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_21_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_20_REG;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_5__2(Vaxi_sa_16x16_group_processing_element* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_5__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_4.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_6__1(Vaxi_sa_16x16_group_processing_element* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_6__1\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__io_outputC_3_REG = 0U;
        vlSelf->__PVT__io_outputC_2_REG = 0U;
        vlSelf->__PVT__io_outputC_1_REG = 0U;
        vlSelf->__PVT__io_outputC_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 = 0U;
    } else {
        vlSelf->__PVT__io_outputC_3_REG = vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_2_REG = vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_1_REG = vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_0_REG = vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_5.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_5.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_5.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_5.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_5.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_5.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_5.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_5.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_0) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_27_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_26_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_25_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_24_REG;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_6__2(Vaxi_sa_16x16_group_processing_element* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_6__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_5.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_7__1(Vaxi_sa_16x16_group_processing_element* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_7__1\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__io_outputC_3_REG = 0U;
        vlSelf->__PVT__io_outputC_2_REG = 0U;
        vlSelf->__PVT__io_outputC_1_REG = 0U;
        vlSelf->__PVT__io_outputC_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 = 0U;
    } else {
        vlSelf->__PVT__io_outputC_3_REG = vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_2_REG = vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_1_REG = vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_0_REG = vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_6.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_6.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_6.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_6.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_6.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_6.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_6.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_6.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_0) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_31_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_30_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_29_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_28_REG;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_7__2(Vaxi_sa_16x16_group_processing_element* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_7__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_6.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_8__1(Vaxi_sa_16x16_group_processing_element* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_8__1\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__io_outputC_3_REG = 0U;
        vlSelf->__PVT__io_outputC_2_REG = 0U;
        vlSelf->__PVT__io_outputC_1_REG = 0U;
        vlSelf->__PVT__io_outputC_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 = 0U;
    } else {
        vlSelf->__PVT__io_outputC_3_REG = vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_2_REG = vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_1_REG = vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_0_REG = vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_7.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_7.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_7.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_7.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_7.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_7.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_7.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_7.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_0) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_35_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_34_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_33_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_32_REG;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_8__2(Vaxi_sa_16x16_group_processing_element* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_8__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_7.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_9__1(Vaxi_sa_16x16_group_processing_element* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_9__1\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__io_outputC_3_REG = 0U;
        vlSelf->__PVT__io_outputC_2_REG = 0U;
        vlSelf->__PVT__io_outputC_1_REG = 0U;
        vlSelf->__PVT__io_outputC_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 = 0U;
    } else {
        vlSelf->__PVT__io_outputC_3_REG = vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_2_REG = vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_1_REG = vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_0_REG = vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_8.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_8.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_8.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_8.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_8.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_8.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_8.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_8.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_0) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_39_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_38_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_37_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_36_REG;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_9__2(Vaxi_sa_16x16_group_processing_element* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_9__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_8.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_10__1(Vaxi_sa_16x16_group_processing_element* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_10__1\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__io_outputC_3_REG = 0U;
        vlSelf->__PVT__io_outputC_2_REG = 0U;
        vlSelf->__PVT__io_outputC_1_REG = 0U;
        vlSelf->__PVT__io_outputC_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 = 0U;
    } else {
        vlSelf->__PVT__io_outputC_3_REG = vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_2_REG = vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_1_REG = vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_0_REG = vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_9.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_9.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_9.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_9.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_9.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_9.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_9.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_9.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_0) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_43_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_42_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_41_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_40_REG;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_10__2(Vaxi_sa_16x16_group_processing_element* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_10__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_9.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_11__1(Vaxi_sa_16x16_group_processing_element* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_11__1\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__io_outputC_3_REG = 0U;
        vlSelf->__PVT__io_outputC_2_REG = 0U;
        vlSelf->__PVT__io_outputC_1_REG = 0U;
        vlSelf->__PVT__io_outputC_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 = 0U;
    } else {
        vlSelf->__PVT__io_outputC_3_REG = vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_2_REG = vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_1_REG = vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_0_REG = vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_10.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_10.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_10.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_10.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_10.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_10.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_10.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_10.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_0) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_47_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_46_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_45_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_44_REG;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_11__2(Vaxi_sa_16x16_group_processing_element* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_11__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_10.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_12__1(Vaxi_sa_16x16_group_processing_element* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_12__1\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__io_outputC_3_REG = 0U;
        vlSelf->__PVT__io_outputC_2_REG = 0U;
        vlSelf->__PVT__io_outputC_1_REG = 0U;
        vlSelf->__PVT__io_outputC_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 = 0U;
    } else {
        vlSelf->__PVT__io_outputC_3_REG = vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_2_REG = vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_1_REG = vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_0_REG = vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_11.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_11.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_11.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_11.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_11.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_11.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_11.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_11.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_0) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_51_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_50_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_49_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_48_REG;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_12__2(Vaxi_sa_16x16_group_processing_element* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_12__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_11.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_13__1(Vaxi_sa_16x16_group_processing_element* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_13__1\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__io_outputC_3_REG = 0U;
        vlSelf->__PVT__io_outputC_2_REG = 0U;
        vlSelf->__PVT__io_outputC_1_REG = 0U;
        vlSelf->__PVT__io_outputC_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 = 0U;
    } else {
        vlSelf->__PVT__io_outputC_3_REG = vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_2_REG = vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_1_REG = vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_0_REG = vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_12.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_12.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_12.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_12.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_12.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_12.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_12.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_12.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_0) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_55_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_54_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_53_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_52_REG;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_13__2(Vaxi_sa_16x16_group_processing_element* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_13__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_12.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_14__0(Vaxi_sa_16x16_group_processing_element* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_14__0\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_13.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_14__1(Vaxi_sa_16x16_group_processing_element* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_14__1\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__io_outputC_3_REG = 0U;
        vlSelf->__PVT__io_outputC_2_REG = 0U;
        vlSelf->__PVT__io_outputC_1_REG = 0U;
        vlSelf->__PVT__io_outputC_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 = 0U;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 = 0U;
    } else {
        vlSelf->__PVT__io_outputC_3_REG = vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_2_REG = vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_1_REG = vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG;
        vlSelf->__PVT__io_outputC_0_REG = vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG;
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_13.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_13.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_13.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_13.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_13.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_13.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_13.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_13.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_0) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_59_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_58_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_57_REG;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputB__DOT__io_output_56_REG;
        }
    }
}
