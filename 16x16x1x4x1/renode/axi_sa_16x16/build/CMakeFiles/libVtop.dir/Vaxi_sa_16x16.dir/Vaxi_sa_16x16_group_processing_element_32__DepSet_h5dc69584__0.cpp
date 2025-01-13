// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxi_sa_16x16.h for the primary calling header

#include "verilated.h"

#include "Vaxi_sa_16x16__Syms.h"
#include "Vaxi_sa_16x16_group_processing_element_32.h"

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_32__1(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_32__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_16.__PVT__io_outputC_3_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_16.__PVT__io_outputC_3_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_16.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_16.__PVT__io_outputC_2_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_16.__PVT__io_outputC_2_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_16.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_16.__PVT__io_outputC_1_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_16.__PVT__io_outputC_1_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_16.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_16.__PVT__io_outputC_0_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_16.__PVT__io_outputC_0_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_16.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_2_r_2) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_2_r_2)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_2_r_2) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_2_r_2)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_2_r_2) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_2_r_2)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_2_r_2) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_2_r_2)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_2) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_16.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_16.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_16.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_16.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_32__2(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_32__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_2_r_2));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_33__1(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_33__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_17.__PVT__io_outputC_3_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_17.__PVT__io_outputC_3_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_17.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_17.__PVT__io_outputC_2_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_17.__PVT__io_outputC_2_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_17.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_17.__PVT__io_outputC_1_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_17.__PVT__io_outputC_1_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_17.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_17.__PVT__io_outputC_0_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_17.__PVT__io_outputC_0_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_17.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_32.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_32.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_32.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_32.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_32.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_32.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_32.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_32.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_2) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_17.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_17.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_17.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_17.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_33__2(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_33__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_32.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_34__1(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_34__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_18.__PVT__io_outputC_3_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_18.__PVT__io_outputC_3_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_18.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_18.__PVT__io_outputC_2_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_18.__PVT__io_outputC_2_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_18.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_18.__PVT__io_outputC_1_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_18.__PVT__io_outputC_1_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_18.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_18.__PVT__io_outputC_0_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_18.__PVT__io_outputC_0_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_18.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_33.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_33.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_33.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_33.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_33.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_33.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_33.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_33.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_2) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_18.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_18.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_18.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_18.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_34__2(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_34__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_33.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_35__1(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_35__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_19.__PVT__io_outputC_3_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_19.__PVT__io_outputC_3_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_19.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_19.__PVT__io_outputC_2_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_19.__PVT__io_outputC_2_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_19.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_19.__PVT__io_outputC_1_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_19.__PVT__io_outputC_1_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_19.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_19.__PVT__io_outputC_0_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_19.__PVT__io_outputC_0_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_19.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_34.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_34.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_34.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_34.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_34.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_34.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_34.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_34.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_2) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_19.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_19.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_19.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_19.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_35__2(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_35__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_34.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_36__1(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_36__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_20.__PVT__io_outputC_3_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_20.__PVT__io_outputC_3_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_20.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_20.__PVT__io_outputC_2_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_20.__PVT__io_outputC_2_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_20.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_20.__PVT__io_outputC_1_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_20.__PVT__io_outputC_1_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_20.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_20.__PVT__io_outputC_0_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_20.__PVT__io_outputC_0_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_20.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_35.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_35.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_35.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_35.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_35.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_35.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_35.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_35.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_2) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_20.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_20.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_20.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_20.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_36__2(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_36__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_35.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_37__1(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_37__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_21.__PVT__io_outputC_3_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_21.__PVT__io_outputC_3_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_21.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_21.__PVT__io_outputC_2_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_21.__PVT__io_outputC_2_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_21.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_21.__PVT__io_outputC_1_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_21.__PVT__io_outputC_1_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_21.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_21.__PVT__io_outputC_0_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_21.__PVT__io_outputC_0_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_21.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_36.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_36.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_36.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_36.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_36.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_36.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_36.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_36.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_2) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_21.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_21.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_21.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_21.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_37__2(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_37__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_36.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_38__1(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_38__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_22.__PVT__io_outputC_3_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_22.__PVT__io_outputC_3_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_22.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_22.__PVT__io_outputC_2_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_22.__PVT__io_outputC_2_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_22.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_22.__PVT__io_outputC_1_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_22.__PVT__io_outputC_1_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_22.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_22.__PVT__io_outputC_0_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_22.__PVT__io_outputC_0_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_22.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_37.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_37.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_37.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_37.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_37.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_37.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_37.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_37.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_2) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_22.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_22.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_22.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_22.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_38__2(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_38__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_37.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_39__1(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_39__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_23.__PVT__io_outputC_3_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_23.__PVT__io_outputC_3_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_23.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_23.__PVT__io_outputC_2_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_23.__PVT__io_outputC_2_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_23.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_23.__PVT__io_outputC_1_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_23.__PVT__io_outputC_1_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_23.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_23.__PVT__io_outputC_0_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_23.__PVT__io_outputC_0_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_23.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_38.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_38.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_38.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_38.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_38.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_38.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_38.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_38.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_2) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_23.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_23.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_23.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_23.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_39__2(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_39__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_38.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_40__1(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_40__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_24.__PVT__io_outputC_3_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_24.__PVT__io_outputC_3_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_24.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_24.__PVT__io_outputC_2_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_24.__PVT__io_outputC_2_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_24.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_24.__PVT__io_outputC_1_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_24.__PVT__io_outputC_1_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_24.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_24.__PVT__io_outputC_0_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_24.__PVT__io_outputC_0_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_24.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_39.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_39.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_39.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_39.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_39.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_39.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_39.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_39.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_2) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_24.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_24.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_24.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_24.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_40__2(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_40__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_39.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_41__1(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_41__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_25.__PVT__io_outputC_3_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_25.__PVT__io_outputC_3_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_25.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_25.__PVT__io_outputC_2_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_25.__PVT__io_outputC_2_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_25.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_25.__PVT__io_outputC_1_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_25.__PVT__io_outputC_1_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_25.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_25.__PVT__io_outputC_0_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_25.__PVT__io_outputC_0_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_25.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_40.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_40.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_40.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_40.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_40.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_40.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_40.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_40.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_2) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_25.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_25.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_25.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_25.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_41__2(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_41__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_40.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_42__1(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_42__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_26.__PVT__io_outputC_3_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_26.__PVT__io_outputC_3_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_26.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_26.__PVT__io_outputC_2_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_26.__PVT__io_outputC_2_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_26.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_26.__PVT__io_outputC_1_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_26.__PVT__io_outputC_1_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_26.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_26.__PVT__io_outputC_0_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_26.__PVT__io_outputC_0_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_26.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_41.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_41.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_41.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_41.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_41.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_41.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_41.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_41.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_2) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_26.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_26.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_26.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_26.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_42__2(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_42__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_41.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_43__1(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_43__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_27.__PVT__io_outputC_3_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_27.__PVT__io_outputC_3_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_27.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_27.__PVT__io_outputC_2_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_27.__PVT__io_outputC_2_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_27.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_27.__PVT__io_outputC_1_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_27.__PVT__io_outputC_1_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_27.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_27.__PVT__io_outputC_0_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_27.__PVT__io_outputC_0_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_27.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_42.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_42.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_42.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_42.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_42.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_42.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_42.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_42.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_2) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_27.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_27.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_27.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_27.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_43__2(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_43__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_42.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_44__1(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_44__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_28.__PVT__io_outputC_3_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_28.__PVT__io_outputC_3_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_28.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_28.__PVT__io_outputC_2_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_28.__PVT__io_outputC_2_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_28.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_28.__PVT__io_outputC_1_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_28.__PVT__io_outputC_1_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_28.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_28.__PVT__io_outputC_0_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_28.__PVT__io_outputC_0_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_28.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_43.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_43.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_43.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_43.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_43.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_43.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_43.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_43.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_2) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_28.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_28.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_28.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_28.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_44__2(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_44__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_43.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_45__1(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_45__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_29.__PVT__io_outputC_3_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_29.__PVT__io_outputC_3_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_29.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_29.__PVT__io_outputC_2_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_29.__PVT__io_outputC_2_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_29.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_29.__PVT__io_outputC_1_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_29.__PVT__io_outputC_1_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_29.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_29.__PVT__io_outputC_0_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_29.__PVT__io_outputC_0_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_29.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_44.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_44.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_44.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_44.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_44.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_44.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_44.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_44.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_2) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_29.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_29.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_29.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_29.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_45__2(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_45__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_44.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_46__0(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_46__0\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_45.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_46__1(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_46__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_30.__PVT__io_outputC_3_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_30.__PVT__io_outputC_3_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_30.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_30.__PVT__io_outputC_2_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_30.__PVT__io_outputC_2_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_30.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_30.__PVT__io_outputC_1_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_30.__PVT__io_outputC_1_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_30.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_30.__PVT__io_outputC_0_REG 
                                           << 2U)) 
                              | ((0x20000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_30.__PVT__io_outputC_0_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_30.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_45.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_45.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_45.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_45.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_45.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_45.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_45.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_45.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_2) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_30.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_30.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_30.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_30.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_48__1(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_48__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_32.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_32.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_32.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_32.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_32.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_32.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_32.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_32.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_3_r_3) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_3_r_3)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_3_r_3) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_3_r_3)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_3_r_3) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_3_r_3)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_3_r_3) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_3_r_3)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_3) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_32.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_32.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_32.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_32.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_48__2(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_48__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_3_r_3));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_49__1(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_49__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_33.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_33.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_33.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_33.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_33.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_33.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_33.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_33.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_48.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_48.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_48.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_48.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_48.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_48.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_48.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_48.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_3) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_33.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_33.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_33.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_33.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_49__2(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_49__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_48.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_50__1(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_50__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_34.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_34.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_34.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_34.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_34.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_34.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_34.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_34.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_49.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_49.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_49.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_49.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_49.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_49.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_49.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_49.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_3) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_34.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_34.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_34.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_34.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_50__2(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_50__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_49.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_51__1(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_51__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_35.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_35.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_35.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_35.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_35.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_35.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_35.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_35.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_50.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_50.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_50.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_50.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_50.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_50.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_50.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_50.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_3) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_35.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_35.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_35.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_35.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_51__2(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_51__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_50.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_52__1(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_52__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_36.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_36.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_36.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_36.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_36.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_36.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_36.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_36.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_51.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_51.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_51.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_51.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_51.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_51.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_51.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_51.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_3) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_36.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_36.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_36.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_36.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_52__2(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_52__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_51.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_53__1(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_53__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_37.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_37.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_37.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_37.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_37.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_37.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_37.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_37.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_52.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_52.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_52.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_52.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_52.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_52.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_52.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_52.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_3) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_37.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_37.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_37.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_37.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_53__2(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_53__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_52.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_54__1(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_54__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_38.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_38.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_38.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_38.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_38.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_38.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_38.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_38.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_53.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_53.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_53.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_53.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_53.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_53.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_53.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_53.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_3) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_38.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_38.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_38.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_38.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_54__2(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_54__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_53.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_55__1(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_55__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_39.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_39.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_39.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_39.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_39.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_39.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_39.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_39.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_54.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_54.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_54.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_54.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_54.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_54.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_54.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_54.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_3) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_39.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_39.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_39.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_39.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_55__2(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_55__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_54.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_56__1(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_56__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_40.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_40.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_40.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_40.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_40.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_40.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_40.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_40.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_55.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_55.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_55.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_55.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_55.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_55.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_55.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_55.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_3) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_40.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_40.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_40.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_40.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_56__2(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_56__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_55.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_57__1(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_57__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_41.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_41.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_41.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_41.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_41.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_41.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_41.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_41.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_56.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_56.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_56.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_56.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_56.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_56.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_56.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_56.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_3) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_41.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_41.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_41.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_41.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_57__2(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_57__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_56.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_58__1(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_58__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_42.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_42.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_42.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_42.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_42.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_42.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_42.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_42.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_57.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_57.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_57.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_57.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_57.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_57.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_57.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_57.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_3) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_42.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_42.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_42.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_42.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_58__2(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_58__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_57.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_59__1(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_59__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_43.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_43.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_43.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_43.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_43.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_43.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_43.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_43.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_58.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_58.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_58.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_58.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_58.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_58.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_58.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_58.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_3) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_43.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_43.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_43.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_43.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_59__2(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_59__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_58.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_60__1(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_60__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_44.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_44.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_44.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_44.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_44.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_44.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_44.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_44.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_59.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_59.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_59.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_59.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_59.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_59.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_59.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_59.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_3) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_44.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_44.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_44.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_44.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_60__2(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_60__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_59.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_61__1(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_61__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_45.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_45.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_45.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_45.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_45.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_45.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_45.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_45.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_60.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_60.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_60.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_60.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_60.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_60.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_60.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_60.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_3) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_45.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_45.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_45.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_45.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_61__2(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_61__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_60.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_62__0(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_62__0\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_61.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_62__1(Vaxi_sa_16x16_group_processing_element_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_32___sequent__TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_62__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x3ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_46.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_46.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_46.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_46.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_46.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_46.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x7ffffU & (((0x70000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x40000U & (vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_46.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_46.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_61.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_61.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_61.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_61.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_61.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_61.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_61.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_61.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_top_16x16__DOT__uut__DOT__REG_3) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_46.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_46.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_46.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_46.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}
