// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxi_sa_16x16.h for the primary calling header

#include "verilated.h"

#include "Vaxi_sa_16x16__Syms.h"
#include "Vaxi_sa_16x16_group_processing_element_64.h"

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_124__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_124__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_123.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_125__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_125__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x7ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x7ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x7ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x7ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_109.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_109.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_109.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_109.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_109.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_109.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_109.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_109.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_124.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_124.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_124.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_124.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_124.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_124.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_124.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_124.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_7) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_109.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_109.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_109.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_109.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_125__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_125__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_124.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_126__0(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_126__0\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_125.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_126__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_126__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x7ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x7ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x7ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x7ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_110.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_110.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_110.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_110.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_110.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_110.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_110.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_110.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_125.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_125.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_125.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_125.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_125.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_125.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_125.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_125.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_7) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_110.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_110.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_110.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_110.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}
