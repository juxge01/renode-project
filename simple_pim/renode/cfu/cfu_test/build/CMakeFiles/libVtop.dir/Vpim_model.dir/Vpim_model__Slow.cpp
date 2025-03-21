// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpim_model.h for the primary calling header

#include "Vpim_model.h"
#include "Vpim_model__Syms.h"

//==========

VL_CTOR_IMP(Vpim_model) {
    Vpim_model__Syms* __restrict vlSymsp = __VlSymsp = new Vpim_model__Syms(this, name());
    Vpim_model* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vpim_model::__Vconfigure(Vpim_model__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vpim_model::~Vpim_model() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vpim_model::_initial__TOP__1(Vpim_model__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpim_model::_initial__TOP__1\n"); );
    Vpim_model* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->rsp_payload_response_ok = 1U;
    vlTOPp->pim_model__DOT__i = 0U;
    while ((0x100U > vlTOPp->pim_model__DOT__i)) {
        vlTOPp->pim_model__DOT__mem[(0xffU & vlTOPp->pim_model__DOT__i)] = 0U;
        vlTOPp->pim_model__DOT__i = ((IData)(1U) + vlTOPp->pim_model__DOT__i);
    }
}

void Vpim_model::_settle__TOP__2(Vpim_model__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpim_model::_settle__TOP__2\n"); );
    Vpim_model* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->pim_model__DOT__i = 0x20U;
    vlTOPp->rsp_valid = vlTOPp->cmd_valid;
    vlTOPp->cmd_ready = vlTOPp->rsp_ready;
    vlTOPp->q = vlTOPp->pim_model__DOT__q_reg;
    vlTOPp->mac_out = vlTOPp->pim_model__DOT__mac_out_reg;
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

void Vpim_model::_eval_initial(Vpim_model__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpim_model::_eval_initial\n"); );
    Vpim_model* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void Vpim_model::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpim_model::final\n"); );
    // Variables
    Vpim_model__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vpim_model* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vpim_model::_eval_settle(Vpim_model__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpim_model::_eval_settle\n"); );
    Vpim_model* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Vpim_model::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpim_model::_ctor_var_reset\n"); );
    // Body
    q = VL_RAND_RESET_I(32);
    mac_out = VL_RAND_RESET_I(32);
    d = VL_RAND_RESET_I(32);
    addr = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(256, rwl);
    w_en = VL_RAND_RESET_I(1);
    p_en = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    cmd_valid = VL_RAND_RESET_I(1);
    cmd_ready = VL_RAND_RESET_I(1);
    rsp_valid = VL_RAND_RESET_I(1);
    rsp_ready = VL_RAND_RESET_I(1);
    rsp_payload_response_ok = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            pim_model__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            pim_model__DOT__adc_out[__Vi0] = VL_RAND_RESET_I(32);
    }}
    pim_model__DOT__shift_cnt = VL_RAND_RESET_I(5);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            pim_model__DOT__acc_result[__Vi0] = VL_RAND_RESET_I(32);
    }}
    pim_model__DOT__sum_acc_result = VL_RAND_RESET_I(32);
    pim_model__DOT__mac_out_reg = VL_RAND_RESET_I(32);
    pim_model__DOT__q_reg = VL_RAND_RESET_I(32);
    pim_model__DOT__i = VL_RAND_RESET_I(32);
    pim_model__DOT__j = VL_RAND_RESET_I(32);
    pim_model__DOT__temp_sum_acc_result = VL_RAND_RESET_I(32);
}
