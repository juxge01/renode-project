// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpim_model.h for the primary calling header

#include "Vpim_model.h"
#include "Vpim_model__Syms.h"

//==========

void Vpim_model::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpim_model::eval\n"); );
    Vpim_model__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vpim_model* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("pim_model.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vpim_model::_eval_initial_loop(Vpim_model__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("pim_model.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vpim_model::_combo__TOP__3(Vpim_model__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpim_model::_combo__TOP__3\n"); );
    Vpim_model* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->rsp_valid = vlTOPp->cmd_valid;
    vlTOPp->cmd_ready = vlTOPp->rsp_ready;
}

VL_INLINE_OPT void Vpim_model::_sequent__TOP__4(Vpim_model__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpim_model::_sequent__TOP__4\n"); );
    Vpim_model* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdly__pim_model__DOT__shift_cnt;
    CData/*0:0*/ __Vdlyvset__pim_model__DOT__acc_result__v0;
    CData/*0:0*/ __Vdlyvset__pim_model__DOT__acc_result__v1;
    CData/*0:0*/ __Vdlyvset__pim_model__DOT__acc_result__v32;
    CData/*0:0*/ __Vdlyvset__pim_model__DOT__acc_result__v33;
    CData/*7:0*/ __Vdlyvdim0__pim_model__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__pim_model__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__pim_model__DOT__acc_result__v64;
    IData/*31:0*/ __Vdly__pim_model__DOT__sum_acc_result;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__acc_result__v32;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__acc_result__v33;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__acc_result__v34;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__acc_result__v35;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__acc_result__v36;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__acc_result__v37;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__acc_result__v38;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__acc_result__v39;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__acc_result__v40;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__acc_result__v41;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__acc_result__v42;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__acc_result__v43;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__acc_result__v44;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__acc_result__v45;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__acc_result__v46;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__acc_result__v47;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__acc_result__v48;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__acc_result__v49;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__acc_result__v50;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__acc_result__v51;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__acc_result__v52;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__acc_result__v53;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__acc_result__v54;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__acc_result__v55;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__acc_result__v56;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__acc_result__v57;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__acc_result__v58;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__acc_result__v59;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__acc_result__v60;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__acc_result__v61;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__acc_result__v62;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__acc_result__v63;
    IData/*31:0*/ __Vdlyvval__pim_model__DOT__mem__v0;
    // Body
    __Vdly__pim_model__DOT__sum_acc_result = vlTOPp->pim_model__DOT__sum_acc_result;
    __Vdly__pim_model__DOT__shift_cnt = vlTOPp->pim_model__DOT__shift_cnt;
    __Vdlyvset__pim_model__DOT__mem__v0 = 0U;
    __Vdlyvset__pim_model__DOT__acc_result__v32 = 0U;
    __Vdlyvset__pim_model__DOT__acc_result__v33 = 0U;
    __Vdlyvset__pim_model__DOT__acc_result__v64 = 0U;
    __Vdlyvset__pim_model__DOT__acc_result__v0 = 0U;
    __Vdlyvset__pim_model__DOT__acc_result__v1 = 0U;
    if (VL_LIKELY(vlTOPp->reset)) {
        vlTOPp->pim_model__DOT__i = 0x20U;
        __Vdly__pim_model__DOT__shift_cnt = 0U;
        __Vdlyvset__pim_model__DOT__acc_result__v0 = 1U;
        __Vdly__pim_model__DOT__sum_acc_result = 0U;
        vlTOPp->pim_model__DOT__q_reg = 0U;
        vlTOPp->pim_model__DOT__mac_out_reg = 0U;
        __Vdlyvset__pim_model__DOT__acc_result__v1 = 1U;
    } else {
        VL_WRITEF("mac_out: %x\n",32,vlTOPp->mac_out);
        if (vlTOPp->p_en) {
            vlTOPp->pim_model__DOT__i = 0x20U;
            __Vdlyvval__pim_model__DOT__acc_result__v32 
                = ((0U == (IData)(vlTOPp->pim_model__DOT__shift_cnt))
                    ? vlTOPp->pim_model__DOT__adc_out
                   [0U] : (vlTOPp->pim_model__DOT__acc_result
                           [0U] + (vlTOPp->pim_model__DOT__adc_out
                                   [0U] << (IData)(vlTOPp->pim_model__DOT__shift_cnt))));
            __Vdlyvset__pim_model__DOT__acc_result__v32 = 1U;
            vlTOPp->pim_model__DOT__mac_out_reg = vlTOPp->pim_model__DOT__sum_acc_result;
            __Vdlyvval__pim_model__DOT__acc_result__v33 
                = ((0U == (IData)(vlTOPp->pim_model__DOT__shift_cnt))
                    ? vlTOPp->pim_model__DOT__adc_out
                   [1U] : (vlTOPp->pim_model__DOT__acc_result
                           [1U] + (vlTOPp->pim_model__DOT__adc_out
                                   [1U] << (IData)(vlTOPp->pim_model__DOT__shift_cnt))));
            __Vdlyvset__pim_model__DOT__acc_result__v33 = 1U;
            if ((0U == (IData)(vlTOPp->pim_model__DOT__shift_cnt))) {
                __Vdlyvval__pim_model__DOT__acc_result__v34 
                    = vlTOPp->pim_model__DOT__adc_out
                    [2U];
                __Vdlyvval__pim_model__DOT__acc_result__v35 
                    = vlTOPp->pim_model__DOT__adc_out
                    [3U];
                __Vdlyvval__pim_model__DOT__acc_result__v36 
                    = vlTOPp->pim_model__DOT__adc_out
                    [4U];
                __Vdlyvval__pim_model__DOT__acc_result__v37 
                    = vlTOPp->pim_model__DOT__adc_out
                    [5U];
                __Vdlyvval__pim_model__DOT__acc_result__v38 
                    = vlTOPp->pim_model__DOT__adc_out
                    [6U];
                __Vdlyvval__pim_model__DOT__acc_result__v39 
                    = vlTOPp->pim_model__DOT__adc_out
                    [7U];
                __Vdlyvval__pim_model__DOT__acc_result__v40 
                    = vlTOPp->pim_model__DOT__adc_out
                    [8U];
                __Vdlyvval__pim_model__DOT__acc_result__v41 
                    = vlTOPp->pim_model__DOT__adc_out
                    [9U];
                __Vdlyvval__pim_model__DOT__acc_result__v42 
                    = vlTOPp->pim_model__DOT__adc_out
                    [0xaU];
                __Vdlyvval__pim_model__DOT__acc_result__v43 
                    = vlTOPp->pim_model__DOT__adc_out
                    [0xbU];
                __Vdlyvval__pim_model__DOT__acc_result__v44 
                    = vlTOPp->pim_model__DOT__adc_out
                    [0xcU];
                __Vdlyvval__pim_model__DOT__acc_result__v45 
                    = vlTOPp->pim_model__DOT__adc_out
                    [0xdU];
                __Vdlyvval__pim_model__DOT__acc_result__v46 
                    = vlTOPp->pim_model__DOT__adc_out
                    [0xeU];
                __Vdlyvval__pim_model__DOT__acc_result__v47 
                    = vlTOPp->pim_model__DOT__adc_out
                    [0xfU];
                __Vdlyvval__pim_model__DOT__acc_result__v48 
                    = vlTOPp->pim_model__DOT__adc_out
                    [0x10U];
                __Vdlyvval__pim_model__DOT__acc_result__v49 
                    = vlTOPp->pim_model__DOT__adc_out
                    [0x11U];
                __Vdlyvval__pim_model__DOT__acc_result__v50 
                    = vlTOPp->pim_model__DOT__adc_out
                    [0x12U];
                __Vdlyvval__pim_model__DOT__acc_result__v51 
                    = vlTOPp->pim_model__DOT__adc_out
                    [0x13U];
                __Vdlyvval__pim_model__DOT__acc_result__v52 
                    = vlTOPp->pim_model__DOT__adc_out
                    [0x14U];
                __Vdlyvval__pim_model__DOT__acc_result__v53 
                    = vlTOPp->pim_model__DOT__adc_out
                    [0x15U];
                __Vdlyvval__pim_model__DOT__acc_result__v54 
                    = vlTOPp->pim_model__DOT__adc_out
                    [0x16U];
                __Vdlyvval__pim_model__DOT__acc_result__v55 
                    = vlTOPp->pim_model__DOT__adc_out
                    [0x17U];
                __Vdlyvval__pim_model__DOT__acc_result__v56 
                    = vlTOPp->pim_model__DOT__adc_out
                    [0x18U];
                __Vdlyvval__pim_model__DOT__acc_result__v57 
                    = vlTOPp->pim_model__DOT__adc_out
                    [0x19U];
                __Vdlyvval__pim_model__DOT__acc_result__v58 
                    = vlTOPp->pim_model__DOT__adc_out
                    [0x1aU];
                __Vdlyvval__pim_model__DOT__acc_result__v59 
                    = vlTOPp->pim_model__DOT__adc_out
                    [0x1bU];
                __Vdlyvval__pim_model__DOT__acc_result__v60 
                    = vlTOPp->pim_model__DOT__adc_out
                    [0x1cU];
                __Vdlyvval__pim_model__DOT__acc_result__v61 
                    = vlTOPp->pim_model__DOT__adc_out
                    [0x1dU];
                __Vdlyvval__pim_model__DOT__acc_result__v62 
                    = vlTOPp->pim_model__DOT__adc_out
                    [0x1eU];
                __Vdlyvval__pim_model__DOT__acc_result__v63 
                    = vlTOPp->pim_model__DOT__adc_out
                    [0x1fU];
            } else {
                __Vdlyvval__pim_model__DOT__acc_result__v34 
                    = (vlTOPp->pim_model__DOT__acc_result
                       [2U] + (vlTOPp->pim_model__DOT__adc_out
                               [2U] << (IData)(vlTOPp->pim_model__DOT__shift_cnt)));
                __Vdlyvval__pim_model__DOT__acc_result__v35 
                    = (vlTOPp->pim_model__DOT__acc_result
                       [3U] + (vlTOPp->pim_model__DOT__adc_out
                               [3U] << (IData)(vlTOPp->pim_model__DOT__shift_cnt)));
                __Vdlyvval__pim_model__DOT__acc_result__v36 
                    = (vlTOPp->pim_model__DOT__acc_result
                       [4U] + (vlTOPp->pim_model__DOT__adc_out
                               [4U] << (IData)(vlTOPp->pim_model__DOT__shift_cnt)));
                __Vdlyvval__pim_model__DOT__acc_result__v37 
                    = (vlTOPp->pim_model__DOT__acc_result
                       [5U] + (vlTOPp->pim_model__DOT__adc_out
                               [5U] << (IData)(vlTOPp->pim_model__DOT__shift_cnt)));
                __Vdlyvval__pim_model__DOT__acc_result__v38 
                    = (vlTOPp->pim_model__DOT__acc_result
                       [6U] + (vlTOPp->pim_model__DOT__adc_out
                               [6U] << (IData)(vlTOPp->pim_model__DOT__shift_cnt)));
                __Vdlyvval__pim_model__DOT__acc_result__v39 
                    = (vlTOPp->pim_model__DOT__acc_result
                       [7U] + (vlTOPp->pim_model__DOT__adc_out
                               [7U] << (IData)(vlTOPp->pim_model__DOT__shift_cnt)));
                __Vdlyvval__pim_model__DOT__acc_result__v40 
                    = (vlTOPp->pim_model__DOT__acc_result
                       [8U] + (vlTOPp->pim_model__DOT__adc_out
                               [8U] << (IData)(vlTOPp->pim_model__DOT__shift_cnt)));
                __Vdlyvval__pim_model__DOT__acc_result__v41 
                    = (vlTOPp->pim_model__DOT__acc_result
                       [9U] + (vlTOPp->pim_model__DOT__adc_out
                               [9U] << (IData)(vlTOPp->pim_model__DOT__shift_cnt)));
                __Vdlyvval__pim_model__DOT__acc_result__v42 
                    = (vlTOPp->pim_model__DOT__acc_result
                       [0xaU] + (vlTOPp->pim_model__DOT__adc_out
                                 [0xaU] << (IData)(vlTOPp->pim_model__DOT__shift_cnt)));
                __Vdlyvval__pim_model__DOT__acc_result__v43 
                    = (vlTOPp->pim_model__DOT__acc_result
                       [0xbU] + (vlTOPp->pim_model__DOT__adc_out
                                 [0xbU] << (IData)(vlTOPp->pim_model__DOT__shift_cnt)));
                __Vdlyvval__pim_model__DOT__acc_result__v44 
                    = (vlTOPp->pim_model__DOT__acc_result
                       [0xcU] + (vlTOPp->pim_model__DOT__adc_out
                                 [0xcU] << (IData)(vlTOPp->pim_model__DOT__shift_cnt)));
                __Vdlyvval__pim_model__DOT__acc_result__v45 
                    = (vlTOPp->pim_model__DOT__acc_result
                       [0xdU] + (vlTOPp->pim_model__DOT__adc_out
                                 [0xdU] << (IData)(vlTOPp->pim_model__DOT__shift_cnt)));
                __Vdlyvval__pim_model__DOT__acc_result__v46 
                    = (vlTOPp->pim_model__DOT__acc_result
                       [0xeU] + (vlTOPp->pim_model__DOT__adc_out
                                 [0xeU] << (IData)(vlTOPp->pim_model__DOT__shift_cnt)));
                __Vdlyvval__pim_model__DOT__acc_result__v47 
                    = (vlTOPp->pim_model__DOT__acc_result
                       [0xfU] + (vlTOPp->pim_model__DOT__adc_out
                                 [0xfU] << (IData)(vlTOPp->pim_model__DOT__shift_cnt)));
                __Vdlyvval__pim_model__DOT__acc_result__v48 
                    = (vlTOPp->pim_model__DOT__acc_result
                       [0x10U] + (vlTOPp->pim_model__DOT__adc_out
                                  [0x10U] << (IData)(vlTOPp->pim_model__DOT__shift_cnt)));
                __Vdlyvval__pim_model__DOT__acc_result__v49 
                    = (vlTOPp->pim_model__DOT__acc_result
                       [0x11U] + (vlTOPp->pim_model__DOT__adc_out
                                  [0x11U] << (IData)(vlTOPp->pim_model__DOT__shift_cnt)));
                __Vdlyvval__pim_model__DOT__acc_result__v50 
                    = (vlTOPp->pim_model__DOT__acc_result
                       [0x12U] + (vlTOPp->pim_model__DOT__adc_out
                                  [0x12U] << (IData)(vlTOPp->pim_model__DOT__shift_cnt)));
                __Vdlyvval__pim_model__DOT__acc_result__v51 
                    = (vlTOPp->pim_model__DOT__acc_result
                       [0x13U] + (vlTOPp->pim_model__DOT__adc_out
                                  [0x13U] << (IData)(vlTOPp->pim_model__DOT__shift_cnt)));
                __Vdlyvval__pim_model__DOT__acc_result__v52 
                    = (vlTOPp->pim_model__DOT__acc_result
                       [0x14U] + (vlTOPp->pim_model__DOT__adc_out
                                  [0x14U] << (IData)(vlTOPp->pim_model__DOT__shift_cnt)));
                __Vdlyvval__pim_model__DOT__acc_result__v53 
                    = (vlTOPp->pim_model__DOT__acc_result
                       [0x15U] + (vlTOPp->pim_model__DOT__adc_out
                                  [0x15U] << (IData)(vlTOPp->pim_model__DOT__shift_cnt)));
                __Vdlyvval__pim_model__DOT__acc_result__v54 
                    = (vlTOPp->pim_model__DOT__acc_result
                       [0x16U] + (vlTOPp->pim_model__DOT__adc_out
                                  [0x16U] << (IData)(vlTOPp->pim_model__DOT__shift_cnt)));
                __Vdlyvval__pim_model__DOT__acc_result__v55 
                    = (vlTOPp->pim_model__DOT__acc_result
                       [0x17U] + (vlTOPp->pim_model__DOT__adc_out
                                  [0x17U] << (IData)(vlTOPp->pim_model__DOT__shift_cnt)));
                __Vdlyvval__pim_model__DOT__acc_result__v56 
                    = (vlTOPp->pim_model__DOT__acc_result
                       [0x18U] + (vlTOPp->pim_model__DOT__adc_out
                                  [0x18U] << (IData)(vlTOPp->pim_model__DOT__shift_cnt)));
                __Vdlyvval__pim_model__DOT__acc_result__v57 
                    = (vlTOPp->pim_model__DOT__acc_result
                       [0x19U] + (vlTOPp->pim_model__DOT__adc_out
                                  [0x19U] << (IData)(vlTOPp->pim_model__DOT__shift_cnt)));
                __Vdlyvval__pim_model__DOT__acc_result__v58 
                    = (vlTOPp->pim_model__DOT__acc_result
                       [0x1aU] + (vlTOPp->pim_model__DOT__adc_out
                                  [0x1aU] << (IData)(vlTOPp->pim_model__DOT__shift_cnt)));
                __Vdlyvval__pim_model__DOT__acc_result__v59 
                    = (vlTOPp->pim_model__DOT__acc_result
                       [0x1bU] + (vlTOPp->pim_model__DOT__adc_out
                                  [0x1bU] << (IData)(vlTOPp->pim_model__DOT__shift_cnt)));
                __Vdlyvval__pim_model__DOT__acc_result__v60 
                    = (vlTOPp->pim_model__DOT__acc_result
                       [0x1cU] + (vlTOPp->pim_model__DOT__adc_out
                                  [0x1cU] << (IData)(vlTOPp->pim_model__DOT__shift_cnt)));
                __Vdlyvval__pim_model__DOT__acc_result__v61 
                    = (vlTOPp->pim_model__DOT__acc_result
                       [0x1dU] + (vlTOPp->pim_model__DOT__adc_out
                                  [0x1dU] << (IData)(vlTOPp->pim_model__DOT__shift_cnt)));
                __Vdlyvval__pim_model__DOT__acc_result__v62 
                    = (vlTOPp->pim_model__DOT__acc_result
                       [0x1eU] + (vlTOPp->pim_model__DOT__adc_out
                                  [0x1eU] << (IData)(vlTOPp->pim_model__DOT__shift_cnt)));
                __Vdlyvval__pim_model__DOT__acc_result__v63 
                    = (vlTOPp->pim_model__DOT__acc_result
                       [0x1fU] + (vlTOPp->pim_model__DOT__adc_out
                                  [0x1fU] << (IData)(vlTOPp->pim_model__DOT__shift_cnt)));
            }
            __Vdly__pim_model__DOT__shift_cnt = (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlTOPp->pim_model__DOT__shift_cnt)));
            __Vdly__pim_model__DOT__sum_acc_result = 0U;
            vlTOPp->pim_model__DOT__temp_sum_acc_result 
                = vlTOPp->pim_model__DOT__acc_result
                [0U];
            __Vdly__pim_model__DOT__sum_acc_result 
                = vlTOPp->pim_model__DOT__temp_sum_acc_result;
            vlTOPp->pim_model__DOT__temp_sum_acc_result 
                = (vlTOPp->pim_model__DOT__temp_sum_acc_result 
                   + vlTOPp->pim_model__DOT__acc_result
                   [1U]);
            __Vdly__pim_model__DOT__sum_acc_result 
                = vlTOPp->pim_model__DOT__temp_sum_acc_result;
            vlTOPp->pim_model__DOT__temp_sum_acc_result 
                = (vlTOPp->pim_model__DOT__temp_sum_acc_result 
                   + vlTOPp->pim_model__DOT__acc_result
                   [2U]);
            __Vdly__pim_model__DOT__sum_acc_result 
                = vlTOPp->pim_model__DOT__temp_sum_acc_result;
            vlTOPp->pim_model__DOT__temp_sum_acc_result 
                = (vlTOPp->pim_model__DOT__temp_sum_acc_result 
                   + vlTOPp->pim_model__DOT__acc_result
                   [3U]);
            __Vdly__pim_model__DOT__sum_acc_result 
                = vlTOPp->pim_model__DOT__temp_sum_acc_result;
            vlTOPp->pim_model__DOT__temp_sum_acc_result 
                = (vlTOPp->pim_model__DOT__temp_sum_acc_result 
                   + vlTOPp->pim_model__DOT__acc_result
                   [4U]);
            __Vdly__pim_model__DOT__sum_acc_result 
                = vlTOPp->pim_model__DOT__temp_sum_acc_result;
            vlTOPp->pim_model__DOT__temp_sum_acc_result 
                = (vlTOPp->pim_model__DOT__temp_sum_acc_result 
                   + vlTOPp->pim_model__DOT__acc_result
                   [5U]);
            __Vdly__pim_model__DOT__sum_acc_result 
                = vlTOPp->pim_model__DOT__temp_sum_acc_result;
            vlTOPp->pim_model__DOT__temp_sum_acc_result 
                = (vlTOPp->pim_model__DOT__temp_sum_acc_result 
                   + vlTOPp->pim_model__DOT__acc_result
                   [6U]);
            __Vdly__pim_model__DOT__sum_acc_result 
                = vlTOPp->pim_model__DOT__temp_sum_acc_result;
            vlTOPp->pim_model__DOT__temp_sum_acc_result 
                = (vlTOPp->pim_model__DOT__temp_sum_acc_result 
                   + vlTOPp->pim_model__DOT__acc_result
                   [7U]);
            __Vdly__pim_model__DOT__sum_acc_result 
                = vlTOPp->pim_model__DOT__temp_sum_acc_result;
            vlTOPp->pim_model__DOT__temp_sum_acc_result 
                = (vlTOPp->pim_model__DOT__temp_sum_acc_result 
                   + vlTOPp->pim_model__DOT__acc_result
                   [8U]);
            __Vdly__pim_model__DOT__sum_acc_result 
                = vlTOPp->pim_model__DOT__temp_sum_acc_result;
            vlTOPp->pim_model__DOT__temp_sum_acc_result 
                = (vlTOPp->pim_model__DOT__temp_sum_acc_result 
                   + vlTOPp->pim_model__DOT__acc_result
                   [9U]);
            __Vdly__pim_model__DOT__sum_acc_result 
                = vlTOPp->pim_model__DOT__temp_sum_acc_result;
            vlTOPp->pim_model__DOT__temp_sum_acc_result 
                = (vlTOPp->pim_model__DOT__temp_sum_acc_result 
                   + vlTOPp->pim_model__DOT__acc_result
                   [0xaU]);
            __Vdly__pim_model__DOT__sum_acc_result 
                = vlTOPp->pim_model__DOT__temp_sum_acc_result;
            vlTOPp->pim_model__DOT__temp_sum_acc_result 
                = (vlTOPp->pim_model__DOT__temp_sum_acc_result 
                   + vlTOPp->pim_model__DOT__acc_result
                   [0xbU]);
            __Vdly__pim_model__DOT__sum_acc_result 
                = vlTOPp->pim_model__DOT__temp_sum_acc_result;
            vlTOPp->pim_model__DOT__temp_sum_acc_result 
                = (vlTOPp->pim_model__DOT__temp_sum_acc_result 
                   + vlTOPp->pim_model__DOT__acc_result
                   [0xcU]);
            __Vdly__pim_model__DOT__sum_acc_result 
                = vlTOPp->pim_model__DOT__temp_sum_acc_result;
            vlTOPp->pim_model__DOT__temp_sum_acc_result 
                = (vlTOPp->pim_model__DOT__temp_sum_acc_result 
                   + vlTOPp->pim_model__DOT__acc_result
                   [0xdU]);
            __Vdly__pim_model__DOT__sum_acc_result 
                = vlTOPp->pim_model__DOT__temp_sum_acc_result;
            vlTOPp->pim_model__DOT__temp_sum_acc_result 
                = (vlTOPp->pim_model__DOT__temp_sum_acc_result 
                   + vlTOPp->pim_model__DOT__acc_result
                   [0xeU]);
            __Vdly__pim_model__DOT__sum_acc_result 
                = vlTOPp->pim_model__DOT__temp_sum_acc_result;
            vlTOPp->pim_model__DOT__temp_sum_acc_result 
                = (vlTOPp->pim_model__DOT__temp_sum_acc_result 
                   + vlTOPp->pim_model__DOT__acc_result
                   [0xfU]);
            __Vdly__pim_model__DOT__sum_acc_result 
                = vlTOPp->pim_model__DOT__temp_sum_acc_result;
            vlTOPp->pim_model__DOT__temp_sum_acc_result 
                = (vlTOPp->pim_model__DOT__temp_sum_acc_result 
                   + vlTOPp->pim_model__DOT__acc_result
                   [0x10U]);
            __Vdly__pim_model__DOT__sum_acc_result 
                = vlTOPp->pim_model__DOT__temp_sum_acc_result;
            vlTOPp->pim_model__DOT__temp_sum_acc_result 
                = (vlTOPp->pim_model__DOT__temp_sum_acc_result 
                   + vlTOPp->pim_model__DOT__acc_result
                   [0x11U]);
            __Vdly__pim_model__DOT__sum_acc_result 
                = vlTOPp->pim_model__DOT__temp_sum_acc_result;
            vlTOPp->pim_model__DOT__temp_sum_acc_result 
                = (vlTOPp->pim_model__DOT__temp_sum_acc_result 
                   + vlTOPp->pim_model__DOT__acc_result
                   [0x12U]);
            __Vdly__pim_model__DOT__sum_acc_result 
                = vlTOPp->pim_model__DOT__temp_sum_acc_result;
            vlTOPp->pim_model__DOT__temp_sum_acc_result 
                = (vlTOPp->pim_model__DOT__temp_sum_acc_result 
                   + vlTOPp->pim_model__DOT__acc_result
                   [0x13U]);
            __Vdly__pim_model__DOT__sum_acc_result 
                = vlTOPp->pim_model__DOT__temp_sum_acc_result;
            vlTOPp->pim_model__DOT__temp_sum_acc_result 
                = (vlTOPp->pim_model__DOT__temp_sum_acc_result 
                   + vlTOPp->pim_model__DOT__acc_result
                   [0x14U]);
            __Vdly__pim_model__DOT__sum_acc_result 
                = vlTOPp->pim_model__DOT__temp_sum_acc_result;
            vlTOPp->pim_model__DOT__temp_sum_acc_result 
                = (vlTOPp->pim_model__DOT__temp_sum_acc_result 
                   + vlTOPp->pim_model__DOT__acc_result
                   [0x15U]);
            __Vdly__pim_model__DOT__sum_acc_result 
                = vlTOPp->pim_model__DOT__temp_sum_acc_result;
            vlTOPp->pim_model__DOT__temp_sum_acc_result 
                = (vlTOPp->pim_model__DOT__temp_sum_acc_result 
                   + vlTOPp->pim_model__DOT__acc_result
                   [0x16U]);
            __Vdly__pim_model__DOT__sum_acc_result 
                = vlTOPp->pim_model__DOT__temp_sum_acc_result;
            vlTOPp->pim_model__DOT__temp_sum_acc_result 
                = (vlTOPp->pim_model__DOT__temp_sum_acc_result 
                   + vlTOPp->pim_model__DOT__acc_result
                   [0x17U]);
            __Vdly__pim_model__DOT__sum_acc_result 
                = vlTOPp->pim_model__DOT__temp_sum_acc_result;
            vlTOPp->pim_model__DOT__temp_sum_acc_result 
                = (vlTOPp->pim_model__DOT__temp_sum_acc_result 
                   + vlTOPp->pim_model__DOT__acc_result
                   [0x18U]);
            __Vdly__pim_model__DOT__sum_acc_result 
                = vlTOPp->pim_model__DOT__temp_sum_acc_result;
            vlTOPp->pim_model__DOT__temp_sum_acc_result 
                = (vlTOPp->pim_model__DOT__temp_sum_acc_result 
                   + vlTOPp->pim_model__DOT__acc_result
                   [0x19U]);
            __Vdly__pim_model__DOT__sum_acc_result 
                = vlTOPp->pim_model__DOT__temp_sum_acc_result;
            vlTOPp->pim_model__DOT__temp_sum_acc_result 
                = (vlTOPp->pim_model__DOT__temp_sum_acc_result 
                   + vlTOPp->pim_model__DOT__acc_result
                   [0x1aU]);
            __Vdly__pim_model__DOT__sum_acc_result 
                = vlTOPp->pim_model__DOT__temp_sum_acc_result;
            vlTOPp->pim_model__DOT__temp_sum_acc_result 
                = (vlTOPp->pim_model__DOT__temp_sum_acc_result 
                   + vlTOPp->pim_model__DOT__acc_result
                   [0x1bU]);
            __Vdly__pim_model__DOT__sum_acc_result 
                = vlTOPp->pim_model__DOT__temp_sum_acc_result;
            vlTOPp->pim_model__DOT__temp_sum_acc_result 
                = (vlTOPp->pim_model__DOT__temp_sum_acc_result 
                   + vlTOPp->pim_model__DOT__acc_result
                   [0x1cU]);
            __Vdly__pim_model__DOT__sum_acc_result 
                = vlTOPp->pim_model__DOT__temp_sum_acc_result;
            vlTOPp->pim_model__DOT__temp_sum_acc_result 
                = (vlTOPp->pim_model__DOT__temp_sum_acc_result 
                   + vlTOPp->pim_model__DOT__acc_result
                   [0x1dU]);
            __Vdly__pim_model__DOT__sum_acc_result 
                = vlTOPp->pim_model__DOT__temp_sum_acc_result;
            vlTOPp->pim_model__DOT__temp_sum_acc_result 
                = (vlTOPp->pim_model__DOT__temp_sum_acc_result 
                   + vlTOPp->pim_model__DOT__acc_result
                   [0x1eU]);
            __Vdly__pim_model__DOT__sum_acc_result 
                = vlTOPp->pim_model__DOT__temp_sum_acc_result;
            vlTOPp->pim_model__DOT__temp_sum_acc_result 
                = (vlTOPp->pim_model__DOT__temp_sum_acc_result 
                   + vlTOPp->pim_model__DOT__acc_result
                   [0x1fU]);
            __Vdly__pim_model__DOT__sum_acc_result 
                = vlTOPp->pim_model__DOT__temp_sum_acc_result;
        } else {
            vlTOPp->pim_model__DOT__i = 0x20U;
            if (vlTOPp->w_en) {
                __Vdlyvval__pim_model__DOT__mem__v0 
                    = vlTOPp->d;
                __Vdlyvset__pim_model__DOT__mem__v0 = 1U;
                __Vdlyvdim0__pim_model__DOT__mem__v0 
                    = vlTOPp->addr;
            } else {
                vlTOPp->pim_model__DOT__q_reg = vlTOPp->pim_model__DOT__mem
                    [vlTOPp->addr];
            }
            __Vdly__pim_model__DOT__shift_cnt = 0U;
            __Vdlyvset__pim_model__DOT__acc_result__v64 = 1U;
        }
    }
    vlTOPp->pim_model__DOT__shift_cnt = __Vdly__pim_model__DOT__shift_cnt;
    vlTOPp->pim_model__DOT__sum_acc_result = __Vdly__pim_model__DOT__sum_acc_result;
    if (__Vdlyvset__pim_model__DOT__acc_result__v0) {
        vlTOPp->pim_model__DOT__adc_out[0U] = 0U;
    }
    if (__Vdlyvset__pim_model__DOT__acc_result__v1) {
        vlTOPp->pim_model__DOT__adc_out[1U] = 0U;
        vlTOPp->pim_model__DOT__adc_out[2U] = 0U;
        vlTOPp->pim_model__DOT__adc_out[3U] = 0U;
        vlTOPp->pim_model__DOT__adc_out[4U] = 0U;
        vlTOPp->pim_model__DOT__adc_out[5U] = 0U;
        vlTOPp->pim_model__DOT__adc_out[6U] = 0U;
        vlTOPp->pim_model__DOT__adc_out[7U] = 0U;
        vlTOPp->pim_model__DOT__adc_out[8U] = 0U;
        vlTOPp->pim_model__DOT__adc_out[9U] = 0U;
        vlTOPp->pim_model__DOT__adc_out[0xaU] = 0U;
        vlTOPp->pim_model__DOT__adc_out[0xbU] = 0U;
        vlTOPp->pim_model__DOT__adc_out[0xcU] = 0U;
        vlTOPp->pim_model__DOT__adc_out[0xdU] = 0U;
        vlTOPp->pim_model__DOT__adc_out[0xeU] = 0U;
        vlTOPp->pim_model__DOT__adc_out[0xfU] = 0U;
        vlTOPp->pim_model__DOT__adc_out[0x10U] = 0U;
        vlTOPp->pim_model__DOT__adc_out[0x11U] = 0U;
        vlTOPp->pim_model__DOT__adc_out[0x12U] = 0U;
        vlTOPp->pim_model__DOT__adc_out[0x13U] = 0U;
        vlTOPp->pim_model__DOT__adc_out[0x14U] = 0U;
        vlTOPp->pim_model__DOT__adc_out[0x15U] = 0U;
        vlTOPp->pim_model__DOT__adc_out[0x16U] = 0U;
        vlTOPp->pim_model__DOT__adc_out[0x17U] = 0U;
        vlTOPp->pim_model__DOT__adc_out[0x18U] = 0U;
        vlTOPp->pim_model__DOT__adc_out[0x19U] = 0U;
        vlTOPp->pim_model__DOT__adc_out[0x1aU] = 0U;
        vlTOPp->pim_model__DOT__adc_out[0x1bU] = 0U;
        vlTOPp->pim_model__DOT__adc_out[0x1cU] = 0U;
        vlTOPp->pim_model__DOT__adc_out[0x1dU] = 0U;
        vlTOPp->pim_model__DOT__adc_out[0x1eU] = 0U;
        vlTOPp->pim_model__DOT__adc_out[0x1fU] = 0U;
    }
    if (__Vdlyvset__pim_model__DOT__acc_result__v0) {
        vlTOPp->pim_model__DOT__acc_result[0U] = 0U;
    }
    if (__Vdlyvset__pim_model__DOT__acc_result__v1) {
        vlTOPp->pim_model__DOT__acc_result[1U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[2U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[3U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[4U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[5U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[6U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[7U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[8U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[9U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0xaU] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0xbU] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0xcU] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0xdU] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0xeU] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0xfU] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0x10U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0x11U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0x12U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0x13U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0x14U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0x15U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0x16U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0x17U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0x18U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0x19U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0x1aU] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0x1bU] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0x1cU] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0x1dU] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0x1eU] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0x1fU] = 0U;
    }
    if (__Vdlyvset__pim_model__DOT__acc_result__v32) {
        vlTOPp->pim_model__DOT__acc_result[0U] = __Vdlyvval__pim_model__DOT__acc_result__v32;
    }
    if (__Vdlyvset__pim_model__DOT__acc_result__v33) {
        vlTOPp->pim_model__DOT__acc_result[1U] = __Vdlyvval__pim_model__DOT__acc_result__v33;
        vlTOPp->pim_model__DOT__acc_result[2U] = __Vdlyvval__pim_model__DOT__acc_result__v34;
        vlTOPp->pim_model__DOT__acc_result[3U] = __Vdlyvval__pim_model__DOT__acc_result__v35;
        vlTOPp->pim_model__DOT__acc_result[4U] = __Vdlyvval__pim_model__DOT__acc_result__v36;
        vlTOPp->pim_model__DOT__acc_result[5U] = __Vdlyvval__pim_model__DOT__acc_result__v37;
        vlTOPp->pim_model__DOT__acc_result[6U] = __Vdlyvval__pim_model__DOT__acc_result__v38;
        vlTOPp->pim_model__DOT__acc_result[7U] = __Vdlyvval__pim_model__DOT__acc_result__v39;
        vlTOPp->pim_model__DOT__acc_result[8U] = __Vdlyvval__pim_model__DOT__acc_result__v40;
        vlTOPp->pim_model__DOT__acc_result[9U] = __Vdlyvval__pim_model__DOT__acc_result__v41;
        vlTOPp->pim_model__DOT__acc_result[0xaU] = __Vdlyvval__pim_model__DOT__acc_result__v42;
        vlTOPp->pim_model__DOT__acc_result[0xbU] = __Vdlyvval__pim_model__DOT__acc_result__v43;
        vlTOPp->pim_model__DOT__acc_result[0xcU] = __Vdlyvval__pim_model__DOT__acc_result__v44;
        vlTOPp->pim_model__DOT__acc_result[0xdU] = __Vdlyvval__pim_model__DOT__acc_result__v45;
        vlTOPp->pim_model__DOT__acc_result[0xeU] = __Vdlyvval__pim_model__DOT__acc_result__v46;
        vlTOPp->pim_model__DOT__acc_result[0xfU] = __Vdlyvval__pim_model__DOT__acc_result__v47;
        vlTOPp->pim_model__DOT__acc_result[0x10U] = __Vdlyvval__pim_model__DOT__acc_result__v48;
        vlTOPp->pim_model__DOT__acc_result[0x11U] = __Vdlyvval__pim_model__DOT__acc_result__v49;
        vlTOPp->pim_model__DOT__acc_result[0x12U] = __Vdlyvval__pim_model__DOT__acc_result__v50;
        vlTOPp->pim_model__DOT__acc_result[0x13U] = __Vdlyvval__pim_model__DOT__acc_result__v51;
        vlTOPp->pim_model__DOT__acc_result[0x14U] = __Vdlyvval__pim_model__DOT__acc_result__v52;
        vlTOPp->pim_model__DOT__acc_result[0x15U] = __Vdlyvval__pim_model__DOT__acc_result__v53;
        vlTOPp->pim_model__DOT__acc_result[0x16U] = __Vdlyvval__pim_model__DOT__acc_result__v54;
        vlTOPp->pim_model__DOT__acc_result[0x17U] = __Vdlyvval__pim_model__DOT__acc_result__v55;
        vlTOPp->pim_model__DOT__acc_result[0x18U] = __Vdlyvval__pim_model__DOT__acc_result__v56;
        vlTOPp->pim_model__DOT__acc_result[0x19U] = __Vdlyvval__pim_model__DOT__acc_result__v57;
        vlTOPp->pim_model__DOT__acc_result[0x1aU] = __Vdlyvval__pim_model__DOT__acc_result__v58;
        vlTOPp->pim_model__DOT__acc_result[0x1bU] = __Vdlyvval__pim_model__DOT__acc_result__v59;
        vlTOPp->pim_model__DOT__acc_result[0x1cU] = __Vdlyvval__pim_model__DOT__acc_result__v60;
        vlTOPp->pim_model__DOT__acc_result[0x1dU] = __Vdlyvval__pim_model__DOT__acc_result__v61;
        vlTOPp->pim_model__DOT__acc_result[0x1eU] = __Vdlyvval__pim_model__DOT__acc_result__v62;
        vlTOPp->pim_model__DOT__acc_result[0x1fU] = __Vdlyvval__pim_model__DOT__acc_result__v63;
    }
    if (__Vdlyvset__pim_model__DOT__acc_result__v64) {
        vlTOPp->pim_model__DOT__acc_result[0U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[1U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[2U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[3U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[4U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[5U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[6U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[7U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[8U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[9U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0xaU] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0xbU] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0xcU] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0xdU] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0xeU] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0xfU] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0x10U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0x11U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0x12U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0x13U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0x14U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0x15U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0x16U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0x17U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0x18U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0x19U] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0x1aU] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0x1bU] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0x1cU] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0x1dU] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0x1eU] = 0U;
        vlTOPp->pim_model__DOT__acc_result[0x1fU] = 0U;
    }
    if (__Vdlyvset__pim_model__DOT__mem__v0) {
        vlTOPp->pim_model__DOT__mem[__Vdlyvdim0__pim_model__DOT__mem__v0] 
            = __Vdlyvval__pim_model__DOT__mem__v0;
    }
    vlTOPp->q = vlTOPp->pim_model__DOT__q_reg;
    vlTOPp->mac_out = vlTOPp->pim_model__DOT__mac_out_reg;
}

VL_INLINE_OPT void Vpim_model::_combo__TOP__5(Vpim_model__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpim_model::_combo__TOP__5\n"); );
    Vpim_model* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->pim_model__DOT__adc_out[0U] = 0U;
    vlTOPp->pim_model__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->pim_model__DOT__j)) {
        vlTOPp->pim_model__DOT__adc_out[0U] = (vlTOPp->pim_model__DOT__adc_out
                                               [0U] 
                                               + ((- (IData)(
                                                             (1U 
                                                              & vlTOPp->pim_model__DOT__mem
                                                              [
                                                              (0xffU 
                                                               & vlTOPp->pim_model__DOT__j)]))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlTOPp->rwl[
                                                                   (7U 
                                                                    & (vlTOPp->pim_model__DOT__j 
                                                                       >> 5U))] 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & vlTOPp->pim_model__DOT__j)))))));
        vlTOPp->pim_model__DOT__j = ((IData)(1U) + vlTOPp->pim_model__DOT__j);
    }
    vlTOPp->pim_model__DOT__adc_out[1U] = 0U;
    vlTOPp->pim_model__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->pim_model__DOT__j)) {
        vlTOPp->pim_model__DOT__adc_out[1U] = (vlTOPp->pim_model__DOT__adc_out
                                               [1U] 
                                               + ((- (IData)(
                                                             (1U 
                                                              & (vlTOPp->pim_model__DOT__mem
                                                                 [
                                                                 (0xffU 
                                                                  & vlTOPp->pim_model__DOT__j)] 
                                                                 >> 1U)))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlTOPp->rwl[
                                                                   (7U 
                                                                    & (vlTOPp->pim_model__DOT__j 
                                                                       >> 5U))] 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & vlTOPp->pim_model__DOT__j)))))));
        vlTOPp->pim_model__DOT__j = ((IData)(1U) + vlTOPp->pim_model__DOT__j);
    }
    vlTOPp->pim_model__DOT__adc_out[2U] = 0U;
    vlTOPp->pim_model__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->pim_model__DOT__j)) {
        vlTOPp->pim_model__DOT__adc_out[2U] = (vlTOPp->pim_model__DOT__adc_out
                                               [2U] 
                                               + ((- (IData)(
                                                             (1U 
                                                              & (vlTOPp->pim_model__DOT__mem
                                                                 [
                                                                 (0xffU 
                                                                  & vlTOPp->pim_model__DOT__j)] 
                                                                 >> 2U)))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlTOPp->rwl[
                                                                   (7U 
                                                                    & (vlTOPp->pim_model__DOT__j 
                                                                       >> 5U))] 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & vlTOPp->pim_model__DOT__j)))))));
        vlTOPp->pim_model__DOT__j = ((IData)(1U) + vlTOPp->pim_model__DOT__j);
    }
    vlTOPp->pim_model__DOT__adc_out[3U] = 0U;
    vlTOPp->pim_model__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->pim_model__DOT__j)) {
        vlTOPp->pim_model__DOT__adc_out[3U] = (vlTOPp->pim_model__DOT__adc_out
                                               [3U] 
                                               + ((- (IData)(
                                                             (1U 
                                                              & (vlTOPp->pim_model__DOT__mem
                                                                 [
                                                                 (0xffU 
                                                                  & vlTOPp->pim_model__DOT__j)] 
                                                                 >> 3U)))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlTOPp->rwl[
                                                                   (7U 
                                                                    & (vlTOPp->pim_model__DOT__j 
                                                                       >> 5U))] 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & vlTOPp->pim_model__DOT__j)))))));
        vlTOPp->pim_model__DOT__j = ((IData)(1U) + vlTOPp->pim_model__DOT__j);
    }
    vlTOPp->pim_model__DOT__adc_out[4U] = 0U;
    vlTOPp->pim_model__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->pim_model__DOT__j)) {
        vlTOPp->pim_model__DOT__adc_out[4U] = (vlTOPp->pim_model__DOT__adc_out
                                               [4U] 
                                               + ((- (IData)(
                                                             (1U 
                                                              & (vlTOPp->pim_model__DOT__mem
                                                                 [
                                                                 (0xffU 
                                                                  & vlTOPp->pim_model__DOT__j)] 
                                                                 >> 4U)))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlTOPp->rwl[
                                                                   (7U 
                                                                    & (vlTOPp->pim_model__DOT__j 
                                                                       >> 5U))] 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & vlTOPp->pim_model__DOT__j)))))));
        vlTOPp->pim_model__DOT__j = ((IData)(1U) + vlTOPp->pim_model__DOT__j);
    }
    vlTOPp->pim_model__DOT__adc_out[5U] = 0U;
    vlTOPp->pim_model__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->pim_model__DOT__j)) {
        vlTOPp->pim_model__DOT__adc_out[5U] = (vlTOPp->pim_model__DOT__adc_out
                                               [5U] 
                                               + ((- (IData)(
                                                             (1U 
                                                              & (vlTOPp->pim_model__DOT__mem
                                                                 [
                                                                 (0xffU 
                                                                  & vlTOPp->pim_model__DOT__j)] 
                                                                 >> 5U)))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlTOPp->rwl[
                                                                   (7U 
                                                                    & (vlTOPp->pim_model__DOT__j 
                                                                       >> 5U))] 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & vlTOPp->pim_model__DOT__j)))))));
        vlTOPp->pim_model__DOT__j = ((IData)(1U) + vlTOPp->pim_model__DOT__j);
    }
    vlTOPp->pim_model__DOT__adc_out[6U] = 0U;
    vlTOPp->pim_model__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->pim_model__DOT__j)) {
        vlTOPp->pim_model__DOT__adc_out[6U] = (vlTOPp->pim_model__DOT__adc_out
                                               [6U] 
                                               + ((- (IData)(
                                                             (1U 
                                                              & (vlTOPp->pim_model__DOT__mem
                                                                 [
                                                                 (0xffU 
                                                                  & vlTOPp->pim_model__DOT__j)] 
                                                                 >> 6U)))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlTOPp->rwl[
                                                                   (7U 
                                                                    & (vlTOPp->pim_model__DOT__j 
                                                                       >> 5U))] 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & vlTOPp->pim_model__DOT__j)))))));
        vlTOPp->pim_model__DOT__j = ((IData)(1U) + vlTOPp->pim_model__DOT__j);
    }
    vlTOPp->pim_model__DOT__adc_out[7U] = 0U;
    vlTOPp->pim_model__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->pim_model__DOT__j)) {
        vlTOPp->pim_model__DOT__adc_out[7U] = (vlTOPp->pim_model__DOT__adc_out
                                               [7U] 
                                               + ((- (IData)(
                                                             (1U 
                                                              & (vlTOPp->pim_model__DOT__mem
                                                                 [
                                                                 (0xffU 
                                                                  & vlTOPp->pim_model__DOT__j)] 
                                                                 >> 7U)))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlTOPp->rwl[
                                                                   (7U 
                                                                    & (vlTOPp->pim_model__DOT__j 
                                                                       >> 5U))] 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & vlTOPp->pim_model__DOT__j)))))));
        vlTOPp->pim_model__DOT__j = ((IData)(1U) + vlTOPp->pim_model__DOT__j);
    }
    vlTOPp->pim_model__DOT__adc_out[8U] = 0U;
    vlTOPp->pim_model__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->pim_model__DOT__j)) {
        vlTOPp->pim_model__DOT__adc_out[8U] = (vlTOPp->pim_model__DOT__adc_out
                                               [8U] 
                                               + ((- (IData)(
                                                             (1U 
                                                              & (vlTOPp->pim_model__DOT__mem
                                                                 [
                                                                 (0xffU 
                                                                  & vlTOPp->pim_model__DOT__j)] 
                                                                 >> 8U)))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlTOPp->rwl[
                                                                   (7U 
                                                                    & (vlTOPp->pim_model__DOT__j 
                                                                       >> 5U))] 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & vlTOPp->pim_model__DOT__j)))))));
        vlTOPp->pim_model__DOT__j = ((IData)(1U) + vlTOPp->pim_model__DOT__j);
    }
    vlTOPp->pim_model__DOT__adc_out[9U] = 0U;
    vlTOPp->pim_model__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->pim_model__DOT__j)) {
        vlTOPp->pim_model__DOT__adc_out[9U] = (vlTOPp->pim_model__DOT__adc_out
                                               [9U] 
                                               + ((- (IData)(
                                                             (1U 
                                                              & (vlTOPp->pim_model__DOT__mem
                                                                 [
                                                                 (0xffU 
                                                                  & vlTOPp->pim_model__DOT__j)] 
                                                                 >> 9U)))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlTOPp->rwl[
                                                                   (7U 
                                                                    & (vlTOPp->pim_model__DOT__j 
                                                                       >> 5U))] 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & vlTOPp->pim_model__DOT__j)))))));
        vlTOPp->pim_model__DOT__j = ((IData)(1U) + vlTOPp->pim_model__DOT__j);
    }
    vlTOPp->pim_model__DOT__adc_out[0xaU] = 0U;
    vlTOPp->pim_model__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->pim_model__DOT__j)) {
        vlTOPp->pim_model__DOT__adc_out[0xaU] = (vlTOPp->pim_model__DOT__adc_out
                                                 [0xaU] 
                                                 + 
                                                 ((- (IData)(
                                                             (1U 
                                                              & (vlTOPp->pim_model__DOT__mem
                                                                 [
                                                                 (0xffU 
                                                                  & vlTOPp->pim_model__DOT__j)] 
                                                                 >> 0xaU)))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlTOPp->rwl[
                                                                   (7U 
                                                                    & (vlTOPp->pim_model__DOT__j 
                                                                       >> 5U))] 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & vlTOPp->pim_model__DOT__j)))))));
        vlTOPp->pim_model__DOT__j = ((IData)(1U) + vlTOPp->pim_model__DOT__j);
    }
    vlTOPp->pim_model__DOT__adc_out[0xbU] = 0U;
    vlTOPp->pim_model__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->pim_model__DOT__j)) {
        vlTOPp->pim_model__DOT__adc_out[0xbU] = (vlTOPp->pim_model__DOT__adc_out
                                                 [0xbU] 
                                                 + 
                                                 ((- (IData)(
                                                             (1U 
                                                              & (vlTOPp->pim_model__DOT__mem
                                                                 [
                                                                 (0xffU 
                                                                  & vlTOPp->pim_model__DOT__j)] 
                                                                 >> 0xbU)))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlTOPp->rwl[
                                                                   (7U 
                                                                    & (vlTOPp->pim_model__DOT__j 
                                                                       >> 5U))] 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & vlTOPp->pim_model__DOT__j)))))));
        vlTOPp->pim_model__DOT__j = ((IData)(1U) + vlTOPp->pim_model__DOT__j);
    }
    vlTOPp->pim_model__DOT__adc_out[0xcU] = 0U;
    vlTOPp->pim_model__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->pim_model__DOT__j)) {
        vlTOPp->pim_model__DOT__adc_out[0xcU] = (vlTOPp->pim_model__DOT__adc_out
                                                 [0xcU] 
                                                 + 
                                                 ((- (IData)(
                                                             (1U 
                                                              & (vlTOPp->pim_model__DOT__mem
                                                                 [
                                                                 (0xffU 
                                                                  & vlTOPp->pim_model__DOT__j)] 
                                                                 >> 0xcU)))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlTOPp->rwl[
                                                                   (7U 
                                                                    & (vlTOPp->pim_model__DOT__j 
                                                                       >> 5U))] 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & vlTOPp->pim_model__DOT__j)))))));
        vlTOPp->pim_model__DOT__j = ((IData)(1U) + vlTOPp->pim_model__DOT__j);
    }
    vlTOPp->pim_model__DOT__adc_out[0xdU] = 0U;
    vlTOPp->pim_model__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->pim_model__DOT__j)) {
        vlTOPp->pim_model__DOT__adc_out[0xdU] = (vlTOPp->pim_model__DOT__adc_out
                                                 [0xdU] 
                                                 + 
                                                 ((- (IData)(
                                                             (1U 
                                                              & (vlTOPp->pim_model__DOT__mem
                                                                 [
                                                                 (0xffU 
                                                                  & vlTOPp->pim_model__DOT__j)] 
                                                                 >> 0xdU)))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlTOPp->rwl[
                                                                   (7U 
                                                                    & (vlTOPp->pim_model__DOT__j 
                                                                       >> 5U))] 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & vlTOPp->pim_model__DOT__j)))))));
        vlTOPp->pim_model__DOT__j = ((IData)(1U) + vlTOPp->pim_model__DOT__j);
    }
    vlTOPp->pim_model__DOT__adc_out[0xeU] = 0U;
    vlTOPp->pim_model__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->pim_model__DOT__j)) {
        vlTOPp->pim_model__DOT__adc_out[0xeU] = (vlTOPp->pim_model__DOT__adc_out
                                                 [0xeU] 
                                                 + 
                                                 ((- (IData)(
                                                             (1U 
                                                              & (vlTOPp->pim_model__DOT__mem
                                                                 [
                                                                 (0xffU 
                                                                  & vlTOPp->pim_model__DOT__j)] 
                                                                 >> 0xeU)))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlTOPp->rwl[
                                                                   (7U 
                                                                    & (vlTOPp->pim_model__DOT__j 
                                                                       >> 5U))] 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & vlTOPp->pim_model__DOT__j)))))));
        vlTOPp->pim_model__DOT__j = ((IData)(1U) + vlTOPp->pim_model__DOT__j);
    }
    vlTOPp->pim_model__DOT__adc_out[0xfU] = 0U;
    vlTOPp->pim_model__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->pim_model__DOT__j)) {
        vlTOPp->pim_model__DOT__adc_out[0xfU] = (vlTOPp->pim_model__DOT__adc_out
                                                 [0xfU] 
                                                 + 
                                                 ((- (IData)(
                                                             (1U 
                                                              & (vlTOPp->pim_model__DOT__mem
                                                                 [
                                                                 (0xffU 
                                                                  & vlTOPp->pim_model__DOT__j)] 
                                                                 >> 0xfU)))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlTOPp->rwl[
                                                                   (7U 
                                                                    & (vlTOPp->pim_model__DOT__j 
                                                                       >> 5U))] 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & vlTOPp->pim_model__DOT__j)))))));
        vlTOPp->pim_model__DOT__j = ((IData)(1U) + vlTOPp->pim_model__DOT__j);
    }
    vlTOPp->pim_model__DOT__adc_out[0x10U] = 0U;
    vlTOPp->pim_model__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->pim_model__DOT__j)) {
        vlTOPp->pim_model__DOT__adc_out[0x10U] = (vlTOPp->pim_model__DOT__adc_out
                                                  [0x10U] 
                                                  + 
                                                  ((- (IData)(
                                                              (1U 
                                                               & (vlTOPp->pim_model__DOT__mem
                                                                  [
                                                                  (0xffU 
                                                                   & vlTOPp->pim_model__DOT__j)] 
                                                                  >> 0x10U)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlTOPp->rwl[
                                                                    (7U 
                                                                     & (vlTOPp->pim_model__DOT__j 
                                                                        >> 5U))] 
                                                                    >> 
                                                                    (0x1fU 
                                                                     & vlTOPp->pim_model__DOT__j)))))));
        vlTOPp->pim_model__DOT__j = ((IData)(1U) + vlTOPp->pim_model__DOT__j);
    }
    vlTOPp->pim_model__DOT__adc_out[0x11U] = 0U;
    vlTOPp->pim_model__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->pim_model__DOT__j)) {
        vlTOPp->pim_model__DOT__adc_out[0x11U] = (vlTOPp->pim_model__DOT__adc_out
                                                  [0x11U] 
                                                  + 
                                                  ((- (IData)(
                                                              (1U 
                                                               & (vlTOPp->pim_model__DOT__mem
                                                                  [
                                                                  (0xffU 
                                                                   & vlTOPp->pim_model__DOT__j)] 
                                                                  >> 0x11U)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlTOPp->rwl[
                                                                    (7U 
                                                                     & (vlTOPp->pim_model__DOT__j 
                                                                        >> 5U))] 
                                                                    >> 
                                                                    (0x1fU 
                                                                     & vlTOPp->pim_model__DOT__j)))))));
        vlTOPp->pim_model__DOT__j = ((IData)(1U) + vlTOPp->pim_model__DOT__j);
    }
    vlTOPp->pim_model__DOT__adc_out[0x12U] = 0U;
    vlTOPp->pim_model__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->pim_model__DOT__j)) {
        vlTOPp->pim_model__DOT__adc_out[0x12U] = (vlTOPp->pim_model__DOT__adc_out
                                                  [0x12U] 
                                                  + 
                                                  ((- (IData)(
                                                              (1U 
                                                               & (vlTOPp->pim_model__DOT__mem
                                                                  [
                                                                  (0xffU 
                                                                   & vlTOPp->pim_model__DOT__j)] 
                                                                  >> 0x12U)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlTOPp->rwl[
                                                                    (7U 
                                                                     & (vlTOPp->pim_model__DOT__j 
                                                                        >> 5U))] 
                                                                    >> 
                                                                    (0x1fU 
                                                                     & vlTOPp->pim_model__DOT__j)))))));
        vlTOPp->pim_model__DOT__j = ((IData)(1U) + vlTOPp->pim_model__DOT__j);
    }
    vlTOPp->pim_model__DOT__adc_out[0x13U] = 0U;
    vlTOPp->pim_model__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->pim_model__DOT__j)) {
        vlTOPp->pim_model__DOT__adc_out[0x13U] = (vlTOPp->pim_model__DOT__adc_out
                                                  [0x13U] 
                                                  + 
                                                  ((- (IData)(
                                                              (1U 
                                                               & (vlTOPp->pim_model__DOT__mem
                                                                  [
                                                                  (0xffU 
                                                                   & vlTOPp->pim_model__DOT__j)] 
                                                                  >> 0x13U)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlTOPp->rwl[
                                                                    (7U 
                                                                     & (vlTOPp->pim_model__DOT__j 
                                                                        >> 5U))] 
                                                                    >> 
                                                                    (0x1fU 
                                                                     & vlTOPp->pim_model__DOT__j)))))));
        vlTOPp->pim_model__DOT__j = ((IData)(1U) + vlTOPp->pim_model__DOT__j);
    }
    vlTOPp->pim_model__DOT__adc_out[0x14U] = 0U;
    vlTOPp->pim_model__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->pim_model__DOT__j)) {
        vlTOPp->pim_model__DOT__adc_out[0x14U] = (vlTOPp->pim_model__DOT__adc_out
                                                  [0x14U] 
                                                  + 
                                                  ((- (IData)(
                                                              (1U 
                                                               & (vlTOPp->pim_model__DOT__mem
                                                                  [
                                                                  (0xffU 
                                                                   & vlTOPp->pim_model__DOT__j)] 
                                                                  >> 0x14U)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlTOPp->rwl[
                                                                    (7U 
                                                                     & (vlTOPp->pim_model__DOT__j 
                                                                        >> 5U))] 
                                                                    >> 
                                                                    (0x1fU 
                                                                     & vlTOPp->pim_model__DOT__j)))))));
        vlTOPp->pim_model__DOT__j = ((IData)(1U) + vlTOPp->pim_model__DOT__j);
    }
    vlTOPp->pim_model__DOT__adc_out[0x15U] = 0U;
    vlTOPp->pim_model__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->pim_model__DOT__j)) {
        vlTOPp->pim_model__DOT__adc_out[0x15U] = (vlTOPp->pim_model__DOT__adc_out
                                                  [0x15U] 
                                                  + 
                                                  ((- (IData)(
                                                              (1U 
                                                               & (vlTOPp->pim_model__DOT__mem
                                                                  [
                                                                  (0xffU 
                                                                   & vlTOPp->pim_model__DOT__j)] 
                                                                  >> 0x15U)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlTOPp->rwl[
                                                                    (7U 
                                                                     & (vlTOPp->pim_model__DOT__j 
                                                                        >> 5U))] 
                                                                    >> 
                                                                    (0x1fU 
                                                                     & vlTOPp->pim_model__DOT__j)))))));
        vlTOPp->pim_model__DOT__j = ((IData)(1U) + vlTOPp->pim_model__DOT__j);
    }
    vlTOPp->pim_model__DOT__adc_out[0x16U] = 0U;
    vlTOPp->pim_model__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->pim_model__DOT__j)) {
        vlTOPp->pim_model__DOT__adc_out[0x16U] = (vlTOPp->pim_model__DOT__adc_out
                                                  [0x16U] 
                                                  + 
                                                  ((- (IData)(
                                                              (1U 
                                                               & (vlTOPp->pim_model__DOT__mem
                                                                  [
                                                                  (0xffU 
                                                                   & vlTOPp->pim_model__DOT__j)] 
                                                                  >> 0x16U)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlTOPp->rwl[
                                                                    (7U 
                                                                     & (vlTOPp->pim_model__DOT__j 
                                                                        >> 5U))] 
                                                                    >> 
                                                                    (0x1fU 
                                                                     & vlTOPp->pim_model__DOT__j)))))));
        vlTOPp->pim_model__DOT__j = ((IData)(1U) + vlTOPp->pim_model__DOT__j);
    }
    vlTOPp->pim_model__DOT__adc_out[0x17U] = 0U;
    vlTOPp->pim_model__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->pim_model__DOT__j)) {
        vlTOPp->pim_model__DOT__adc_out[0x17U] = (vlTOPp->pim_model__DOT__adc_out
                                                  [0x17U] 
                                                  + 
                                                  ((- (IData)(
                                                              (1U 
                                                               & (vlTOPp->pim_model__DOT__mem
                                                                  [
                                                                  (0xffU 
                                                                   & vlTOPp->pim_model__DOT__j)] 
                                                                  >> 0x17U)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlTOPp->rwl[
                                                                    (7U 
                                                                     & (vlTOPp->pim_model__DOT__j 
                                                                        >> 5U))] 
                                                                    >> 
                                                                    (0x1fU 
                                                                     & vlTOPp->pim_model__DOT__j)))))));
        vlTOPp->pim_model__DOT__j = ((IData)(1U) + vlTOPp->pim_model__DOT__j);
    }
    vlTOPp->pim_model__DOT__adc_out[0x18U] = 0U;
    vlTOPp->pim_model__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->pim_model__DOT__j)) {
        vlTOPp->pim_model__DOT__adc_out[0x18U] = (vlTOPp->pim_model__DOT__adc_out
                                                  [0x18U] 
                                                  + 
                                                  ((- (IData)(
                                                              (1U 
                                                               & (vlTOPp->pim_model__DOT__mem
                                                                  [
                                                                  (0xffU 
                                                                   & vlTOPp->pim_model__DOT__j)] 
                                                                  >> 0x18U)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlTOPp->rwl[
                                                                    (7U 
                                                                     & (vlTOPp->pim_model__DOT__j 
                                                                        >> 5U))] 
                                                                    >> 
                                                                    (0x1fU 
                                                                     & vlTOPp->pim_model__DOT__j)))))));
        vlTOPp->pim_model__DOT__j = ((IData)(1U) + vlTOPp->pim_model__DOT__j);
    }
    vlTOPp->pim_model__DOT__adc_out[0x19U] = 0U;
    vlTOPp->pim_model__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->pim_model__DOT__j)) {
        vlTOPp->pim_model__DOT__adc_out[0x19U] = (vlTOPp->pim_model__DOT__adc_out
                                                  [0x19U] 
                                                  + 
                                                  ((- (IData)(
                                                              (1U 
                                                               & (vlTOPp->pim_model__DOT__mem
                                                                  [
                                                                  (0xffU 
                                                                   & vlTOPp->pim_model__DOT__j)] 
                                                                  >> 0x19U)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlTOPp->rwl[
                                                                    (7U 
                                                                     & (vlTOPp->pim_model__DOT__j 
                                                                        >> 5U))] 
                                                                    >> 
                                                                    (0x1fU 
                                                                     & vlTOPp->pim_model__DOT__j)))))));
        vlTOPp->pim_model__DOT__j = ((IData)(1U) + vlTOPp->pim_model__DOT__j);
    }
    vlTOPp->pim_model__DOT__adc_out[0x1aU] = 0U;
    vlTOPp->pim_model__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->pim_model__DOT__j)) {
        vlTOPp->pim_model__DOT__adc_out[0x1aU] = (vlTOPp->pim_model__DOT__adc_out
                                                  [0x1aU] 
                                                  + 
                                                  ((- (IData)(
                                                              (1U 
                                                               & (vlTOPp->pim_model__DOT__mem
                                                                  [
                                                                  (0xffU 
                                                                   & vlTOPp->pim_model__DOT__j)] 
                                                                  >> 0x1aU)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlTOPp->rwl[
                                                                    (7U 
                                                                     & (vlTOPp->pim_model__DOT__j 
                                                                        >> 5U))] 
                                                                    >> 
                                                                    (0x1fU 
                                                                     & vlTOPp->pim_model__DOT__j)))))));
        vlTOPp->pim_model__DOT__j = ((IData)(1U) + vlTOPp->pim_model__DOT__j);
    }
    vlTOPp->pim_model__DOT__adc_out[0x1bU] = 0U;
    vlTOPp->pim_model__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->pim_model__DOT__j)) {
        vlTOPp->pim_model__DOT__adc_out[0x1bU] = (vlTOPp->pim_model__DOT__adc_out
                                                  [0x1bU] 
                                                  + 
                                                  ((- (IData)(
                                                              (1U 
                                                               & (vlTOPp->pim_model__DOT__mem
                                                                  [
                                                                  (0xffU 
                                                                   & vlTOPp->pim_model__DOT__j)] 
                                                                  >> 0x1bU)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlTOPp->rwl[
                                                                    (7U 
                                                                     & (vlTOPp->pim_model__DOT__j 
                                                                        >> 5U))] 
                                                                    >> 
                                                                    (0x1fU 
                                                                     & vlTOPp->pim_model__DOT__j)))))));
        vlTOPp->pim_model__DOT__j = ((IData)(1U) + vlTOPp->pim_model__DOT__j);
    }
    vlTOPp->pim_model__DOT__adc_out[0x1cU] = 0U;
    vlTOPp->pim_model__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->pim_model__DOT__j)) {
        vlTOPp->pim_model__DOT__adc_out[0x1cU] = (vlTOPp->pim_model__DOT__adc_out
                                                  [0x1cU] 
                                                  + 
                                                  ((- (IData)(
                                                              (1U 
                                                               & (vlTOPp->pim_model__DOT__mem
                                                                  [
                                                                  (0xffU 
                                                                   & vlTOPp->pim_model__DOT__j)] 
                                                                  >> 0x1cU)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlTOPp->rwl[
                                                                    (7U 
                                                                     & (vlTOPp->pim_model__DOT__j 
                                                                        >> 5U))] 
                                                                    >> 
                                                                    (0x1fU 
                                                                     & vlTOPp->pim_model__DOT__j)))))));
        vlTOPp->pim_model__DOT__j = ((IData)(1U) + vlTOPp->pim_model__DOT__j);
    }
    vlTOPp->pim_model__DOT__adc_out[0x1dU] = 0U;
    vlTOPp->pim_model__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->pim_model__DOT__j)) {
        vlTOPp->pim_model__DOT__adc_out[0x1dU] = (vlTOPp->pim_model__DOT__adc_out
                                                  [0x1dU] 
                                                  + 
                                                  ((- (IData)(
                                                              (1U 
                                                               & (vlTOPp->pim_model__DOT__mem
                                                                  [
                                                                  (0xffU 
                                                                   & vlTOPp->pim_model__DOT__j)] 
                                                                  >> 0x1dU)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlTOPp->rwl[
                                                                    (7U 
                                                                     & (vlTOPp->pim_model__DOT__j 
                                                                        >> 5U))] 
                                                                    >> 
                                                                    (0x1fU 
                                                                     & vlTOPp->pim_model__DOT__j)))))));
        vlTOPp->pim_model__DOT__j = ((IData)(1U) + vlTOPp->pim_model__DOT__j);
    }
    vlTOPp->pim_model__DOT__adc_out[0x1eU] = 0U;
    vlTOPp->pim_model__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->pim_model__DOT__j)) {
        vlTOPp->pim_model__DOT__adc_out[0x1eU] = (vlTOPp->pim_model__DOT__adc_out
                                                  [0x1eU] 
                                                  + 
                                                  ((- (IData)(
                                                              (1U 
                                                               & (vlTOPp->pim_model__DOT__mem
                                                                  [
                                                                  (0xffU 
                                                                   & vlTOPp->pim_model__DOT__j)] 
                                                                  >> 0x1eU)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlTOPp->rwl[
                                                                    (7U 
                                                                     & (vlTOPp->pim_model__DOT__j 
                                                                        >> 5U))] 
                                                                    >> 
                                                                    (0x1fU 
                                                                     & vlTOPp->pim_model__DOT__j)))))));
        vlTOPp->pim_model__DOT__j = ((IData)(1U) + vlTOPp->pim_model__DOT__j);
    }
    vlTOPp->pim_model__DOT__adc_out[0x1fU] = 0U;
    vlTOPp->pim_model__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->pim_model__DOT__j)) {
        vlTOPp->pim_model__DOT__adc_out[0x1fU] = (vlTOPp->pim_model__DOT__adc_out
                                                  [0x1fU] 
                                                  + 
                                                  ((- (IData)(
                                                              (1U 
                                                               & (vlTOPp->pim_model__DOT__mem
                                                                  [
                                                                  (0xffU 
                                                                   & vlTOPp->pim_model__DOT__j)] 
                                                                  >> 0x1fU)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlTOPp->rwl[
                                                                    (7U 
                                                                     & (vlTOPp->pim_model__DOT__j 
                                                                        >> 5U))] 
                                                                    >> 
                                                                    (0x1fU 
                                                                     & vlTOPp->pim_model__DOT__j)))))));
        vlTOPp->pim_model__DOT__j = ((IData)(1U) + vlTOPp->pim_model__DOT__j);
    }
}

void Vpim_model::_eval(Vpim_model__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpim_model::_eval\n"); );
    Vpim_model* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__3(vlSymsp);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->__Vclklast__TOP__reset)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData Vpim_model::_change_request(Vpim_model__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpim_model::_change_request\n"); );
    Vpim_model* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vpim_model::_change_request_1(Vpim_model__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpim_model::_change_request_1\n"); );
    Vpim_model* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vpim_model::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpim_model::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((w_en & 0xfeU))) {
        Verilated::overWidthError("w_en");}
    if (VL_UNLIKELY((p_en & 0xfeU))) {
        Verilated::overWidthError("p_en");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((cmd_valid & 0xfeU))) {
        Verilated::overWidthError("cmd_valid");}
    if (VL_UNLIKELY((rsp_ready & 0xfeU))) {
        Verilated::overWidthError("rsp_ready");}
}
#endif  // VL_DEBUG
