// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxi_sa_16x16.h for the primary calling header

#include "verilated.h"

#include "Vaxi_sa_16x16__Syms.h"
#include "Vaxi_sa_16x16___024root.h"

extern const VlUnpacked<CData/*2:0*/, 32> Vaxi_sa_16x16__ConstPool__TABLE_hdbf946f0_0;

VL_ATTR_COLD void Vaxi_sa_16x16___024root___settle__TOP__0(Vaxi_sa_16x16___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_sa_16x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_sa_16x16___024root___settle__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    // Body
    vlSelf->axi_top_16x16__DOT__i = 0x10U;
    vlSelf->axi_top_16x16__DOT__outputC[0x3fU] = vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_255__DOT__io_outputC_3_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x3eU] = vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_255__DOT__io_outputC_2_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x3dU] = vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_255__DOT__io_outputC_1_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x3cU] = vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_255__DOT__io_outputC_0_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x3bU] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_254.__PVT__io_outputC_3_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x3aU] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_254.__PVT__io_outputC_2_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x39U] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_254.__PVT__io_outputC_1_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x38U] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_254.__PVT__io_outputC_0_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x37U] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_253.__PVT__io_outputC_3_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x36U] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_253.__PVT__io_outputC_2_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x35U] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_253.__PVT__io_outputC_1_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x34U] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_253.__PVT__io_outputC_0_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x33U] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_252.__PVT__io_outputC_3_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x32U] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_252.__PVT__io_outputC_2_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x31U] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_252.__PVT__io_outputC_1_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x30U] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_252.__PVT__io_outputC_0_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x2fU] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_251.__PVT__io_outputC_3_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x2eU] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_251.__PVT__io_outputC_2_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x2dU] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_251.__PVT__io_outputC_1_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x2cU] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_251.__PVT__io_outputC_0_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x2bU] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_250.__PVT__io_outputC_3_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x2aU] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_250.__PVT__io_outputC_2_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x29U] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_250.__PVT__io_outputC_1_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x28U] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_250.__PVT__io_outputC_0_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x27U] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_249.__PVT__io_outputC_3_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x26U] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_249.__PVT__io_outputC_2_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x25U] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_249.__PVT__io_outputC_1_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x24U] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_249.__PVT__io_outputC_0_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x23U] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_248.__PVT__io_outputC_3_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x22U] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_248.__PVT__io_outputC_2_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x21U] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_248.__PVT__io_outputC_1_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x20U] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_248.__PVT__io_outputC_0_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x1fU] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_247.__PVT__io_outputC_3_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x1eU] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_247.__PVT__io_outputC_2_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x1dU] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_247.__PVT__io_outputC_1_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x1cU] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_247.__PVT__io_outputC_0_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x1bU] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_246.__PVT__io_outputC_3_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x1aU] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_246.__PVT__io_outputC_2_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x19U] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_246.__PVT__io_outputC_1_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x18U] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_246.__PVT__io_outputC_0_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x17U] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_245.__PVT__io_outputC_3_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x16U] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_245.__PVT__io_outputC_2_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x15U] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_245.__PVT__io_outputC_1_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x14U] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_245.__PVT__io_outputC_0_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x13U] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_244.__PVT__io_outputC_3_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x12U] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_244.__PVT__io_outputC_2_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x11U] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_244.__PVT__io_outputC_1_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0x10U] = vlSymsp->TOP__axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_244.__PVT__io_outputC_0_REG;
    vlSelf->axi_top_16x16__DOT__outputC[0xfU] = vlSelf->axi_top_16x16__DOT__uut__DOT__postProcessor__DOT__io_output_15_r;
    vlSelf->axi_top_16x16__DOT__outputC[0xeU] = vlSelf->axi_top_16x16__DOT__uut__DOT__postProcessor__DOT__io_output_14_r_1;
    vlSelf->axi_top_16x16__DOT__outputC[0xdU] = vlSelf->axi_top_16x16__DOT__uut__DOT__postProcessor__DOT__io_output_13_r_2;
    vlSelf->axi_top_16x16__DOT__outputC[0xcU] = vlSelf->axi_top_16x16__DOT__uut__DOT__postProcessor__DOT__io_output_12_r_3;
    vlSelf->axi_top_16x16__DOT__outputC[0xbU] = vlSelf->axi_top_16x16__DOT__uut__DOT__postProcessor__DOT__io_output_11_r_4;
    vlSelf->axi_top_16x16__DOT__outputC[0xaU] = vlSelf->axi_top_16x16__DOT__uut__DOT__postProcessor__DOT__io_output_10_r_5;
    vlSelf->axi_top_16x16__DOT__outputC[9U] = vlSelf->axi_top_16x16__DOT__uut__DOT__postProcessor__DOT__io_output_9_r_6;
    vlSelf->axi_top_16x16__DOT__outputC[8U] = vlSelf->axi_top_16x16__DOT__uut__DOT__postProcessor__DOT__io_output_8_r_7;
    vlSelf->axi_top_16x16__DOT__outputC[7U] = vlSelf->axi_top_16x16__DOT__uut__DOT__postProcessor__DOT__io_output_7_r_8;
    vlSelf->axi_top_16x16__DOT__outputC[6U] = vlSelf->axi_top_16x16__DOT__uut__DOT__postProcessor__DOT__io_output_6_r_9;
    vlSelf->axi_top_16x16__DOT__outputC[5U] = vlSelf->axi_top_16x16__DOT__uut__DOT__postProcessor__DOT__io_output_5_r_10;
    vlSelf->axi_top_16x16__DOT__outputC[4U] = vlSelf->axi_top_16x16__DOT__uut__DOT__postProcessor__DOT__io_output_4_r_11;
    vlSelf->axi_top_16x16__DOT__outputC[3U] = vlSelf->axi_top_16x16__DOT__uut__DOT__postProcessor__DOT__io_output_3_r_12;
    vlSelf->axi_top_16x16__DOT__outputC[2U] = vlSelf->axi_top_16x16__DOT__uut__DOT__postProcessor__DOT__io_output_2_r_13;
    vlSelf->axi_top_16x16__DOT__outputC[1U] = vlSelf->axi_top_16x16__DOT__uut__DOT__postProcessor__DOT__io_output_1_r_14;
    vlSelf->axi_top_16x16__DOT__outputC[0U] = vlSelf->axi_top_16x16__DOT__uut__DOT__postProcessor__DOT__io_output_0_r_15;
    vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT____Vcellinp__group_processing_element_31__io_inputC_3 
        = ((0x10000U & ((IData)(vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_15__DOT__io_outputC_3_REG) 
                        << 1U)) | (IData)(vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_15__DOT__io_outputC_3_REG));
    vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT____Vcellinp__group_processing_element_31__io_inputC_2 
        = ((0x10000U & ((IData)(vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_15__DOT__io_outputC_2_REG) 
                        << 1U)) | (IData)(vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_15__DOT__io_outputC_2_REG));
    vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT____Vcellinp__group_processing_element_31__io_inputC_1 
        = ((0x10000U & ((IData)(vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_15__DOT__io_outputC_1_REG) 
                        << 1U)) | (IData)(vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_15__DOT__io_outputC_1_REG));
    vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT____Vcellinp__group_processing_element_31__io_inputC_0 
        = ((0x10000U & ((IData)(vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_15__DOT__io_outputC_0_REG) 
                        << 1U)) | (IData)(vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_15__DOT__io_outputC_0_REG));
    vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT____Vcellinp__group_processing_element_47__io_inputC_3 
        = ((0x20000U & (vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_31__DOT__io_outputC_3_REG 
                        << 1U)) | vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_31__DOT__io_outputC_3_REG);
    vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT____Vcellinp__group_processing_element_47__io_inputC_2 
        = ((0x20000U & (vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_31__DOT__io_outputC_2_REG 
                        << 1U)) | vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_31__DOT__io_outputC_2_REG);
    vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT____Vcellinp__group_processing_element_47__io_inputC_1 
        = ((0x20000U & (vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_31__DOT__io_outputC_1_REG 
                        << 1U)) | vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_31__DOT__io_outputC_1_REG);
    vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT____Vcellinp__group_processing_element_47__io_inputC_0 
        = ((0x20000U & (vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_31__DOT__io_outputC_0_REG 
                        << 1U)) | vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_31__DOT__io_outputC_0_REG);
    vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT____Vcellinp__group_processing_element_79__io_inputC_3 
        = ((0x40000U & (vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_63__DOT__io_outputC_3_REG 
                        << 1U)) | vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_63__DOT__io_outputC_3_REG);
    vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT____Vcellinp__group_processing_element_79__io_inputC_2 
        = ((0x40000U & (vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_63__DOT__io_outputC_2_REG 
                        << 1U)) | vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_63__DOT__io_outputC_2_REG);
    vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT____Vcellinp__group_processing_element_79__io_inputC_1 
        = ((0x40000U & (vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_63__DOT__io_outputC_1_REG 
                        << 1U)) | vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_63__DOT__io_outputC_1_REG);
    vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT____Vcellinp__group_processing_element_79__io_inputC_0 
        = ((0x40000U & (vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_63__DOT__io_outputC_0_REG 
                        << 1U)) | vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_63__DOT__io_outputC_0_REG);
    vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT____Vcellinp__group_processing_element_143__io_inputC_3 
        = ((0x80000U & (vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_127__DOT__io_outputC_3_REG 
                        << 1U)) | vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_127__DOT__io_outputC_3_REG);
    vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT____Vcellinp__group_processing_element_143__io_inputC_2 
        = ((0x80000U & (vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_127__DOT__io_outputC_2_REG 
                        << 1U)) | vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_127__DOT__io_outputC_2_REG);
    vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT____Vcellinp__group_processing_element_143__io_inputC_1 
        = ((0x80000U & (vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_127__DOT__io_outputC_1_REG 
                        << 1U)) | vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_127__DOT__io_outputC_1_REG);
    vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT____Vcellinp__group_processing_element_143__io_inputC_0 
        = ((0x80000U & (vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_127__DOT__io_outputC_0_REG 
                        << 1U)) | vlSelf->axi_top_16x16__DOT__uut__DOT__systolicTensorArray__DOT__group_processing_element_127__DOT__io_outputC_0_REG);
    vlSelf->axi_top_16x16__DOT__inputA[0U] = (0xffU 
                                              & vlSelf->axi_top_16x16__DOT__proc_mem
                                              [0U]);
    vlSelf->axi_top_16x16__DOT__inputA[1U] = (0xffU 
                                              & vlSelf->axi_top_16x16__DOT__proc_mem
                                              [1U]);
    vlSelf->axi_top_16x16__DOT__inputA[2U] = (0xffU 
                                              & vlSelf->axi_top_16x16__DOT__proc_mem
                                              [2U]);
    vlSelf->axi_top_16x16__DOT__inputA[3U] = (0xffU 
                                              & vlSelf->axi_top_16x16__DOT__proc_mem
                                              [3U]);
    vlSelf->axi_top_16x16__DOT__inputA[4U] = (0xffU 
                                              & vlSelf->axi_top_16x16__DOT__proc_mem
                                              [4U]);
    vlSelf->axi_top_16x16__DOT__inputA[5U] = (0xffU 
                                              & vlSelf->axi_top_16x16__DOT__proc_mem
                                              [5U]);
    vlSelf->axi_top_16x16__DOT__inputA[6U] = (0xffU 
                                              & vlSelf->axi_top_16x16__DOT__proc_mem
                                              [6U]);
    vlSelf->axi_top_16x16__DOT__inputA[7U] = (0xffU 
                                              & vlSelf->axi_top_16x16__DOT__proc_mem
                                              [7U]);
    vlSelf->axi_top_16x16__DOT__inputA[8U] = (0xffU 
                                              & vlSelf->axi_top_16x16__DOT__proc_mem
                                              [8U]);
    vlSelf->axi_top_16x16__DOT__inputA[9U] = (0xffU 
                                              & vlSelf->axi_top_16x16__DOT__proc_mem
                                              [9U]);
    vlSelf->axi_top_16x16__DOT__inputA[0xaU] = (0xffU 
                                                & vlSelf->axi_top_16x16__DOT__proc_mem
                                                [0xaU]);
    vlSelf->axi_top_16x16__DOT__inputA[0xbU] = (0xffU 
                                                & vlSelf->axi_top_16x16__DOT__proc_mem
                                                [0xbU]);
    vlSelf->axi_top_16x16__DOT__inputA[0xcU] = (0xffU 
                                                & vlSelf->axi_top_16x16__DOT__proc_mem
                                                [0xcU]);
    vlSelf->axi_top_16x16__DOT__inputA[0xdU] = (0xffU 
                                                & vlSelf->axi_top_16x16__DOT__proc_mem
                                                [0xdU]);
    vlSelf->axi_top_16x16__DOT__inputA[0xeU] = (0xffU 
                                                & vlSelf->axi_top_16x16__DOT__proc_mem
                                                [0xeU]);
    vlSelf->axi_top_16x16__DOT__inputA[0xfU] = (0xffU 
                                                & vlSelf->axi_top_16x16__DOT__proc_mem
                                                [0xfU]);
    vlSelf->axi_top_16x16__DOT__propagateB[0U] = 1U;
    vlSelf->axi_top_16x16__DOT__propagateB[1U] = 1U;
    vlSelf->axi_top_16x16__DOT__propagateB[2U] = 1U;
    vlSelf->axi_top_16x16__DOT__propagateB[3U] = 1U;
    vlSelf->axi_top_16x16__DOT__propagateB[4U] = 1U;
    vlSelf->axi_top_16x16__DOT__propagateB[5U] = 1U;
    vlSelf->axi_top_16x16__DOT__propagateB[6U] = 1U;
    vlSelf->axi_top_16x16__DOT__propagateB[7U] = 1U;
    vlSelf->axi_top_16x16__DOT__propagateB[8U] = 1U;
    vlSelf->axi_top_16x16__DOT__propagateB[9U] = 1U;
    vlSelf->axi_top_16x16__DOT__propagateB[0xaU] = 1U;
    vlSelf->axi_top_16x16__DOT__propagateB[0xbU] = 1U;
    vlSelf->axi_top_16x16__DOT__propagateB[0xcU] = 1U;
    vlSelf->axi_top_16x16__DOT__propagateB[0xdU] = 1U;
    vlSelf->axi_top_16x16__DOT__propagateB[0xeU] = 1U;
    vlSelf->axi_top_16x16__DOT__propagateB[0xfU] = 1U;
    vlSelf->axi_top_16x16__DOT__inputB[0U] = (0xffU 
                                              & vlSelf->axi_top_16x16__DOT__proc_mem
                                              [0x10U]);
    vlSelf->axi_top_16x16__DOT__inputB[1U] = (0xffU 
                                              & vlSelf->axi_top_16x16__DOT__proc_mem
                                              [0x11U]);
    vlSelf->axi_top_16x16__DOT__inputB[2U] = (0xffU 
                                              & vlSelf->axi_top_16x16__DOT__proc_mem
                                              [0x12U]);
    vlSelf->axi_top_16x16__DOT__inputB[3U] = (0xffU 
                                              & vlSelf->axi_top_16x16__DOT__proc_mem
                                              [0x13U]);
    vlSelf->axi_top_16x16__DOT__inputB[4U] = (0xffU 
                                              & vlSelf->axi_top_16x16__DOT__proc_mem
                                              [0x14U]);
    vlSelf->axi_top_16x16__DOT__inputB[5U] = (0xffU 
                                              & vlSelf->axi_top_16x16__DOT__proc_mem
                                              [0x15U]);
    vlSelf->axi_top_16x16__DOT__inputB[6U] = (0xffU 
                                              & vlSelf->axi_top_16x16__DOT__proc_mem
                                              [0x16U]);
    vlSelf->axi_top_16x16__DOT__inputB[7U] = (0xffU 
                                              & vlSelf->axi_top_16x16__DOT__proc_mem
                                              [0x17U]);
    vlSelf->axi_top_16x16__DOT__inputB[8U] = (0xffU 
                                              & vlSelf->axi_top_16x16__DOT__proc_mem
                                              [0x18U]);
    vlSelf->axi_top_16x16__DOT__inputB[9U] = (0xffU 
                                              & vlSelf->axi_top_16x16__DOT__proc_mem
                                              [0x19U]);
    vlSelf->axi_top_16x16__DOT__inputB[0xaU] = (0xffU 
                                                & vlSelf->axi_top_16x16__DOT__proc_mem
                                                [0x1aU]);
    vlSelf->axi_top_16x16__DOT__inputB[0xbU] = (0xffU 
                                                & vlSelf->axi_top_16x16__DOT__proc_mem
                                                [0x1bU]);
    vlSelf->axi_top_16x16__DOT__inputB[0xcU] = (0xffU 
                                                & vlSelf->axi_top_16x16__DOT__proc_mem
                                                [0x1cU]);
    vlSelf->axi_top_16x16__DOT__inputB[0xdU] = (0xffU 
                                                & vlSelf->axi_top_16x16__DOT__proc_mem
                                                [0x1dU]);
    vlSelf->axi_top_16x16__DOT__inputB[0xeU] = (0xffU 
                                                & vlSelf->axi_top_16x16__DOT__proc_mem
                                                [0x1eU]);
    vlSelf->axi_top_16x16__DOT__inputB[0xfU] = (0xffU 
                                                & vlSelf->axi_top_16x16__DOT__proc_mem
                                                [0x1fU]);
    vlSelf->axi_top_16x16__DOT__inputB[0x10U] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x20U]);
    vlSelf->axi_top_16x16__DOT__inputB[0x11U] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x21U]);
    vlSelf->axi_top_16x16__DOT__inputB[0x12U] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x22U]);
    vlSelf->axi_top_16x16__DOT__inputB[0x13U] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x23U]);
    vlSelf->axi_top_16x16__DOT__inputB[0x14U] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x24U]);
    vlSelf->axi_top_16x16__DOT__inputB[0x15U] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x25U]);
    vlSelf->axi_top_16x16__DOT__inputB[0x16U] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x26U]);
    vlSelf->axi_top_16x16__DOT__inputB[0x17U] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x27U]);
    vlSelf->axi_top_16x16__DOT__inputB[0x18U] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x28U]);
    vlSelf->axi_top_16x16__DOT__inputB[0x19U] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x29U]);
    vlSelf->axi_top_16x16__DOT__inputB[0x1aU] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x2aU]);
    vlSelf->axi_top_16x16__DOT__inputB[0x1bU] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x2bU]);
    vlSelf->axi_top_16x16__DOT__inputB[0x1cU] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x2cU]);
    vlSelf->axi_top_16x16__DOT__inputB[0x1dU] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x2dU]);
    vlSelf->axi_top_16x16__DOT__inputB[0x1eU] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x2eU]);
    vlSelf->axi_top_16x16__DOT__inputB[0x1fU] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x2fU]);
    vlSelf->axi_top_16x16__DOT__inputB[0x20U] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x30U]);
    vlSelf->axi_top_16x16__DOT__inputB[0x21U] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x31U]);
    vlSelf->axi_top_16x16__DOT__inputB[0x22U] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x32U]);
    vlSelf->axi_top_16x16__DOT__inputB[0x23U] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x33U]);
    vlSelf->axi_top_16x16__DOT__inputB[0x24U] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x34U]);
    vlSelf->axi_top_16x16__DOT__inputB[0x25U] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x35U]);
    vlSelf->axi_top_16x16__DOT__inputB[0x26U] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x36U]);
    vlSelf->axi_top_16x16__DOT__inputB[0x27U] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x37U]);
    vlSelf->axi_top_16x16__DOT__inputB[0x28U] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x38U]);
    vlSelf->axi_top_16x16__DOT__inputB[0x29U] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x39U]);
    vlSelf->axi_top_16x16__DOT__inputB[0x2aU] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x3aU]);
    vlSelf->axi_top_16x16__DOT__inputB[0x2bU] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x3bU]);
    vlSelf->axi_top_16x16__DOT__inputB[0x2cU] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x3cU]);
    vlSelf->axi_top_16x16__DOT__inputB[0x2dU] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x3dU]);
    vlSelf->axi_top_16x16__DOT__inputB[0x2eU] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x3eU]);
    vlSelf->axi_top_16x16__DOT__inputB[0x2fU] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x3fU]);
    vlSelf->axi_top_16x16__DOT__inputB[0x30U] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x40U]);
    vlSelf->axi_top_16x16__DOT__inputB[0x31U] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x41U]);
    vlSelf->axi_top_16x16__DOT__inputB[0x32U] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x42U]);
    vlSelf->axi_top_16x16__DOT__inputB[0x33U] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x43U]);
    vlSelf->axi_top_16x16__DOT__inputB[0x34U] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x44U]);
    vlSelf->axi_top_16x16__DOT__inputB[0x35U] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x45U]);
    vlSelf->axi_top_16x16__DOT__inputB[0x36U] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x46U]);
    vlSelf->axi_top_16x16__DOT__inputB[0x37U] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x47U]);
    vlSelf->axi_top_16x16__DOT__inputB[0x38U] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x48U]);
    vlSelf->axi_top_16x16__DOT__inputB[0x39U] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x49U]);
    vlSelf->axi_top_16x16__DOT__inputB[0x3aU] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x4aU]);
    vlSelf->axi_top_16x16__DOT__inputB[0x3bU] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x4bU]);
    vlSelf->axi_top_16x16__DOT__inputB[0x3cU] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x4cU]);
    vlSelf->axi_top_16x16__DOT__inputB[0x3dU] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x4dU]);
    vlSelf->axi_top_16x16__DOT__inputB[0x3eU] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x4eU]);
    vlSelf->axi_top_16x16__DOT__inputB[0x3fU] = (0xffU 
                                                 & vlSelf->axi_top_16x16__DOT__proc_mem
                                                 [0x4fU]);
    vlSelf->s_axi_rdata = vlSelf->axi_top_16x16__DOT__s_axi_rdata_reg;
    vlSelf->s_axi_rid = vlSelf->axi_top_16x16__DOT__s_axi_rid_reg;
    vlSelf->s_axi_rlast = vlSelf->axi_top_16x16__DOT__s_axi_rlast_reg;
    vlSelf->s_axi_bid = vlSelf->axi_top_16x16__DOT__s_axi_bid_reg;
    vlSelf->s_axi_rvalid = vlSelf->axi_top_16x16__DOT__s_axi_rvalid_reg;
    vlSelf->axi_top_16x16__DOT__mem_rd_en = 0U;
    vlSelf->axi_top_16x16__DOT__s_axi_rvalid_next = 
        ((IData)(vlSelf->axi_top_16x16__DOT__s_axi_rvalid_reg) 
         & (~ (IData)(vlSelf->s_axi_rready)));
    vlSelf->axi_top_16x16__DOT__s_axi_rid_next = vlSelf->axi_top_16x16__DOT__s_axi_rid_reg;
    vlSelf->axi_top_16x16__DOT__s_axi_rlast_next = vlSelf->axi_top_16x16__DOT__s_axi_rlast_reg;
    vlSelf->s_axi_bvalid = vlSelf->axi_top_16x16__DOT__s_axi_bvalid_reg;
    vlSelf->s_axi_arready = vlSelf->axi_top_16x16__DOT__s_axi_arready_reg;
    vlSelf->s_axi_awready = vlSelf->axi_top_16x16__DOT__s_axi_awready_reg;
    vlSelf->s_axi_wready = vlSelf->axi_top_16x16__DOT__s_axi_wready_reg;
    __Vtableidx1 = (((IData)(vlSelf->s_axi_wvalid) 
                     << 4U) | (((IData)(vlSelf->axi_top_16x16__DOT__stable_outputC_result) 
                                << 3U) | (IData)(vlSelf->axi_top_16x16__DOT__current_state)));
    vlSelf->axi_top_16x16__DOT__state_next = Vaxi_sa_16x16__ConstPool__TABLE_hdbf946f0_0
        [__Vtableidx1];
    vlSelf->axi_top_16x16__DOT__read_id_next = vlSelf->axi_top_16x16__DOT__read_id_reg;
    vlSelf->axi_top_16x16__DOT__read_size_next = vlSelf->axi_top_16x16__DOT__read_size_reg;
    vlSelf->axi_top_16x16__DOT__read_burst_next = vlSelf->axi_top_16x16__DOT__read_burst_reg;
    if ((1U & (~ (IData)(vlSelf->axi_top_16x16__DOT__read_state)))) {
        if (((IData)(vlSelf->s_axi_arready) & (IData)(vlSelf->s_axi_arvalid))) {
            vlSelf->axi_top_16x16__DOT__read_id_next 
                = vlSelf->s_axi_arid;
            vlSelf->axi_top_16x16__DOT__read_size_next 
                = ((2U > (IData)(vlSelf->s_axi_arsize))
                    ? (7U & (IData)(vlSelf->s_axi_arsize))
                    : 2U);
            vlSelf->axi_top_16x16__DOT__read_burst_next 
                = vlSelf->s_axi_arburst;
        }
    }
    vlSelf->axi_top_16x16__DOT__s_axi_arready_next = 0U;
    vlSelf->axi_top_16x16__DOT__read_state_next = 0U;
    vlSelf->axi_top_16x16__DOT__read_count_next = vlSelf->axi_top_16x16__DOT__read_count_reg;
    vlSelf->axi_top_16x16__DOT__read_addr_next = vlSelf->axi_top_16x16__DOT__read_addr_reg;
    if (vlSelf->axi_top_16x16__DOT__read_state) {
        if (vlSelf->axi_top_16x16__DOT__read_state) {
            if ((1U & ((IData)(vlSelf->s_axi_rready) 
                       | (~ (IData)(vlSelf->axi_top_16x16__DOT__s_axi_rvalid_reg))))) {
                vlSelf->axi_top_16x16__DOT__mem_rd_en = 1U;
                vlSelf->axi_top_16x16__DOT__s_axi_rvalid_next = 1U;
                vlSelf->axi_top_16x16__DOT__s_axi_rid_next 
                    = vlSelf->axi_top_16x16__DOT__read_id_reg;
                vlSelf->axi_top_16x16__DOT__s_axi_rlast_next 
                    = (0U == (IData)(vlSelf->axi_top_16x16__DOT__read_count_reg));
                if ((0U >= (IData)(vlSelf->axi_top_16x16__DOT__read_count_reg))) {
                    vlSelf->axi_top_16x16__DOT__s_axi_arready_next = 1U;
                }
                vlSelf->axi_top_16x16__DOT__read_count_next 
                    = (0xffU & ((IData)(vlSelf->axi_top_16x16__DOT__read_count_reg) 
                                - (IData)(1U)));
                if ((0U != (IData)(vlSelf->axi_top_16x16__DOT__read_burst_reg))) {
                    vlSelf->axi_top_16x16__DOT__read_addr_next 
                        = (0xfffffU & (vlSelf->axi_top_16x16__DOT__read_addr_reg 
                                       + ((IData)(1U) 
                                          << (IData)(vlSelf->axi_top_16x16__DOT__read_size_reg))));
                }
            }
            vlSelf->axi_top_16x16__DOT__read_state_next 
                = (1U & ((~ ((IData)(vlSelf->s_axi_rready) 
                             | (~ (IData)(vlSelf->axi_top_16x16__DOT__s_axi_rvalid_reg)))) 
                         | (0U < (IData)(vlSelf->axi_top_16x16__DOT__read_count_reg))));
        }
    } else {
        vlSelf->axi_top_16x16__DOT__s_axi_arready_next = 1U;
        if (((IData)(vlSelf->s_axi_arready) & (IData)(vlSelf->s_axi_arvalid))) {
            vlSelf->axi_top_16x16__DOT__s_axi_arready_next = 0U;
            vlSelf->axi_top_16x16__DOT__read_count_next 
                = vlSelf->s_axi_arlen;
            vlSelf->axi_top_16x16__DOT__read_addr_next 
                = vlSelf->s_axi_araddr;
            vlSelf->axi_top_16x16__DOT__read_state_next = 1U;
        } else {
            vlSelf->axi_top_16x16__DOT__read_state_next = 0U;
        }
    }
    vlSelf->axi_top_16x16__DOT__write_burst_next = vlSelf->axi_top_16x16__DOT__write_burst_reg;
    vlSelf->axi_top_16x16__DOT__write_id_next = vlSelf->axi_top_16x16__DOT__write_id_reg;
    vlSelf->axi_top_16x16__DOT__write_size_next = vlSelf->axi_top_16x16__DOT__write_size_reg;
    vlSelf->axi_top_16x16__DOT__mem_wr_en = 0U;
    vlSelf->axi_top_16x16__DOT__s_axi_wready_next = 0U;
    vlSelf->axi_top_16x16__DOT__write_count_next = vlSelf->axi_top_16x16__DOT__write_count_reg;
    vlSelf->axi_top_16x16__DOT__s_axi_bvalid_next = 
        ((IData)(vlSelf->axi_top_16x16__DOT__s_axi_bvalid_reg) 
         & (~ (IData)(vlSelf->s_axi_bready)));
    vlSelf->axi_top_16x16__DOT__s_axi_awready_next = 0U;
    vlSelf->axi_top_16x16__DOT__s_axi_bid_next = vlSelf->axi_top_16x16__DOT__s_axi_bid_reg;
    if ((0U != (IData)(vlSelf->axi_top_16x16__DOT__write_state))) {
        if ((1U == (IData)(vlSelf->axi_top_16x16__DOT__write_state))) {
            if (((IData)(vlSelf->s_axi_wready) & (IData)(vlSelf->s_axi_wvalid))) {
                vlSelf->axi_top_16x16__DOT__mem_wr_en = 1U;
                if ((0U >= (IData)(vlSelf->axi_top_16x16__DOT__write_count_reg))) {
                    if ((1U & ((IData)(vlSelf->s_axi_bready) 
                               | (~ (IData)(vlSelf->s_axi_bvalid))))) {
                        vlSelf->axi_top_16x16__DOT__s_axi_bvalid_next = 1U;
                        vlSelf->axi_top_16x16__DOT__s_axi_bid_next 
                            = vlSelf->axi_top_16x16__DOT__write_id_reg;
                    }
                }
            }
        } else if ((2U == (IData)(vlSelf->axi_top_16x16__DOT__write_state))) {
            if ((1U & ((IData)(vlSelf->s_axi_bready) 
                       | (~ (IData)(vlSelf->s_axi_bvalid))))) {
                vlSelf->axi_top_16x16__DOT__s_axi_bvalid_next = 1U;
                vlSelf->axi_top_16x16__DOT__s_axi_bid_next 
                    = vlSelf->axi_top_16x16__DOT__write_id_reg;
            }
        }
    }
    vlSelf->axi_top_16x16__DOT__write_state_next = 0U;
    vlSelf->axi_top_16x16__DOT__write_addr_next = vlSelf->axi_top_16x16__DOT__write_addr_reg;
    if ((0U == (IData)(vlSelf->axi_top_16x16__DOT__write_state))) {
        vlSelf->axi_top_16x16__DOT__s_axi_awready_next = 1U;
        if (((IData)(vlSelf->s_axi_awready) & (IData)(vlSelf->s_axi_awvalid))) {
            vlSelf->axi_top_16x16__DOT__write_burst_next 
                = vlSelf->s_axi_awburst;
            vlSelf->axi_top_16x16__DOT__write_id_next 
                = vlSelf->s_axi_awid;
            vlSelf->axi_top_16x16__DOT__write_size_next 
                = ((2U > (IData)(vlSelf->s_axi_awsize))
                    ? (7U & (IData)(vlSelf->s_axi_awsize))
                    : 2U);
            vlSelf->axi_top_16x16__DOT__s_axi_wready_next = 1U;
            vlSelf->axi_top_16x16__DOT__write_count_next 
                = vlSelf->s_axi_awlen;
            vlSelf->axi_top_16x16__DOT__s_axi_awready_next = 0U;
            vlSelf->axi_top_16x16__DOT__write_state_next = 1U;
            vlSelf->axi_top_16x16__DOT__write_addr_next 
                = vlSelf->s_axi_awaddr;
        } else {
            vlSelf->axi_top_16x16__DOT__write_state_next = 0U;
        }
    } else if ((1U == (IData)(vlSelf->axi_top_16x16__DOT__write_state))) {
        vlSelf->axi_top_16x16__DOT__s_axi_wready_next = 1U;
        if (((IData)(vlSelf->s_axi_wready) & (IData)(vlSelf->s_axi_wvalid))) {
            if ((0U >= (IData)(vlSelf->axi_top_16x16__DOT__write_count_reg))) {
                vlSelf->axi_top_16x16__DOT__s_axi_wready_next = 0U;
                if ((1U & ((IData)(vlSelf->s_axi_bready) 
                           | (~ (IData)(vlSelf->s_axi_bvalid))))) {
                    vlSelf->axi_top_16x16__DOT__s_axi_awready_next = 1U;
                }
            }
            vlSelf->axi_top_16x16__DOT__write_count_next 
                = (0xffU & ((IData)(vlSelf->axi_top_16x16__DOT__write_count_reg) 
                            - (IData)(1U)));
            vlSelf->axi_top_16x16__DOT__write_state_next 
                = ((0U < (IData)(vlSelf->axi_top_16x16__DOT__write_count_reg))
                    ? 1U : ((1U & ((IData)(vlSelf->s_axi_bready) 
                                   | (~ (IData)(vlSelf->s_axi_bvalid))))
                             ? 0U : 2U));
            if ((0U != (IData)(vlSelf->axi_top_16x16__DOT__write_burst_reg))) {
                vlSelf->axi_top_16x16__DOT__write_addr_next 
                    = (0xfffffU & (vlSelf->axi_top_16x16__DOT__write_addr_reg 
                                   + ((IData)(1U) << (IData)(vlSelf->axi_top_16x16__DOT__write_size_reg))));
            }
        } else {
            vlSelf->axi_top_16x16__DOT__write_state_next = 1U;
        }
    } else if ((2U == (IData)(vlSelf->axi_top_16x16__DOT__write_state))) {
        if ((1U & ((IData)(vlSelf->s_axi_bready) | 
                   (~ (IData)(vlSelf->s_axi_bvalid))))) {
            vlSelf->axi_top_16x16__DOT__s_axi_awready_next = 1U;
            vlSelf->axi_top_16x16__DOT__write_state_next = 0U;
        } else {
            vlSelf->axi_top_16x16__DOT__write_state_next = 2U;
        }
    }
}
