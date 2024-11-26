// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxi_pim.h for the primary calling header

#include "verilated.h"

#include "Vaxi_pim___024root.h"

VL_INLINE_OPT void Vaxi_pim___024root___sequent__TOP__0(Vaxi_pim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_pim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_pim___024root___sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__axi_pim__DOT__s_axi_awid_reg;
    CData/*7:0*/ __Vdly__axi_pim__DOT__s_axi_arid_reg;
    VlWide<512>/*16383:0*/ __Vdly__axi_pim__DOT__rwl;
    IData/*31:0*/ __Vdly__axi_pim__DOT__count;
    CData/*4:0*/ __Vdly__axi_pim__DOT__shift_cnt;
    CData/*0:0*/ __Vdlyvset__axi_pim__DOT__acc_result__v0;
    IData/*31:0*/ __Vdly__axi_pim__DOT__sum_acc_result;
    IData/*31:0*/ __Vdly__axi_pim__DOT__mac_out_reg;
    CData/*0:0*/ __Vdlyvset__axi_pim__DOT__acc_result__v1;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__acc_result__v32;
    CData/*0:0*/ __Vdlyvset__axi_pim__DOT__acc_result__v32;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__acc_result__v33;
    CData/*0:0*/ __Vdlyvset__axi_pim__DOT__acc_result__v33;
    SData/*13:0*/ __Vdlyvdim0__axi_pim__DOT__mem2__v0;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__mem2__v0;
    CData/*0:0*/ __Vdlyvset__axi_pim__DOT__mem2__v0;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__acc_result__v34;
    CData/*0:0*/ __Vdlyvset__axi_pim__DOT__acc_result__v34;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__acc_result__v35;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__acc_result__v36;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__acc_result__v37;
    CData/*0:0*/ __Vdlyvset__axi_pim__DOT__acc_result__v37;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__acc_result__v38;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__acc_result__v39;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__acc_result__v40;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__acc_result__v41;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__acc_result__v42;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__acc_result__v43;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__acc_result__v44;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__acc_result__v45;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__acc_result__v46;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__acc_result__v47;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__acc_result__v48;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__acc_result__v49;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__acc_result__v50;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__acc_result__v51;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__acc_result__v52;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__acc_result__v53;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__acc_result__v54;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__acc_result__v55;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__acc_result__v56;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__acc_result__v57;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__acc_result__v58;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__acc_result__v59;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__acc_result__v60;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__acc_result__v61;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__acc_result__v62;
    IData/*31:0*/ __Vdlyvval__axi_pim__DOT__acc_result__v63;
    CData/*0:0*/ __Vdlyvset__axi_pim__DOT__acc_result__v64;
    IData/*31:0*/ __Vdly__axi_pim__DOT__s_axi_rdata_reg;
    VlWide<512>/*16383:0*/ __Vtemp_h027d8c0c__0;
    // Body
    __Vdly__axi_pim__DOT__s_axi_arid_reg = vlSelf->axi_pim__DOT__s_axi_arid_reg;
    __Vdly__axi_pim__DOT__s_axi_awid_reg = vlSelf->axi_pim__DOT__s_axi_awid_reg;
    VL_ASSIGN_W(16384,__Vdly__axi_pim__DOT__rwl, vlSelf->axi_pim__DOT__rwl);
    __Vdly__axi_pim__DOT__s_axi_rdata_reg = vlSelf->axi_pim__DOT__s_axi_rdata_reg;
    __Vdly__axi_pim__DOT__mac_out_reg = vlSelf->axi_pim__DOT__mac_out_reg;
    __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__sum_acc_result;
    __Vdlyvset__axi_pim__DOT__mem2__v0 = 0U;
    __Vdly__axi_pim__DOT__count = vlSelf->axi_pim__DOT__count;
    __Vdly__axi_pim__DOT__shift_cnt = vlSelf->axi_pim__DOT__shift_cnt;
    __Vdlyvset__axi_pim__DOT__acc_result__v32 = 0U;
    __Vdlyvset__axi_pim__DOT__acc_result__v33 = 0U;
    __Vdlyvset__axi_pim__DOT__acc_result__v34 = 0U;
    __Vdlyvset__axi_pim__DOT__acc_result__v37 = 0U;
    __Vdlyvset__axi_pim__DOT__acc_result__v64 = 0U;
    __Vdlyvset__axi_pim__DOT__acc_result__v0 = 0U;
    __Vdlyvset__axi_pim__DOT__acc_result__v1 = 0U;
    if (vlSelf->rst) {
        VL_CONST_W_1X(16384,__Vdly__axi_pim__DOT__rwl,0x00000000);
    } else if ((0U != vlSelf->axi_pim__DOT__count)) {
        VL_ASSIGN_W(16384,__Vdly__axi_pim__DOT__rwl, vlSelf->axi_pim__DOT__rwl);
    } else {
        VL_EXTEND_WI(16384,32, __Vtemp_h027d8c0c__0, 
                     VL_RANDOM_I());
        VL_ASSIGN_W(16384,__Vdly__axi_pim__DOT__rwl, __Vtemp_h027d8c0c__0);
    }
    if (vlSelf->rst) {
        __Vdly__axi_pim__DOT__s_axi_rdata_reg = 0U;
    } else if (vlSelf->axi_pim__DOT__p_en) {
        VL_WRITEF("[PIM mode] s_axi_rdata_reg : 0x%08x\n\n",
                  32,vlSelf->axi_pim__DOT__s_axi_rdata_reg);
        __Vdly__axi_pim__DOT__s_axi_rdata_reg = vlSelf->axi_pim__DOT__mem2
            [(0x3fffU & ((IData)(vlSelf->axi_pim__DOT__read_addr_reg) 
                         >> 2U))];
    } else {
        VL_WRITEF("[MEM mode] s_axi_rdata_reg : 0x%08x\n\n",
                  32,vlSelf->axi_pim__DOT__s_axi_rdata_reg);
        __Vdly__axi_pim__DOT__s_axi_rdata_reg = vlSelf->axi_pim__DOT__mem1
            [(0x3fffU & ((IData)(vlSelf->axi_pim__DOT__read_addr_reg) 
                         >> 2U))];
    }
    if (vlSelf->rst) {
        __Vdly__axi_pim__DOT__count = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->axi_pim__DOT__i = 0x20U;
        __Vdly__axi_pim__DOT__shift_cnt = 0U;
        __Vdlyvset__axi_pim__DOT__acc_result__v0 = 1U;
        __Vdly__axi_pim__DOT__sum_acc_result = 0U;
        __Vdly__axi_pim__DOT__mac_out_reg = 0U;
        __Vdly__axi_pim__DOT__count = 0U;
        __Vdlyvset__axi_pim__DOT__acc_result__v1 = 1U;
    } else if (VL_UNLIKELY(vlSelf->axi_pim__DOT__p_en)) {
        VL_WRITEF("[MAC] p_en = %0#, w_en = %0#\n",
                  1,vlSelf->axi_pim__DOT__p_en,1,(IData)(vlSelf->axi_pim__DOT__mem_wr_en));
        __Vdly__axi_pim__DOT__count = ((IData)(1U) 
                                       + vlSelf->axi_pim__DOT__count);
        vlSelf->axi_pim__DOT__i = 0x20U;
        __Vdlyvset__axi_pim__DOT__acc_result__v32 = 1U;
        __Vdlyvval__axi_pim__DOT__acc_result__v32 = 
            ((0U == (IData)(vlSelf->axi_pim__DOT__shift_cnt))
              ? vlSelf->axi_pim__DOT__adc_out[0U] : 
             (vlSelf->axi_pim__DOT__acc_result[0U] 
              + (vlSelf->axi_pim__DOT__adc_out[0U] 
                 << (IData)(vlSelf->axi_pim__DOT__shift_cnt))));
        VL_WRITEF("[MAC] mac_out_reg : 0x%08x\n",32,
                  vlSelf->axi_pim__DOT__mac_out_reg);
        if ((0U == (IData)(vlSelf->axi_pim__DOT__shift_cnt))) {
            __Vdlyvval__axi_pim__DOT__acc_result__v33 
                = vlSelf->axi_pim__DOT__adc_out[1U];
            __Vdlyvval__axi_pim__DOT__acc_result__v34 
                = vlSelf->axi_pim__DOT__adc_out[2U];
            __Vdlyvval__axi_pim__DOT__acc_result__v35 
                = vlSelf->axi_pim__DOT__adc_out[3U];
            __Vdlyvval__axi_pim__DOT__acc_result__v36 
                = vlSelf->axi_pim__DOT__adc_out[4U];
            __Vdlyvval__axi_pim__DOT__acc_result__v37 
                = vlSelf->axi_pim__DOT__adc_out[5U];
            __Vdlyvval__axi_pim__DOT__acc_result__v38 
                = vlSelf->axi_pim__DOT__adc_out[6U];
            __Vdlyvval__axi_pim__DOT__acc_result__v39 
                = vlSelf->axi_pim__DOT__adc_out[7U];
            __Vdlyvval__axi_pim__DOT__acc_result__v40 
                = vlSelf->axi_pim__DOT__adc_out[8U];
            __Vdlyvval__axi_pim__DOT__acc_result__v41 
                = vlSelf->axi_pim__DOT__adc_out[9U];
            __Vdlyvval__axi_pim__DOT__acc_result__v42 
                = vlSelf->axi_pim__DOT__adc_out[0xaU];
            __Vdlyvval__axi_pim__DOT__acc_result__v43 
                = vlSelf->axi_pim__DOT__adc_out[0xbU];
            __Vdlyvval__axi_pim__DOT__acc_result__v44 
                = vlSelf->axi_pim__DOT__adc_out[0xcU];
            __Vdlyvval__axi_pim__DOT__acc_result__v45 
                = vlSelf->axi_pim__DOT__adc_out[0xdU];
            __Vdlyvval__axi_pim__DOT__acc_result__v46 
                = vlSelf->axi_pim__DOT__adc_out[0xeU];
            __Vdlyvval__axi_pim__DOT__acc_result__v47 
                = vlSelf->axi_pim__DOT__adc_out[0xfU];
            __Vdlyvval__axi_pim__DOT__acc_result__v48 
                = vlSelf->axi_pim__DOT__adc_out[0x10U];
            __Vdlyvval__axi_pim__DOT__acc_result__v49 
                = vlSelf->axi_pim__DOT__adc_out[0x11U];
            __Vdlyvval__axi_pim__DOT__acc_result__v50 
                = vlSelf->axi_pim__DOT__adc_out[0x12U];
            __Vdlyvval__axi_pim__DOT__acc_result__v51 
                = vlSelf->axi_pim__DOT__adc_out[0x13U];
            __Vdlyvval__axi_pim__DOT__acc_result__v52 
                = vlSelf->axi_pim__DOT__adc_out[0x14U];
            __Vdlyvval__axi_pim__DOT__acc_result__v53 
                = vlSelf->axi_pim__DOT__adc_out[0x15U];
            __Vdlyvval__axi_pim__DOT__acc_result__v54 
                = vlSelf->axi_pim__DOT__adc_out[0x16U];
            __Vdlyvval__axi_pim__DOT__acc_result__v55 
                = vlSelf->axi_pim__DOT__adc_out[0x17U];
            __Vdlyvval__axi_pim__DOT__acc_result__v56 
                = vlSelf->axi_pim__DOT__adc_out[0x18U];
            __Vdlyvval__axi_pim__DOT__acc_result__v57 
                = vlSelf->axi_pim__DOT__adc_out[0x19U];
            __Vdlyvval__axi_pim__DOT__acc_result__v58 
                = vlSelf->axi_pim__DOT__adc_out[0x1aU];
            __Vdlyvval__axi_pim__DOT__acc_result__v59 
                = vlSelf->axi_pim__DOT__adc_out[0x1bU];
            __Vdlyvval__axi_pim__DOT__acc_result__v60 
                = vlSelf->axi_pim__DOT__adc_out[0x1cU];
            __Vdlyvval__axi_pim__DOT__acc_result__v61 
                = vlSelf->axi_pim__DOT__adc_out[0x1dU];
            __Vdlyvval__axi_pim__DOT__acc_result__v62 
                = vlSelf->axi_pim__DOT__adc_out[0x1eU];
            __Vdlyvval__axi_pim__DOT__acc_result__v63 
                = vlSelf->axi_pim__DOT__adc_out[0x1fU];
        } else {
            __Vdlyvval__axi_pim__DOT__acc_result__v33 
                = (vlSelf->axi_pim__DOT__acc_result
                   [1U] + (vlSelf->axi_pim__DOT__adc_out
                           [1U] << (IData)(vlSelf->axi_pim__DOT__shift_cnt)));
            __Vdlyvval__axi_pim__DOT__acc_result__v34 
                = (vlSelf->axi_pim__DOT__acc_result
                   [2U] + (vlSelf->axi_pim__DOT__adc_out
                           [2U] << (IData)(vlSelf->axi_pim__DOT__shift_cnt)));
            __Vdlyvval__axi_pim__DOT__acc_result__v35 
                = (vlSelf->axi_pim__DOT__acc_result
                   [3U] + (vlSelf->axi_pim__DOT__adc_out
                           [3U] << (IData)(vlSelf->axi_pim__DOT__shift_cnt)));
            __Vdlyvval__axi_pim__DOT__acc_result__v36 
                = (vlSelf->axi_pim__DOT__acc_result
                   [4U] + (vlSelf->axi_pim__DOT__adc_out
                           [4U] << (IData)(vlSelf->axi_pim__DOT__shift_cnt)));
            __Vdlyvval__axi_pim__DOT__acc_result__v37 
                = (vlSelf->axi_pim__DOT__acc_result
                   [5U] + (vlSelf->axi_pim__DOT__adc_out
                           [5U] << (IData)(vlSelf->axi_pim__DOT__shift_cnt)));
            __Vdlyvval__axi_pim__DOT__acc_result__v38 
                = (vlSelf->axi_pim__DOT__acc_result
                   [6U] + (vlSelf->axi_pim__DOT__adc_out
                           [6U] << (IData)(vlSelf->axi_pim__DOT__shift_cnt)));
            __Vdlyvval__axi_pim__DOT__acc_result__v39 
                = (vlSelf->axi_pim__DOT__acc_result
                   [7U] + (vlSelf->axi_pim__DOT__adc_out
                           [7U] << (IData)(vlSelf->axi_pim__DOT__shift_cnt)));
            __Vdlyvval__axi_pim__DOT__acc_result__v40 
                = (vlSelf->axi_pim__DOT__acc_result
                   [8U] + (vlSelf->axi_pim__DOT__adc_out
                           [8U] << (IData)(vlSelf->axi_pim__DOT__shift_cnt)));
            __Vdlyvval__axi_pim__DOT__acc_result__v41 
                = (vlSelf->axi_pim__DOT__acc_result
                   [9U] + (vlSelf->axi_pim__DOT__adc_out
                           [9U] << (IData)(vlSelf->axi_pim__DOT__shift_cnt)));
            __Vdlyvval__axi_pim__DOT__acc_result__v42 
                = (vlSelf->axi_pim__DOT__acc_result
                   [0xaU] + (vlSelf->axi_pim__DOT__adc_out
                             [0xaU] << (IData)(vlSelf->axi_pim__DOT__shift_cnt)));
            __Vdlyvval__axi_pim__DOT__acc_result__v43 
                = (vlSelf->axi_pim__DOT__acc_result
                   [0xbU] + (vlSelf->axi_pim__DOT__adc_out
                             [0xbU] << (IData)(vlSelf->axi_pim__DOT__shift_cnt)));
            __Vdlyvval__axi_pim__DOT__acc_result__v44 
                = (vlSelf->axi_pim__DOT__acc_result
                   [0xcU] + (vlSelf->axi_pim__DOT__adc_out
                             [0xcU] << (IData)(vlSelf->axi_pim__DOT__shift_cnt)));
            __Vdlyvval__axi_pim__DOT__acc_result__v45 
                = (vlSelf->axi_pim__DOT__acc_result
                   [0xdU] + (vlSelf->axi_pim__DOT__adc_out
                             [0xdU] << (IData)(vlSelf->axi_pim__DOT__shift_cnt)));
            __Vdlyvval__axi_pim__DOT__acc_result__v46 
                = (vlSelf->axi_pim__DOT__acc_result
                   [0xeU] + (vlSelf->axi_pim__DOT__adc_out
                             [0xeU] << (IData)(vlSelf->axi_pim__DOT__shift_cnt)));
            __Vdlyvval__axi_pim__DOT__acc_result__v47 
                = (vlSelf->axi_pim__DOT__acc_result
                   [0xfU] + (vlSelf->axi_pim__DOT__adc_out
                             [0xfU] << (IData)(vlSelf->axi_pim__DOT__shift_cnt)));
            __Vdlyvval__axi_pim__DOT__acc_result__v48 
                = (vlSelf->axi_pim__DOT__acc_result
                   [0x10U] + (vlSelf->axi_pim__DOT__adc_out
                              [0x10U] << (IData)(vlSelf->axi_pim__DOT__shift_cnt)));
            __Vdlyvval__axi_pim__DOT__acc_result__v49 
                = (vlSelf->axi_pim__DOT__acc_result
                   [0x11U] + (vlSelf->axi_pim__DOT__adc_out
                              [0x11U] << (IData)(vlSelf->axi_pim__DOT__shift_cnt)));
            __Vdlyvval__axi_pim__DOT__acc_result__v50 
                = (vlSelf->axi_pim__DOT__acc_result
                   [0x12U] + (vlSelf->axi_pim__DOT__adc_out
                              [0x12U] << (IData)(vlSelf->axi_pim__DOT__shift_cnt)));
            __Vdlyvval__axi_pim__DOT__acc_result__v51 
                = (vlSelf->axi_pim__DOT__acc_result
                   [0x13U] + (vlSelf->axi_pim__DOT__adc_out
                              [0x13U] << (IData)(vlSelf->axi_pim__DOT__shift_cnt)));
            __Vdlyvval__axi_pim__DOT__acc_result__v52 
                = (vlSelf->axi_pim__DOT__acc_result
                   [0x14U] + (vlSelf->axi_pim__DOT__adc_out
                              [0x14U] << (IData)(vlSelf->axi_pim__DOT__shift_cnt)));
            __Vdlyvval__axi_pim__DOT__acc_result__v53 
                = (vlSelf->axi_pim__DOT__acc_result
                   [0x15U] + (vlSelf->axi_pim__DOT__adc_out
                              [0x15U] << (IData)(vlSelf->axi_pim__DOT__shift_cnt)));
            __Vdlyvval__axi_pim__DOT__acc_result__v54 
                = (vlSelf->axi_pim__DOT__acc_result
                   [0x16U] + (vlSelf->axi_pim__DOT__adc_out
                              [0x16U] << (IData)(vlSelf->axi_pim__DOT__shift_cnt)));
            __Vdlyvval__axi_pim__DOT__acc_result__v55 
                = (vlSelf->axi_pim__DOT__acc_result
                   [0x17U] + (vlSelf->axi_pim__DOT__adc_out
                              [0x17U] << (IData)(vlSelf->axi_pim__DOT__shift_cnt)));
            __Vdlyvval__axi_pim__DOT__acc_result__v56 
                = (vlSelf->axi_pim__DOT__acc_result
                   [0x18U] + (vlSelf->axi_pim__DOT__adc_out
                              [0x18U] << (IData)(vlSelf->axi_pim__DOT__shift_cnt)));
            __Vdlyvval__axi_pim__DOT__acc_result__v57 
                = (vlSelf->axi_pim__DOT__acc_result
                   [0x19U] + (vlSelf->axi_pim__DOT__adc_out
                              [0x19U] << (IData)(vlSelf->axi_pim__DOT__shift_cnt)));
            __Vdlyvval__axi_pim__DOT__acc_result__v58 
                = (vlSelf->axi_pim__DOT__acc_result
                   [0x1aU] + (vlSelf->axi_pim__DOT__adc_out
                              [0x1aU] << (IData)(vlSelf->axi_pim__DOT__shift_cnt)));
            __Vdlyvval__axi_pim__DOT__acc_result__v59 
                = (vlSelf->axi_pim__DOT__acc_result
                   [0x1bU] + (vlSelf->axi_pim__DOT__adc_out
                              [0x1bU] << (IData)(vlSelf->axi_pim__DOT__shift_cnt)));
            __Vdlyvval__axi_pim__DOT__acc_result__v60 
                = (vlSelf->axi_pim__DOT__acc_result
                   [0x1cU] + (vlSelf->axi_pim__DOT__adc_out
                              [0x1cU] << (IData)(vlSelf->axi_pim__DOT__shift_cnt)));
            __Vdlyvval__axi_pim__DOT__acc_result__v61 
                = (vlSelf->axi_pim__DOT__acc_result
                   [0x1dU] + (vlSelf->axi_pim__DOT__adc_out
                              [0x1dU] << (IData)(vlSelf->axi_pim__DOT__shift_cnt)));
            __Vdlyvval__axi_pim__DOT__acc_result__v62 
                = (vlSelf->axi_pim__DOT__acc_result
                   [0x1eU] + (vlSelf->axi_pim__DOT__adc_out
                              [0x1eU] << (IData)(vlSelf->axi_pim__DOT__shift_cnt)));
            __Vdlyvval__axi_pim__DOT__acc_result__v63 
                = (vlSelf->axi_pim__DOT__acc_result
                   [0x1fU] + (vlSelf->axi_pim__DOT__adc_out
                              [0x1fU] << (IData)(vlSelf->axi_pim__DOT__shift_cnt)));
        }
        __Vdlyvset__axi_pim__DOT__acc_result__v33 = 1U;
        if ((0U != vlSelf->axi_pim__DOT__mac_out_reg)) {
            __Vdlyvval__axi_pim__DOT__mem2__v0 = vlSelf->axi_pim__DOT__mac_out_reg;
            __Vdlyvset__axi_pim__DOT__mem2__v0 = 1U;
            __Vdlyvdim0__axi_pim__DOT__mem2__v0 = (0x3fffU 
                                                   & ((IData)(vlSelf->axi_pim__DOT__write_addr_reg) 
                                                      >> 2U));
        }
        __Vdlyvset__axi_pim__DOT__acc_result__v34 = 1U;
        __Vdly__axi_pim__DOT__mac_out_reg = vlSelf->axi_pim__DOT__sum_acc_result;
        __Vdlyvset__axi_pim__DOT__acc_result__v37 = 1U;
        __Vdly__axi_pim__DOT__shift_cnt = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->axi_pim__DOT__shift_cnt)));
        vlSelf->axi_pim__DOT__temp_sum_acc_result = 
            vlSelf->axi_pim__DOT__acc_result[0U];
        __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__temp_sum_acc_result;
        vlSelf->axi_pim__DOT__temp_sum_acc_result = 
            (vlSelf->axi_pim__DOT__temp_sum_acc_result 
             + vlSelf->axi_pim__DOT__acc_result[1U]);
        __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__temp_sum_acc_result;
        vlSelf->axi_pim__DOT__temp_sum_acc_result = 
            (vlSelf->axi_pim__DOT__temp_sum_acc_result 
             + vlSelf->axi_pim__DOT__acc_result[2U]);
        __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__temp_sum_acc_result;
        vlSelf->axi_pim__DOT__temp_sum_acc_result = 
            (vlSelf->axi_pim__DOT__temp_sum_acc_result 
             + vlSelf->axi_pim__DOT__acc_result[3U]);
        __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__temp_sum_acc_result;
        vlSelf->axi_pim__DOT__temp_sum_acc_result = 
            (vlSelf->axi_pim__DOT__temp_sum_acc_result 
             + vlSelf->axi_pim__DOT__acc_result[4U]);
        __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__temp_sum_acc_result;
        vlSelf->axi_pim__DOT__temp_sum_acc_result = 
            (vlSelf->axi_pim__DOT__temp_sum_acc_result 
             + vlSelf->axi_pim__DOT__acc_result[5U]);
        __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__temp_sum_acc_result;
        vlSelf->axi_pim__DOT__temp_sum_acc_result = 
            (vlSelf->axi_pim__DOT__temp_sum_acc_result 
             + vlSelf->axi_pim__DOT__acc_result[6U]);
        __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__temp_sum_acc_result;
        vlSelf->axi_pim__DOT__temp_sum_acc_result = 
            (vlSelf->axi_pim__DOT__temp_sum_acc_result 
             + vlSelf->axi_pim__DOT__acc_result[7U]);
        __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__temp_sum_acc_result;
        vlSelf->axi_pim__DOT__temp_sum_acc_result = 
            (vlSelf->axi_pim__DOT__temp_sum_acc_result 
             + vlSelf->axi_pim__DOT__acc_result[8U]);
        __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__temp_sum_acc_result;
        vlSelf->axi_pim__DOT__temp_sum_acc_result = 
            (vlSelf->axi_pim__DOT__temp_sum_acc_result 
             + vlSelf->axi_pim__DOT__acc_result[9U]);
        __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__temp_sum_acc_result;
        vlSelf->axi_pim__DOT__temp_sum_acc_result = 
            (vlSelf->axi_pim__DOT__temp_sum_acc_result 
             + vlSelf->axi_pim__DOT__acc_result[0xaU]);
        __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__temp_sum_acc_result;
        vlSelf->axi_pim__DOT__temp_sum_acc_result = 
            (vlSelf->axi_pim__DOT__temp_sum_acc_result 
             + vlSelf->axi_pim__DOT__acc_result[0xbU]);
        __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__temp_sum_acc_result;
        vlSelf->axi_pim__DOT__temp_sum_acc_result = 
            (vlSelf->axi_pim__DOT__temp_sum_acc_result 
             + vlSelf->axi_pim__DOT__acc_result[0xcU]);
        __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__temp_sum_acc_result;
        vlSelf->axi_pim__DOT__temp_sum_acc_result = 
            (vlSelf->axi_pim__DOT__temp_sum_acc_result 
             + vlSelf->axi_pim__DOT__acc_result[0xdU]);
        __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__temp_sum_acc_result;
        vlSelf->axi_pim__DOT__temp_sum_acc_result = 
            (vlSelf->axi_pim__DOT__temp_sum_acc_result 
             + vlSelf->axi_pim__DOT__acc_result[0xeU]);
        __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__temp_sum_acc_result;
        vlSelf->axi_pim__DOT__temp_sum_acc_result = 
            (vlSelf->axi_pim__DOT__temp_sum_acc_result 
             + vlSelf->axi_pim__DOT__acc_result[0xfU]);
        __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__temp_sum_acc_result;
        vlSelf->axi_pim__DOT__temp_sum_acc_result = 
            (vlSelf->axi_pim__DOT__temp_sum_acc_result 
             + vlSelf->axi_pim__DOT__acc_result[0x10U]);
        __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__temp_sum_acc_result;
        vlSelf->axi_pim__DOT__temp_sum_acc_result = 
            (vlSelf->axi_pim__DOT__temp_sum_acc_result 
             + vlSelf->axi_pim__DOT__acc_result[0x11U]);
        __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__temp_sum_acc_result;
        vlSelf->axi_pim__DOT__temp_sum_acc_result = 
            (vlSelf->axi_pim__DOT__temp_sum_acc_result 
             + vlSelf->axi_pim__DOT__acc_result[0x12U]);
        __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__temp_sum_acc_result;
        vlSelf->axi_pim__DOT__temp_sum_acc_result = 
            (vlSelf->axi_pim__DOT__temp_sum_acc_result 
             + vlSelf->axi_pim__DOT__acc_result[0x13U]);
        __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__temp_sum_acc_result;
        vlSelf->axi_pim__DOT__temp_sum_acc_result = 
            (vlSelf->axi_pim__DOT__temp_sum_acc_result 
             + vlSelf->axi_pim__DOT__acc_result[0x14U]);
        __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__temp_sum_acc_result;
        vlSelf->axi_pim__DOT__temp_sum_acc_result = 
            (vlSelf->axi_pim__DOT__temp_sum_acc_result 
             + vlSelf->axi_pim__DOT__acc_result[0x15U]);
        __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__temp_sum_acc_result;
        vlSelf->axi_pim__DOT__temp_sum_acc_result = 
            (vlSelf->axi_pim__DOT__temp_sum_acc_result 
             + vlSelf->axi_pim__DOT__acc_result[0x16U]);
        __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__temp_sum_acc_result;
        vlSelf->axi_pim__DOT__temp_sum_acc_result = 
            (vlSelf->axi_pim__DOT__temp_sum_acc_result 
             + vlSelf->axi_pim__DOT__acc_result[0x17U]);
        __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__temp_sum_acc_result;
        vlSelf->axi_pim__DOT__temp_sum_acc_result = 
            (vlSelf->axi_pim__DOT__temp_sum_acc_result 
             + vlSelf->axi_pim__DOT__acc_result[0x18U]);
        __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__temp_sum_acc_result;
        vlSelf->axi_pim__DOT__temp_sum_acc_result = 
            (vlSelf->axi_pim__DOT__temp_sum_acc_result 
             + vlSelf->axi_pim__DOT__acc_result[0x19U]);
        __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__temp_sum_acc_result;
        vlSelf->axi_pim__DOT__temp_sum_acc_result = 
            (vlSelf->axi_pim__DOT__temp_sum_acc_result 
             + vlSelf->axi_pim__DOT__acc_result[0x1aU]);
        __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__temp_sum_acc_result;
        vlSelf->axi_pim__DOT__temp_sum_acc_result = 
            (vlSelf->axi_pim__DOT__temp_sum_acc_result 
             + vlSelf->axi_pim__DOT__acc_result[0x1bU]);
        __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__temp_sum_acc_result;
        vlSelf->axi_pim__DOT__temp_sum_acc_result = 
            (vlSelf->axi_pim__DOT__temp_sum_acc_result 
             + vlSelf->axi_pim__DOT__acc_result[0x1cU]);
        __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__temp_sum_acc_result;
        vlSelf->axi_pim__DOT__temp_sum_acc_result = 
            (vlSelf->axi_pim__DOT__temp_sum_acc_result 
             + vlSelf->axi_pim__DOT__acc_result[0x1dU]);
        __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__temp_sum_acc_result;
        vlSelf->axi_pim__DOT__temp_sum_acc_result = 
            (vlSelf->axi_pim__DOT__temp_sum_acc_result 
             + vlSelf->axi_pim__DOT__acc_result[0x1eU]);
        __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__temp_sum_acc_result;
        vlSelf->axi_pim__DOT__temp_sum_acc_result = 
            (vlSelf->axi_pim__DOT__temp_sum_acc_result 
             + vlSelf->axi_pim__DOT__acc_result[0x1fU]);
        __Vdly__axi_pim__DOT__sum_acc_result = vlSelf->axi_pim__DOT__temp_sum_acc_result;
    } else {
        if (VL_UNLIKELY(vlSelf->axi_pim__DOT__mem_wr_en)) {
            VL_WRITEF("[Write] p_en = %0#, w_en = %0#\n[Write] mem1[0x%04x] <- 0x%08x\n",
                      1,vlSelf->axi_pim__DOT__p_en,
                      1,(IData)(vlSelf->axi_pim__DOT__mem_wr_en),
                      14,(0x3fffU & ((IData)(vlSelf->axi_pim__DOT__write_addr_reg) 
                                     >> 2U)),32,vlSelf->s_axi_wdata);
        } else if (vlSelf->axi_pim__DOT__mem_wr_en) {
            VL_WRITEF("Waiting .. .. .. ..\n");
        } else {
            VL_WRITEF("[Read] p_en = %0#, w_en = %0#\n",
                      1,vlSelf->axi_pim__DOT__p_en,
                      1,(IData)(vlSelf->axi_pim__DOT__mem_wr_en));
        }
        vlSelf->axi_pim__DOT__i = 0x20U;
        __Vdly__axi_pim__DOT__count = 0U;
        __Vdly__axi_pim__DOT__shift_cnt = 0U;
        __Vdlyvset__axi_pim__DOT__acc_result__v64 = 1U;
    }
    VL_ASSIGN_W(16384,vlSelf->axi_pim__DOT__rwl, __Vdly__axi_pim__DOT__rwl);
    vlSelf->axi_pim__DOT__s_axi_rdata_reg = __Vdly__axi_pim__DOT__s_axi_rdata_reg;
    vlSelf->axi_pim__DOT__sum_acc_result = __Vdly__axi_pim__DOT__sum_acc_result;
    vlSelf->axi_pim__DOT__mac_out_reg = __Vdly__axi_pim__DOT__mac_out_reg;
    vlSelf->axi_pim__DOT__count = __Vdly__axi_pim__DOT__count;
    if (__Vdlyvset__axi_pim__DOT__mem2__v0) {
        vlSelf->axi_pim__DOT__mem2[__Vdlyvdim0__axi_pim__DOT__mem2__v0] 
            = __Vdlyvval__axi_pim__DOT__mem2__v0;
    }
    vlSelf->axi_pim__DOT__shift_cnt = __Vdly__axi_pim__DOT__shift_cnt;
    if (__Vdlyvset__axi_pim__DOT__acc_result__v0) {
        vlSelf->axi_pim__DOT__adc_out[0U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0U] = 0U;
    }
    if (__Vdlyvset__axi_pim__DOT__acc_result__v1) {
        vlSelf->axi_pim__DOT__adc_out[1U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[2U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[3U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[4U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[5U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[6U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[7U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[8U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[9U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0xaU] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0xbU] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0xcU] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0xdU] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0xeU] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0xfU] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0x10U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0x11U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0x12U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0x13U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0x14U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0x15U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0x16U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0x17U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0x18U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0x19U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0x1aU] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0x1bU] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0x1cU] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0x1dU] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0x1eU] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0x1fU] = 0U;
        vlSelf->axi_pim__DOT__acc_result[1U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[2U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[3U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[4U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[5U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[6U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[7U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[8U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[9U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0xaU] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0xbU] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0xcU] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0xdU] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0xeU] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0xfU] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0x10U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0x11U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0x12U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0x13U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0x14U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0x15U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0x16U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0x17U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0x18U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0x19U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0x1aU] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0x1bU] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0x1cU] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0x1dU] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0x1eU] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0x1fU] = 0U;
    }
    if (__Vdlyvset__axi_pim__DOT__acc_result__v32) {
        vlSelf->axi_pim__DOT__acc_result[0U] = __Vdlyvval__axi_pim__DOT__acc_result__v32;
    }
    if (__Vdlyvset__axi_pim__DOT__acc_result__v33) {
        vlSelf->axi_pim__DOT__acc_result[1U] = __Vdlyvval__axi_pim__DOT__acc_result__v33;
    }
    if (__Vdlyvset__axi_pim__DOT__acc_result__v34) {
        vlSelf->axi_pim__DOT__acc_result[2U] = __Vdlyvval__axi_pim__DOT__acc_result__v34;
        vlSelf->axi_pim__DOT__acc_result[3U] = __Vdlyvval__axi_pim__DOT__acc_result__v35;
        vlSelf->axi_pim__DOT__acc_result[4U] = __Vdlyvval__axi_pim__DOT__acc_result__v36;
    }
    if (__Vdlyvset__axi_pim__DOT__acc_result__v37) {
        vlSelf->axi_pim__DOT__acc_result[5U] = __Vdlyvval__axi_pim__DOT__acc_result__v37;
        vlSelf->axi_pim__DOT__acc_result[6U] = __Vdlyvval__axi_pim__DOT__acc_result__v38;
        vlSelf->axi_pim__DOT__acc_result[7U] = __Vdlyvval__axi_pim__DOT__acc_result__v39;
        vlSelf->axi_pim__DOT__acc_result[8U] = __Vdlyvval__axi_pim__DOT__acc_result__v40;
        vlSelf->axi_pim__DOT__acc_result[9U] = __Vdlyvval__axi_pim__DOT__acc_result__v41;
        vlSelf->axi_pim__DOT__acc_result[0xaU] = __Vdlyvval__axi_pim__DOT__acc_result__v42;
        vlSelf->axi_pim__DOT__acc_result[0xbU] = __Vdlyvval__axi_pim__DOT__acc_result__v43;
        vlSelf->axi_pim__DOT__acc_result[0xcU] = __Vdlyvval__axi_pim__DOT__acc_result__v44;
        vlSelf->axi_pim__DOT__acc_result[0xdU] = __Vdlyvval__axi_pim__DOT__acc_result__v45;
        vlSelf->axi_pim__DOT__acc_result[0xeU] = __Vdlyvval__axi_pim__DOT__acc_result__v46;
        vlSelf->axi_pim__DOT__acc_result[0xfU] = __Vdlyvval__axi_pim__DOT__acc_result__v47;
        vlSelf->axi_pim__DOT__acc_result[0x10U] = __Vdlyvval__axi_pim__DOT__acc_result__v48;
        vlSelf->axi_pim__DOT__acc_result[0x11U] = __Vdlyvval__axi_pim__DOT__acc_result__v49;
        vlSelf->axi_pim__DOT__acc_result[0x12U] = __Vdlyvval__axi_pim__DOT__acc_result__v50;
        vlSelf->axi_pim__DOT__acc_result[0x13U] = __Vdlyvval__axi_pim__DOT__acc_result__v51;
        vlSelf->axi_pim__DOT__acc_result[0x14U] = __Vdlyvval__axi_pim__DOT__acc_result__v52;
        vlSelf->axi_pim__DOT__acc_result[0x15U] = __Vdlyvval__axi_pim__DOT__acc_result__v53;
        vlSelf->axi_pim__DOT__acc_result[0x16U] = __Vdlyvval__axi_pim__DOT__acc_result__v54;
        vlSelf->axi_pim__DOT__acc_result[0x17U] = __Vdlyvval__axi_pim__DOT__acc_result__v55;
        vlSelf->axi_pim__DOT__acc_result[0x18U] = __Vdlyvval__axi_pim__DOT__acc_result__v56;
        vlSelf->axi_pim__DOT__acc_result[0x19U] = __Vdlyvval__axi_pim__DOT__acc_result__v57;
        vlSelf->axi_pim__DOT__acc_result[0x1aU] = __Vdlyvval__axi_pim__DOT__acc_result__v58;
        vlSelf->axi_pim__DOT__acc_result[0x1bU] = __Vdlyvval__axi_pim__DOT__acc_result__v59;
        vlSelf->axi_pim__DOT__acc_result[0x1cU] = __Vdlyvval__axi_pim__DOT__acc_result__v60;
        vlSelf->axi_pim__DOT__acc_result[0x1dU] = __Vdlyvval__axi_pim__DOT__acc_result__v61;
        vlSelf->axi_pim__DOT__acc_result[0x1eU] = __Vdlyvval__axi_pim__DOT__acc_result__v62;
        vlSelf->axi_pim__DOT__acc_result[0x1fU] = __Vdlyvval__axi_pim__DOT__acc_result__v63;
    }
    if (__Vdlyvset__axi_pim__DOT__acc_result__v64) {
        vlSelf->axi_pim__DOT__acc_result[0U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[1U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[2U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[3U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[4U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[5U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[6U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[7U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[8U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[9U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0xaU] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0xbU] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0xcU] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0xdU] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0xeU] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0xfU] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0x10U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0x11U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0x12U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0x13U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0x14U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0x15U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0x16U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0x17U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0x18U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0x19U] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0x1aU] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0x1bU] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0x1cU] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0x1dU] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0x1eU] = 0U;
        vlSelf->axi_pim__DOT__acc_result[0x1fU] = 0U;
    }
    vlSelf->s_axi_rdata = vlSelf->axi_pim__DOT__s_axi_rdata_reg;
    if (vlSelf->rst) {
        __Vdly__axi_pim__DOT__s_axi_awid_reg = 0U;
        __Vdly__axi_pim__DOT__s_axi_arid_reg = 0U;
        vlSelf->axi_pim__DOT__p_en = 0U;
    } else if (VL_UNLIKELY(((0U == (IData)(vlSelf->s_axi_awid)) 
                            | (0U == (IData)(vlSelf->s_axi_arid))))) {
        __Vdly__axi_pim__DOT__s_axi_awid_reg = (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->axi_pim__DOT__s_axi_awid_reg)));
        __Vdly__axi_pim__DOT__s_axi_arid_reg = (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->axi_pim__DOT__s_axi_arid_reg)));
        VL_WRITEF("PIM Mode Enabled with Incremented ID! %x -> %x, %x -> %x\n",
                  8,vlSelf->s_axi_awid,8,(IData)(vlSelf->axi_pim__DOT__s_axi_awid_reg),
                  8,vlSelf->s_axi_arid,8,(IData)(vlSelf->axi_pim__DOT__s_axi_arid_reg));
        if (VL_UNLIKELY(((0x80U <= (IData)(vlSelf->axi_pim__DOT__s_axi_awid_reg)) 
                         | (0x80U <= (IData)(vlSelf->axi_pim__DOT__s_axi_arid_reg))))) {
            VL_WRITEF("\nPIM Mode Start ! : [mem1] ------> [mem2]\n");
            vlSelf->axi_pim__DOT__p_en = 1U;
        } else if (VL_UNLIKELY(((0xffU <= (IData)(vlSelf->axi_pim__DOT__s_axi_awid_reg)) 
                                | (0xffU <= (IData)(vlSelf->axi_pim__DOT__s_axi_arid_reg))))) {
            VL_WRITEF("\nMEM Mode Start ! : [mem2] ------> [mem1]\n");
            vlSelf->axi_pim__DOT__p_en = 0U;
        } else {
            vlSelf->axi_pim__DOT__p_en = 0U;
        }
    } else {
        vlSelf->axi_pim__DOT__p_en = 0U;
    }
    vlSelf->axi_pim__DOT__s_axi_awid_reg = __Vdly__axi_pim__DOT__s_axi_awid_reg;
    vlSelf->axi_pim__DOT__s_axi_arid_reg = __Vdly__axi_pim__DOT__s_axi_arid_reg;
}

VL_INLINE_OPT void Vaxi_pim___024root___sequent__TOP__1(Vaxi_pim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_pim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_pim___024root___sequent__TOP__1\n"); );
    // Init
    SData/*13:0*/ __Vdlyvdim0__axi_pim__DOT__mem1__v0;
    CData/*4:0*/ __Vdlyvlsb__axi_pim__DOT__mem1__v0;
    CData/*7:0*/ __Vdlyvval__axi_pim__DOT__mem1__v0;
    CData/*0:0*/ __Vdlyvset__axi_pim__DOT__mem1__v0;
    SData/*13:0*/ __Vdlyvdim0__axi_pim__DOT__mem1__v1;
    CData/*4:0*/ __Vdlyvlsb__axi_pim__DOT__mem1__v1;
    CData/*7:0*/ __Vdlyvval__axi_pim__DOT__mem1__v1;
    CData/*0:0*/ __Vdlyvset__axi_pim__DOT__mem1__v1;
    SData/*13:0*/ __Vdlyvdim0__axi_pim__DOT__mem1__v2;
    CData/*4:0*/ __Vdlyvlsb__axi_pim__DOT__mem1__v2;
    CData/*7:0*/ __Vdlyvval__axi_pim__DOT__mem1__v2;
    CData/*0:0*/ __Vdlyvset__axi_pim__DOT__mem1__v2;
    SData/*13:0*/ __Vdlyvdim0__axi_pim__DOT__mem1__v3;
    CData/*4:0*/ __Vdlyvlsb__axi_pim__DOT__mem1__v3;
    CData/*7:0*/ __Vdlyvval__axi_pim__DOT__mem1__v3;
    CData/*0:0*/ __Vdlyvset__axi_pim__DOT__mem1__v3;
    // Body
    vlSelf->axi_pim__DOT__i = 4U;
    __Vdlyvset__axi_pim__DOT__mem1__v0 = 0U;
    __Vdlyvset__axi_pim__DOT__mem1__v1 = 0U;
    __Vdlyvset__axi_pim__DOT__mem1__v2 = 0U;
    __Vdlyvset__axi_pim__DOT__mem1__v3 = 0U;
    vlSelf->axi_pim__DOT__s_axi_rlast_reg = vlSelf->axi_pim__DOT__s_axi_rlast_next;
    vlSelf->axi_pim__DOT__s_axi_rid_reg = vlSelf->axi_pim__DOT__s_axi_rid_next;
    vlSelf->axi_pim__DOT__read_addr_reg = vlSelf->axi_pim__DOT__read_addr_next;
    vlSelf->axi_pim__DOT__read_id_reg = vlSelf->axi_pim__DOT__read_id_next;
    vlSelf->axi_pim__DOT__s_axi_bid_reg = vlSelf->axi_pim__DOT__s_axi_bid_next;
    vlSelf->axi_pim__DOT__write_id_reg = vlSelf->axi_pim__DOT__write_id_next;
    vlSelf->axi_pim__DOT__read_burst_reg = vlSelf->axi_pim__DOT__read_burst_next;
    vlSelf->axi_pim__DOT__read_size_reg = vlSelf->axi_pim__DOT__read_size_next;
    vlSelf->axi_pim__DOT__write_size_reg = vlSelf->axi_pim__DOT__write_size_next;
    vlSelf->axi_pim__DOT__write_burst_reg = vlSelf->axi_pim__DOT__write_burst_next;
    vlSelf->axi_pim__DOT__read_count_reg = vlSelf->axi_pim__DOT__read_count_next;
    vlSelf->axi_pim__DOT__write_count_reg = vlSelf->axi_pim__DOT__write_count_next;
    vlSelf->axi_pim__DOT__s_axi_rvalid_reg = vlSelf->axi_pim__DOT__s_axi_rvalid_next;
    vlSelf->axi_pim__DOT__read_state_reg = vlSelf->axi_pim__DOT__read_state_next;
    vlSelf->axi_pim__DOT__s_axi_bvalid_reg = vlSelf->axi_pim__DOT__s_axi_bvalid_next;
    vlSelf->axi_pim__DOT__write_state_reg = vlSelf->axi_pim__DOT__write_state_next;
    vlSelf->axi_pim__DOT__s_axi_arready_reg = vlSelf->axi_pim__DOT__s_axi_arready_next;
    vlSelf->axi_pim__DOT__s_axi_awready_reg = vlSelf->axi_pim__DOT__s_axi_awready_next;
    vlSelf->axi_pim__DOT__s_axi_wready_reg = vlSelf->axi_pim__DOT__s_axi_wready_next;
    if (vlSelf->rst) {
        vlSelf->axi_pim__DOT__s_axi_rvalid_reg = 0U;
        vlSelf->axi_pim__DOT__read_state_reg = 0U;
        vlSelf->axi_pim__DOT__s_axi_bvalid_reg = 0U;
        vlSelf->axi_pim__DOT__write_state_reg = 0U;
        vlSelf->axi_pim__DOT__s_axi_arready_reg = 0U;
        vlSelf->axi_pim__DOT__s_axi_awready_reg = 0U;
        vlSelf->axi_pim__DOT__s_axi_wready_reg = 0U;
    }
    if (((IData)(vlSelf->axi_pim__DOT__mem_wr_en) & (IData)(vlSelf->s_axi_wstrb))) {
        __Vdlyvval__axi_pim__DOT__mem1__v0 = (0xffU 
                                              & vlSelf->s_axi_wdata);
        __Vdlyvset__axi_pim__DOT__mem1__v0 = 1U;
        __Vdlyvlsb__axi_pim__DOT__mem1__v0 = 0U;
        __Vdlyvdim0__axi_pim__DOT__mem1__v0 = (0x3fffU 
                                               & ((IData)(vlSelf->axi_pim__DOT__write_addr_reg) 
                                                  >> 2U));
    }
    if (((IData)(vlSelf->axi_pim__DOT__mem_wr_en) & 
         ((IData)(vlSelf->s_axi_wstrb) >> 1U))) {
        __Vdlyvval__axi_pim__DOT__mem1__v1 = (0xffU 
                                              & (vlSelf->s_axi_wdata 
                                                 >> 8U));
        __Vdlyvset__axi_pim__DOT__mem1__v1 = 1U;
        __Vdlyvlsb__axi_pim__DOT__mem1__v1 = 8U;
        __Vdlyvdim0__axi_pim__DOT__mem1__v1 = (0x3fffU 
                                               & ((IData)(vlSelf->axi_pim__DOT__write_addr_reg) 
                                                  >> 2U));
    }
    if (((IData)(vlSelf->axi_pim__DOT__mem_wr_en) & 
         ((IData)(vlSelf->s_axi_wstrb) >> 2U))) {
        __Vdlyvval__axi_pim__DOT__mem1__v2 = (0xffU 
                                              & (vlSelf->s_axi_wdata 
                                                 >> 0x10U));
        __Vdlyvset__axi_pim__DOT__mem1__v2 = 1U;
        __Vdlyvlsb__axi_pim__DOT__mem1__v2 = 0x10U;
        __Vdlyvdim0__axi_pim__DOT__mem1__v2 = (0x3fffU 
                                               & ((IData)(vlSelf->axi_pim__DOT__write_addr_reg) 
                                                  >> 2U));
    }
    if (((IData)(vlSelf->axi_pim__DOT__mem_wr_en) & 
         ((IData)(vlSelf->s_axi_wstrb) >> 3U))) {
        __Vdlyvval__axi_pim__DOT__mem1__v3 = (vlSelf->s_axi_wdata 
                                              >> 0x18U);
        __Vdlyvset__axi_pim__DOT__mem1__v3 = 1U;
        __Vdlyvlsb__axi_pim__DOT__mem1__v3 = 0x18U;
        __Vdlyvdim0__axi_pim__DOT__mem1__v3 = (0x3fffU 
                                               & ((IData)(vlSelf->axi_pim__DOT__write_addr_reg) 
                                                  >> 2U));
    }
    if (__Vdlyvset__axi_pim__DOT__mem1__v0) {
        vlSelf->axi_pim__DOT__mem1[__Vdlyvdim0__axi_pim__DOT__mem1__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__axi_pim__DOT__mem1__v0))) 
                & vlSelf->axi_pim__DOT__mem1[__Vdlyvdim0__axi_pim__DOT__mem1__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__axi_pim__DOT__mem1__v0) 
                                   << (IData)(__Vdlyvlsb__axi_pim__DOT__mem1__v0))));
    }
    if (__Vdlyvset__axi_pim__DOT__mem1__v1) {
        vlSelf->axi_pim__DOT__mem1[__Vdlyvdim0__axi_pim__DOT__mem1__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__axi_pim__DOT__mem1__v1))) 
                & vlSelf->axi_pim__DOT__mem1[__Vdlyvdim0__axi_pim__DOT__mem1__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__axi_pim__DOT__mem1__v1) 
                                   << (IData)(__Vdlyvlsb__axi_pim__DOT__mem1__v1))));
    }
    if (__Vdlyvset__axi_pim__DOT__mem1__v2) {
        vlSelf->axi_pim__DOT__mem1[__Vdlyvdim0__axi_pim__DOT__mem1__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__axi_pim__DOT__mem1__v2))) 
                & vlSelf->axi_pim__DOT__mem1[__Vdlyvdim0__axi_pim__DOT__mem1__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__axi_pim__DOT__mem1__v2) 
                                   << (IData)(__Vdlyvlsb__axi_pim__DOT__mem1__v2))));
    }
    if (__Vdlyvset__axi_pim__DOT__mem1__v3) {
        vlSelf->axi_pim__DOT__mem1[__Vdlyvdim0__axi_pim__DOT__mem1__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__axi_pim__DOT__mem1__v3))) 
                & vlSelf->axi_pim__DOT__mem1[__Vdlyvdim0__axi_pim__DOT__mem1__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__axi_pim__DOT__mem1__v3) 
                                   << (IData)(__Vdlyvlsb__axi_pim__DOT__mem1__v3))));
    }
    vlSelf->s_axi_rlast = vlSelf->axi_pim__DOT__s_axi_rlast_reg;
    vlSelf->s_axi_rid = vlSelf->axi_pim__DOT__s_axi_rid_reg;
    vlSelf->s_axi_bid = vlSelf->axi_pim__DOT__s_axi_bid_reg;
    vlSelf->s_axi_rvalid = vlSelf->axi_pim__DOT__s_axi_rvalid_reg;
    vlSelf->s_axi_bvalid = vlSelf->axi_pim__DOT__s_axi_bvalid_reg;
    vlSelf->s_axi_arready = vlSelf->axi_pim__DOT__s_axi_arready_reg;
    vlSelf->s_axi_awready = vlSelf->axi_pim__DOT__s_axi_awready_reg;
    vlSelf->s_axi_wready = vlSelf->axi_pim__DOT__s_axi_wready_reg;
    vlSelf->axi_pim__DOT__write_addr_reg = vlSelf->axi_pim__DOT__write_addr_next;
}

VL_INLINE_OPT void Vaxi_pim___024root___combo__TOP__0(Vaxi_pim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_pim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_pim___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->axi_pim__DOT__s_axi_rvalid_next = ((IData)(vlSelf->axi_pim__DOT__s_axi_rvalid_reg) 
                                               & (~ (IData)(vlSelf->s_axi_rready)));
    vlSelf->axi_pim__DOT__s_axi_rid_next = vlSelf->axi_pim__DOT__s_axi_rid_reg;
    vlSelf->axi_pim__DOT__s_axi_rlast_next = vlSelf->axi_pim__DOT__s_axi_rlast_reg;
    vlSelf->axi_pim__DOT__read_size_next = vlSelf->axi_pim__DOT__read_size_reg;
    vlSelf->axi_pim__DOT__read_burst_next = vlSelf->axi_pim__DOT__read_burst_reg;
    vlSelf->axi_pim__DOT__s_axi_arready_next = 0U;
    vlSelf->axi_pim__DOT__read_state_next = 0U;
    vlSelf->axi_pim__DOT__read_count_next = vlSelf->axi_pim__DOT__read_count_reg;
    vlSelf->axi_pim__DOT__read_id_next = vlSelf->axi_pim__DOT__read_id_reg;
    if ((1U & (~ (IData)(vlSelf->axi_pim__DOT__read_state_reg)))) {
        if (((IData)(vlSelf->s_axi_arready) & (IData)(vlSelf->s_axi_arvalid))) {
            vlSelf->axi_pim__DOT__read_size_next = 
                ((2U > (IData)(vlSelf->s_axi_arsize))
                  ? (7U & (IData)(vlSelf->s_axi_arsize))
                  : 2U);
            vlSelf->axi_pim__DOT__read_burst_next = vlSelf->s_axi_arburst;
            vlSelf->axi_pim__DOT__read_id_next = vlSelf->axi_pim__DOT__s_axi_arid_reg;
        }
    }
    vlSelf->axi_pim__DOT__read_addr_next = vlSelf->axi_pim__DOT__read_addr_reg;
    if (vlSelf->axi_pim__DOT__read_state_reg) {
        if (vlSelf->axi_pim__DOT__read_state_reg) {
            if ((1U & ((IData)(vlSelf->s_axi_rready) 
                       | (~ (IData)(vlSelf->axi_pim__DOT__s_axi_rvalid_reg))))) {
                vlSelf->axi_pim__DOT__s_axi_rvalid_next = 1U;
                vlSelf->axi_pim__DOT__s_axi_rid_next 
                    = vlSelf->axi_pim__DOT__read_id_reg;
                vlSelf->axi_pim__DOT__s_axi_rlast_next 
                    = (0U == (IData)(vlSelf->axi_pim__DOT__read_count_reg));
                if ((0U >= (IData)(vlSelf->axi_pim__DOT__read_count_reg))) {
                    vlSelf->axi_pim__DOT__s_axi_arready_next = 1U;
                }
                vlSelf->axi_pim__DOT__read_count_next 
                    = (0xffU & ((IData)(vlSelf->axi_pim__DOT__read_count_reg) 
                                - (IData)(1U)));
                if ((0U != (IData)(vlSelf->axi_pim__DOT__read_burst_reg))) {
                    vlSelf->axi_pim__DOT__read_addr_next 
                        = (0xffffU & ((IData)(vlSelf->axi_pim__DOT__read_addr_reg) 
                                      + ((IData)(1U) 
                                         << (IData)(vlSelf->axi_pim__DOT__read_size_reg))));
                }
            }
            vlSelf->axi_pim__DOT__read_state_next = 
                (1U & ((~ ((IData)(vlSelf->s_axi_rready) 
                           | (~ (IData)(vlSelf->axi_pim__DOT__s_axi_rvalid_reg)))) 
                       | (0U < (IData)(vlSelf->axi_pim__DOT__read_count_reg))));
        }
    } else {
        vlSelf->axi_pim__DOT__s_axi_arready_next = 1U;
        if (((IData)(vlSelf->s_axi_arready) & (IData)(vlSelf->s_axi_arvalid))) {
            vlSelf->axi_pim__DOT__s_axi_arready_next = 0U;
            vlSelf->axi_pim__DOT__read_count_next = vlSelf->s_axi_arlen;
            vlSelf->axi_pim__DOT__read_addr_next = vlSelf->s_axi_araddr;
            vlSelf->axi_pim__DOT__read_state_next = 1U;
        } else {
            vlSelf->axi_pim__DOT__read_state_next = 0U;
        }
    }
    vlSelf->axi_pim__DOT__write_burst_next = vlSelf->axi_pim__DOT__write_burst_reg;
    vlSelf->axi_pim__DOT__write_size_next = vlSelf->axi_pim__DOT__write_size_reg;
    vlSelf->axi_pim__DOT__write_id_next = vlSelf->axi_pim__DOT__write_id_reg;
    vlSelf->axi_pim__DOT__mem_wr_en = 0U;
    vlSelf->axi_pim__DOT__s_axi_wready_next = 0U;
    vlSelf->axi_pim__DOT__write_count_next = vlSelf->axi_pim__DOT__write_count_reg;
    vlSelf->axi_pim__DOT__s_axi_bvalid_next = ((IData)(vlSelf->axi_pim__DOT__s_axi_bvalid_reg) 
                                               & (~ (IData)(vlSelf->s_axi_bready)));
    vlSelf->axi_pim__DOT__s_axi_awready_next = 0U;
    vlSelf->axi_pim__DOT__s_axi_bid_next = vlSelf->axi_pim__DOT__s_axi_bid_reg;
    if ((0U != (IData)(vlSelf->axi_pim__DOT__write_state_reg))) {
        if ((1U == (IData)(vlSelf->axi_pim__DOT__write_state_reg))) {
            if (((IData)(vlSelf->s_axi_wready) & (IData)(vlSelf->s_axi_wvalid))) {
                vlSelf->axi_pim__DOT__mem_wr_en = 1U;
                if ((0U >= (IData)(vlSelf->axi_pim__DOT__write_count_reg))) {
                    if ((1U & ((IData)(vlSelf->s_axi_bready) 
                               | (~ (IData)(vlSelf->s_axi_bvalid))))) {
                        vlSelf->axi_pim__DOT__s_axi_bvalid_next = 1U;
                        vlSelf->axi_pim__DOT__s_axi_bid_next 
                            = vlSelf->axi_pim__DOT__write_id_reg;
                    }
                }
            }
        } else if ((2U == (IData)(vlSelf->axi_pim__DOT__write_state_reg))) {
            if ((1U & ((IData)(vlSelf->s_axi_bready) 
                       | (~ (IData)(vlSelf->s_axi_bvalid))))) {
                vlSelf->axi_pim__DOT__s_axi_bvalid_next = 1U;
                vlSelf->axi_pim__DOT__s_axi_bid_next 
                    = vlSelf->axi_pim__DOT__write_id_reg;
            }
        }
    }
    vlSelf->axi_pim__DOT__write_state_next = 0U;
    vlSelf->axi_pim__DOT__write_addr_next = vlSelf->axi_pim__DOT__write_addr_reg;
    if ((0U == (IData)(vlSelf->axi_pim__DOT__write_state_reg))) {
        vlSelf->axi_pim__DOT__s_axi_awready_next = 1U;
        if (((IData)(vlSelf->s_axi_awready) & (IData)(vlSelf->s_axi_awvalid))) {
            vlSelf->axi_pim__DOT__write_burst_next 
                = vlSelf->s_axi_awburst;
            vlSelf->axi_pim__DOT__write_size_next = 
                ((2U > (IData)(vlSelf->s_axi_awsize))
                  ? (7U & (IData)(vlSelf->s_axi_awsize))
                  : 2U);
            vlSelf->axi_pim__DOT__write_id_next = vlSelf->axi_pim__DOT__s_axi_awid_reg;
            vlSelf->axi_pim__DOT__s_axi_wready_next = 1U;
            vlSelf->axi_pim__DOT__write_count_next 
                = vlSelf->s_axi_awlen;
            vlSelf->axi_pim__DOT__s_axi_awready_next = 0U;
            vlSelf->axi_pim__DOT__write_state_next = 1U;
            vlSelf->axi_pim__DOT__write_addr_next = vlSelf->s_axi_awaddr;
        } else {
            vlSelf->axi_pim__DOT__write_state_next = 0U;
        }
    } else if ((1U == (IData)(vlSelf->axi_pim__DOT__write_state_reg))) {
        vlSelf->axi_pim__DOT__s_axi_wready_next = 1U;
        if (((IData)(vlSelf->s_axi_wready) & (IData)(vlSelf->s_axi_wvalid))) {
            if ((0U >= (IData)(vlSelf->axi_pim__DOT__write_count_reg))) {
                vlSelf->axi_pim__DOT__s_axi_wready_next = 0U;
                if ((1U & ((IData)(vlSelf->s_axi_bready) 
                           | (~ (IData)(vlSelf->s_axi_bvalid))))) {
                    vlSelf->axi_pim__DOT__s_axi_awready_next = 1U;
                }
            }
            vlSelf->axi_pim__DOT__write_count_next 
                = (0xffU & ((IData)(vlSelf->axi_pim__DOT__write_count_reg) 
                            - (IData)(1U)));
            vlSelf->axi_pim__DOT__write_state_next 
                = ((0U < (IData)(vlSelf->axi_pim__DOT__write_count_reg))
                    ? 1U : ((1U & ((IData)(vlSelf->s_axi_bready) 
                                   | (~ (IData)(vlSelf->s_axi_bvalid))))
                             ? 0U : 2U));
            if ((0U != (IData)(vlSelf->axi_pim__DOT__write_burst_reg))) {
                vlSelf->axi_pim__DOT__write_addr_next 
                    = (0xffffU & ((IData)(vlSelf->axi_pim__DOT__write_addr_reg) 
                                  + ((IData)(1U) << (IData)(vlSelf->axi_pim__DOT__write_size_reg))));
            }
        } else {
            vlSelf->axi_pim__DOT__write_state_next = 1U;
        }
    } else if ((2U == (IData)(vlSelf->axi_pim__DOT__write_state_reg))) {
        if ((1U & ((IData)(vlSelf->s_axi_bready) | 
                   (~ (IData)(vlSelf->s_axi_bvalid))))) {
            vlSelf->axi_pim__DOT__s_axi_awready_next = 1U;
            vlSelf->axi_pim__DOT__write_state_next = 0U;
        } else {
            vlSelf->axi_pim__DOT__write_state_next = 2U;
        }
    }
}

VL_INLINE_OPT void Vaxi_pim___024root___sequent__TOP__2(Vaxi_pim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_pim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_pim___024root___sequent__TOP__2\n"); );
    // Body
    if ((0U == (IData)(vlSelf->axi_pim__DOT__shift_cnt))) {
        vlSelf->axi_pim__DOT__adc_out[0U] = 0U;
        vlSelf->axi_pim__DOT__i = 0x20U;
        vlSelf->axi_pim__DOT__adc_out[1U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[2U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[3U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[4U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[5U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[6U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[7U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[8U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[9U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0xaU] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0xbU] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0xcU] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0xdU] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0xeU] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0xfU] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0x10U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0x11U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0x12U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0x13U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0x14U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0x15U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0x16U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0x17U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0x18U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0x19U] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0x1aU] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0x1bU] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0x1cU] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0x1dU] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0x1eU] = 0U;
        vlSelf->axi_pim__DOT__adc_out[0x1fU] = 0U;
    } else {
        vlSelf->axi_pim__DOT__i = 0U;
        while (VL_GTS_III(32, 0x4000U, vlSelf->axi_pim__DOT__i)) {
            vlSelf->axi_pim__DOT__j = vlSelf->axi_pim__DOT__i;
            while (VL_LTS_III(32, vlSelf->axi_pim__DOT__j, 
                              ((IData)(0x80U) + vlSelf->axi_pim__DOT__i))) {
                vlSelf->axi_pim__DOT__adc_out[0U] = 
                    (vlSelf->axi_pim__DOT__adc_out[0U] 
                     + ((- (IData)((1U & vlSelf->axi_pim__DOT__mem1
                                    [(0x3fffU & vlSelf->axi_pim__DOT__j)]))) 
                        & (- (IData)((1U & (vlSelf->axi_pim__DOT__rwl[
                                            (0x1ffU 
                                             & ((vlSelf->axi_pim__DOT__j 
                                                 - vlSelf->axi_pim__DOT__i) 
                                                >> 5U))] 
                                            >> (0x1fU 
                                                & (vlSelf->axi_pim__DOT__j 
                                                   - vlSelf->axi_pim__DOT__i))))))));
                vlSelf->axi_pim__DOT__adc_out[1U] = 
                    (vlSelf->axi_pim__DOT__adc_out[1U] 
                     + ((- (IData)((1U & (vlSelf->axi_pim__DOT__mem1
                                          [(0x3fffU 
                                            & vlSelf->axi_pim__DOT__j)] 
                                          >> 1U)))) 
                        & (- (IData)((1U & (vlSelf->axi_pim__DOT__rwl[
                                            (0x1ffU 
                                             & ((vlSelf->axi_pim__DOT__j 
                                                 - vlSelf->axi_pim__DOT__i) 
                                                >> 5U))] 
                                            >> (0x1fU 
                                                & (vlSelf->axi_pim__DOT__j 
                                                   - vlSelf->axi_pim__DOT__i))))))));
                vlSelf->axi_pim__DOT__adc_out[2U] = 
                    (vlSelf->axi_pim__DOT__adc_out[2U] 
                     + ((- (IData)((1U & (vlSelf->axi_pim__DOT__mem1
                                          [(0x3fffU 
                                            & vlSelf->axi_pim__DOT__j)] 
                                          >> 2U)))) 
                        & (- (IData)((1U & (vlSelf->axi_pim__DOT__rwl[
                                            (0x1ffU 
                                             & ((vlSelf->axi_pim__DOT__j 
                                                 - vlSelf->axi_pim__DOT__i) 
                                                >> 5U))] 
                                            >> (0x1fU 
                                                & (vlSelf->axi_pim__DOT__j 
                                                   - vlSelf->axi_pim__DOT__i))))))));
                vlSelf->axi_pim__DOT__adc_out[3U] = 
                    (vlSelf->axi_pim__DOT__adc_out[3U] 
                     + ((- (IData)((1U & (vlSelf->axi_pim__DOT__mem1
                                          [(0x3fffU 
                                            & vlSelf->axi_pim__DOT__j)] 
                                          >> 3U)))) 
                        & (- (IData)((1U & (vlSelf->axi_pim__DOT__rwl[
                                            (0x1ffU 
                                             & ((vlSelf->axi_pim__DOT__j 
                                                 - vlSelf->axi_pim__DOT__i) 
                                                >> 5U))] 
                                            >> (0x1fU 
                                                & (vlSelf->axi_pim__DOT__j 
                                                   - vlSelf->axi_pim__DOT__i))))))));
                vlSelf->axi_pim__DOT__adc_out[4U] = 
                    (vlSelf->axi_pim__DOT__adc_out[4U] 
                     + ((- (IData)((1U & (vlSelf->axi_pim__DOT__mem1
                                          [(0x3fffU 
                                            & vlSelf->axi_pim__DOT__j)] 
                                          >> 4U)))) 
                        & (- (IData)((1U & (vlSelf->axi_pim__DOT__rwl[
                                            (0x1ffU 
                                             & ((vlSelf->axi_pim__DOT__j 
                                                 - vlSelf->axi_pim__DOT__i) 
                                                >> 5U))] 
                                            >> (0x1fU 
                                                & (vlSelf->axi_pim__DOT__j 
                                                   - vlSelf->axi_pim__DOT__i))))))));
                vlSelf->axi_pim__DOT__adc_out[5U] = 
                    (vlSelf->axi_pim__DOT__adc_out[5U] 
                     + ((- (IData)((1U & (vlSelf->axi_pim__DOT__mem1
                                          [(0x3fffU 
                                            & vlSelf->axi_pim__DOT__j)] 
                                          >> 5U)))) 
                        & (- (IData)((1U & (vlSelf->axi_pim__DOT__rwl[
                                            (0x1ffU 
                                             & ((vlSelf->axi_pim__DOT__j 
                                                 - vlSelf->axi_pim__DOT__i) 
                                                >> 5U))] 
                                            >> (0x1fU 
                                                & (vlSelf->axi_pim__DOT__j 
                                                   - vlSelf->axi_pim__DOT__i))))))));
                vlSelf->axi_pim__DOT__adc_out[6U] = 
                    (vlSelf->axi_pim__DOT__adc_out[6U] 
                     + ((- (IData)((1U & (vlSelf->axi_pim__DOT__mem1
                                          [(0x3fffU 
                                            & vlSelf->axi_pim__DOT__j)] 
                                          >> 6U)))) 
                        & (- (IData)((1U & (vlSelf->axi_pim__DOT__rwl[
                                            (0x1ffU 
                                             & ((vlSelf->axi_pim__DOT__j 
                                                 - vlSelf->axi_pim__DOT__i) 
                                                >> 5U))] 
                                            >> (0x1fU 
                                                & (vlSelf->axi_pim__DOT__j 
                                                   - vlSelf->axi_pim__DOT__i))))))));
                vlSelf->axi_pim__DOT__adc_out[7U] = 
                    (vlSelf->axi_pim__DOT__adc_out[7U] 
                     + ((- (IData)((1U & (vlSelf->axi_pim__DOT__mem1
                                          [(0x3fffU 
                                            & vlSelf->axi_pim__DOT__j)] 
                                          >> 7U)))) 
                        & (- (IData)((1U & (vlSelf->axi_pim__DOT__rwl[
                                            (0x1ffU 
                                             & ((vlSelf->axi_pim__DOT__j 
                                                 - vlSelf->axi_pim__DOT__i) 
                                                >> 5U))] 
                                            >> (0x1fU 
                                                & (vlSelf->axi_pim__DOT__j 
                                                   - vlSelf->axi_pim__DOT__i))))))));
                vlSelf->axi_pim__DOT__adc_out[8U] = 
                    (vlSelf->axi_pim__DOT__adc_out[8U] 
                     + ((- (IData)((1U & (vlSelf->axi_pim__DOT__mem1
                                          [(0x3fffU 
                                            & vlSelf->axi_pim__DOT__j)] 
                                          >> 8U)))) 
                        & (- (IData)((1U & (vlSelf->axi_pim__DOT__rwl[
                                            (0x1ffU 
                                             & ((vlSelf->axi_pim__DOT__j 
                                                 - vlSelf->axi_pim__DOT__i) 
                                                >> 5U))] 
                                            >> (0x1fU 
                                                & (vlSelf->axi_pim__DOT__j 
                                                   - vlSelf->axi_pim__DOT__i))))))));
                vlSelf->axi_pim__DOT__adc_out[9U] = 
                    (vlSelf->axi_pim__DOT__adc_out[9U] 
                     + ((- (IData)((1U & (vlSelf->axi_pim__DOT__mem1
                                          [(0x3fffU 
                                            & vlSelf->axi_pim__DOT__j)] 
                                          >> 9U)))) 
                        & (- (IData)((1U & (vlSelf->axi_pim__DOT__rwl[
                                            (0x1ffU 
                                             & ((vlSelf->axi_pim__DOT__j 
                                                 - vlSelf->axi_pim__DOT__i) 
                                                >> 5U))] 
                                            >> (0x1fU 
                                                & (vlSelf->axi_pim__DOT__j 
                                                   - vlSelf->axi_pim__DOT__i))))))));
                vlSelf->axi_pim__DOT__adc_out[0xaU] 
                    = (vlSelf->axi_pim__DOT__adc_out
                       [0xaU] + ((- (IData)((1U & (
                                                   vlSelf->axi_pim__DOT__mem1
                                                   [
                                                   (0x3fffU 
                                                    & vlSelf->axi_pim__DOT__j)] 
                                                   >> 0xaU)))) 
                                 & (- (IData)((1U & 
                                               (vlSelf->axi_pim__DOT__rwl[
                                                (0x1ffU 
                                                 & ((vlSelf->axi_pim__DOT__j 
                                                     - vlSelf->axi_pim__DOT__i) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & (vlSelf->axi_pim__DOT__j 
                                                    - vlSelf->axi_pim__DOT__i))))))));
                vlSelf->axi_pim__DOT__adc_out[0xbU] 
                    = (vlSelf->axi_pim__DOT__adc_out
                       [0xbU] + ((- (IData)((1U & (
                                                   vlSelf->axi_pim__DOT__mem1
                                                   [
                                                   (0x3fffU 
                                                    & vlSelf->axi_pim__DOT__j)] 
                                                   >> 0xbU)))) 
                                 & (- (IData)((1U & 
                                               (vlSelf->axi_pim__DOT__rwl[
                                                (0x1ffU 
                                                 & ((vlSelf->axi_pim__DOT__j 
                                                     - vlSelf->axi_pim__DOT__i) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & (vlSelf->axi_pim__DOT__j 
                                                    - vlSelf->axi_pim__DOT__i))))))));
                vlSelf->axi_pim__DOT__adc_out[0xcU] 
                    = (vlSelf->axi_pim__DOT__adc_out
                       [0xcU] + ((- (IData)((1U & (
                                                   vlSelf->axi_pim__DOT__mem1
                                                   [
                                                   (0x3fffU 
                                                    & vlSelf->axi_pim__DOT__j)] 
                                                   >> 0xcU)))) 
                                 & (- (IData)((1U & 
                                               (vlSelf->axi_pim__DOT__rwl[
                                                (0x1ffU 
                                                 & ((vlSelf->axi_pim__DOT__j 
                                                     - vlSelf->axi_pim__DOT__i) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & (vlSelf->axi_pim__DOT__j 
                                                    - vlSelf->axi_pim__DOT__i))))))));
                vlSelf->axi_pim__DOT__adc_out[0xdU] 
                    = (vlSelf->axi_pim__DOT__adc_out
                       [0xdU] + ((- (IData)((1U & (
                                                   vlSelf->axi_pim__DOT__mem1
                                                   [
                                                   (0x3fffU 
                                                    & vlSelf->axi_pim__DOT__j)] 
                                                   >> 0xdU)))) 
                                 & (- (IData)((1U & 
                                               (vlSelf->axi_pim__DOT__rwl[
                                                (0x1ffU 
                                                 & ((vlSelf->axi_pim__DOT__j 
                                                     - vlSelf->axi_pim__DOT__i) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & (vlSelf->axi_pim__DOT__j 
                                                    - vlSelf->axi_pim__DOT__i))))))));
                vlSelf->axi_pim__DOT__adc_out[0xeU] 
                    = (vlSelf->axi_pim__DOT__adc_out
                       [0xeU] + ((- (IData)((1U & (
                                                   vlSelf->axi_pim__DOT__mem1
                                                   [
                                                   (0x3fffU 
                                                    & vlSelf->axi_pim__DOT__j)] 
                                                   >> 0xeU)))) 
                                 & (- (IData)((1U & 
                                               (vlSelf->axi_pim__DOT__rwl[
                                                (0x1ffU 
                                                 & ((vlSelf->axi_pim__DOT__j 
                                                     - vlSelf->axi_pim__DOT__i) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & (vlSelf->axi_pim__DOT__j 
                                                    - vlSelf->axi_pim__DOT__i))))))));
                vlSelf->axi_pim__DOT__adc_out[0xfU] 
                    = (vlSelf->axi_pim__DOT__adc_out
                       [0xfU] + ((- (IData)((1U & (
                                                   vlSelf->axi_pim__DOT__mem1
                                                   [
                                                   (0x3fffU 
                                                    & vlSelf->axi_pim__DOT__j)] 
                                                   >> 0xfU)))) 
                                 & (- (IData)((1U & 
                                               (vlSelf->axi_pim__DOT__rwl[
                                                (0x1ffU 
                                                 & ((vlSelf->axi_pim__DOT__j 
                                                     - vlSelf->axi_pim__DOT__i) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & (vlSelf->axi_pim__DOT__j 
                                                    - vlSelf->axi_pim__DOT__i))))))));
                vlSelf->axi_pim__DOT__adc_out[0x10U] 
                    = (vlSelf->axi_pim__DOT__adc_out
                       [0x10U] + ((- (IData)((1U & 
                                              (vlSelf->axi_pim__DOT__mem1
                                               [(0x3fffU 
                                                 & vlSelf->axi_pim__DOT__j)] 
                                               >> 0x10U)))) 
                                  & (- (IData)((1U 
                                                & (vlSelf->axi_pim__DOT__rwl[
                                                   (0x1ffU 
                                                    & ((vlSelf->axi_pim__DOT__j 
                                                        - vlSelf->axi_pim__DOT__i) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (vlSelf->axi_pim__DOT__j 
                                                       - vlSelf->axi_pim__DOT__i))))))));
                vlSelf->axi_pim__DOT__adc_out[0x11U] 
                    = (vlSelf->axi_pim__DOT__adc_out
                       [0x11U] + ((- (IData)((1U & 
                                              (vlSelf->axi_pim__DOT__mem1
                                               [(0x3fffU 
                                                 & vlSelf->axi_pim__DOT__j)] 
                                               >> 0x11U)))) 
                                  & (- (IData)((1U 
                                                & (vlSelf->axi_pim__DOT__rwl[
                                                   (0x1ffU 
                                                    & ((vlSelf->axi_pim__DOT__j 
                                                        - vlSelf->axi_pim__DOT__i) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (vlSelf->axi_pim__DOT__j 
                                                       - vlSelf->axi_pim__DOT__i))))))));
                vlSelf->axi_pim__DOT__adc_out[0x12U] 
                    = (vlSelf->axi_pim__DOT__adc_out
                       [0x12U] + ((- (IData)((1U & 
                                              (vlSelf->axi_pim__DOT__mem1
                                               [(0x3fffU 
                                                 & vlSelf->axi_pim__DOT__j)] 
                                               >> 0x12U)))) 
                                  & (- (IData)((1U 
                                                & (vlSelf->axi_pim__DOT__rwl[
                                                   (0x1ffU 
                                                    & ((vlSelf->axi_pim__DOT__j 
                                                        - vlSelf->axi_pim__DOT__i) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (vlSelf->axi_pim__DOT__j 
                                                       - vlSelf->axi_pim__DOT__i))))))));
                vlSelf->axi_pim__DOT__adc_out[0x13U] 
                    = (vlSelf->axi_pim__DOT__adc_out
                       [0x13U] + ((- (IData)((1U & 
                                              (vlSelf->axi_pim__DOT__mem1
                                               [(0x3fffU 
                                                 & vlSelf->axi_pim__DOT__j)] 
                                               >> 0x13U)))) 
                                  & (- (IData)((1U 
                                                & (vlSelf->axi_pim__DOT__rwl[
                                                   (0x1ffU 
                                                    & ((vlSelf->axi_pim__DOT__j 
                                                        - vlSelf->axi_pim__DOT__i) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (vlSelf->axi_pim__DOT__j 
                                                       - vlSelf->axi_pim__DOT__i))))))));
                vlSelf->axi_pim__DOT__adc_out[0x14U] 
                    = (vlSelf->axi_pim__DOT__adc_out
                       [0x14U] + ((- (IData)((1U & 
                                              (vlSelf->axi_pim__DOT__mem1
                                               [(0x3fffU 
                                                 & vlSelf->axi_pim__DOT__j)] 
                                               >> 0x14U)))) 
                                  & (- (IData)((1U 
                                                & (vlSelf->axi_pim__DOT__rwl[
                                                   (0x1ffU 
                                                    & ((vlSelf->axi_pim__DOT__j 
                                                        - vlSelf->axi_pim__DOT__i) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (vlSelf->axi_pim__DOT__j 
                                                       - vlSelf->axi_pim__DOT__i))))))));
                vlSelf->axi_pim__DOT__adc_out[0x15U] 
                    = (vlSelf->axi_pim__DOT__adc_out
                       [0x15U] + ((- (IData)((1U & 
                                              (vlSelf->axi_pim__DOT__mem1
                                               [(0x3fffU 
                                                 & vlSelf->axi_pim__DOT__j)] 
                                               >> 0x15U)))) 
                                  & (- (IData)((1U 
                                                & (vlSelf->axi_pim__DOT__rwl[
                                                   (0x1ffU 
                                                    & ((vlSelf->axi_pim__DOT__j 
                                                        - vlSelf->axi_pim__DOT__i) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (vlSelf->axi_pim__DOT__j 
                                                       - vlSelf->axi_pim__DOT__i))))))));
                vlSelf->axi_pim__DOT__adc_out[0x16U] 
                    = (vlSelf->axi_pim__DOT__adc_out
                       [0x16U] + ((- (IData)((1U & 
                                              (vlSelf->axi_pim__DOT__mem1
                                               [(0x3fffU 
                                                 & vlSelf->axi_pim__DOT__j)] 
                                               >> 0x16U)))) 
                                  & (- (IData)((1U 
                                                & (vlSelf->axi_pim__DOT__rwl[
                                                   (0x1ffU 
                                                    & ((vlSelf->axi_pim__DOT__j 
                                                        - vlSelf->axi_pim__DOT__i) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (vlSelf->axi_pim__DOT__j 
                                                       - vlSelf->axi_pim__DOT__i))))))));
                vlSelf->axi_pim__DOT__adc_out[0x17U] 
                    = (vlSelf->axi_pim__DOT__adc_out
                       [0x17U] + ((- (IData)((1U & 
                                              (vlSelf->axi_pim__DOT__mem1
                                               [(0x3fffU 
                                                 & vlSelf->axi_pim__DOT__j)] 
                                               >> 0x17U)))) 
                                  & (- (IData)((1U 
                                                & (vlSelf->axi_pim__DOT__rwl[
                                                   (0x1ffU 
                                                    & ((vlSelf->axi_pim__DOT__j 
                                                        - vlSelf->axi_pim__DOT__i) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (vlSelf->axi_pim__DOT__j 
                                                       - vlSelf->axi_pim__DOT__i))))))));
                vlSelf->axi_pim__DOT__adc_out[0x18U] 
                    = (vlSelf->axi_pim__DOT__adc_out
                       [0x18U] + ((- (IData)((1U & 
                                              (vlSelf->axi_pim__DOT__mem1
                                               [(0x3fffU 
                                                 & vlSelf->axi_pim__DOT__j)] 
                                               >> 0x18U)))) 
                                  & (- (IData)((1U 
                                                & (vlSelf->axi_pim__DOT__rwl[
                                                   (0x1ffU 
                                                    & ((vlSelf->axi_pim__DOT__j 
                                                        - vlSelf->axi_pim__DOT__i) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (vlSelf->axi_pim__DOT__j 
                                                       - vlSelf->axi_pim__DOT__i))))))));
                vlSelf->axi_pim__DOT__adc_out[0x19U] 
                    = (vlSelf->axi_pim__DOT__adc_out
                       [0x19U] + ((- (IData)((1U & 
                                              (vlSelf->axi_pim__DOT__mem1
                                               [(0x3fffU 
                                                 & vlSelf->axi_pim__DOT__j)] 
                                               >> 0x19U)))) 
                                  & (- (IData)((1U 
                                                & (vlSelf->axi_pim__DOT__rwl[
                                                   (0x1ffU 
                                                    & ((vlSelf->axi_pim__DOT__j 
                                                        - vlSelf->axi_pim__DOT__i) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (vlSelf->axi_pim__DOT__j 
                                                       - vlSelf->axi_pim__DOT__i))))))));
                vlSelf->axi_pim__DOT__adc_out[0x1aU] 
                    = (vlSelf->axi_pim__DOT__adc_out
                       [0x1aU] + ((- (IData)((1U & 
                                              (vlSelf->axi_pim__DOT__mem1
                                               [(0x3fffU 
                                                 & vlSelf->axi_pim__DOT__j)] 
                                               >> 0x1aU)))) 
                                  & (- (IData)((1U 
                                                & (vlSelf->axi_pim__DOT__rwl[
                                                   (0x1ffU 
                                                    & ((vlSelf->axi_pim__DOT__j 
                                                        - vlSelf->axi_pim__DOT__i) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (vlSelf->axi_pim__DOT__j 
                                                       - vlSelf->axi_pim__DOT__i))))))));
                vlSelf->axi_pim__DOT__adc_out[0x1bU] 
                    = (vlSelf->axi_pim__DOT__adc_out
                       [0x1bU] + ((- (IData)((1U & 
                                              (vlSelf->axi_pim__DOT__mem1
                                               [(0x3fffU 
                                                 & vlSelf->axi_pim__DOT__j)] 
                                               >> 0x1bU)))) 
                                  & (- (IData)((1U 
                                                & (vlSelf->axi_pim__DOT__rwl[
                                                   (0x1ffU 
                                                    & ((vlSelf->axi_pim__DOT__j 
                                                        - vlSelf->axi_pim__DOT__i) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (vlSelf->axi_pim__DOT__j 
                                                       - vlSelf->axi_pim__DOT__i))))))));
                vlSelf->axi_pim__DOT__adc_out[0x1cU] 
                    = (vlSelf->axi_pim__DOT__adc_out
                       [0x1cU] + ((- (IData)((1U & 
                                              (vlSelf->axi_pim__DOT__mem1
                                               [(0x3fffU 
                                                 & vlSelf->axi_pim__DOT__j)] 
                                               >> 0x1cU)))) 
                                  & (- (IData)((1U 
                                                & (vlSelf->axi_pim__DOT__rwl[
                                                   (0x1ffU 
                                                    & ((vlSelf->axi_pim__DOT__j 
                                                        - vlSelf->axi_pim__DOT__i) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (vlSelf->axi_pim__DOT__j 
                                                       - vlSelf->axi_pim__DOT__i))))))));
                vlSelf->axi_pim__DOT__adc_out[0x1dU] 
                    = (vlSelf->axi_pim__DOT__adc_out
                       [0x1dU] + ((- (IData)((1U & 
                                              (vlSelf->axi_pim__DOT__mem1
                                               [(0x3fffU 
                                                 & vlSelf->axi_pim__DOT__j)] 
                                               >> 0x1dU)))) 
                                  & (- (IData)((1U 
                                                & (vlSelf->axi_pim__DOT__rwl[
                                                   (0x1ffU 
                                                    & ((vlSelf->axi_pim__DOT__j 
                                                        - vlSelf->axi_pim__DOT__i) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (vlSelf->axi_pim__DOT__j 
                                                       - vlSelf->axi_pim__DOT__i))))))));
                vlSelf->axi_pim__DOT__adc_out[0x1eU] 
                    = (vlSelf->axi_pim__DOT__adc_out
                       [0x1eU] + ((- (IData)((1U & 
                                              (vlSelf->axi_pim__DOT__mem1
                                               [(0x3fffU 
                                                 & vlSelf->axi_pim__DOT__j)] 
                                               >> 0x1eU)))) 
                                  & (- (IData)((1U 
                                                & (vlSelf->axi_pim__DOT__rwl[
                                                   (0x1ffU 
                                                    & ((vlSelf->axi_pim__DOT__j 
                                                        - vlSelf->axi_pim__DOT__i) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (vlSelf->axi_pim__DOT__j 
                                                       - vlSelf->axi_pim__DOT__i))))))));
                vlSelf->axi_pim__DOT__adc_out[0x1fU] 
                    = (vlSelf->axi_pim__DOT__adc_out
                       [0x1fU] + ((- (IData)((vlSelf->axi_pim__DOT__mem1
                                              [(0x3fffU 
                                                & vlSelf->axi_pim__DOT__j)] 
                                              >> 0x1fU))) 
                                  & (- (IData)((1U 
                                                & (vlSelf->axi_pim__DOT__rwl[
                                                   (0x1ffU 
                                                    & ((vlSelf->axi_pim__DOT__j 
                                                        - vlSelf->axi_pim__DOT__i) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (vlSelf->axi_pim__DOT__j 
                                                       - vlSelf->axi_pim__DOT__i))))))));
                vlSelf->axi_pim__DOT__j = ((IData)(1U) 
                                           + vlSelf->axi_pim__DOT__j);
            }
            vlSelf->axi_pim__DOT__i = ((IData)(0x80U) 
                                       + vlSelf->axi_pim__DOT__i);
        }
    }
}

void Vaxi_pim___024root___eval(Vaxi_pim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_pim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_pim___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vaxi_pim___024root___sequent__TOP__0(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vaxi_pim___024root___sequent__TOP__1(vlSelf);
    }
    Vaxi_pim___024root___combo__TOP__0(vlSelf);
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vaxi_pim___024root___sequent__TOP__2(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vaxi_pim___024root___eval_debug_assertions(Vaxi_pim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_pim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_pim___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->s_axi_awsize & 0xf8U))) {
        Verilated::overWidthError("s_axi_awsize");}
    if (VL_UNLIKELY((vlSelf->s_axi_awburst & 0xfcU))) {
        Verilated::overWidthError("s_axi_awburst");}
    if (VL_UNLIKELY((vlSelf->s_axi_awlock & 0xfeU))) {
        Verilated::overWidthError("s_axi_awlock");}
    if (VL_UNLIKELY((vlSelf->s_axi_awcache & 0xf0U))) {
        Verilated::overWidthError("s_axi_awcache");}
    if (VL_UNLIKELY((vlSelf->s_axi_awprot & 0xf8U))) {
        Verilated::overWidthError("s_axi_awprot");}
    if (VL_UNLIKELY((vlSelf->s_axi_awvalid & 0xfeU))) {
        Verilated::overWidthError("s_axi_awvalid");}
    if (VL_UNLIKELY((vlSelf->s_axi_wstrb & 0xf0U))) {
        Verilated::overWidthError("s_axi_wstrb");}
    if (VL_UNLIKELY((vlSelf->s_axi_wlast & 0xfeU))) {
        Verilated::overWidthError("s_axi_wlast");}
    if (VL_UNLIKELY((vlSelf->s_axi_wvalid & 0xfeU))) {
        Verilated::overWidthError("s_axi_wvalid");}
    if (VL_UNLIKELY((vlSelf->s_axi_bready & 0xfeU))) {
        Verilated::overWidthError("s_axi_bready");}
    if (VL_UNLIKELY((vlSelf->s_axi_arsize & 0xf8U))) {
        Verilated::overWidthError("s_axi_arsize");}
    if (VL_UNLIKELY((vlSelf->s_axi_arburst & 0xfcU))) {
        Verilated::overWidthError("s_axi_arburst");}
    if (VL_UNLIKELY((vlSelf->s_axi_arlock & 0xfeU))) {
        Verilated::overWidthError("s_axi_arlock");}
    if (VL_UNLIKELY((vlSelf->s_axi_arcache & 0xf0U))) {
        Verilated::overWidthError("s_axi_arcache");}
    if (VL_UNLIKELY((vlSelf->s_axi_arprot & 0xf8U))) {
        Verilated::overWidthError("s_axi_arprot");}
    if (VL_UNLIKELY((vlSelf->s_axi_arvalid & 0xfeU))) {
        Verilated::overWidthError("s_axi_arvalid");}
    if (VL_UNLIKELY((vlSelf->s_axi_rready & 0xfeU))) {
        Verilated::overWidthError("s_axi_rready");}
}
#endif  // VL_DEBUG
