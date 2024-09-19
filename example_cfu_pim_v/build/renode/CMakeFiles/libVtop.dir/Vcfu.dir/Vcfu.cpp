// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcfu.h for the primary calling header

#include "Vcfu.h"
#include "Vcfu__Syms.h"

//==========

void Vcfu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcfu::eval\n"); );
    Vcfu__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vcfu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/jueun/park/CFU-Playground/proj/example_cfu_pim_v/cfu.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vcfu::_eval_initial_loop(Vcfu__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/jueun/park/CFU-Playground/proj/example_cfu_pim_v/cfu.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vcfu::_combo__TOP__3(Vcfu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcfu::_combo__TOP__3\n"); );
    Vcfu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->rsp_valid = vlTOPp->cmd_valid;
    vlTOPp->cmd_ready = vlTOPp->rsp_ready;
}

VL_INLINE_OPT void Vcfu::_sequent__TOP__4(Vcfu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcfu::_sequent__TOP__4\n"); );
    Vcfu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*1023:0*/ __Vtemp66[32];
    // Body
    vlTOPp->__Vdly__cfu__DOT__sum_acc_result = vlTOPp->cfu__DOT__sum_acc_result;
    vlTOPp->__Vdly__cfu__DOT__shift_cnt = vlTOPp->cfu__DOT__shift_cnt;
    vlTOPp->__Vdlyvset__cfu__DOT__mem__v0 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v32 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v33 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v34 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v35 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v36 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v37 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v38 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v39 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v40 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v41 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v42 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v43 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v44 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v45 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v46 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v47 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v48 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v49 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v50 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v51 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v52 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v53 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v54 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v55 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v56 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v57 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v58 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v59 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v60 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v61 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v62 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v63 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v64 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v0 = 0U;
    vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v1 = 0U;
    if (vlTOPp->reset) {
        vlTOPp->cfu__DOT__rwl[0U] = 0U;
        vlTOPp->cfu__DOT__rwl[1U] = 0U;
        vlTOPp->cfu__DOT__rwl[2U] = 0U;
        vlTOPp->cfu__DOT__rwl[3U] = 0U;
        vlTOPp->cfu__DOT__rwl[4U] = 0U;
        vlTOPp->cfu__DOT__rwl[5U] = 0U;
        vlTOPp->cfu__DOT__rwl[6U] = 0U;
        vlTOPp->cfu__DOT__rwl[7U] = 0U;
        vlTOPp->cfu__DOT__rwl[8U] = 0U;
        vlTOPp->cfu__DOT__rwl[9U] = 0U;
        vlTOPp->cfu__DOT__rwl[0xaU] = 0U;
        vlTOPp->cfu__DOT__rwl[0xbU] = 0U;
        vlTOPp->cfu__DOT__rwl[0xcU] = 0U;
        vlTOPp->cfu__DOT__rwl[0xdU] = 0U;
        vlTOPp->cfu__DOT__rwl[0xeU] = 0U;
        vlTOPp->cfu__DOT__rwl[0xfU] = 0U;
        vlTOPp->cfu__DOT__rwl[0x10U] = 0U;
        vlTOPp->cfu__DOT__rwl[0x11U] = 0U;
        vlTOPp->cfu__DOT__rwl[0x12U] = 0U;
        vlTOPp->cfu__DOT__rwl[0x13U] = 0U;
        vlTOPp->cfu__DOT__rwl[0x14U] = 0U;
        vlTOPp->cfu__DOT__rwl[0x15U] = 0U;
        vlTOPp->cfu__DOT__rwl[0x16U] = 0U;
        vlTOPp->cfu__DOT__rwl[0x17U] = 0U;
        vlTOPp->cfu__DOT__rwl[0x18U] = 0U;
        vlTOPp->cfu__DOT__rwl[0x19U] = 0U;
        vlTOPp->cfu__DOT__rwl[0x1aU] = 0U;
        vlTOPp->cfu__DOT__rwl[0x1bU] = 0U;
        vlTOPp->cfu__DOT__rwl[0x1cU] = 0U;
        vlTOPp->cfu__DOT__rwl[0x1dU] = 0U;
        vlTOPp->cfu__DOT__rwl[0x1eU] = 0U;
        vlTOPp->cfu__DOT__rwl[0x1fU] = 0U;
    } else {
        VL_EXTENDS_WI(1024,32, __Vtemp66, VL_RANDOM_I(32));
        vlTOPp->cfu__DOT__rwl[0U] = __Vtemp66[0U];
        vlTOPp->cfu__DOT__rwl[1U] = __Vtemp66[1U];
        vlTOPp->cfu__DOT__rwl[2U] = __Vtemp66[2U];
        vlTOPp->cfu__DOT__rwl[3U] = __Vtemp66[3U];
        vlTOPp->cfu__DOT__rwl[4U] = __Vtemp66[4U];
        vlTOPp->cfu__DOT__rwl[5U] = __Vtemp66[5U];
        vlTOPp->cfu__DOT__rwl[6U] = __Vtemp66[6U];
        vlTOPp->cfu__DOT__rwl[7U] = __Vtemp66[7U];
        vlTOPp->cfu__DOT__rwl[8U] = __Vtemp66[8U];
        vlTOPp->cfu__DOT__rwl[9U] = __Vtemp66[9U];
        vlTOPp->cfu__DOT__rwl[0xaU] = __Vtemp66[0xaU];
        vlTOPp->cfu__DOT__rwl[0xbU] = __Vtemp66[0xbU];
        vlTOPp->cfu__DOT__rwl[0xcU] = __Vtemp66[0xcU];
        vlTOPp->cfu__DOT__rwl[0xdU] = __Vtemp66[0xdU];
        vlTOPp->cfu__DOT__rwl[0xeU] = __Vtemp66[0xeU];
        vlTOPp->cfu__DOT__rwl[0xfU] = __Vtemp66[0xfU];
        vlTOPp->cfu__DOT__rwl[0x10U] = __Vtemp66[0x10U];
        vlTOPp->cfu__DOT__rwl[0x11U] = __Vtemp66[0x11U];
        vlTOPp->cfu__DOT__rwl[0x12U] = __Vtemp66[0x12U];
        vlTOPp->cfu__DOT__rwl[0x13U] = __Vtemp66[0x13U];
        vlTOPp->cfu__DOT__rwl[0x14U] = __Vtemp66[0x14U];
        vlTOPp->cfu__DOT__rwl[0x15U] = __Vtemp66[0x15U];
        vlTOPp->cfu__DOT__rwl[0x16U] = __Vtemp66[0x16U];
        vlTOPp->cfu__DOT__rwl[0x17U] = __Vtemp66[0x17U];
        vlTOPp->cfu__DOT__rwl[0x18U] = __Vtemp66[0x18U];
        vlTOPp->cfu__DOT__rwl[0x19U] = __Vtemp66[0x19U];
        vlTOPp->cfu__DOT__rwl[0x1aU] = __Vtemp66[0x1aU];
        vlTOPp->cfu__DOT__rwl[0x1bU] = __Vtemp66[0x1bU];
        vlTOPp->cfu__DOT__rwl[0x1cU] = __Vtemp66[0x1cU];
        vlTOPp->cfu__DOT__rwl[0x1dU] = __Vtemp66[0x1dU];
        vlTOPp->cfu__DOT__rwl[0x1eU] = __Vtemp66[0x1eU];
        vlTOPp->cfu__DOT__rwl[0x1fU] = __Vtemp66[0x1fU];
    }
}

VL_INLINE_OPT void Vcfu::_sequent__TOP__5(Vcfu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcfu::_sequent__TOP__5\n"); );
    Vcfu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->cfu__DOT__out = 0U;
    } else {
        if (VL_UNLIKELY((2U & (IData)(vlTOPp->cmd_payload_function_id)))) {
            VL_WRITEF("MacOut: %x\n",32,vlTOPp->cfu__DOT__mac_out_reg);
            vlTOPp->cfu__DOT__out = vlTOPp->cfu__DOT__mac_out_reg;
        } else {
            if ((1U & (IData)(vlTOPp->cmd_payload_function_id))) {
                VL_WRITEF("Write: %x\n",32,vlTOPp->cfu__DOT__mem
                          [(0xffU & ((IData)(vlTOPp->cmd_payload_function_id) 
                                     >> 2U))]);
                vlTOPp->cfu__DOT__out = vlTOPp->cfu__DOT__mem
                    [(0xffU & ((IData)(vlTOPp->cmd_payload_function_id) 
                               >> 2U))];
            } else {
                VL_WRITEF("Read: %x\n",32,vlTOPp->cfu__DOT__q_reg);
                vlTOPp->cfu__DOT__out = vlTOPp->cfu__DOT__q_reg;
            }
        }
    }
    vlTOPp->rsp_payload_outputs_0 = vlTOPp->cfu__DOT__out;
}

VL_INLINE_OPT void Vcfu::_sequent__TOP__6(Vcfu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcfu::_sequent__TOP__6\n"); );
    Vcfu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    SData/*9:0*/ __Vdlyvdim0__cfu__DOT__mem__v0;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__acc_result__v32;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__acc_result__v33;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__acc_result__v34;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__acc_result__v35;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__acc_result__v36;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__acc_result__v37;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__acc_result__v38;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__acc_result__v39;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__acc_result__v40;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__acc_result__v41;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__acc_result__v42;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__acc_result__v43;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__acc_result__v44;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__acc_result__v45;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__acc_result__v46;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__acc_result__v47;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__acc_result__v48;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__acc_result__v49;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__acc_result__v50;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__acc_result__v51;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__acc_result__v52;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__acc_result__v53;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__acc_result__v54;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__acc_result__v55;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__acc_result__v56;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__acc_result__v57;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__acc_result__v58;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__acc_result__v59;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__acc_result__v60;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__acc_result__v61;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__acc_result__v62;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__acc_result__v63;
    IData/*31:0*/ __Vdlyvval__cfu__DOT__mem__v0;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->cfu__DOT__i = 0x20U;
        vlTOPp->__Vdly__cfu__DOT__shift_cnt = 0U;
        vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v0 = 1U;
        vlTOPp->__Vdly__cfu__DOT__sum_acc_result = 0U;
        vlTOPp->cfu__DOT__q_reg = 0U;
        vlTOPp->cfu__DOT__mac_out_reg = 0U;
        vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v1 = 1U;
    } else {
        if (VL_UNLIKELY((2U & (IData)(vlTOPp->cmd_payload_function_id)))) {
            vlTOPp->cfu__DOT__i = 0x20U;
            __Vdlyvval__cfu__DOT__acc_result__v32 = 
                ((0U == (IData)(vlTOPp->cfu__DOT__shift_cnt))
                  ? vlTOPp->cfu__DOT__adc_out[0U] : 
                 (vlTOPp->cfu__DOT__acc_result[0U] 
                  + (vlTOPp->cfu__DOT__adc_out[0U] 
                     << (IData)(vlTOPp->cfu__DOT__shift_cnt))));
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v32 = 1U;
            VL_WRITEF("acc_result[          0]: %x <- shift_cnt: %b\n",
                      32,vlTOPp->cfu__DOT__acc_result
                      [0U],5,vlTOPp->cfu__DOT__shift_cnt);
            __Vdlyvval__cfu__DOT__acc_result__v33 = 
                ((0U == (IData)(vlTOPp->cfu__DOT__shift_cnt))
                  ? vlTOPp->cfu__DOT__adc_out[1U] : 
                 (vlTOPp->cfu__DOT__acc_result[1U] 
                  + (vlTOPp->cfu__DOT__adc_out[1U] 
                     << (IData)(vlTOPp->cfu__DOT__shift_cnt))));
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v33 = 1U;
            VL_WRITEF("acc_result[          1]: %x <- shift_cnt: %b\n",
                      32,vlTOPp->cfu__DOT__acc_result
                      [1U],5,vlTOPp->cfu__DOT__shift_cnt);
            __Vdlyvval__cfu__DOT__acc_result__v34 = 
                ((0U == (IData)(vlTOPp->cfu__DOT__shift_cnt))
                  ? vlTOPp->cfu__DOT__adc_out[2U] : 
                 (vlTOPp->cfu__DOT__acc_result[2U] 
                  + (vlTOPp->cfu__DOT__adc_out[2U] 
                     << (IData)(vlTOPp->cfu__DOT__shift_cnt))));
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v34 = 1U;
            VL_WRITEF("acc_result[          2]: %x <- shift_cnt: %b\n",
                      32,vlTOPp->cfu__DOT__acc_result
                      [2U],5,vlTOPp->cfu__DOT__shift_cnt);
            __Vdlyvval__cfu__DOT__acc_result__v35 = 
                ((0U == (IData)(vlTOPp->cfu__DOT__shift_cnt))
                  ? vlTOPp->cfu__DOT__adc_out[3U] : 
                 (vlTOPp->cfu__DOT__acc_result[3U] 
                  + (vlTOPp->cfu__DOT__adc_out[3U] 
                     << (IData)(vlTOPp->cfu__DOT__shift_cnt))));
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v35 = 1U;
            VL_WRITEF("acc_result[          3]: %x <- shift_cnt: %b\n",
                      32,vlTOPp->cfu__DOT__acc_result
                      [3U],5,vlTOPp->cfu__DOT__shift_cnt);
            __Vdlyvval__cfu__DOT__acc_result__v36 = 
                ((0U == (IData)(vlTOPp->cfu__DOT__shift_cnt))
                  ? vlTOPp->cfu__DOT__adc_out[4U] : 
                 (vlTOPp->cfu__DOT__acc_result[4U] 
                  + (vlTOPp->cfu__DOT__adc_out[4U] 
                     << (IData)(vlTOPp->cfu__DOT__shift_cnt))));
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v36 = 1U;
            VL_WRITEF("acc_result[          4]: %x <- shift_cnt: %b\n",
                      32,vlTOPp->cfu__DOT__acc_result
                      [4U],5,vlTOPp->cfu__DOT__shift_cnt);
            __Vdlyvval__cfu__DOT__acc_result__v37 = 
                ((0U == (IData)(vlTOPp->cfu__DOT__shift_cnt))
                  ? vlTOPp->cfu__DOT__adc_out[5U] : 
                 (vlTOPp->cfu__DOT__acc_result[5U] 
                  + (vlTOPp->cfu__DOT__adc_out[5U] 
                     << (IData)(vlTOPp->cfu__DOT__shift_cnt))));
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v37 = 1U;
            VL_WRITEF("acc_result[          5]: %x <- shift_cnt: %b\n",
                      32,vlTOPp->cfu__DOT__acc_result
                      [5U],5,vlTOPp->cfu__DOT__shift_cnt);
            __Vdlyvval__cfu__DOT__acc_result__v38 = 
                ((0U == (IData)(vlTOPp->cfu__DOT__shift_cnt))
                  ? vlTOPp->cfu__DOT__adc_out[6U] : 
                 (vlTOPp->cfu__DOT__acc_result[6U] 
                  + (vlTOPp->cfu__DOT__adc_out[6U] 
                     << (IData)(vlTOPp->cfu__DOT__shift_cnt))));
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v38 = 1U;
            VL_WRITEF("acc_result[          6]: %x <- shift_cnt: %b\n",
                      32,vlTOPp->cfu__DOT__acc_result
                      [6U],5,vlTOPp->cfu__DOT__shift_cnt);
            __Vdlyvval__cfu__DOT__acc_result__v39 = 
                ((0U == (IData)(vlTOPp->cfu__DOT__shift_cnt))
                  ? vlTOPp->cfu__DOT__adc_out[7U] : 
                 (vlTOPp->cfu__DOT__acc_result[7U] 
                  + (vlTOPp->cfu__DOT__adc_out[7U] 
                     << (IData)(vlTOPp->cfu__DOT__shift_cnt))));
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v39 = 1U;
            VL_WRITEF("acc_result[          7]: %x <- shift_cnt: %b\n",
                      32,vlTOPp->cfu__DOT__acc_result
                      [7U],5,vlTOPp->cfu__DOT__shift_cnt);
            __Vdlyvval__cfu__DOT__acc_result__v40 = 
                ((0U == (IData)(vlTOPp->cfu__DOT__shift_cnt))
                  ? vlTOPp->cfu__DOT__adc_out[8U] : 
                 (vlTOPp->cfu__DOT__acc_result[8U] 
                  + (vlTOPp->cfu__DOT__adc_out[8U] 
                     << (IData)(vlTOPp->cfu__DOT__shift_cnt))));
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v40 = 1U;
            VL_WRITEF("acc_result[          8]: %x <- shift_cnt: %b\n",
                      32,vlTOPp->cfu__DOT__acc_result
                      [8U],5,vlTOPp->cfu__DOT__shift_cnt);
            __Vdlyvval__cfu__DOT__acc_result__v41 = 
                ((0U == (IData)(vlTOPp->cfu__DOT__shift_cnt))
                  ? vlTOPp->cfu__DOT__adc_out[9U] : 
                 (vlTOPp->cfu__DOT__acc_result[9U] 
                  + (vlTOPp->cfu__DOT__adc_out[9U] 
                     << (IData)(vlTOPp->cfu__DOT__shift_cnt))));
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v41 = 1U;
            VL_WRITEF("acc_result[          9]: %x <- shift_cnt: %b\n",
                      32,vlTOPp->cfu__DOT__acc_result
                      [9U],5,vlTOPp->cfu__DOT__shift_cnt);
            __Vdlyvval__cfu__DOT__acc_result__v42 = 
                ((0U == (IData)(vlTOPp->cfu__DOT__shift_cnt))
                  ? vlTOPp->cfu__DOT__adc_out[0xaU]
                  : (vlTOPp->cfu__DOT__acc_result[0xaU] 
                     + (vlTOPp->cfu__DOT__adc_out[0xaU] 
                        << (IData)(vlTOPp->cfu__DOT__shift_cnt))));
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v42 = 1U;
            VL_WRITEF("acc_result[         10]: %x <- shift_cnt: %b\n",
                      32,vlTOPp->cfu__DOT__acc_result
                      [0xaU],5,vlTOPp->cfu__DOT__shift_cnt);
            __Vdlyvval__cfu__DOT__acc_result__v43 = 
                ((0U == (IData)(vlTOPp->cfu__DOT__shift_cnt))
                  ? vlTOPp->cfu__DOT__adc_out[0xbU]
                  : (vlTOPp->cfu__DOT__acc_result[0xbU] 
                     + (vlTOPp->cfu__DOT__adc_out[0xbU] 
                        << (IData)(vlTOPp->cfu__DOT__shift_cnt))));
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v43 = 1U;
            VL_WRITEF("acc_result[         11]: %x <- shift_cnt: %b\n",
                      32,vlTOPp->cfu__DOT__acc_result
                      [0xbU],5,vlTOPp->cfu__DOT__shift_cnt);
            __Vdlyvval__cfu__DOT__acc_result__v44 = 
                ((0U == (IData)(vlTOPp->cfu__DOT__shift_cnt))
                  ? vlTOPp->cfu__DOT__adc_out[0xcU]
                  : (vlTOPp->cfu__DOT__acc_result[0xcU] 
                     + (vlTOPp->cfu__DOT__adc_out[0xcU] 
                        << (IData)(vlTOPp->cfu__DOT__shift_cnt))));
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v44 = 1U;
            VL_WRITEF("acc_result[         12]: %x <- shift_cnt: %b\n",
                      32,vlTOPp->cfu__DOT__acc_result
                      [0xcU],5,vlTOPp->cfu__DOT__shift_cnt);
            __Vdlyvval__cfu__DOT__acc_result__v45 = 
                ((0U == (IData)(vlTOPp->cfu__DOT__shift_cnt))
                  ? vlTOPp->cfu__DOT__adc_out[0xdU]
                  : (vlTOPp->cfu__DOT__acc_result[0xdU] 
                     + (vlTOPp->cfu__DOT__adc_out[0xdU] 
                        << (IData)(vlTOPp->cfu__DOT__shift_cnt))));
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v45 = 1U;
            VL_WRITEF("acc_result[         13]: %x <- shift_cnt: %b\n",
                      32,vlTOPp->cfu__DOT__acc_result
                      [0xdU],5,vlTOPp->cfu__DOT__shift_cnt);
            __Vdlyvval__cfu__DOT__acc_result__v46 = 
                ((0U == (IData)(vlTOPp->cfu__DOT__shift_cnt))
                  ? vlTOPp->cfu__DOT__adc_out[0xeU]
                  : (vlTOPp->cfu__DOT__acc_result[0xeU] 
                     + (vlTOPp->cfu__DOT__adc_out[0xeU] 
                        << (IData)(vlTOPp->cfu__DOT__shift_cnt))));
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v46 = 1U;
            VL_WRITEF("acc_result[         14]: %x <- shift_cnt: %b\n",
                      32,vlTOPp->cfu__DOT__acc_result
                      [0xeU],5,vlTOPp->cfu__DOT__shift_cnt);
            __Vdlyvval__cfu__DOT__acc_result__v47 = 
                ((0U == (IData)(vlTOPp->cfu__DOT__shift_cnt))
                  ? vlTOPp->cfu__DOT__adc_out[0xfU]
                  : (vlTOPp->cfu__DOT__acc_result[0xfU] 
                     + (vlTOPp->cfu__DOT__adc_out[0xfU] 
                        << (IData)(vlTOPp->cfu__DOT__shift_cnt))));
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v47 = 1U;
            VL_WRITEF("acc_result[         15]: %x <- shift_cnt: %b\n",
                      32,vlTOPp->cfu__DOT__acc_result
                      [0xfU],5,vlTOPp->cfu__DOT__shift_cnt);
            __Vdlyvval__cfu__DOT__acc_result__v48 = 
                ((0U == (IData)(vlTOPp->cfu__DOT__shift_cnt))
                  ? vlTOPp->cfu__DOT__adc_out[0x10U]
                  : (vlTOPp->cfu__DOT__acc_result[0x10U] 
                     + (vlTOPp->cfu__DOT__adc_out[0x10U] 
                        << (IData)(vlTOPp->cfu__DOT__shift_cnt))));
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v48 = 1U;
            VL_WRITEF("acc_result[         16]: %x <- shift_cnt: %b\n",
                      32,vlTOPp->cfu__DOT__acc_result
                      [0x10U],5,vlTOPp->cfu__DOT__shift_cnt);
            __Vdlyvval__cfu__DOT__acc_result__v49 = 
                ((0U == (IData)(vlTOPp->cfu__DOT__shift_cnt))
                  ? vlTOPp->cfu__DOT__adc_out[0x11U]
                  : (vlTOPp->cfu__DOT__acc_result[0x11U] 
                     + (vlTOPp->cfu__DOT__adc_out[0x11U] 
                        << (IData)(vlTOPp->cfu__DOT__shift_cnt))));
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v49 = 1U;
            VL_WRITEF("acc_result[         17]: %x <- shift_cnt: %b\n",
                      32,vlTOPp->cfu__DOT__acc_result
                      [0x11U],5,vlTOPp->cfu__DOT__shift_cnt);
            __Vdlyvval__cfu__DOT__acc_result__v50 = 
                ((0U == (IData)(vlTOPp->cfu__DOT__shift_cnt))
                  ? vlTOPp->cfu__DOT__adc_out[0x12U]
                  : (vlTOPp->cfu__DOT__acc_result[0x12U] 
                     + (vlTOPp->cfu__DOT__adc_out[0x12U] 
                        << (IData)(vlTOPp->cfu__DOT__shift_cnt))));
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v50 = 1U;
            VL_WRITEF("acc_result[         18]: %x <- shift_cnt: %b\n",
                      32,vlTOPp->cfu__DOT__acc_result
                      [0x12U],5,vlTOPp->cfu__DOT__shift_cnt);
            __Vdlyvval__cfu__DOT__acc_result__v51 = 
                ((0U == (IData)(vlTOPp->cfu__DOT__shift_cnt))
                  ? vlTOPp->cfu__DOT__adc_out[0x13U]
                  : (vlTOPp->cfu__DOT__acc_result[0x13U] 
                     + (vlTOPp->cfu__DOT__adc_out[0x13U] 
                        << (IData)(vlTOPp->cfu__DOT__shift_cnt))));
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v51 = 1U;
            VL_WRITEF("acc_result[         19]: %x <- shift_cnt: %b\n",
                      32,vlTOPp->cfu__DOT__acc_result
                      [0x13U],5,vlTOPp->cfu__DOT__shift_cnt);
            __Vdlyvval__cfu__DOT__acc_result__v52 = 
                ((0U == (IData)(vlTOPp->cfu__DOT__shift_cnt))
                  ? vlTOPp->cfu__DOT__adc_out[0x14U]
                  : (vlTOPp->cfu__DOT__acc_result[0x14U] 
                     + (vlTOPp->cfu__DOT__adc_out[0x14U] 
                        << (IData)(vlTOPp->cfu__DOT__shift_cnt))));
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v52 = 1U;
            VL_WRITEF("acc_result[         20]: %x <- shift_cnt: %b\n",
                      32,vlTOPp->cfu__DOT__acc_result
                      [0x14U],5,vlTOPp->cfu__DOT__shift_cnt);
            __Vdlyvval__cfu__DOT__acc_result__v53 = 
                ((0U == (IData)(vlTOPp->cfu__DOT__shift_cnt))
                  ? vlTOPp->cfu__DOT__adc_out[0x15U]
                  : (vlTOPp->cfu__DOT__acc_result[0x15U] 
                     + (vlTOPp->cfu__DOT__adc_out[0x15U] 
                        << (IData)(vlTOPp->cfu__DOT__shift_cnt))));
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v53 = 1U;
            VL_WRITEF("acc_result[         21]: %x <- shift_cnt: %b\n",
                      32,vlTOPp->cfu__DOT__acc_result
                      [0x15U],5,vlTOPp->cfu__DOT__shift_cnt);
            __Vdlyvval__cfu__DOT__acc_result__v54 = 
                ((0U == (IData)(vlTOPp->cfu__DOT__shift_cnt))
                  ? vlTOPp->cfu__DOT__adc_out[0x16U]
                  : (vlTOPp->cfu__DOT__acc_result[0x16U] 
                     + (vlTOPp->cfu__DOT__adc_out[0x16U] 
                        << (IData)(vlTOPp->cfu__DOT__shift_cnt))));
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v54 = 1U;
            VL_WRITEF("acc_result[         22]: %x <- shift_cnt: %b\n",
                      32,vlTOPp->cfu__DOT__acc_result
                      [0x16U],5,vlTOPp->cfu__DOT__shift_cnt);
            __Vdlyvval__cfu__DOT__acc_result__v55 = 
                ((0U == (IData)(vlTOPp->cfu__DOT__shift_cnt))
                  ? vlTOPp->cfu__DOT__adc_out[0x17U]
                  : (vlTOPp->cfu__DOT__acc_result[0x17U] 
                     + (vlTOPp->cfu__DOT__adc_out[0x17U] 
                        << (IData)(vlTOPp->cfu__DOT__shift_cnt))));
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v55 = 1U;
            VL_WRITEF("acc_result[         23]: %x <- shift_cnt: %b\n",
                      32,vlTOPp->cfu__DOT__acc_result
                      [0x17U],5,vlTOPp->cfu__DOT__shift_cnt);
            __Vdlyvval__cfu__DOT__acc_result__v56 = 
                ((0U == (IData)(vlTOPp->cfu__DOT__shift_cnt))
                  ? vlTOPp->cfu__DOT__adc_out[0x18U]
                  : (vlTOPp->cfu__DOT__acc_result[0x18U] 
                     + (vlTOPp->cfu__DOT__adc_out[0x18U] 
                        << (IData)(vlTOPp->cfu__DOT__shift_cnt))));
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v56 = 1U;
            VL_WRITEF("acc_result[         24]: %x <- shift_cnt: %b\n",
                      32,vlTOPp->cfu__DOT__acc_result
                      [0x18U],5,vlTOPp->cfu__DOT__shift_cnt);
            __Vdlyvval__cfu__DOT__acc_result__v57 = 
                ((0U == (IData)(vlTOPp->cfu__DOT__shift_cnt))
                  ? vlTOPp->cfu__DOT__adc_out[0x19U]
                  : (vlTOPp->cfu__DOT__acc_result[0x19U] 
                     + (vlTOPp->cfu__DOT__adc_out[0x19U] 
                        << (IData)(vlTOPp->cfu__DOT__shift_cnt))));
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v57 = 1U;
            VL_WRITEF("acc_result[         25]: %x <- shift_cnt: %b\n",
                      32,vlTOPp->cfu__DOT__acc_result
                      [0x19U],5,vlTOPp->cfu__DOT__shift_cnt);
            __Vdlyvval__cfu__DOT__acc_result__v58 = 
                ((0U == (IData)(vlTOPp->cfu__DOT__shift_cnt))
                  ? vlTOPp->cfu__DOT__adc_out[0x1aU]
                  : (vlTOPp->cfu__DOT__acc_result[0x1aU] 
                     + (vlTOPp->cfu__DOT__adc_out[0x1aU] 
                        << (IData)(vlTOPp->cfu__DOT__shift_cnt))));
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v58 = 1U;
            VL_WRITEF("acc_result[         26]: %x <- shift_cnt: %b\n",
                      32,vlTOPp->cfu__DOT__acc_result
                      [0x1aU],5,vlTOPp->cfu__DOT__shift_cnt);
            __Vdlyvval__cfu__DOT__acc_result__v59 = 
                ((0U == (IData)(vlTOPp->cfu__DOT__shift_cnt))
                  ? vlTOPp->cfu__DOT__adc_out[0x1bU]
                  : (vlTOPp->cfu__DOT__acc_result[0x1bU] 
                     + (vlTOPp->cfu__DOT__adc_out[0x1bU] 
                        << (IData)(vlTOPp->cfu__DOT__shift_cnt))));
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v59 = 1U;
            VL_WRITEF("acc_result[         27]: %x <- shift_cnt: %b\n",
                      32,vlTOPp->cfu__DOT__acc_result
                      [0x1bU],5,vlTOPp->cfu__DOT__shift_cnt);
            __Vdlyvval__cfu__DOT__acc_result__v60 = 
                ((0U == (IData)(vlTOPp->cfu__DOT__shift_cnt))
                  ? vlTOPp->cfu__DOT__adc_out[0x1cU]
                  : (vlTOPp->cfu__DOT__acc_result[0x1cU] 
                     + (vlTOPp->cfu__DOT__adc_out[0x1cU] 
                        << (IData)(vlTOPp->cfu__DOT__shift_cnt))));
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v60 = 1U;
            VL_WRITEF("acc_result[         28]: %x <- shift_cnt: %b\n",
                      32,vlTOPp->cfu__DOT__acc_result
                      [0x1cU],5,vlTOPp->cfu__DOT__shift_cnt);
            __Vdlyvval__cfu__DOT__acc_result__v61 = 
                ((0U == (IData)(vlTOPp->cfu__DOT__shift_cnt))
                  ? vlTOPp->cfu__DOT__adc_out[0x1dU]
                  : (vlTOPp->cfu__DOT__acc_result[0x1dU] 
                     + (vlTOPp->cfu__DOT__adc_out[0x1dU] 
                        << (IData)(vlTOPp->cfu__DOT__shift_cnt))));
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v61 = 1U;
            VL_WRITEF("acc_result[         29]: %x <- shift_cnt: %b\n",
                      32,vlTOPp->cfu__DOT__acc_result
                      [0x1dU],5,vlTOPp->cfu__DOT__shift_cnt);
            __Vdlyvval__cfu__DOT__acc_result__v62 = 
                ((0U == (IData)(vlTOPp->cfu__DOT__shift_cnt))
                  ? vlTOPp->cfu__DOT__adc_out[0x1eU]
                  : (vlTOPp->cfu__DOT__acc_result[0x1eU] 
                     + (vlTOPp->cfu__DOT__adc_out[0x1eU] 
                        << (IData)(vlTOPp->cfu__DOT__shift_cnt))));
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v62 = 1U;
            VL_WRITEF("acc_result[         30]: %x <- shift_cnt: %b\n",
                      32,vlTOPp->cfu__DOT__acc_result
                      [0x1eU],5,vlTOPp->cfu__DOT__shift_cnt);
            __Vdlyvval__cfu__DOT__acc_result__v63 = 
                ((0U == (IData)(vlTOPp->cfu__DOT__shift_cnt))
                  ? vlTOPp->cfu__DOT__adc_out[0x1fU]
                  : (vlTOPp->cfu__DOT__acc_result[0x1fU] 
                     + (vlTOPp->cfu__DOT__adc_out[0x1fU] 
                        << (IData)(vlTOPp->cfu__DOT__shift_cnt))));
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v63 = 1U;
            VL_WRITEF("acc_result[         31]: %x <- shift_cnt: %b\n",
                      32,vlTOPp->cfu__DOT__acc_result
                      [0x1fU],5,vlTOPp->cfu__DOT__shift_cnt);
            vlTOPp->__Vdly__cfu__DOT__shift_cnt = (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlTOPp->cfu__DOT__shift_cnt)));
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result = 0U;
            vlTOPp->cfu__DOT__temp_sum_acc_result = 
                vlTOPp->cfu__DOT__acc_result[0U];
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result 
                = vlTOPp->cfu__DOT__temp_sum_acc_result;
            VL_WRITEF("temp_sum_acc_result: %x\n",32,
                      vlTOPp->cfu__DOT__temp_sum_acc_result);
            VL_WRITEF("sum_acc_result: %x\n",32,vlTOPp->cfu__DOT__sum_acc_result);
            vlTOPp->cfu__DOT__temp_sum_acc_result = 
                (vlTOPp->cfu__DOT__temp_sum_acc_result 
                 + vlTOPp->cfu__DOT__acc_result[1U]);
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result 
                = vlTOPp->cfu__DOT__temp_sum_acc_result;
            VL_WRITEF("temp_sum_acc_result: %x\n",32,
                      vlTOPp->cfu__DOT__temp_sum_acc_result);
            VL_WRITEF("sum_acc_result: %x\n",32,vlTOPp->cfu__DOT__sum_acc_result);
            vlTOPp->cfu__DOT__temp_sum_acc_result = 
                (vlTOPp->cfu__DOT__temp_sum_acc_result 
                 + vlTOPp->cfu__DOT__acc_result[2U]);
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result 
                = vlTOPp->cfu__DOT__temp_sum_acc_result;
            VL_WRITEF("temp_sum_acc_result: %x\n",32,
                      vlTOPp->cfu__DOT__temp_sum_acc_result);
            VL_WRITEF("sum_acc_result: %x\n",32,vlTOPp->cfu__DOT__sum_acc_result);
            vlTOPp->cfu__DOT__temp_sum_acc_result = 
                (vlTOPp->cfu__DOT__temp_sum_acc_result 
                 + vlTOPp->cfu__DOT__acc_result[3U]);
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result 
                = vlTOPp->cfu__DOT__temp_sum_acc_result;
            VL_WRITEF("temp_sum_acc_result: %x\n",32,
                      vlTOPp->cfu__DOT__temp_sum_acc_result);
            VL_WRITEF("sum_acc_result: %x\n",32,vlTOPp->cfu__DOT__sum_acc_result);
            vlTOPp->cfu__DOT__temp_sum_acc_result = 
                (vlTOPp->cfu__DOT__temp_sum_acc_result 
                 + vlTOPp->cfu__DOT__acc_result[4U]);
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result 
                = vlTOPp->cfu__DOT__temp_sum_acc_result;
            VL_WRITEF("temp_sum_acc_result: %x\n",32,
                      vlTOPp->cfu__DOT__temp_sum_acc_result);
            VL_WRITEF("sum_acc_result: %x\n",32,vlTOPp->cfu__DOT__sum_acc_result);
            vlTOPp->cfu__DOT__temp_sum_acc_result = 
                (vlTOPp->cfu__DOT__temp_sum_acc_result 
                 + vlTOPp->cfu__DOT__acc_result[5U]);
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result 
                = vlTOPp->cfu__DOT__temp_sum_acc_result;
            VL_WRITEF("temp_sum_acc_result: %x\n",32,
                      vlTOPp->cfu__DOT__temp_sum_acc_result);
            VL_WRITEF("sum_acc_result: %x\n",32,vlTOPp->cfu__DOT__sum_acc_result);
            vlTOPp->cfu__DOT__temp_sum_acc_result = 
                (vlTOPp->cfu__DOT__temp_sum_acc_result 
                 + vlTOPp->cfu__DOT__acc_result[6U]);
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result 
                = vlTOPp->cfu__DOT__temp_sum_acc_result;
            VL_WRITEF("temp_sum_acc_result: %x\n",32,
                      vlTOPp->cfu__DOT__temp_sum_acc_result);
            VL_WRITEF("sum_acc_result: %x\n",32,vlTOPp->cfu__DOT__sum_acc_result);
            vlTOPp->cfu__DOT__temp_sum_acc_result = 
                (vlTOPp->cfu__DOT__temp_sum_acc_result 
                 + vlTOPp->cfu__DOT__acc_result[7U]);
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result 
                = vlTOPp->cfu__DOT__temp_sum_acc_result;
            VL_WRITEF("temp_sum_acc_result: %x\n",32,
                      vlTOPp->cfu__DOT__temp_sum_acc_result);
            VL_WRITEF("sum_acc_result: %x\n",32,vlTOPp->cfu__DOT__sum_acc_result);
            vlTOPp->cfu__DOT__temp_sum_acc_result = 
                (vlTOPp->cfu__DOT__temp_sum_acc_result 
                 + vlTOPp->cfu__DOT__acc_result[8U]);
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result 
                = vlTOPp->cfu__DOT__temp_sum_acc_result;
            VL_WRITEF("temp_sum_acc_result: %x\n",32,
                      vlTOPp->cfu__DOT__temp_sum_acc_result);
            VL_WRITEF("sum_acc_result: %x\n",32,vlTOPp->cfu__DOT__sum_acc_result);
            vlTOPp->cfu__DOT__temp_sum_acc_result = 
                (vlTOPp->cfu__DOT__temp_sum_acc_result 
                 + vlTOPp->cfu__DOT__acc_result[9U]);
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result 
                = vlTOPp->cfu__DOT__temp_sum_acc_result;
            VL_WRITEF("temp_sum_acc_result: %x\n",32,
                      vlTOPp->cfu__DOT__temp_sum_acc_result);
            VL_WRITEF("sum_acc_result: %x\n",32,vlTOPp->cfu__DOT__sum_acc_result);
            vlTOPp->cfu__DOT__temp_sum_acc_result = 
                (vlTOPp->cfu__DOT__temp_sum_acc_result 
                 + vlTOPp->cfu__DOT__acc_result[0xaU]);
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result 
                = vlTOPp->cfu__DOT__temp_sum_acc_result;
            VL_WRITEF("temp_sum_acc_result: %x\n",32,
                      vlTOPp->cfu__DOT__temp_sum_acc_result);
            VL_WRITEF("sum_acc_result: %x\n",32,vlTOPp->cfu__DOT__sum_acc_result);
            vlTOPp->cfu__DOT__temp_sum_acc_result = 
                (vlTOPp->cfu__DOT__temp_sum_acc_result 
                 + vlTOPp->cfu__DOT__acc_result[0xbU]);
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result 
                = vlTOPp->cfu__DOT__temp_sum_acc_result;
            VL_WRITEF("temp_sum_acc_result: %x\n",32,
                      vlTOPp->cfu__DOT__temp_sum_acc_result);
            VL_WRITEF("sum_acc_result: %x\n",32,vlTOPp->cfu__DOT__sum_acc_result);
            vlTOPp->cfu__DOT__temp_sum_acc_result = 
                (vlTOPp->cfu__DOT__temp_sum_acc_result 
                 + vlTOPp->cfu__DOT__acc_result[0xcU]);
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result 
                = vlTOPp->cfu__DOT__temp_sum_acc_result;
            VL_WRITEF("temp_sum_acc_result: %x\n",32,
                      vlTOPp->cfu__DOT__temp_sum_acc_result);
            VL_WRITEF("sum_acc_result: %x\n",32,vlTOPp->cfu__DOT__sum_acc_result);
            vlTOPp->cfu__DOT__temp_sum_acc_result = 
                (vlTOPp->cfu__DOT__temp_sum_acc_result 
                 + vlTOPp->cfu__DOT__acc_result[0xdU]);
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result 
                = vlTOPp->cfu__DOT__temp_sum_acc_result;
            VL_WRITEF("temp_sum_acc_result: %x\n",32,
                      vlTOPp->cfu__DOT__temp_sum_acc_result);
            VL_WRITEF("sum_acc_result: %x\n",32,vlTOPp->cfu__DOT__sum_acc_result);
            vlTOPp->cfu__DOT__temp_sum_acc_result = 
                (vlTOPp->cfu__DOT__temp_sum_acc_result 
                 + vlTOPp->cfu__DOT__acc_result[0xeU]);
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result 
                = vlTOPp->cfu__DOT__temp_sum_acc_result;
            VL_WRITEF("temp_sum_acc_result: %x\n",32,
                      vlTOPp->cfu__DOT__temp_sum_acc_result);
            VL_WRITEF("sum_acc_result: %x\n",32,vlTOPp->cfu__DOT__sum_acc_result);
            vlTOPp->cfu__DOT__temp_sum_acc_result = 
                (vlTOPp->cfu__DOT__temp_sum_acc_result 
                 + vlTOPp->cfu__DOT__acc_result[0xfU]);
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result 
                = vlTOPp->cfu__DOT__temp_sum_acc_result;
            VL_WRITEF("temp_sum_acc_result: %x\n",32,
                      vlTOPp->cfu__DOT__temp_sum_acc_result);
            VL_WRITEF("sum_acc_result: %x\n",32,vlTOPp->cfu__DOT__sum_acc_result);
            vlTOPp->cfu__DOT__temp_sum_acc_result = 
                (vlTOPp->cfu__DOT__temp_sum_acc_result 
                 + vlTOPp->cfu__DOT__acc_result[0x10U]);
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result 
                = vlTOPp->cfu__DOT__temp_sum_acc_result;
            VL_WRITEF("temp_sum_acc_result: %x\n",32,
                      vlTOPp->cfu__DOT__temp_sum_acc_result);
            VL_WRITEF("sum_acc_result: %x\n",32,vlTOPp->cfu__DOT__sum_acc_result);
            vlTOPp->cfu__DOT__temp_sum_acc_result = 
                (vlTOPp->cfu__DOT__temp_sum_acc_result 
                 + vlTOPp->cfu__DOT__acc_result[0x11U]);
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result 
                = vlTOPp->cfu__DOT__temp_sum_acc_result;
            VL_WRITEF("temp_sum_acc_result: %x\n",32,
                      vlTOPp->cfu__DOT__temp_sum_acc_result);
            VL_WRITEF("sum_acc_result: %x\n",32,vlTOPp->cfu__DOT__sum_acc_result);
            vlTOPp->cfu__DOT__temp_sum_acc_result = 
                (vlTOPp->cfu__DOT__temp_sum_acc_result 
                 + vlTOPp->cfu__DOT__acc_result[0x12U]);
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result 
                = vlTOPp->cfu__DOT__temp_sum_acc_result;
            VL_WRITEF("temp_sum_acc_result: %x\n",32,
                      vlTOPp->cfu__DOT__temp_sum_acc_result);
            VL_WRITEF("sum_acc_result: %x\n",32,vlTOPp->cfu__DOT__sum_acc_result);
            vlTOPp->cfu__DOT__temp_sum_acc_result = 
                (vlTOPp->cfu__DOT__temp_sum_acc_result 
                 + vlTOPp->cfu__DOT__acc_result[0x13U]);
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result 
                = vlTOPp->cfu__DOT__temp_sum_acc_result;
            VL_WRITEF("temp_sum_acc_result: %x\n",32,
                      vlTOPp->cfu__DOT__temp_sum_acc_result);
            VL_WRITEF("sum_acc_result: %x\n",32,vlTOPp->cfu__DOT__sum_acc_result);
            vlTOPp->cfu__DOT__temp_sum_acc_result = 
                (vlTOPp->cfu__DOT__temp_sum_acc_result 
                 + vlTOPp->cfu__DOT__acc_result[0x14U]);
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result 
                = vlTOPp->cfu__DOT__temp_sum_acc_result;
            VL_WRITEF("temp_sum_acc_result: %x\n",32,
                      vlTOPp->cfu__DOT__temp_sum_acc_result);
            VL_WRITEF("sum_acc_result: %x\n",32,vlTOPp->cfu__DOT__sum_acc_result);
            vlTOPp->cfu__DOT__temp_sum_acc_result = 
                (vlTOPp->cfu__DOT__temp_sum_acc_result 
                 + vlTOPp->cfu__DOT__acc_result[0x15U]);
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result 
                = vlTOPp->cfu__DOT__temp_sum_acc_result;
            VL_WRITEF("temp_sum_acc_result: %x\n",32,
                      vlTOPp->cfu__DOT__temp_sum_acc_result);
            VL_WRITEF("sum_acc_result: %x\n",32,vlTOPp->cfu__DOT__sum_acc_result);
            vlTOPp->cfu__DOT__temp_sum_acc_result = 
                (vlTOPp->cfu__DOT__temp_sum_acc_result 
                 + vlTOPp->cfu__DOT__acc_result[0x16U]);
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result 
                = vlTOPp->cfu__DOT__temp_sum_acc_result;
            VL_WRITEF("temp_sum_acc_result: %x\n",32,
                      vlTOPp->cfu__DOT__temp_sum_acc_result);
            VL_WRITEF("sum_acc_result: %x\n",32,vlTOPp->cfu__DOT__sum_acc_result);
            vlTOPp->cfu__DOT__temp_sum_acc_result = 
                (vlTOPp->cfu__DOT__temp_sum_acc_result 
                 + vlTOPp->cfu__DOT__acc_result[0x17U]);
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result 
                = vlTOPp->cfu__DOT__temp_sum_acc_result;
            VL_WRITEF("temp_sum_acc_result: %x\n",32,
                      vlTOPp->cfu__DOT__temp_sum_acc_result);
            VL_WRITEF("sum_acc_result: %x\n",32,vlTOPp->cfu__DOT__sum_acc_result);
            vlTOPp->cfu__DOT__temp_sum_acc_result = 
                (vlTOPp->cfu__DOT__temp_sum_acc_result 
                 + vlTOPp->cfu__DOT__acc_result[0x18U]);
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result 
                = vlTOPp->cfu__DOT__temp_sum_acc_result;
            VL_WRITEF("temp_sum_acc_result: %x\n",32,
                      vlTOPp->cfu__DOT__temp_sum_acc_result);
            VL_WRITEF("sum_acc_result: %x\n",32,vlTOPp->cfu__DOT__sum_acc_result);
            vlTOPp->cfu__DOT__temp_sum_acc_result = 
                (vlTOPp->cfu__DOT__temp_sum_acc_result 
                 + vlTOPp->cfu__DOT__acc_result[0x19U]);
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result 
                = vlTOPp->cfu__DOT__temp_sum_acc_result;
            VL_WRITEF("temp_sum_acc_result: %x\n",32,
                      vlTOPp->cfu__DOT__temp_sum_acc_result);
            VL_WRITEF("sum_acc_result: %x\n",32,vlTOPp->cfu__DOT__sum_acc_result);
            vlTOPp->cfu__DOT__temp_sum_acc_result = 
                (vlTOPp->cfu__DOT__temp_sum_acc_result 
                 + vlTOPp->cfu__DOT__acc_result[0x1aU]);
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result 
                = vlTOPp->cfu__DOT__temp_sum_acc_result;
            VL_WRITEF("temp_sum_acc_result: %x\n",32,
                      vlTOPp->cfu__DOT__temp_sum_acc_result);
            VL_WRITEF("sum_acc_result: %x\n",32,vlTOPp->cfu__DOT__sum_acc_result);
            vlTOPp->cfu__DOT__temp_sum_acc_result = 
                (vlTOPp->cfu__DOT__temp_sum_acc_result 
                 + vlTOPp->cfu__DOT__acc_result[0x1bU]);
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result 
                = vlTOPp->cfu__DOT__temp_sum_acc_result;
            VL_WRITEF("temp_sum_acc_result: %x\n",32,
                      vlTOPp->cfu__DOT__temp_sum_acc_result);
            VL_WRITEF("sum_acc_result: %x\n",32,vlTOPp->cfu__DOT__sum_acc_result);
            vlTOPp->cfu__DOT__temp_sum_acc_result = 
                (vlTOPp->cfu__DOT__temp_sum_acc_result 
                 + vlTOPp->cfu__DOT__acc_result[0x1cU]);
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result 
                = vlTOPp->cfu__DOT__temp_sum_acc_result;
            VL_WRITEF("temp_sum_acc_result: %x\n",32,
                      vlTOPp->cfu__DOT__temp_sum_acc_result);
            VL_WRITEF("sum_acc_result: %x\n",32,vlTOPp->cfu__DOT__sum_acc_result);
            vlTOPp->cfu__DOT__temp_sum_acc_result = 
                (vlTOPp->cfu__DOT__temp_sum_acc_result 
                 + vlTOPp->cfu__DOT__acc_result[0x1dU]);
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result 
                = vlTOPp->cfu__DOT__temp_sum_acc_result;
            VL_WRITEF("temp_sum_acc_result: %x\n",32,
                      vlTOPp->cfu__DOT__temp_sum_acc_result);
            VL_WRITEF("sum_acc_result: %x\n",32,vlTOPp->cfu__DOT__sum_acc_result);
            vlTOPp->cfu__DOT__temp_sum_acc_result = 
                (vlTOPp->cfu__DOT__temp_sum_acc_result 
                 + vlTOPp->cfu__DOT__acc_result[0x1eU]);
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result 
                = vlTOPp->cfu__DOT__temp_sum_acc_result;
            VL_WRITEF("temp_sum_acc_result: %x\n",32,
                      vlTOPp->cfu__DOT__temp_sum_acc_result);
            VL_WRITEF("sum_acc_result: %x\n",32,vlTOPp->cfu__DOT__sum_acc_result);
            vlTOPp->cfu__DOT__temp_sum_acc_result = 
                (vlTOPp->cfu__DOT__temp_sum_acc_result 
                 + vlTOPp->cfu__DOT__acc_result[0x1fU]);
            vlTOPp->__Vdly__cfu__DOT__sum_acc_result 
                = vlTOPp->cfu__DOT__temp_sum_acc_result;
            VL_WRITEF("temp_sum_acc_result: %x\n",32,
                      vlTOPp->cfu__DOT__temp_sum_acc_result);
            VL_WRITEF("sum_acc_result: %x\n",32,vlTOPp->cfu__DOT__sum_acc_result);
            vlTOPp->cfu__DOT__mac_out_reg = vlTOPp->cfu__DOT__sum_acc_result;
        } else {
            vlTOPp->cfu__DOT__i = 0x20U;
            if ((1U & (IData)(vlTOPp->cmd_payload_function_id))) {
                __Vdlyvval__cfu__DOT__mem__v0 = vlTOPp->cmd_payload_inputs_0;
                vlTOPp->__Vdlyvset__cfu__DOT__mem__v0 = 1U;
                __Vdlyvdim0__cfu__DOT__mem__v0 = (0xffU 
                                                  & ((IData)(vlTOPp->cmd_payload_function_id) 
                                                     >> 2U));
            } else {
                vlTOPp->cfu__DOT__q_reg = vlTOPp->cfu__DOT__mem
                    [(0xffU & ((IData)(vlTOPp->cmd_payload_function_id) 
                               >> 2U))];
            }
            vlTOPp->__Vdly__cfu__DOT__shift_cnt = 0U;
            vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v64 = 1U;
        }
    }
    vlTOPp->cfu__DOT__shift_cnt = vlTOPp->__Vdly__cfu__DOT__shift_cnt;
    vlTOPp->cfu__DOT__sum_acc_result = vlTOPp->__Vdly__cfu__DOT__sum_acc_result;
    if (vlTOPp->__Vdlyvset__cfu__DOT__mem__v0) {
        vlTOPp->cfu__DOT__mem[__Vdlyvdim0__cfu__DOT__mem__v0] 
            = __Vdlyvval__cfu__DOT__mem__v0;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v0) {
        vlTOPp->cfu__DOT__adc_out[0U] = 0U;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v1) {
        vlTOPp->cfu__DOT__adc_out[1U] = 0U;
        vlTOPp->cfu__DOT__adc_out[2U] = 0U;
        vlTOPp->cfu__DOT__adc_out[3U] = 0U;
        vlTOPp->cfu__DOT__adc_out[4U] = 0U;
        vlTOPp->cfu__DOT__adc_out[5U] = 0U;
        vlTOPp->cfu__DOT__adc_out[6U] = 0U;
        vlTOPp->cfu__DOT__adc_out[7U] = 0U;
        vlTOPp->cfu__DOT__adc_out[8U] = 0U;
        vlTOPp->cfu__DOT__adc_out[9U] = 0U;
        vlTOPp->cfu__DOT__adc_out[0xaU] = 0U;
        vlTOPp->cfu__DOT__adc_out[0xbU] = 0U;
        vlTOPp->cfu__DOT__adc_out[0xcU] = 0U;
        vlTOPp->cfu__DOT__adc_out[0xdU] = 0U;
        vlTOPp->cfu__DOT__adc_out[0xeU] = 0U;
        vlTOPp->cfu__DOT__adc_out[0xfU] = 0U;
        vlTOPp->cfu__DOT__adc_out[0x10U] = 0U;
        vlTOPp->cfu__DOT__adc_out[0x11U] = 0U;
        vlTOPp->cfu__DOT__adc_out[0x12U] = 0U;
        vlTOPp->cfu__DOT__adc_out[0x13U] = 0U;
        vlTOPp->cfu__DOT__adc_out[0x14U] = 0U;
        vlTOPp->cfu__DOT__adc_out[0x15U] = 0U;
        vlTOPp->cfu__DOT__adc_out[0x16U] = 0U;
        vlTOPp->cfu__DOT__adc_out[0x17U] = 0U;
        vlTOPp->cfu__DOT__adc_out[0x18U] = 0U;
        vlTOPp->cfu__DOT__adc_out[0x19U] = 0U;
        vlTOPp->cfu__DOT__adc_out[0x1aU] = 0U;
        vlTOPp->cfu__DOT__adc_out[0x1bU] = 0U;
        vlTOPp->cfu__DOT__adc_out[0x1cU] = 0U;
        vlTOPp->cfu__DOT__adc_out[0x1dU] = 0U;
        vlTOPp->cfu__DOT__adc_out[0x1eU] = 0U;
        vlTOPp->cfu__DOT__adc_out[0x1fU] = 0U;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v0) {
        vlTOPp->cfu__DOT__acc_result[0U] = 0U;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v1) {
        vlTOPp->cfu__DOT__acc_result[1U] = 0U;
        vlTOPp->cfu__DOT__acc_result[2U] = 0U;
        vlTOPp->cfu__DOT__acc_result[3U] = 0U;
        vlTOPp->cfu__DOT__acc_result[4U] = 0U;
        vlTOPp->cfu__DOT__acc_result[5U] = 0U;
        vlTOPp->cfu__DOT__acc_result[6U] = 0U;
        vlTOPp->cfu__DOT__acc_result[7U] = 0U;
        vlTOPp->cfu__DOT__acc_result[8U] = 0U;
        vlTOPp->cfu__DOT__acc_result[9U] = 0U;
        vlTOPp->cfu__DOT__acc_result[0xaU] = 0U;
        vlTOPp->cfu__DOT__acc_result[0xbU] = 0U;
        vlTOPp->cfu__DOT__acc_result[0xcU] = 0U;
        vlTOPp->cfu__DOT__acc_result[0xdU] = 0U;
        vlTOPp->cfu__DOT__acc_result[0xeU] = 0U;
        vlTOPp->cfu__DOT__acc_result[0xfU] = 0U;
        vlTOPp->cfu__DOT__acc_result[0x10U] = 0U;
        vlTOPp->cfu__DOT__acc_result[0x11U] = 0U;
        vlTOPp->cfu__DOT__acc_result[0x12U] = 0U;
        vlTOPp->cfu__DOT__acc_result[0x13U] = 0U;
        vlTOPp->cfu__DOT__acc_result[0x14U] = 0U;
        vlTOPp->cfu__DOT__acc_result[0x15U] = 0U;
        vlTOPp->cfu__DOT__acc_result[0x16U] = 0U;
        vlTOPp->cfu__DOT__acc_result[0x17U] = 0U;
        vlTOPp->cfu__DOT__acc_result[0x18U] = 0U;
        vlTOPp->cfu__DOT__acc_result[0x19U] = 0U;
        vlTOPp->cfu__DOT__acc_result[0x1aU] = 0U;
        vlTOPp->cfu__DOT__acc_result[0x1bU] = 0U;
        vlTOPp->cfu__DOT__acc_result[0x1cU] = 0U;
        vlTOPp->cfu__DOT__acc_result[0x1dU] = 0U;
        vlTOPp->cfu__DOT__acc_result[0x1eU] = 0U;
        vlTOPp->cfu__DOT__acc_result[0x1fU] = 0U;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v32) {
        vlTOPp->cfu__DOT__acc_result[0U] = __Vdlyvval__cfu__DOT__acc_result__v32;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v33) {
        vlTOPp->cfu__DOT__acc_result[1U] = __Vdlyvval__cfu__DOT__acc_result__v33;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v34) {
        vlTOPp->cfu__DOT__acc_result[2U] = __Vdlyvval__cfu__DOT__acc_result__v34;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v35) {
        vlTOPp->cfu__DOT__acc_result[3U] = __Vdlyvval__cfu__DOT__acc_result__v35;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v36) {
        vlTOPp->cfu__DOT__acc_result[4U] = __Vdlyvval__cfu__DOT__acc_result__v36;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v37) {
        vlTOPp->cfu__DOT__acc_result[5U] = __Vdlyvval__cfu__DOT__acc_result__v37;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v38) {
        vlTOPp->cfu__DOT__acc_result[6U] = __Vdlyvval__cfu__DOT__acc_result__v38;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v39) {
        vlTOPp->cfu__DOT__acc_result[7U] = __Vdlyvval__cfu__DOT__acc_result__v39;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v40) {
        vlTOPp->cfu__DOT__acc_result[8U] = __Vdlyvval__cfu__DOT__acc_result__v40;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v41) {
        vlTOPp->cfu__DOT__acc_result[9U] = __Vdlyvval__cfu__DOT__acc_result__v41;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v42) {
        vlTOPp->cfu__DOT__acc_result[0xaU] = __Vdlyvval__cfu__DOT__acc_result__v42;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v43) {
        vlTOPp->cfu__DOT__acc_result[0xbU] = __Vdlyvval__cfu__DOT__acc_result__v43;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v44) {
        vlTOPp->cfu__DOT__acc_result[0xcU] = __Vdlyvval__cfu__DOT__acc_result__v44;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v45) {
        vlTOPp->cfu__DOT__acc_result[0xdU] = __Vdlyvval__cfu__DOT__acc_result__v45;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v46) {
        vlTOPp->cfu__DOT__acc_result[0xeU] = __Vdlyvval__cfu__DOT__acc_result__v46;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v47) {
        vlTOPp->cfu__DOT__acc_result[0xfU] = __Vdlyvval__cfu__DOT__acc_result__v47;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v48) {
        vlTOPp->cfu__DOT__acc_result[0x10U] = __Vdlyvval__cfu__DOT__acc_result__v48;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v49) {
        vlTOPp->cfu__DOT__acc_result[0x11U] = __Vdlyvval__cfu__DOT__acc_result__v49;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v50) {
        vlTOPp->cfu__DOT__acc_result[0x12U] = __Vdlyvval__cfu__DOT__acc_result__v50;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v51) {
        vlTOPp->cfu__DOT__acc_result[0x13U] = __Vdlyvval__cfu__DOT__acc_result__v51;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v52) {
        vlTOPp->cfu__DOT__acc_result[0x14U] = __Vdlyvval__cfu__DOT__acc_result__v52;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v53) {
        vlTOPp->cfu__DOT__acc_result[0x15U] = __Vdlyvval__cfu__DOT__acc_result__v53;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v54) {
        vlTOPp->cfu__DOT__acc_result[0x16U] = __Vdlyvval__cfu__DOT__acc_result__v54;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v55) {
        vlTOPp->cfu__DOT__acc_result[0x17U] = __Vdlyvval__cfu__DOT__acc_result__v55;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v56) {
        vlTOPp->cfu__DOT__acc_result[0x18U] = __Vdlyvval__cfu__DOT__acc_result__v56;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v57) {
        vlTOPp->cfu__DOT__acc_result[0x19U] = __Vdlyvval__cfu__DOT__acc_result__v57;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v58) {
        vlTOPp->cfu__DOT__acc_result[0x1aU] = __Vdlyvval__cfu__DOT__acc_result__v58;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v59) {
        vlTOPp->cfu__DOT__acc_result[0x1bU] = __Vdlyvval__cfu__DOT__acc_result__v59;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v60) {
        vlTOPp->cfu__DOT__acc_result[0x1cU] = __Vdlyvval__cfu__DOT__acc_result__v60;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v61) {
        vlTOPp->cfu__DOT__acc_result[0x1dU] = __Vdlyvval__cfu__DOT__acc_result__v61;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v62) {
        vlTOPp->cfu__DOT__acc_result[0x1eU] = __Vdlyvval__cfu__DOT__acc_result__v62;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v63) {
        vlTOPp->cfu__DOT__acc_result[0x1fU] = __Vdlyvval__cfu__DOT__acc_result__v63;
    }
    if (vlTOPp->__Vdlyvset__cfu__DOT__acc_result__v64) {
        vlTOPp->cfu__DOT__acc_result[0U] = 0U;
        vlTOPp->cfu__DOT__acc_result[1U] = 0U;
        vlTOPp->cfu__DOT__acc_result[2U] = 0U;
        vlTOPp->cfu__DOT__acc_result[3U] = 0U;
        vlTOPp->cfu__DOT__acc_result[4U] = 0U;
        vlTOPp->cfu__DOT__acc_result[5U] = 0U;
        vlTOPp->cfu__DOT__acc_result[6U] = 0U;
        vlTOPp->cfu__DOT__acc_result[7U] = 0U;
        vlTOPp->cfu__DOT__acc_result[8U] = 0U;
        vlTOPp->cfu__DOT__acc_result[9U] = 0U;
        vlTOPp->cfu__DOT__acc_result[0xaU] = 0U;
        vlTOPp->cfu__DOT__acc_result[0xbU] = 0U;
        vlTOPp->cfu__DOT__acc_result[0xcU] = 0U;
        vlTOPp->cfu__DOT__acc_result[0xdU] = 0U;
        vlTOPp->cfu__DOT__acc_result[0xeU] = 0U;
        vlTOPp->cfu__DOT__acc_result[0xfU] = 0U;
        vlTOPp->cfu__DOT__acc_result[0x10U] = 0U;
        vlTOPp->cfu__DOT__acc_result[0x11U] = 0U;
        vlTOPp->cfu__DOT__acc_result[0x12U] = 0U;
        vlTOPp->cfu__DOT__acc_result[0x13U] = 0U;
        vlTOPp->cfu__DOT__acc_result[0x14U] = 0U;
        vlTOPp->cfu__DOT__acc_result[0x15U] = 0U;
        vlTOPp->cfu__DOT__acc_result[0x16U] = 0U;
        vlTOPp->cfu__DOT__acc_result[0x17U] = 0U;
        vlTOPp->cfu__DOT__acc_result[0x18U] = 0U;
        vlTOPp->cfu__DOT__acc_result[0x19U] = 0U;
        vlTOPp->cfu__DOT__acc_result[0x1aU] = 0U;
        vlTOPp->cfu__DOT__acc_result[0x1bU] = 0U;
        vlTOPp->cfu__DOT__acc_result[0x1cU] = 0U;
        vlTOPp->cfu__DOT__acc_result[0x1dU] = 0U;
        vlTOPp->cfu__DOT__acc_result[0x1eU] = 0U;
        vlTOPp->cfu__DOT__acc_result[0x1fU] = 0U;
    }
    vlTOPp->cfu__DOT__adc_out[0U] = 0U;
    vlTOPp->cfu__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->cfu__DOT__j)) {
        vlTOPp->cfu__DOT__adc_out[0U] = (vlTOPp->cfu__DOT__adc_out
                                         [0U] + ((- (IData)(
                                                            (1U 
                                                             & vlTOPp->cfu__DOT__mem
                                                             [
                                                             (0x3ffU 
                                                              & vlTOPp->cfu__DOT__j)]))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (vlTOPp->cfu__DOT__rwl[
                                                                  (0x1fU 
                                                                   & (vlTOPp->cfu__DOT__j 
                                                                      >> 5U))] 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & vlTOPp->cfu__DOT__j)))))));
        vlTOPp->cfu__DOT__j = ((IData)(1U) + vlTOPp->cfu__DOT__j);
    }
    vlTOPp->cfu__DOT__adc_out[1U] = 0U;
    vlTOPp->cfu__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->cfu__DOT__j)) {
        vlTOPp->cfu__DOT__adc_out[1U] = (vlTOPp->cfu__DOT__adc_out
                                         [1U] + ((- (IData)(
                                                            (1U 
                                                             & (vlTOPp->cfu__DOT__mem
                                                                [
                                                                (0x3ffU 
                                                                 & vlTOPp->cfu__DOT__j)] 
                                                                >> 1U)))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (vlTOPp->cfu__DOT__rwl[
                                                                  (0x1fU 
                                                                   & (vlTOPp->cfu__DOT__j 
                                                                      >> 5U))] 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & vlTOPp->cfu__DOT__j)))))));
        vlTOPp->cfu__DOT__j = ((IData)(1U) + vlTOPp->cfu__DOT__j);
    }
    vlTOPp->cfu__DOT__adc_out[2U] = 0U;
    vlTOPp->cfu__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->cfu__DOT__j)) {
        vlTOPp->cfu__DOT__adc_out[2U] = (vlTOPp->cfu__DOT__adc_out
                                         [2U] + ((- (IData)(
                                                            (1U 
                                                             & (vlTOPp->cfu__DOT__mem
                                                                [
                                                                (0x3ffU 
                                                                 & vlTOPp->cfu__DOT__j)] 
                                                                >> 2U)))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (vlTOPp->cfu__DOT__rwl[
                                                                  (0x1fU 
                                                                   & (vlTOPp->cfu__DOT__j 
                                                                      >> 5U))] 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & vlTOPp->cfu__DOT__j)))))));
        vlTOPp->cfu__DOT__j = ((IData)(1U) + vlTOPp->cfu__DOT__j);
    }
    vlTOPp->cfu__DOT__adc_out[3U] = 0U;
    vlTOPp->cfu__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->cfu__DOT__j)) {
        vlTOPp->cfu__DOT__adc_out[3U] = (vlTOPp->cfu__DOT__adc_out
                                         [3U] + ((- (IData)(
                                                            (1U 
                                                             & (vlTOPp->cfu__DOT__mem
                                                                [
                                                                (0x3ffU 
                                                                 & vlTOPp->cfu__DOT__j)] 
                                                                >> 3U)))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (vlTOPp->cfu__DOT__rwl[
                                                                  (0x1fU 
                                                                   & (vlTOPp->cfu__DOT__j 
                                                                      >> 5U))] 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & vlTOPp->cfu__DOT__j)))))));
        vlTOPp->cfu__DOT__j = ((IData)(1U) + vlTOPp->cfu__DOT__j);
    }
    vlTOPp->cfu__DOT__adc_out[4U] = 0U;
    vlTOPp->cfu__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->cfu__DOT__j)) {
        vlTOPp->cfu__DOT__adc_out[4U] = (vlTOPp->cfu__DOT__adc_out
                                         [4U] + ((- (IData)(
                                                            (1U 
                                                             & (vlTOPp->cfu__DOT__mem
                                                                [
                                                                (0x3ffU 
                                                                 & vlTOPp->cfu__DOT__j)] 
                                                                >> 4U)))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (vlTOPp->cfu__DOT__rwl[
                                                                  (0x1fU 
                                                                   & (vlTOPp->cfu__DOT__j 
                                                                      >> 5U))] 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & vlTOPp->cfu__DOT__j)))))));
        vlTOPp->cfu__DOT__j = ((IData)(1U) + vlTOPp->cfu__DOT__j);
    }
    vlTOPp->cfu__DOT__adc_out[5U] = 0U;
    vlTOPp->cfu__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->cfu__DOT__j)) {
        vlTOPp->cfu__DOT__adc_out[5U] = (vlTOPp->cfu__DOT__adc_out
                                         [5U] + ((- (IData)(
                                                            (1U 
                                                             & (vlTOPp->cfu__DOT__mem
                                                                [
                                                                (0x3ffU 
                                                                 & vlTOPp->cfu__DOT__j)] 
                                                                >> 5U)))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (vlTOPp->cfu__DOT__rwl[
                                                                  (0x1fU 
                                                                   & (vlTOPp->cfu__DOT__j 
                                                                      >> 5U))] 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & vlTOPp->cfu__DOT__j)))))));
        vlTOPp->cfu__DOT__j = ((IData)(1U) + vlTOPp->cfu__DOT__j);
    }
    vlTOPp->cfu__DOT__adc_out[6U] = 0U;
    vlTOPp->cfu__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->cfu__DOT__j)) {
        vlTOPp->cfu__DOT__adc_out[6U] = (vlTOPp->cfu__DOT__adc_out
                                         [6U] + ((- (IData)(
                                                            (1U 
                                                             & (vlTOPp->cfu__DOT__mem
                                                                [
                                                                (0x3ffU 
                                                                 & vlTOPp->cfu__DOT__j)] 
                                                                >> 6U)))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (vlTOPp->cfu__DOT__rwl[
                                                                  (0x1fU 
                                                                   & (vlTOPp->cfu__DOT__j 
                                                                      >> 5U))] 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & vlTOPp->cfu__DOT__j)))))));
        vlTOPp->cfu__DOT__j = ((IData)(1U) + vlTOPp->cfu__DOT__j);
    }
    vlTOPp->cfu__DOT__adc_out[7U] = 0U;
    vlTOPp->cfu__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->cfu__DOT__j)) {
        vlTOPp->cfu__DOT__adc_out[7U] = (vlTOPp->cfu__DOT__adc_out
                                         [7U] + ((- (IData)(
                                                            (1U 
                                                             & (vlTOPp->cfu__DOT__mem
                                                                [
                                                                (0x3ffU 
                                                                 & vlTOPp->cfu__DOT__j)] 
                                                                >> 7U)))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (vlTOPp->cfu__DOT__rwl[
                                                                  (0x1fU 
                                                                   & (vlTOPp->cfu__DOT__j 
                                                                      >> 5U))] 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & vlTOPp->cfu__DOT__j)))))));
        vlTOPp->cfu__DOT__j = ((IData)(1U) + vlTOPp->cfu__DOT__j);
    }
    vlTOPp->cfu__DOT__adc_out[8U] = 0U;
    vlTOPp->cfu__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->cfu__DOT__j)) {
        vlTOPp->cfu__DOT__adc_out[8U] = (vlTOPp->cfu__DOT__adc_out
                                         [8U] + ((- (IData)(
                                                            (1U 
                                                             & (vlTOPp->cfu__DOT__mem
                                                                [
                                                                (0x3ffU 
                                                                 & vlTOPp->cfu__DOT__j)] 
                                                                >> 8U)))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (vlTOPp->cfu__DOT__rwl[
                                                                  (0x1fU 
                                                                   & (vlTOPp->cfu__DOT__j 
                                                                      >> 5U))] 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & vlTOPp->cfu__DOT__j)))))));
        vlTOPp->cfu__DOT__j = ((IData)(1U) + vlTOPp->cfu__DOT__j);
    }
    vlTOPp->cfu__DOT__adc_out[9U] = 0U;
    vlTOPp->cfu__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->cfu__DOT__j)) {
        vlTOPp->cfu__DOT__adc_out[9U] = (vlTOPp->cfu__DOT__adc_out
                                         [9U] + ((- (IData)(
                                                            (1U 
                                                             & (vlTOPp->cfu__DOT__mem
                                                                [
                                                                (0x3ffU 
                                                                 & vlTOPp->cfu__DOT__j)] 
                                                                >> 9U)))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (vlTOPp->cfu__DOT__rwl[
                                                                  (0x1fU 
                                                                   & (vlTOPp->cfu__DOT__j 
                                                                      >> 5U))] 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & vlTOPp->cfu__DOT__j)))))));
        vlTOPp->cfu__DOT__j = ((IData)(1U) + vlTOPp->cfu__DOT__j);
    }
    vlTOPp->cfu__DOT__adc_out[0xaU] = 0U;
    vlTOPp->cfu__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->cfu__DOT__j)) {
        vlTOPp->cfu__DOT__adc_out[0xaU] = (vlTOPp->cfu__DOT__adc_out
                                           [0xaU] + 
                                           ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->cfu__DOT__mem
                                                           [
                                                           (0x3ffU 
                                                            & vlTOPp->cfu__DOT__j)] 
                                                           >> 0xaU)))) 
                                            & (- (IData)(
                                                         (1U 
                                                          & (vlTOPp->cfu__DOT__rwl[
                                                             (0x1fU 
                                                              & (vlTOPp->cfu__DOT__j 
                                                                 >> 5U))] 
                                                             >> 
                                                             (0x1fU 
                                                              & vlTOPp->cfu__DOT__j)))))));
        vlTOPp->cfu__DOT__j = ((IData)(1U) + vlTOPp->cfu__DOT__j);
    }
    vlTOPp->cfu__DOT__adc_out[0xbU] = 0U;
    vlTOPp->cfu__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->cfu__DOT__j)) {
        vlTOPp->cfu__DOT__adc_out[0xbU] = (vlTOPp->cfu__DOT__adc_out
                                           [0xbU] + 
                                           ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->cfu__DOT__mem
                                                           [
                                                           (0x3ffU 
                                                            & vlTOPp->cfu__DOT__j)] 
                                                           >> 0xbU)))) 
                                            & (- (IData)(
                                                         (1U 
                                                          & (vlTOPp->cfu__DOT__rwl[
                                                             (0x1fU 
                                                              & (vlTOPp->cfu__DOT__j 
                                                                 >> 5U))] 
                                                             >> 
                                                             (0x1fU 
                                                              & vlTOPp->cfu__DOT__j)))))));
        vlTOPp->cfu__DOT__j = ((IData)(1U) + vlTOPp->cfu__DOT__j);
    }
    vlTOPp->cfu__DOT__adc_out[0xcU] = 0U;
    vlTOPp->cfu__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->cfu__DOT__j)) {
        vlTOPp->cfu__DOT__adc_out[0xcU] = (vlTOPp->cfu__DOT__adc_out
                                           [0xcU] + 
                                           ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->cfu__DOT__mem
                                                           [
                                                           (0x3ffU 
                                                            & vlTOPp->cfu__DOT__j)] 
                                                           >> 0xcU)))) 
                                            & (- (IData)(
                                                         (1U 
                                                          & (vlTOPp->cfu__DOT__rwl[
                                                             (0x1fU 
                                                              & (vlTOPp->cfu__DOT__j 
                                                                 >> 5U))] 
                                                             >> 
                                                             (0x1fU 
                                                              & vlTOPp->cfu__DOT__j)))))));
        vlTOPp->cfu__DOT__j = ((IData)(1U) + vlTOPp->cfu__DOT__j);
    }
    vlTOPp->cfu__DOT__adc_out[0xdU] = 0U;
    vlTOPp->cfu__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->cfu__DOT__j)) {
        vlTOPp->cfu__DOT__adc_out[0xdU] = (vlTOPp->cfu__DOT__adc_out
                                           [0xdU] + 
                                           ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->cfu__DOT__mem
                                                           [
                                                           (0x3ffU 
                                                            & vlTOPp->cfu__DOT__j)] 
                                                           >> 0xdU)))) 
                                            & (- (IData)(
                                                         (1U 
                                                          & (vlTOPp->cfu__DOT__rwl[
                                                             (0x1fU 
                                                              & (vlTOPp->cfu__DOT__j 
                                                                 >> 5U))] 
                                                             >> 
                                                             (0x1fU 
                                                              & vlTOPp->cfu__DOT__j)))))));
        vlTOPp->cfu__DOT__j = ((IData)(1U) + vlTOPp->cfu__DOT__j);
    }
    vlTOPp->cfu__DOT__adc_out[0xeU] = 0U;
    vlTOPp->cfu__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->cfu__DOT__j)) {
        vlTOPp->cfu__DOT__adc_out[0xeU] = (vlTOPp->cfu__DOT__adc_out
                                           [0xeU] + 
                                           ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->cfu__DOT__mem
                                                           [
                                                           (0x3ffU 
                                                            & vlTOPp->cfu__DOT__j)] 
                                                           >> 0xeU)))) 
                                            & (- (IData)(
                                                         (1U 
                                                          & (vlTOPp->cfu__DOT__rwl[
                                                             (0x1fU 
                                                              & (vlTOPp->cfu__DOT__j 
                                                                 >> 5U))] 
                                                             >> 
                                                             (0x1fU 
                                                              & vlTOPp->cfu__DOT__j)))))));
        vlTOPp->cfu__DOT__j = ((IData)(1U) + vlTOPp->cfu__DOT__j);
    }
    vlTOPp->cfu__DOT__adc_out[0xfU] = 0U;
    vlTOPp->cfu__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->cfu__DOT__j)) {
        vlTOPp->cfu__DOT__adc_out[0xfU] = (vlTOPp->cfu__DOT__adc_out
                                           [0xfU] + 
                                           ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->cfu__DOT__mem
                                                           [
                                                           (0x3ffU 
                                                            & vlTOPp->cfu__DOT__j)] 
                                                           >> 0xfU)))) 
                                            & (- (IData)(
                                                         (1U 
                                                          & (vlTOPp->cfu__DOT__rwl[
                                                             (0x1fU 
                                                              & (vlTOPp->cfu__DOT__j 
                                                                 >> 5U))] 
                                                             >> 
                                                             (0x1fU 
                                                              & vlTOPp->cfu__DOT__j)))))));
        vlTOPp->cfu__DOT__j = ((IData)(1U) + vlTOPp->cfu__DOT__j);
    }
    vlTOPp->cfu__DOT__adc_out[0x10U] = 0U;
    vlTOPp->cfu__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->cfu__DOT__j)) {
        vlTOPp->cfu__DOT__adc_out[0x10U] = (vlTOPp->cfu__DOT__adc_out
                                            [0x10U] 
                                            + ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->cfu__DOT__mem
                                                              [
                                                              (0x3ffU 
                                                               & vlTOPp->cfu__DOT__j)] 
                                                              >> 0x10U)))) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->cfu__DOT__rwl[
                                                                (0x1fU 
                                                                 & (vlTOPp->cfu__DOT__j 
                                                                    >> 5U))] 
                                                                >> 
                                                                (0x1fU 
                                                                 & vlTOPp->cfu__DOT__j)))))));
        vlTOPp->cfu__DOT__j = ((IData)(1U) + vlTOPp->cfu__DOT__j);
    }
    vlTOPp->cfu__DOT__adc_out[0x11U] = 0U;
    vlTOPp->cfu__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->cfu__DOT__j)) {
        vlTOPp->cfu__DOT__adc_out[0x11U] = (vlTOPp->cfu__DOT__adc_out
                                            [0x11U] 
                                            + ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->cfu__DOT__mem
                                                              [
                                                              (0x3ffU 
                                                               & vlTOPp->cfu__DOT__j)] 
                                                              >> 0x11U)))) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->cfu__DOT__rwl[
                                                                (0x1fU 
                                                                 & (vlTOPp->cfu__DOT__j 
                                                                    >> 5U))] 
                                                                >> 
                                                                (0x1fU 
                                                                 & vlTOPp->cfu__DOT__j)))))));
        vlTOPp->cfu__DOT__j = ((IData)(1U) + vlTOPp->cfu__DOT__j);
    }
    vlTOPp->cfu__DOT__adc_out[0x12U] = 0U;
    vlTOPp->cfu__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->cfu__DOT__j)) {
        vlTOPp->cfu__DOT__adc_out[0x12U] = (vlTOPp->cfu__DOT__adc_out
                                            [0x12U] 
                                            + ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->cfu__DOT__mem
                                                              [
                                                              (0x3ffU 
                                                               & vlTOPp->cfu__DOT__j)] 
                                                              >> 0x12U)))) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->cfu__DOT__rwl[
                                                                (0x1fU 
                                                                 & (vlTOPp->cfu__DOT__j 
                                                                    >> 5U))] 
                                                                >> 
                                                                (0x1fU 
                                                                 & vlTOPp->cfu__DOT__j)))))));
        vlTOPp->cfu__DOT__j = ((IData)(1U) + vlTOPp->cfu__DOT__j);
    }
    vlTOPp->cfu__DOT__adc_out[0x13U] = 0U;
    vlTOPp->cfu__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->cfu__DOT__j)) {
        vlTOPp->cfu__DOT__adc_out[0x13U] = (vlTOPp->cfu__DOT__adc_out
                                            [0x13U] 
                                            + ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->cfu__DOT__mem
                                                              [
                                                              (0x3ffU 
                                                               & vlTOPp->cfu__DOT__j)] 
                                                              >> 0x13U)))) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->cfu__DOT__rwl[
                                                                (0x1fU 
                                                                 & (vlTOPp->cfu__DOT__j 
                                                                    >> 5U))] 
                                                                >> 
                                                                (0x1fU 
                                                                 & vlTOPp->cfu__DOT__j)))))));
        vlTOPp->cfu__DOT__j = ((IData)(1U) + vlTOPp->cfu__DOT__j);
    }
    vlTOPp->cfu__DOT__adc_out[0x14U] = 0U;
    vlTOPp->cfu__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->cfu__DOT__j)) {
        vlTOPp->cfu__DOT__adc_out[0x14U] = (vlTOPp->cfu__DOT__adc_out
                                            [0x14U] 
                                            + ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->cfu__DOT__mem
                                                              [
                                                              (0x3ffU 
                                                               & vlTOPp->cfu__DOT__j)] 
                                                              >> 0x14U)))) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->cfu__DOT__rwl[
                                                                (0x1fU 
                                                                 & (vlTOPp->cfu__DOT__j 
                                                                    >> 5U))] 
                                                                >> 
                                                                (0x1fU 
                                                                 & vlTOPp->cfu__DOT__j)))))));
        vlTOPp->cfu__DOT__j = ((IData)(1U) + vlTOPp->cfu__DOT__j);
    }
    vlTOPp->cfu__DOT__adc_out[0x15U] = 0U;
    vlTOPp->cfu__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->cfu__DOT__j)) {
        vlTOPp->cfu__DOT__adc_out[0x15U] = (vlTOPp->cfu__DOT__adc_out
                                            [0x15U] 
                                            + ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->cfu__DOT__mem
                                                              [
                                                              (0x3ffU 
                                                               & vlTOPp->cfu__DOT__j)] 
                                                              >> 0x15U)))) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->cfu__DOT__rwl[
                                                                (0x1fU 
                                                                 & (vlTOPp->cfu__DOT__j 
                                                                    >> 5U))] 
                                                                >> 
                                                                (0x1fU 
                                                                 & vlTOPp->cfu__DOT__j)))))));
        vlTOPp->cfu__DOT__j = ((IData)(1U) + vlTOPp->cfu__DOT__j);
    }
    vlTOPp->cfu__DOT__adc_out[0x16U] = 0U;
    vlTOPp->cfu__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->cfu__DOT__j)) {
        vlTOPp->cfu__DOT__adc_out[0x16U] = (vlTOPp->cfu__DOT__adc_out
                                            [0x16U] 
                                            + ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->cfu__DOT__mem
                                                              [
                                                              (0x3ffU 
                                                               & vlTOPp->cfu__DOT__j)] 
                                                              >> 0x16U)))) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->cfu__DOT__rwl[
                                                                (0x1fU 
                                                                 & (vlTOPp->cfu__DOT__j 
                                                                    >> 5U))] 
                                                                >> 
                                                                (0x1fU 
                                                                 & vlTOPp->cfu__DOT__j)))))));
        vlTOPp->cfu__DOT__j = ((IData)(1U) + vlTOPp->cfu__DOT__j);
    }
    vlTOPp->cfu__DOT__adc_out[0x17U] = 0U;
    vlTOPp->cfu__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->cfu__DOT__j)) {
        vlTOPp->cfu__DOT__adc_out[0x17U] = (vlTOPp->cfu__DOT__adc_out
                                            [0x17U] 
                                            + ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->cfu__DOT__mem
                                                              [
                                                              (0x3ffU 
                                                               & vlTOPp->cfu__DOT__j)] 
                                                              >> 0x17U)))) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->cfu__DOT__rwl[
                                                                (0x1fU 
                                                                 & (vlTOPp->cfu__DOT__j 
                                                                    >> 5U))] 
                                                                >> 
                                                                (0x1fU 
                                                                 & vlTOPp->cfu__DOT__j)))))));
        vlTOPp->cfu__DOT__j = ((IData)(1U) + vlTOPp->cfu__DOT__j);
    }
    vlTOPp->cfu__DOT__adc_out[0x18U] = 0U;
    vlTOPp->cfu__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->cfu__DOT__j)) {
        vlTOPp->cfu__DOT__adc_out[0x18U] = (vlTOPp->cfu__DOT__adc_out
                                            [0x18U] 
                                            + ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->cfu__DOT__mem
                                                              [
                                                              (0x3ffU 
                                                               & vlTOPp->cfu__DOT__j)] 
                                                              >> 0x18U)))) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->cfu__DOT__rwl[
                                                                (0x1fU 
                                                                 & (vlTOPp->cfu__DOT__j 
                                                                    >> 5U))] 
                                                                >> 
                                                                (0x1fU 
                                                                 & vlTOPp->cfu__DOT__j)))))));
        vlTOPp->cfu__DOT__j = ((IData)(1U) + vlTOPp->cfu__DOT__j);
    }
    vlTOPp->cfu__DOT__adc_out[0x19U] = 0U;
    vlTOPp->cfu__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->cfu__DOT__j)) {
        vlTOPp->cfu__DOT__adc_out[0x19U] = (vlTOPp->cfu__DOT__adc_out
                                            [0x19U] 
                                            + ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->cfu__DOT__mem
                                                              [
                                                              (0x3ffU 
                                                               & vlTOPp->cfu__DOT__j)] 
                                                              >> 0x19U)))) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->cfu__DOT__rwl[
                                                                (0x1fU 
                                                                 & (vlTOPp->cfu__DOT__j 
                                                                    >> 5U))] 
                                                                >> 
                                                                (0x1fU 
                                                                 & vlTOPp->cfu__DOT__j)))))));
        vlTOPp->cfu__DOT__j = ((IData)(1U) + vlTOPp->cfu__DOT__j);
    }
    vlTOPp->cfu__DOT__adc_out[0x1aU] = 0U;
    vlTOPp->cfu__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->cfu__DOT__j)) {
        vlTOPp->cfu__DOT__adc_out[0x1aU] = (vlTOPp->cfu__DOT__adc_out
                                            [0x1aU] 
                                            + ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->cfu__DOT__mem
                                                              [
                                                              (0x3ffU 
                                                               & vlTOPp->cfu__DOT__j)] 
                                                              >> 0x1aU)))) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->cfu__DOT__rwl[
                                                                (0x1fU 
                                                                 & (vlTOPp->cfu__DOT__j 
                                                                    >> 5U))] 
                                                                >> 
                                                                (0x1fU 
                                                                 & vlTOPp->cfu__DOT__j)))))));
        vlTOPp->cfu__DOT__j = ((IData)(1U) + vlTOPp->cfu__DOT__j);
    }
    vlTOPp->cfu__DOT__adc_out[0x1bU] = 0U;
    vlTOPp->cfu__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->cfu__DOT__j)) {
        vlTOPp->cfu__DOT__adc_out[0x1bU] = (vlTOPp->cfu__DOT__adc_out
                                            [0x1bU] 
                                            + ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->cfu__DOT__mem
                                                              [
                                                              (0x3ffU 
                                                               & vlTOPp->cfu__DOT__j)] 
                                                              >> 0x1bU)))) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->cfu__DOT__rwl[
                                                                (0x1fU 
                                                                 & (vlTOPp->cfu__DOT__j 
                                                                    >> 5U))] 
                                                                >> 
                                                                (0x1fU 
                                                                 & vlTOPp->cfu__DOT__j)))))));
        vlTOPp->cfu__DOT__j = ((IData)(1U) + vlTOPp->cfu__DOT__j);
    }
    vlTOPp->cfu__DOT__adc_out[0x1cU] = 0U;
    vlTOPp->cfu__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->cfu__DOT__j)) {
        vlTOPp->cfu__DOT__adc_out[0x1cU] = (vlTOPp->cfu__DOT__adc_out
                                            [0x1cU] 
                                            + ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->cfu__DOT__mem
                                                              [
                                                              (0x3ffU 
                                                               & vlTOPp->cfu__DOT__j)] 
                                                              >> 0x1cU)))) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->cfu__DOT__rwl[
                                                                (0x1fU 
                                                                 & (vlTOPp->cfu__DOT__j 
                                                                    >> 5U))] 
                                                                >> 
                                                                (0x1fU 
                                                                 & vlTOPp->cfu__DOT__j)))))));
        vlTOPp->cfu__DOT__j = ((IData)(1U) + vlTOPp->cfu__DOT__j);
    }
    vlTOPp->cfu__DOT__adc_out[0x1dU] = 0U;
    vlTOPp->cfu__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->cfu__DOT__j)) {
        vlTOPp->cfu__DOT__adc_out[0x1dU] = (vlTOPp->cfu__DOT__adc_out
                                            [0x1dU] 
                                            + ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->cfu__DOT__mem
                                                              [
                                                              (0x3ffU 
                                                               & vlTOPp->cfu__DOT__j)] 
                                                              >> 0x1dU)))) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->cfu__DOT__rwl[
                                                                (0x1fU 
                                                                 & (vlTOPp->cfu__DOT__j 
                                                                    >> 5U))] 
                                                                >> 
                                                                (0x1fU 
                                                                 & vlTOPp->cfu__DOT__j)))))));
        vlTOPp->cfu__DOT__j = ((IData)(1U) + vlTOPp->cfu__DOT__j);
    }
    vlTOPp->cfu__DOT__adc_out[0x1eU] = 0U;
    vlTOPp->cfu__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->cfu__DOT__j)) {
        vlTOPp->cfu__DOT__adc_out[0x1eU] = (vlTOPp->cfu__DOT__adc_out
                                            [0x1eU] 
                                            + ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->cfu__DOT__mem
                                                              [
                                                              (0x3ffU 
                                                               & vlTOPp->cfu__DOT__j)] 
                                                              >> 0x1eU)))) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->cfu__DOT__rwl[
                                                                (0x1fU 
                                                                 & (vlTOPp->cfu__DOT__j 
                                                                    >> 5U))] 
                                                                >> 
                                                                (0x1fU 
                                                                 & vlTOPp->cfu__DOT__j)))))));
        vlTOPp->cfu__DOT__j = ((IData)(1U) + vlTOPp->cfu__DOT__j);
    }
    vlTOPp->cfu__DOT__adc_out[0x1fU] = 0U;
    vlTOPp->cfu__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->cfu__DOT__j)) {
        vlTOPp->cfu__DOT__adc_out[0x1fU] = (vlTOPp->cfu__DOT__adc_out
                                            [0x1fU] 
                                            + ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->cfu__DOT__mem
                                                              [
                                                              (0x3ffU 
                                                               & vlTOPp->cfu__DOT__j)] 
                                                              >> 0x1fU)))) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->cfu__DOT__rwl[
                                                                (0x1fU 
                                                                 & (vlTOPp->cfu__DOT__j 
                                                                    >> 5U))] 
                                                                >> 
                                                                (0x1fU 
                                                                 & vlTOPp->cfu__DOT__j)))))));
        vlTOPp->cfu__DOT__j = ((IData)(1U) + vlTOPp->cfu__DOT__j);
    }
}

void Vcfu::_eval(Vcfu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcfu::_eval\n"); );
    Vcfu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__3(vlSymsp);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->__Vclklast__TOP__reset)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->__Vclklast__TOP__reset)))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData Vcfu::_change_request(Vcfu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcfu::_change_request\n"); );
    Vcfu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vcfu::_change_request_1(Vcfu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcfu::_change_request_1\n"); );
    Vcfu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vcfu::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcfu::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((cmd_payload_function_id & 0xfc00U))) {
        Verilated::overWidthError("cmd_payload_function_id");}
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
