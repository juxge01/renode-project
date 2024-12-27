// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxi_sa_16x16.h for the primary calling header

#include "verilated.h"

#include "Vaxi_sa_16x16__Syms.h"
#include "Vaxi_sa_16x16_group_processing_element_128.h"

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_128__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_128__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_112.__PVT__io_outputC_3_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_112.__PVT__io_outputC_3_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_112.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_112.__PVT__io_outputC_2_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_112.__PVT__io_outputC_2_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_112.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_112.__PVT__io_outputC_1_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_112.__PVT__io_outputC_1_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_112.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_112.__PVT__io_outputC_0_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_112.__PVT__io_outputC_0_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_112.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_8_r_8) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_8_r_8)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_8_r_8) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_8_r_8)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_8_r_8) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_8_r_8)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_8_r_8) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_8_r_8)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_128) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_112.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_112.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_112.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_112.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_128__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_128__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_8_r_8));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_129__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_129__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_113.__PVT__io_outputC_3_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_113.__PVT__io_outputC_3_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_113.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_113.__PVT__io_outputC_2_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_113.__PVT__io_outputC_2_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_113.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_113.__PVT__io_outputC_1_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_113.__PVT__io_outputC_1_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_113.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_113.__PVT__io_outputC_0_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_113.__PVT__io_outputC_0_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_113.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_128.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_128.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_128.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_128.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_128.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_128.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_128.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_128.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_129) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_113.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_113.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_113.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_113.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_129__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_129__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_128.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_130__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_130__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_114.__PVT__io_outputC_3_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_114.__PVT__io_outputC_3_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_114.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_114.__PVT__io_outputC_2_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_114.__PVT__io_outputC_2_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_114.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_114.__PVT__io_outputC_1_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_114.__PVT__io_outputC_1_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_114.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_114.__PVT__io_outputC_0_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_114.__PVT__io_outputC_0_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_114.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_129.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_129.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_129.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_129.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_129.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_129.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_129.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_129.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_130) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_114.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_114.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_114.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_114.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_130__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_130__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_129.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_131__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_131__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_115.__PVT__io_outputC_3_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_115.__PVT__io_outputC_3_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_115.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_115.__PVT__io_outputC_2_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_115.__PVT__io_outputC_2_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_115.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_115.__PVT__io_outputC_1_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_115.__PVT__io_outputC_1_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_115.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_115.__PVT__io_outputC_0_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_115.__PVT__io_outputC_0_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_115.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_130.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_130.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_130.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_130.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_130.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_130.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_130.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_130.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_131) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_115.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_115.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_115.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_115.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_131__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_131__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_130.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_132__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_132__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_116.__PVT__io_outputC_3_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_116.__PVT__io_outputC_3_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_116.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_116.__PVT__io_outputC_2_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_116.__PVT__io_outputC_2_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_116.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_116.__PVT__io_outputC_1_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_116.__PVT__io_outputC_1_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_116.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_116.__PVT__io_outputC_0_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_116.__PVT__io_outputC_0_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_116.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_131.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_131.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_131.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_131.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_131.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_131.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_131.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_131.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_132) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_116.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_116.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_116.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_116.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_132__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_132__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_131.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_133__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_133__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_117.__PVT__io_outputC_3_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_117.__PVT__io_outputC_3_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_117.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_117.__PVT__io_outputC_2_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_117.__PVT__io_outputC_2_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_117.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_117.__PVT__io_outputC_1_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_117.__PVT__io_outputC_1_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_117.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_117.__PVT__io_outputC_0_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_117.__PVT__io_outputC_0_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_117.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_132.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_132.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_132.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_132.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_132.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_132.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_132.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_132.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_133) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_117.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_117.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_117.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_117.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_133__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_133__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_132.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_134__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_134__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_118.__PVT__io_outputC_3_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_118.__PVT__io_outputC_3_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_118.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_118.__PVT__io_outputC_2_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_118.__PVT__io_outputC_2_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_118.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_118.__PVT__io_outputC_1_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_118.__PVT__io_outputC_1_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_118.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_118.__PVT__io_outputC_0_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_118.__PVT__io_outputC_0_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_118.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_133.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_133.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_133.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_133.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_133.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_133.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_133.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_133.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_134) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_118.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_118.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_118.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_118.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_134__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_134__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_133.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_135__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_135__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_119.__PVT__io_outputC_3_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_119.__PVT__io_outputC_3_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_119.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_119.__PVT__io_outputC_2_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_119.__PVT__io_outputC_2_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_119.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_119.__PVT__io_outputC_1_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_119.__PVT__io_outputC_1_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_119.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_119.__PVT__io_outputC_0_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_119.__PVT__io_outputC_0_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_119.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_134.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_134.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_134.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_134.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_134.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_134.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_134.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_134.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_135) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_119.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_119.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_119.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_119.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_135__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_135__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_134.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_136__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_136__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_120.__PVT__io_outputC_3_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_120.__PVT__io_outputC_3_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_120.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_120.__PVT__io_outputC_2_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_120.__PVT__io_outputC_2_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_120.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_120.__PVT__io_outputC_1_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_120.__PVT__io_outputC_1_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_120.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_120.__PVT__io_outputC_0_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_120.__PVT__io_outputC_0_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_120.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_135.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_135.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_135.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_135.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_135.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_135.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_135.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_135.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_136) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_120.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_120.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_120.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_120.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_136__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_136__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_135.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_137__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_137__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_121.__PVT__io_outputC_3_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_121.__PVT__io_outputC_3_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_121.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_121.__PVT__io_outputC_2_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_121.__PVT__io_outputC_2_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_121.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_121.__PVT__io_outputC_1_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_121.__PVT__io_outputC_1_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_121.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_121.__PVT__io_outputC_0_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_121.__PVT__io_outputC_0_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_121.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_136.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_136.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_136.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_136.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_136.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_136.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_136.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_136.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_137) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_121.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_121.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_121.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_121.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_137__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_137__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_136.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_138__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_138__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_122.__PVT__io_outputC_3_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_122.__PVT__io_outputC_3_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_122.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_122.__PVT__io_outputC_2_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_122.__PVT__io_outputC_2_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_122.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_122.__PVT__io_outputC_1_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_122.__PVT__io_outputC_1_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_122.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_122.__PVT__io_outputC_0_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_122.__PVT__io_outputC_0_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_122.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_137.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_137.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_137.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_137.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_137.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_137.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_137.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_137.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_138) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_122.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_122.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_122.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_122.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_138__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_138__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_137.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_139__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_139__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_123.__PVT__io_outputC_3_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_123.__PVT__io_outputC_3_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_123.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_123.__PVT__io_outputC_2_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_123.__PVT__io_outputC_2_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_123.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_123.__PVT__io_outputC_1_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_123.__PVT__io_outputC_1_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_123.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_123.__PVT__io_outputC_0_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_123.__PVT__io_outputC_0_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_123.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_138.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_138.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_138.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_138.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_138.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_138.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_138.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_138.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_139) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_123.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_123.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_123.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_123.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_139__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_139__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_138.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_140__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_140__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_124.__PVT__io_outputC_3_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_124.__PVT__io_outputC_3_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_124.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_124.__PVT__io_outputC_2_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_124.__PVT__io_outputC_2_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_124.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_124.__PVT__io_outputC_1_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_124.__PVT__io_outputC_1_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_124.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_124.__PVT__io_outputC_0_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_124.__PVT__io_outputC_0_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_124.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_139.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_139.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_139.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_139.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_139.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_139.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_139.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_139.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_140) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_124.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_124.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_124.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_124.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_140__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_140__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_139.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_141__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_141__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_125.__PVT__io_outputC_3_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_125.__PVT__io_outputC_3_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_125.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_125.__PVT__io_outputC_2_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_125.__PVT__io_outputC_2_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_125.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_125.__PVT__io_outputC_1_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_125.__PVT__io_outputC_1_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_125.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_125.__PVT__io_outputC_0_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_125.__PVT__io_outputC_0_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_125.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_140.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_140.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_140.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_140.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_140.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_140.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_140.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_140.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_141) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_125.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_125.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_125.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_125.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_141__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_141__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_140.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_142__0(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_142__0\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_141.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_142__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_142__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_126.__PVT__io_outputC_3_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_126.__PVT__io_outputC_3_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_126.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_126.__PVT__io_outputC_2_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_126.__PVT__io_outputC_2_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_126.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_126.__PVT__io_outputC_1_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_126.__PVT__io_outputC_1_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_126.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_126.__PVT__io_outputC_0_REG 
                                             << 2U)) 
                               | ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_126.__PVT__io_outputC_0_REG 
                                               << 1U)) 
                                  | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_126.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_141.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_141.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_141.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_141.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_141.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_141.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_141.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_141.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_142) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_126.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_126.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_126.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_126.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_144__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_144__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_128.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_128.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_128.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_128.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_128.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_128.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_128.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_128.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_9_r_9) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_9_r_9)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_9_r_9) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_9_r_9)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_9_r_9) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_9_r_9)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_9_r_9) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_9_r_9)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_144) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_128.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_128.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_128.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_128.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_144__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_144__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_9_r_9));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_145__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_145__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_129.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_129.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_129.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_129.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_129.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_129.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_129.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_129.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_144.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_144.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_144.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_144.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_144.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_144.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_144.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_144.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_145) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_129.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_129.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_129.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_129.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_145__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_145__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_144.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_146__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_146__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_130.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_130.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_130.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_130.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_130.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_130.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_130.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_130.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_145.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_145.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_145.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_145.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_145.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_145.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_145.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_145.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_146) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_130.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_130.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_130.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_130.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_146__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_146__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_145.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_147__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_147__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_131.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_131.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_131.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_131.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_131.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_131.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_131.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_131.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_146.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_146.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_146.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_146.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_146.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_146.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_146.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_146.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_147) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_131.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_131.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_131.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_131.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_147__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_147__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_146.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_148__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_148__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_132.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_132.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_132.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_132.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_132.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_132.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_132.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_132.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_147.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_147.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_147.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_147.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_147.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_147.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_147.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_147.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_148) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_132.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_132.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_132.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_132.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_148__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_148__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_147.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_149__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_149__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_133.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_133.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_133.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_133.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_133.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_133.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_133.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_133.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_148.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_148.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_148.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_148.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_148.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_148.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_148.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_148.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_149) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_133.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_133.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_133.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_133.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_149__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_149__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_148.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_150__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_150__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_134.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_134.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_134.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_134.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_134.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_134.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_134.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_134.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_149.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_149.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_149.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_149.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_149.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_149.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_149.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_149.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_150) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_134.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_134.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_134.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_134.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_150__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_150__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_149.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_151__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_151__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_135.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_135.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_135.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_135.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_135.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_135.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_135.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_135.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_150.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_150.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_150.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_150.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_150.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_150.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_150.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_150.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_151) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_135.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_135.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_135.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_135.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_151__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_151__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_150.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_152__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_152__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_136.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_136.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_136.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_136.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_136.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_136.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_136.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_136.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_151.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_151.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_151.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_151.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_151.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_151.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_151.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_151.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_152) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_136.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_136.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_136.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_136.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_152__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_152__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_151.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_153__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_153__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_137.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_137.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_137.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_137.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_137.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_137.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_137.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_137.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_152.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_152.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_152.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_152.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_152.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_152.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_152.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_152.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_153) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_137.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_137.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_137.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_137.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_153__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_153__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_152.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_154__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_154__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_138.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_138.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_138.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_138.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_138.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_138.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_138.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_138.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_153.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_153.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_153.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_153.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_153.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_153.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_153.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_153.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_154) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_138.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_138.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_138.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_138.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_154__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_154__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_153.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_155__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_155__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_139.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_139.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_139.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_139.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_139.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_139.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_139.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_139.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_154.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_154.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_154.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_154.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_154.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_154.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_154.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_154.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_155) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_139.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_139.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_139.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_139.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_155__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_155__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_154.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_156__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_156__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_140.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_140.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_140.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_140.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_140.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_140.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_140.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_140.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_155.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_155.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_155.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_155.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_155.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_155.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_155.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_155.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_156) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_140.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_140.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_140.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_140.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_156__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_156__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_155.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_157__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_157__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_141.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_141.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_141.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_141.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_141.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_141.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_141.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_141.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_156.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_156.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_156.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_156.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_156.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_156.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_156.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_156.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_157) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_141.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_141.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_141.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_141.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_157__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_157__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_156.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_158__0(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_158__0\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_157.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_158__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_158__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_142.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_142.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_142.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_142.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_142.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_142.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_142.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_142.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_157.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_157.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_157.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_157.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_157.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_157.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_157.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_157.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_158) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_142.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_142.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_142.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_142.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_160__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_160__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_144.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_144.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_144.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_144.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_144.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_144.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_144.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_144.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_10_r_10) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_10_r_10)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_10_r_10) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_10_r_10)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_10_r_10) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_10_r_10)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_10_r_10) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_10_r_10)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_160) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_144.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_144.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_144.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_144.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_160__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_160__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_10_r_10));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_161__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_161__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_145.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_145.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_145.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_145.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_145.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_145.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_145.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_145.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_160.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_160.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_160.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_160.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_160.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_160.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_160.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_160.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_161) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_145.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_145.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_145.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_145.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_161__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_161__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_160.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_162__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_162__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_146.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_146.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_146.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_146.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_146.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_146.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_146.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_146.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_161.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_161.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_161.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_161.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_161.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_161.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_161.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_161.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_162) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_146.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_146.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_146.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_146.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_162__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_162__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_161.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_163__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_163__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_147.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_147.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_147.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_147.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_147.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_147.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_147.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_147.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_162.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_162.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_162.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_162.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_162.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_162.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_162.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_162.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_163) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_147.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_147.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_147.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_147.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_163__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_163__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_162.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_164__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_164__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_148.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_148.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_148.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_148.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_148.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_148.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_148.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_148.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_163.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_163.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_163.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_163.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_163.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_163.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_163.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_163.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_164) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_148.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_148.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_148.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_148.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_164__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_164__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_163.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_165__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_165__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_149.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_149.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_149.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_149.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_149.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_149.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_149.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_149.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_164.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_164.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_164.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_164.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_164.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_164.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_164.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_164.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_165) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_149.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_149.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_149.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_149.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_165__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_165__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_164.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_166__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_166__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_150.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_150.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_150.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_150.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_150.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_150.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_150.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_150.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_165.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_165.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_165.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_165.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_165.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_165.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_165.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_165.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_166) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_150.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_150.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_150.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_150.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_166__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_166__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_165.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_167__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_167__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_151.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_151.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_151.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_151.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_151.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_151.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_151.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_151.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_166.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_166.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_166.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_166.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_166.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_166.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_166.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_166.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_167) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_151.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_151.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_151.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_151.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_167__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_167__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_166.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_168__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_168__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_152.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_152.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_152.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_152.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_152.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_152.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_152.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_152.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_167.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_167.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_167.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_167.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_167.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_167.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_167.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_167.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_168) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_152.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_152.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_152.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_152.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_168__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_168__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_167.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_169__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_169__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_153.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_153.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_153.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_153.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_153.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_153.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_153.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_153.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_168.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_168.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_168.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_168.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_168.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_168.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_168.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_168.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_169) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_153.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_153.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_153.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_153.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_169__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_169__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_168.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_170__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_170__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_154.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_154.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_154.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_154.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_154.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_154.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_154.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_154.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_169.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_169.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_169.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_169.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_169.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_169.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_169.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_169.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_170) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_154.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_154.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_154.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_154.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_170__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_170__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_169.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_171__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_171__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_155.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_155.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_155.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_155.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_155.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_155.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_155.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_155.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_170.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_170.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_170.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_170.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_170.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_170.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_170.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_170.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_171) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_155.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_155.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_155.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_155.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_171__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_171__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_170.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_172__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_172__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_156.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_156.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_156.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_156.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_156.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_156.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_156.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_156.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_171.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_171.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_171.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_171.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_171.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_171.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_171.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_171.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_172) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_156.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_156.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_156.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_156.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_172__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_172__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_171.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_173__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_173__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_157.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_157.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_157.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_157.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_157.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_157.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_157.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_157.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_172.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_172.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_172.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_172.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_172.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_172.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_172.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_172.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_173) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_157.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_157.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_157.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_157.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_173__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_173__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_172.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_174__0(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_174__0\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_173.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_174__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_174__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_158.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_158.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_158.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_158.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_158.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_158.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_158.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_158.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_173.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_173.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_173.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_173.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_173.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_173.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_173.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_173.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_174) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_158.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_158.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_158.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_158.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_176__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_176__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_160.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_160.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_160.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_160.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_160.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_160.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_160.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_160.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_11_r_11) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_11_r_11)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_11_r_11) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_11_r_11)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_11_r_11) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_11_r_11)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_11_r_11) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_11_r_11)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_176) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_160.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_160.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_160.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_160.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_176__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_176__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_11_r_11));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_177__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_177__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_161.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_161.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_161.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_161.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_161.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_161.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_161.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_161.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_176.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_176.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_176.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_176.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_176.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_176.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_176.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_176.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_177) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_161.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_161.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_161.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_161.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_177__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_177__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_176.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_178__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_178__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_162.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_162.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_162.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_162.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_162.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_162.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_162.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_162.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_177.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_177.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_177.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_177.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_177.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_177.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_177.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_177.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_178) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_162.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_162.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_162.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_162.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_178__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_178__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_177.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_179__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_179__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_163.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_163.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_163.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_163.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_163.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_163.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_163.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_163.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_178.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_178.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_178.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_178.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_178.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_178.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_178.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_178.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_179) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_163.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_163.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_163.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_163.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_179__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_179__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_178.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_180__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_180__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_164.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_164.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_164.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_164.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_164.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_164.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_164.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_164.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_179.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_179.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_179.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_179.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_179.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_179.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_179.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_179.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_180) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_164.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_164.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_164.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_164.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_180__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_180__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_179.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_181__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_181__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_165.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_165.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_165.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_165.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_165.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_165.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_165.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_165.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_180.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_180.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_180.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_180.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_180.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_180.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_180.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_180.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_181) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_165.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_165.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_165.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_165.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_181__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_181__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_180.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_182__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_182__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_166.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_166.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_166.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_166.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_166.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_166.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_166.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_166.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_181.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_181.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_181.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_181.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_181.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_181.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_181.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_181.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_182) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_166.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_166.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_166.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_166.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_182__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_182__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_181.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_183__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_183__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_167.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_167.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_167.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_167.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_167.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_167.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_167.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_167.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_182.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_182.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_182.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_182.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_182.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_182.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_182.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_182.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_183) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_167.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_167.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_167.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_167.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_183__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_183__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_182.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_184__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_184__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_168.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_168.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_168.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_168.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_168.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_168.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_168.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_168.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_183.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_183.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_183.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_183.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_183.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_183.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_183.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_183.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_184) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_168.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_168.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_168.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_168.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_184__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_184__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_183.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_185__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_185__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_169.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_169.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_169.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_169.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_169.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_169.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_169.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_169.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_184.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_184.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_184.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_184.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_184.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_184.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_184.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_184.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_185) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_169.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_169.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_169.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_169.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_185__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_185__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_184.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_186__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_186__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_170.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_170.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_170.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_170.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_170.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_170.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_170.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_170.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_185.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_185.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_185.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_185.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_185.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_185.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_185.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_185.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_186) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_170.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_170.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_170.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_170.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_186__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_186__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_185.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_187__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_187__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_171.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_171.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_171.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_171.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_171.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_171.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_171.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_171.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_186.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_186.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_186.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_186.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_186.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_186.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_186.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_186.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_187) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_171.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_171.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_171.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_171.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_187__2(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_187__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_186.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_188__1(Vaxi_sa_16x16_group_processing_element_128* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_128___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_188__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0xfffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_172.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_172.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_172.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_172.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_172.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_172.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_172.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_172.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_187.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_187.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_187.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_187.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_187.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_187.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_187.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_187.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_188) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_172.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_172.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_172.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_172.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}
