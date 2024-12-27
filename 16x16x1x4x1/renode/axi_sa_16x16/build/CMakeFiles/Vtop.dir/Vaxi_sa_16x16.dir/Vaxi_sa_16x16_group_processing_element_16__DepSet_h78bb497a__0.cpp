// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxi_sa_16x16.h for the primary calling header

#include "verilated.h"

#include "Vaxi_sa_16x16__Syms.h"
#include "Vaxi_sa_16x16_group_processing_element_16.h"

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_16__1(Vaxi_sa_16x16_group_processing_element_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_16__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element.__PVT__io_outputC_3_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element.__PVT__io_outputC_3_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element.__PVT__io_outputC_3_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element.__PVT__io_outputC_2_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element.__PVT__io_outputC_2_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element.__PVT__io_outputC_2_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element.__PVT__io_outputC_1_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element.__PVT__io_outputC_1_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element.__PVT__io_outputC_1_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element.__PVT__io_outputC_0_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element.__PVT__io_outputC_0_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element.__PVT__io_outputC_0_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_1_r_1) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_1_r_1)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_1_r_1) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_1_r_1)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_1_r_1) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_1_r_1)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_1_r_1) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_1_r_1)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_16) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_16__2(Vaxi_sa_16x16_group_processing_element_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_16__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_1_r_1));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_17__1(Vaxi_sa_16x16_group_processing_element_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_17__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_1.__PVT__io_outputC_3_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_1.__PVT__io_outputC_3_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_1.__PVT__io_outputC_3_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_1.__PVT__io_outputC_2_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_1.__PVT__io_outputC_2_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_1.__PVT__io_outputC_2_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_1.__PVT__io_outputC_1_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_1.__PVT__io_outputC_1_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_1.__PVT__io_outputC_1_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_1.__PVT__io_outputC_0_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_1.__PVT__io_outputC_0_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_1.__PVT__io_outputC_0_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_16.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_16.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_16.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_16.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_16.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_16.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_16.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_16.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_17) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_1.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_1.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_1.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_1.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_17__2(Vaxi_sa_16x16_group_processing_element_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_17__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_16.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_18__1(Vaxi_sa_16x16_group_processing_element_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_18__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_2.__PVT__io_outputC_3_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_2.__PVT__io_outputC_3_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_2.__PVT__io_outputC_3_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_2.__PVT__io_outputC_2_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_2.__PVT__io_outputC_2_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_2.__PVT__io_outputC_2_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_2.__PVT__io_outputC_1_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_2.__PVT__io_outputC_1_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_2.__PVT__io_outputC_1_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_2.__PVT__io_outputC_0_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_2.__PVT__io_outputC_0_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_2.__PVT__io_outputC_0_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_17.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_17.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_17.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_17.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_17.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_17.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_17.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_17.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_18) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_2.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_2.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_2.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_2.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_18__2(Vaxi_sa_16x16_group_processing_element_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_18__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_17.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_19__1(Vaxi_sa_16x16_group_processing_element_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_19__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_3.__PVT__io_outputC_3_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_3.__PVT__io_outputC_3_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_3.__PVT__io_outputC_3_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_3.__PVT__io_outputC_2_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_3.__PVT__io_outputC_2_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_3.__PVT__io_outputC_2_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_3.__PVT__io_outputC_1_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_3.__PVT__io_outputC_1_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_3.__PVT__io_outputC_1_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_3.__PVT__io_outputC_0_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_3.__PVT__io_outputC_0_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_3.__PVT__io_outputC_0_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_18.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_18.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_18.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_18.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_18.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_18.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_18.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_18.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_19) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_3.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_3.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_3.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_3.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_19__2(Vaxi_sa_16x16_group_processing_element_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_19__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_18.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_20__1(Vaxi_sa_16x16_group_processing_element_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_20__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_4.__PVT__io_outputC_3_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_4.__PVT__io_outputC_3_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_4.__PVT__io_outputC_3_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_4.__PVT__io_outputC_2_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_4.__PVT__io_outputC_2_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_4.__PVT__io_outputC_2_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_4.__PVT__io_outputC_1_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_4.__PVT__io_outputC_1_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_4.__PVT__io_outputC_1_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_4.__PVT__io_outputC_0_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_4.__PVT__io_outputC_0_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_4.__PVT__io_outputC_0_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_19.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_19.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_19.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_19.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_19.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_19.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_19.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_19.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_20) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_4.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_4.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_4.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_4.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_20__2(Vaxi_sa_16x16_group_processing_element_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_20__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_19.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_21__1(Vaxi_sa_16x16_group_processing_element_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_21__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_5.__PVT__io_outputC_3_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_5.__PVT__io_outputC_3_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_5.__PVT__io_outputC_3_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_5.__PVT__io_outputC_2_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_5.__PVT__io_outputC_2_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_5.__PVT__io_outputC_2_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_5.__PVT__io_outputC_1_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_5.__PVT__io_outputC_1_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_5.__PVT__io_outputC_1_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_5.__PVT__io_outputC_0_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_5.__PVT__io_outputC_0_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_5.__PVT__io_outputC_0_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_20.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_20.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_20.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_20.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_20.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_20.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_20.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_20.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_21) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_5.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_5.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_5.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_5.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_21__2(Vaxi_sa_16x16_group_processing_element_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_21__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_20.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_22__1(Vaxi_sa_16x16_group_processing_element_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_22__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_6.__PVT__io_outputC_3_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_6.__PVT__io_outputC_3_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_6.__PVT__io_outputC_3_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_6.__PVT__io_outputC_2_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_6.__PVT__io_outputC_2_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_6.__PVT__io_outputC_2_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_6.__PVT__io_outputC_1_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_6.__PVT__io_outputC_1_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_6.__PVT__io_outputC_1_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_6.__PVT__io_outputC_0_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_6.__PVT__io_outputC_0_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_6.__PVT__io_outputC_0_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_21.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_21.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_21.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_21.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_21.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_21.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_21.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_21.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_22) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_6.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_6.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_6.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_6.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_22__2(Vaxi_sa_16x16_group_processing_element_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_22__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_21.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_23__1(Vaxi_sa_16x16_group_processing_element_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_23__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_7.__PVT__io_outputC_3_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_7.__PVT__io_outputC_3_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_7.__PVT__io_outputC_3_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_7.__PVT__io_outputC_2_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_7.__PVT__io_outputC_2_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_7.__PVT__io_outputC_2_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_7.__PVT__io_outputC_1_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_7.__PVT__io_outputC_1_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_7.__PVT__io_outputC_1_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_7.__PVT__io_outputC_0_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_7.__PVT__io_outputC_0_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_7.__PVT__io_outputC_0_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_22.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_22.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_22.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_22.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_22.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_22.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_22.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_22.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_23) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_7.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_7.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_7.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_7.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_23__2(Vaxi_sa_16x16_group_processing_element_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_23__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_22.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_24__1(Vaxi_sa_16x16_group_processing_element_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_24__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_8.__PVT__io_outputC_3_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_8.__PVT__io_outputC_3_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_8.__PVT__io_outputC_3_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_8.__PVT__io_outputC_2_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_8.__PVT__io_outputC_2_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_8.__PVT__io_outputC_2_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_8.__PVT__io_outputC_1_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_8.__PVT__io_outputC_1_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_8.__PVT__io_outputC_1_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_8.__PVT__io_outputC_0_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_8.__PVT__io_outputC_0_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_8.__PVT__io_outputC_0_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_23.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_23.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_23.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_23.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_23.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_23.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_23.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_23.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_24) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_8.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_8.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_8.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_8.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_24__2(Vaxi_sa_16x16_group_processing_element_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_24__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_23.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_25__1(Vaxi_sa_16x16_group_processing_element_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_25__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_9.__PVT__io_outputC_3_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_9.__PVT__io_outputC_3_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_9.__PVT__io_outputC_3_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_9.__PVT__io_outputC_2_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_9.__PVT__io_outputC_2_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_9.__PVT__io_outputC_2_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_9.__PVT__io_outputC_1_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_9.__PVT__io_outputC_1_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_9.__PVT__io_outputC_1_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_9.__PVT__io_outputC_0_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_9.__PVT__io_outputC_0_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_9.__PVT__io_outputC_0_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_24.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_24.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_24.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_24.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_24.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_24.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_24.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_24.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_25) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_9.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_9.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_9.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_9.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_25__2(Vaxi_sa_16x16_group_processing_element_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_25__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_24.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_26__1(Vaxi_sa_16x16_group_processing_element_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_26__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_10.__PVT__io_outputC_3_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_10.__PVT__io_outputC_3_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_10.__PVT__io_outputC_3_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_10.__PVT__io_outputC_2_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_10.__PVT__io_outputC_2_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_10.__PVT__io_outputC_2_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_10.__PVT__io_outputC_1_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_10.__PVT__io_outputC_1_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_10.__PVT__io_outputC_1_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_10.__PVT__io_outputC_0_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_10.__PVT__io_outputC_0_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_10.__PVT__io_outputC_0_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_25.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_25.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_25.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_25.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_25.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_25.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_25.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_25.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_26) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_10.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_10.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_10.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_10.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_26__2(Vaxi_sa_16x16_group_processing_element_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_26__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_25.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_27__1(Vaxi_sa_16x16_group_processing_element_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_27__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_11.__PVT__io_outputC_3_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_11.__PVT__io_outputC_3_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_11.__PVT__io_outputC_3_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_11.__PVT__io_outputC_2_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_11.__PVT__io_outputC_2_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_11.__PVT__io_outputC_2_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_11.__PVT__io_outputC_1_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_11.__PVT__io_outputC_1_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_11.__PVT__io_outputC_1_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_11.__PVT__io_outputC_0_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_11.__PVT__io_outputC_0_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_11.__PVT__io_outputC_0_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_26.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_26.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_26.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_26.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_26.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_26.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_26.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_26.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_27) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_11.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_11.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_11.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_11.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_27__2(Vaxi_sa_16x16_group_processing_element_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_27__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_26.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_28__1(Vaxi_sa_16x16_group_processing_element_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_28__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_12.__PVT__io_outputC_3_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_12.__PVT__io_outputC_3_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_12.__PVT__io_outputC_3_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_12.__PVT__io_outputC_2_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_12.__PVT__io_outputC_2_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_12.__PVT__io_outputC_2_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_12.__PVT__io_outputC_1_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_12.__PVT__io_outputC_1_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_12.__PVT__io_outputC_1_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_12.__PVT__io_outputC_0_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_12.__PVT__io_outputC_0_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_12.__PVT__io_outputC_0_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_27.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_27.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_27.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_27.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_27.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_27.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_27.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_27.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_28) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_12.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_12.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_12.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_12.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_28__2(Vaxi_sa_16x16_group_processing_element_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_28__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_27.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_29__1(Vaxi_sa_16x16_group_processing_element_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_29__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_13.__PVT__io_outputC_3_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_13.__PVT__io_outputC_3_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_13.__PVT__io_outputC_3_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_13.__PVT__io_outputC_2_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_13.__PVT__io_outputC_2_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_13.__PVT__io_outputC_2_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_13.__PVT__io_outputC_1_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_13.__PVT__io_outputC_1_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_13.__PVT__io_outputC_1_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_13.__PVT__io_outputC_0_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_13.__PVT__io_outputC_0_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_13.__PVT__io_outputC_0_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_28.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_28.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_28.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_28.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_28.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_28.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_28.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_28.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_29) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_13.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_13.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_13.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_13.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_29__2(Vaxi_sa_16x16_group_processing_element_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_29__2\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_28.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_30__0(Vaxi_sa_16x16_group_processing_element_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_30__0\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_29.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_30__1(Vaxi_sa_16x16_group_processing_element_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_16___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_30__1\n"); );
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
        vlSelf->__PVT__io_outputC_3_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_2_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_1_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG);
        vlSelf->__PVT__io_outputC_0_REG = (0x1ffffU 
                                           & vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG);
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_14.__PVT__io_outputC_3_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_14.__PVT__io_outputC_3_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_14.__PVT__io_outputC_3_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_14.__PVT__io_outputC_2_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_14.__PVT__io_outputC_2_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_14.__PVT__io_outputC_2_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_14.__PVT__io_outputC_1_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_14.__PVT__io_outputC_1_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_14.__PVT__io_outputC_1_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x3ffffU & (((0x30000U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                            | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                           + ((0x20000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_14.__PVT__io_outputC_0_REG) 
                                           << 2U)) 
                              | ((0x10000U & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_14.__PVT__io_outputC_0_REG) 
                                              << 1U)) 
                                 | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_14.__PVT__io_outputC_0_REG)))));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_29.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_29.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_29.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_29.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_29.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_29.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_29.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_29.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_30) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_14.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_14.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_14.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_14.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}
