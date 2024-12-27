// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxi_sa_16x16.h for the primary calling header

#include "verilated.h"

#include "Vaxi_sa_16x16__Syms.h"
#include "Vaxi_sa_16x16_group_processing_element_64.h"

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_64__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_64__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_48.__PVT__io_outputC_3_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_48.__PVT__io_outputC_3_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_48.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_48.__PVT__io_outputC_2_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_48.__PVT__io_outputC_2_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_48.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_48.__PVT__io_outputC_1_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_48.__PVT__io_outputC_1_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_48.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_48.__PVT__io_outputC_0_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_48.__PVT__io_outputC_0_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_48.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_4_r_4) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_4_r_4)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_4_r_4) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_4_r_4)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_4_r_4) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_4_r_4)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_4_r_4) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_4_r_4)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_64) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_48.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_48.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_48.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_48.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_64__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_64__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_4_r_4));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_65__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_65__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_49.__PVT__io_outputC_3_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_49.__PVT__io_outputC_3_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_49.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_49.__PVT__io_outputC_2_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_49.__PVT__io_outputC_2_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_49.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_49.__PVT__io_outputC_1_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_49.__PVT__io_outputC_1_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_49.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_49.__PVT__io_outputC_0_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_49.__PVT__io_outputC_0_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_49.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_64.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_64.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_64.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_64.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_64.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_64.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_64.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_64.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_65) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_49.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_49.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_49.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_49.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_65__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_65__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_64.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_66__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_66__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_50.__PVT__io_outputC_3_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_50.__PVT__io_outputC_3_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_50.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_50.__PVT__io_outputC_2_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_50.__PVT__io_outputC_2_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_50.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_50.__PVT__io_outputC_1_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_50.__PVT__io_outputC_1_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_50.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_50.__PVT__io_outputC_0_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_50.__PVT__io_outputC_0_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_50.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_65.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_65.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_65.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_65.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_65.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_65.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_65.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_65.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_66) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_50.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_50.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_50.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_50.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_66__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_66__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_65.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_67__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_67__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_51.__PVT__io_outputC_3_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_51.__PVT__io_outputC_3_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_51.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_51.__PVT__io_outputC_2_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_51.__PVT__io_outputC_2_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_51.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_51.__PVT__io_outputC_1_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_51.__PVT__io_outputC_1_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_51.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_51.__PVT__io_outputC_0_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_51.__PVT__io_outputC_0_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_51.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_66.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_66.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_66.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_66.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_66.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_66.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_66.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_66.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_67) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_51.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_51.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_51.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_51.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_67__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_67__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_66.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_68__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_68__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_52.__PVT__io_outputC_3_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_52.__PVT__io_outputC_3_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_52.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_52.__PVT__io_outputC_2_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_52.__PVT__io_outputC_2_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_52.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_52.__PVT__io_outputC_1_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_52.__PVT__io_outputC_1_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_52.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_52.__PVT__io_outputC_0_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_52.__PVT__io_outputC_0_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_52.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_67.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_67.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_67.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_67.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_67.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_67.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_67.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_67.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_68) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_52.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_52.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_52.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_52.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_68__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_68__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_67.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_69__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_69__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_53.__PVT__io_outputC_3_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_53.__PVT__io_outputC_3_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_53.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_53.__PVT__io_outputC_2_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_53.__PVT__io_outputC_2_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_53.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_53.__PVT__io_outputC_1_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_53.__PVT__io_outputC_1_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_53.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_53.__PVT__io_outputC_0_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_53.__PVT__io_outputC_0_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_53.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_68.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_68.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_68.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_68.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_68.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_68.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_68.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_68.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_69) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_53.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_53.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_53.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_53.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_69__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_69__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_68.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_70__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_70__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_54.__PVT__io_outputC_3_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_54.__PVT__io_outputC_3_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_54.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_54.__PVT__io_outputC_2_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_54.__PVT__io_outputC_2_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_54.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_54.__PVT__io_outputC_1_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_54.__PVT__io_outputC_1_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_54.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_54.__PVT__io_outputC_0_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_54.__PVT__io_outputC_0_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_54.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_69.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_69.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_69.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_69.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_69.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_69.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_69.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_69.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_70) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_54.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_54.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_54.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_54.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_70__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_70__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_69.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_71__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_71__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_55.__PVT__io_outputC_3_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_55.__PVT__io_outputC_3_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_55.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_55.__PVT__io_outputC_2_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_55.__PVT__io_outputC_2_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_55.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_55.__PVT__io_outputC_1_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_55.__PVT__io_outputC_1_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_55.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_55.__PVT__io_outputC_0_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_55.__PVT__io_outputC_0_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_55.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_70.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_70.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_70.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_70.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_70.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_70.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_70.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_70.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_71) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_55.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_55.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_55.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_55.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_71__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_71__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_70.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_72__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_72__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_56.__PVT__io_outputC_3_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_56.__PVT__io_outputC_3_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_56.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_56.__PVT__io_outputC_2_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_56.__PVT__io_outputC_2_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_56.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_56.__PVT__io_outputC_1_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_56.__PVT__io_outputC_1_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_56.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_56.__PVT__io_outputC_0_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_56.__PVT__io_outputC_0_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_56.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_71.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_71.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_71.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_71.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_71.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_71.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_71.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_71.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_72) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_56.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_56.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_56.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_56.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_72__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_72__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_71.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_73__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_73__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_57.__PVT__io_outputC_3_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_57.__PVT__io_outputC_3_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_57.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_57.__PVT__io_outputC_2_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_57.__PVT__io_outputC_2_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_57.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_57.__PVT__io_outputC_1_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_57.__PVT__io_outputC_1_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_57.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_57.__PVT__io_outputC_0_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_57.__PVT__io_outputC_0_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_57.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_72.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_72.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_72.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_72.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_72.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_72.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_72.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_72.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_73) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_57.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_57.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_57.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_57.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_73__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_73__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_72.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_74__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_74__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_58.__PVT__io_outputC_3_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_58.__PVT__io_outputC_3_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_58.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_58.__PVT__io_outputC_2_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_58.__PVT__io_outputC_2_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_58.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_58.__PVT__io_outputC_1_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_58.__PVT__io_outputC_1_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_58.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_58.__PVT__io_outputC_0_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_58.__PVT__io_outputC_0_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_58.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_73.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_73.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_73.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_73.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_73.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_73.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_73.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_73.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_74) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_58.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_58.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_58.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_58.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_74__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_74__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_73.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_75__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_75__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_59.__PVT__io_outputC_3_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_59.__PVT__io_outputC_3_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_59.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_59.__PVT__io_outputC_2_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_59.__PVT__io_outputC_2_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_59.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_59.__PVT__io_outputC_1_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_59.__PVT__io_outputC_1_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_59.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_59.__PVT__io_outputC_0_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_59.__PVT__io_outputC_0_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_59.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_74.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_74.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_74.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_74.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_74.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_74.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_74.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_74.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_75) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_59.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_59.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_59.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_59.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_75__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_75__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_74.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_76__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_76__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_60.__PVT__io_outputC_3_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_60.__PVT__io_outputC_3_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_60.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_60.__PVT__io_outputC_2_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_60.__PVT__io_outputC_2_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_60.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_60.__PVT__io_outputC_1_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_60.__PVT__io_outputC_1_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_60.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_60.__PVT__io_outputC_0_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_60.__PVT__io_outputC_0_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_60.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_75.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_75.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_75.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_75.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_75.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_75.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_75.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_75.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_76) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_60.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_60.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_60.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_60.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_76__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_76__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_75.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_77__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_77__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_61.__PVT__io_outputC_3_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_61.__PVT__io_outputC_3_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_61.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_61.__PVT__io_outputC_2_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_61.__PVT__io_outputC_2_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_61.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_61.__PVT__io_outputC_1_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_61.__PVT__io_outputC_1_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_61.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_61.__PVT__io_outputC_0_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_61.__PVT__io_outputC_0_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_61.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_76.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_76.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_76.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_76.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_76.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_76.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_76.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_76.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_77) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_61.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_61.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_61.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_61.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_77__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_77__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_76.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_78__0(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_78__0\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_77.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_78__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_78__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_62.__PVT__io_outputC_3_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_62.__PVT__io_outputC_3_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_62.__PVT__io_outputC_3_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_62.__PVT__io_outputC_2_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_62.__PVT__io_outputC_2_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_62.__PVT__io_outputC_2_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_62.__PVT__io_outputC_1_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_62.__PVT__io_outputC_1_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_62.__PVT__io_outputC_1_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_62.__PVT__io_outputC_0_REG 
                                           << 2U)) 
                              | ((0x40000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_62.__PVT__io_outputC_0_REG 
                                              << 1U)) 
                                 | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_62.__PVT__io_outputC_0_REG))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_77.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_77.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_77.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_77.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_77.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_77.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_77.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_77.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_78) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_62.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_62.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_62.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_62.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_80__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_80__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_64.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_64.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_64.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_64.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_64.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_64.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_64.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_64.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_5_r_5) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_5_r_5)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_5_r_5) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_5_r_5)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_5_r_5) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_5_r_5)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_5_r_5) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_5_r_5)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_80) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_64.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_64.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_64.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_64.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_80__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_80__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_5_r_5));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_81__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_81__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_65.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_65.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_65.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_65.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_65.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_65.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_65.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_65.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_80.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_80.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_80.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_80.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_80.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_80.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_80.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_80.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_81) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_65.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_65.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_65.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_65.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_81__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_81__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_80.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_82__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_82__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_66.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_66.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_66.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_66.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_66.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_66.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_66.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_66.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_81.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_81.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_81.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_81.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_81.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_81.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_81.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_81.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_82) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_66.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_66.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_66.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_66.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_82__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_82__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_81.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_83__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_83__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_67.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_67.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_67.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_67.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_67.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_67.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_67.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_67.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_82.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_82.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_82.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_82.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_82.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_82.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_82.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_82.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_83) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_67.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_67.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_67.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_67.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_83__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_83__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_82.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_84__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_84__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_68.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_68.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_68.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_68.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_68.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_68.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_68.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_68.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_83.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_83.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_83.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_83.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_83.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_83.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_83.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_83.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_84) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_68.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_68.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_68.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_68.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_84__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_84__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_83.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_85__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_85__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_69.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_69.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_69.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_69.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_69.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_69.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_69.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_69.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_84.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_84.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_84.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_84.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_84.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_84.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_84.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_84.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_85) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_69.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_69.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_69.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_69.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_85__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_85__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_84.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_86__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_86__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_70.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_70.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_70.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_70.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_70.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_70.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_70.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_70.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_85.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_85.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_85.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_85.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_85.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_85.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_85.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_85.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_86) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_70.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_70.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_70.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_70.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_86__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_86__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_85.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_87__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_87__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_71.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_71.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_71.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_71.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_71.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_71.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_71.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_71.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_86.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_86.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_86.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_86.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_86.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_86.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_86.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_86.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_87) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_71.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_71.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_71.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_71.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_87__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_87__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_86.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_88__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_88__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_72.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_72.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_72.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_72.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_72.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_72.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_72.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_72.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_87.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_87.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_87.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_87.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_87.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_87.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_87.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_87.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_88) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_72.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_72.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_72.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_72.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_88__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_88__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_87.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_89__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_89__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_73.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_73.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_73.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_73.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_73.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_73.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_73.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_73.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_88.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_88.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_88.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_88.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_88.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_88.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_88.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_88.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_89) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_73.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_73.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_73.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_73.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_89__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_89__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_88.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_90__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_90__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_74.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_74.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_74.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_74.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_74.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_74.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_74.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_74.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_89.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_89.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_89.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_89.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_89.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_89.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_89.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_89.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_90) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_74.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_74.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_74.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_74.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_90__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_90__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_89.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_91__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_91__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_75.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_75.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_75.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_75.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_75.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_75.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_75.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_75.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_90.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_90.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_90.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_90.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_90.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_90.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_90.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_90.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_91) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_75.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_75.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_75.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_75.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_91__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_91__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_90.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_92__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_92__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_76.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_76.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_76.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_76.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_76.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_76.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_76.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_76.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_91.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_91.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_91.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_91.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_91.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_91.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_91.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_91.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_92) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_76.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_76.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_76.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_76.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_92__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_92__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_91.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_93__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_93__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_77.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_77.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_77.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_77.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_77.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_77.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_77.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_77.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_92.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_92.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_92.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_92.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_92.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_92.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_92.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_92.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_93) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_77.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_77.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_77.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_77.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_93__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_93__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_92.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_94__0(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_94__0\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_93.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_94__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_94__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_78.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_78.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_78.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_78.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_78.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_78.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_78.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_78.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_93.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_93.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_93.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_93.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_93.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_93.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_93.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_93.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_94) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_78.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_78.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_78.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_78.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_96__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_96__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_80.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_80.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_80.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_80.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_80.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_80.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_80.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_80.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_6_r_6) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_6_r_6)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_6_r_6) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_6_r_6)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_6_r_6) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_6_r_6)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_6_r_6) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_6_r_6)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_96) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_80.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_80.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_80.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_80.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_96__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_96__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_6_r_6));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_97__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_97__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_81.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_81.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_81.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_81.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_81.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_81.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_81.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_81.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_96.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_96.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_96.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_96.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_96.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_96.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_96.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_96.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_97) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_81.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_81.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_81.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_81.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_97__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_97__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_96.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_98__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_98__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_82.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_82.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_82.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_82.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_82.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_82.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_82.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_82.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_97.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_97.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_97.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_97.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_97.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_97.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_97.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_97.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_98) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_82.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_82.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_82.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_82.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_98__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_98__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_97.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_99__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_99__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_83.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_83.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_83.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_83.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_83.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_83.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_83.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_83.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_98.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_98.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_98.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_98.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_98.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_98.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_98.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_98.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_99) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_83.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_83.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_83.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_83.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_99__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_99__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_98.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_100__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_100__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_84.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_84.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_84.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_84.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_84.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_84.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_84.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_84.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_99.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_99.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_99.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_99.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_99.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_99.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_99.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_99.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_100) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_84.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_84.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_84.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_84.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_100__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_100__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_99.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_101__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_101__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_85.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_85.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_85.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_85.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_85.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_85.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_85.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_85.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_100.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_100.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_100.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_100.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_100.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_100.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_100.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_100.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_101) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_85.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_85.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_85.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_85.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_101__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_101__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_100.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_102__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_102__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_86.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_86.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_86.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_86.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_86.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_86.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_86.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_86.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_101.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_101.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_101.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_101.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_101.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_101.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_101.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_101.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_102) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_86.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_86.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_86.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_86.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_102__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_102__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_101.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_103__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_103__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_87.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_87.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_87.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_87.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_87.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_87.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_87.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_87.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_102.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_102.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_102.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_102.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_102.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_102.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_102.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_102.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_103) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_87.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_87.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_87.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_87.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_103__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_103__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_102.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_104__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_104__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_88.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_88.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_88.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_88.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_88.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_88.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_88.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_88.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_103.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_103.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_103.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_103.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_103.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_103.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_103.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_103.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_104) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_88.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_88.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_88.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_88.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_104__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_104__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_103.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_105__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_105__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_89.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_89.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_89.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_89.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_89.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_89.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_89.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_89.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_104.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_104.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_104.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_104.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_104.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_104.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_104.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_104.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_105) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_89.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_89.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_89.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_89.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_105__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_105__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_104.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_106__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_106__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_90.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_90.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_90.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_90.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_90.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_90.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_90.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_90.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_105.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_105.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_105.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_105.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_105.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_105.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_105.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_105.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_106) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_90.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_90.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_90.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_90.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_106__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_106__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_105.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_107__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_107__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_91.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_91.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_91.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_91.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_91.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_91.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_91.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_91.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_106.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_106.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_106.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_106.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_106.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_106.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_106.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_106.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_107) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_91.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_91.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_91.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_91.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_107__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_107__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_106.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_108__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_108__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_92.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_92.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_92.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_92.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_92.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_92.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_92.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_92.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_107.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_107.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_107.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_107.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_107.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_107.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_107.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_107.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_108) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_92.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_92.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_92.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_92.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_108__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_108__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_107.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_109__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_109__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_93.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_93.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_93.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_93.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_93.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_93.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_93.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_93.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_108.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_108.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_108.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_108.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_108.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_108.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_108.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_108.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_109) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_93.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_93.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_93.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_93.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_109__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_109__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_108.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_110__0(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_110__0\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_109.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_110__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_110__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_94.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_94.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_94.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_94.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_94.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_94.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_94.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_94.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_109.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_109.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_109.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_109.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_109.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_109.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_109.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_109.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_110) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_94.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_94.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_94.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_94.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_112__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_112__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_96.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_96.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_96.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_96.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_96.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_96.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_96.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_96.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_7_r_7) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_7_r_7)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_7_r_7) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_7_r_7)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_7_r_7) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_7_r_7)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_7_r_7) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_7_r_7)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_112) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_96.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_96.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_96.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_96.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_112__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_112__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_7_r_7));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_113__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_113__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_97.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_97.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_97.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_97.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_97.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_97.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_97.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_97.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_112.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_112.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_112.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_112.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_112.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_112.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_112.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_112.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_113) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_97.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_97.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_97.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_97.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_113__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_113__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_112.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_114__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_114__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_98.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_98.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_98.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_98.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_98.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_98.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_98.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_98.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_113.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_113.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_113.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_113.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_113.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_113.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_113.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_113.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_114) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_98.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_98.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_98.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_98.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_114__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_114__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_113.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_115__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_115__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_99.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_99.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_99.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_99.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_99.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_99.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_99.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_99.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_114.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_114.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_114.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_114.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_114.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_114.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_114.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_114.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_115) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_99.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_99.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_99.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_99.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_115__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_115__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_114.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_116__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_116__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_100.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_100.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_100.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_100.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_100.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_100.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_100.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_100.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_115.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_115.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_115.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_115.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_115.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_115.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_115.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_115.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_116) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_100.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_100.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_100.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_100.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_116__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_116__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_115.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_117__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_117__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_101.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_101.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_101.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_101.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_101.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_101.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_101.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_101.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_116.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_116.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_116.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_116.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_116.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_116.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_116.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_116.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_117) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_101.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_101.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_101.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_101.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_117__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_117__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_116.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_118__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_118__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_102.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_102.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_102.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_102.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_102.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_102.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_102.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_102.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_117.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_117.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_117.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_117.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_117.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_117.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_117.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_117.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_118) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_102.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_102.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_102.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_102.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_118__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_118__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_117.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_119__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_119__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_103.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_103.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_103.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_103.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_103.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_103.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_103.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_103.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_118.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_118.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_118.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_118.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_118.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_118.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_118.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_118.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_119) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_103.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_103.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_103.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_103.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_119__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_119__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_118.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_120__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_120__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_104.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_104.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_104.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_104.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_104.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_104.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_104.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_104.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_119.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_119.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_119.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_119.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_119.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_119.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_119.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_119.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_120) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_104.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_104.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_104.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_104.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_120__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_120__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_119.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_121__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_121__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_105.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_105.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_105.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_105.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_105.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_105.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_105.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_105.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_120.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_120.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_120.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_120.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_120.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_120.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_120.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_120.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_121) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_105.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_105.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_105.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_105.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_121__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_121__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_120.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_122__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_122__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_106.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_106.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_106.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_106.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_106.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_106.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_106.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_106.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_121.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_121.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_121.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_121.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_121.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_121.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_121.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_121.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_122) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_106.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_106.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_106.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_106.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_122__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_122__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_121.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_123__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_123__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_107.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_107.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_107.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_107.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_107.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_107.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_107.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_107.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_122.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_122.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_122.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_122.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_122.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_122.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_122.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_122.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_123) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_107.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_107.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_107.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_107.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_123__2(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_123__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_122.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_124__1(Vaxi_sa_16x16_group_processing_element_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_64___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_124__1\n"); );
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
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_108.__PVT__io_outputC_3_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_108.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_108.__PVT__io_outputC_2_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_108.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_108.__PVT__io_outputC_1_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_108.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0xfffffU & (((0xf0000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x80000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_108.__PVT__io_outputC_0_REG 
                                           << 1U)) 
                              | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_108.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_123.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_123.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_123.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_123.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_123.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_123.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_123.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_123.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_124) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_108.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_108.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_108.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_108.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}
