// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxi_sa_16x16.h for the primary calling header

#include "verilated.h"

#include "Vaxi_sa_16x16__Syms.h"
#include "Vaxi_sa_16x16_group_processing_element_240.h"

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_240__0(Vaxi_sa_16x16_group_processing_element_240* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_240__0\n"); );
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
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_224.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_224.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_224.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_224.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_224.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_224.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_224.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_224.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_15_r_15) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_15_r_15)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_15_r_15) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_15_r_15)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_15_r_15) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_15_r_15)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_15_r_15) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_15_r_15)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_240) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_224.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_224.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_224.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_224.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_240__1(Vaxi_sa_16x16_group_processing_element_240* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_240__1\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__preProcessorInputA__DOT__io_output_15_r_15));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_241__0(Vaxi_sa_16x16_group_processing_element_240* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_241__0\n"); );
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
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_225.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_225.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_225.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_225.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_225.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_225.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_225.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_225.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_240.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_240.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_240.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_240.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_240.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_240.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_240.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_240.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_241) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_225.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_225.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_225.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_225.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_241__1(Vaxi_sa_16x16_group_processing_element_240* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_241__1\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_240.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_242__0(Vaxi_sa_16x16_group_processing_element_240* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_242__0\n"); );
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
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_226.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_226.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_226.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_226.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_226.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_226.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_226.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_226.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_241.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_241.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_241.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_241.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_241.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_241.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_241.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_241.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_242) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_226.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_226.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_226.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_226.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_242__1(Vaxi_sa_16x16_group_processing_element_240* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_242__1\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_241.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_243__0(Vaxi_sa_16x16_group_processing_element_240* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_243__0\n"); );
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
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_227.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_227.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_227.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_227.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_227.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_227.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_227.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_227.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_242.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_242.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_242.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_242.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_242.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_242.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_242.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_242.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_243) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_227.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_227.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_227.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_227.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_243__1(Vaxi_sa_16x16_group_processing_element_240* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_243__1\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_242.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_244__0(Vaxi_sa_16x16_group_processing_element_240* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_244__0\n"); );
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
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_228.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_228.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_228.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_228.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_228.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_228.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_228.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_228.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_243.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_243.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_243.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_243.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_243.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_243.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_243.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_243.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_244) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_228.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_228.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_228.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_228.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_244__1(Vaxi_sa_16x16_group_processing_element_240* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_244__1\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_243.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_245__0(Vaxi_sa_16x16_group_processing_element_240* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_245__0\n"); );
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
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_229.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_229.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_229.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_229.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_229.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_229.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_229.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_229.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_244.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_244.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_244.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_244.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_244.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_244.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_244.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_244.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_245) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_229.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_229.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_229.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_229.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_245__1(Vaxi_sa_16x16_group_processing_element_240* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_245__1\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_244.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_246__0(Vaxi_sa_16x16_group_processing_element_240* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_246__0\n"); );
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
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_230.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_230.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_230.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_230.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_230.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_230.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_230.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_230.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_245.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_245.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_245.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_245.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_245.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_245.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_245.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_245.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_246) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_230.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_230.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_230.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_230.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_246__1(Vaxi_sa_16x16_group_processing_element_240* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_246__1\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_245.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_247__0(Vaxi_sa_16x16_group_processing_element_240* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_247__0\n"); );
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
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_231.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_231.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_231.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_231.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_231.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_231.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_231.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_231.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_246.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_246.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_246.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_246.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_246.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_246.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_246.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_246.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_247) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_231.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_231.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_231.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_231.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_247__1(Vaxi_sa_16x16_group_processing_element_240* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_247__1\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_246.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_248__0(Vaxi_sa_16x16_group_processing_element_240* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_248__0\n"); );
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
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_232.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_232.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_232.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_232.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_232.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_232.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_232.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_232.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_247.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_247.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_247.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_247.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_247.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_247.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_247.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_247.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_248) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_232.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_232.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_232.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_232.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_248__1(Vaxi_sa_16x16_group_processing_element_240* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_248__1\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_247.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_249__0(Vaxi_sa_16x16_group_processing_element_240* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_249__0\n"); );
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
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_233.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_233.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_233.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_233.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_233.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_233.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_233.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_233.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_248.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_248.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_248.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_248.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_248.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_248.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_248.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_248.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_249) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_233.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_233.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_233.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_233.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_249__1(Vaxi_sa_16x16_group_processing_element_240* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_249__1\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_248.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_250__0(Vaxi_sa_16x16_group_processing_element_240* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_250__0\n"); );
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
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_234.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_234.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_234.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_234.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_234.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_234.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_234.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_234.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_249.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_249.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_249.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_249.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_249.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_249.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_249.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_249.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_250) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_234.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_234.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_234.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_234.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_250__1(Vaxi_sa_16x16_group_processing_element_240* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_250__1\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_249.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_251__0(Vaxi_sa_16x16_group_processing_element_240* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_251__0\n"); );
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
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_235.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_235.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_235.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_235.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_235.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_235.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_235.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_235.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_250.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_250.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_250.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_250.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_250.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_250.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_250.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_250.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_251) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_235.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_235.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_235.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_235.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_251__1(Vaxi_sa_16x16_group_processing_element_240* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_251__1\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_250.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_252__0(Vaxi_sa_16x16_group_processing_element_240* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_252__0\n"); );
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
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_236.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_236.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_236.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_236.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_236.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_236.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_236.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_236.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_251.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_251.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_251.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_251.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_251.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_251.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_251.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_251.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_252) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_236.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_236.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_236.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_236.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_252__1(Vaxi_sa_16x16_group_processing_element_240* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_252__1\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_251.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_253__0(Vaxi_sa_16x16_group_processing_element_240* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_253__0\n"); );
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
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_237.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_237.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_237.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_237.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_237.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_237.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_237.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_237.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_252.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_252.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_252.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_252.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_252.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_252.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_252.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_252.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_253) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_237.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_237.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_237.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_237.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_253__1(Vaxi_sa_16x16_group_processing_element_240* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_253__1\n"); );
    // Body
    vlSelf->__PVT__REG_0 = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_252.__PVT__REG_0));
}

VL_INLINE_OPT void Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_254__0(Vaxi_sa_16x16_group_processing_element_240* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaxi_sa_16x16_group_processing_element_240___sequent__TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_254__0\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__REG_0 = 0U;
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
        vlSelf->__PVT__REG_0 = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_253.__PVT__REG_0;
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
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_238.__PVT__io_outputC_3_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_238.__PVT__io_outputC_3_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_238.__PVT__io_outputC_2_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_238.__PVT__io_outputC_2_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_238.__PVT__io_outputC_1_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_238.__PVT__io_outputC_1_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__io_outputC_REG 
            = (0x1fffffU & (((0x1f0000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG) 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                             | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG)) 
                            + ((0x100000U & (vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_238.__PVT__io_outputC_0_REG 
                                             << 1U)) 
                               | vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_238.__PVT__io_outputC_0_REG)));
        vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_253.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_253.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_253.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_253.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_253.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_253.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0))));
        vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__multiplyResult_multiplier__DOT__io_output_0_REG 
            = (0xffffU & (((0xff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_253.__PVT__REG_0) 
                                                      >> 7U)))) 
                                       << 8U)) | (IData)(vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_253.__PVT__REG_0)) 
                          * ((0xff00U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0))));
        if (vlSymsp->TOP.axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__REG_254) {
            vlSelf->__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_238.__PVT__vectorProcessingElementVector_0_3__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_238.__PVT__vectorProcessingElementVector_0_2__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_238.__PVT__vectorProcessingElementVector_0_1__DOT__registerB_0;
            vlSelf->__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0 
                = vlSymsp->TOP__axi_sa_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_238.__PVT__vectorProcessingElementVector_0_0__DOT__registerB_0;
        }
    }
}
