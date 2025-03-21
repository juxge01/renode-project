// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcfu.h for the primary calling header

#include "Vcfu.h"
#include "Vcfu__Syms.h"

//==========

VL_CTOR_IMP(Vcfu) {
    Vcfu__Syms* __restrict vlSymsp = __VlSymsp = new Vcfu__Syms(this, name());
    Vcfu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vcfu::__Vconfigure(Vcfu__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vcfu::~Vcfu() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vcfu::_initial__TOP__1(Vcfu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcfu::_initial__TOP__1\n"); );
    Vcfu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->rsp_payload_response_ok = 1U;
    vlTOPp->cfu__DOT__i = 0U;
    while ((0x400U > vlTOPp->cfu__DOT__i)) {
        vlTOPp->cfu__DOT__mem[(0x3ffU & vlTOPp->cfu__DOT__i)] = 0U;
        vlTOPp->cfu__DOT__i = ((IData)(1U) + vlTOPp->cfu__DOT__i);
    }
}

void Vcfu::_settle__TOP__2(Vcfu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcfu::_settle__TOP__2\n"); );
    Vcfu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cfu__DOT__i = 0x20U;
    vlTOPp->rsp_valid = vlTOPp->cmd_valid;
    vlTOPp->cmd_ready = vlTOPp->rsp_ready;
    vlTOPp->rsp_payload_outputs_0 = vlTOPp->cfu__DOT__out;
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

void Vcfu::_eval_initial(Vcfu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcfu::_eval_initial\n"); );
    Vcfu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void Vcfu::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcfu::final\n"); );
    // Variables
    Vcfu__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vcfu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vcfu::_eval_settle(Vcfu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcfu::_eval_settle\n"); );
    Vcfu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Vcfu::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcfu::_ctor_var_reset\n"); );
    // Body
    cmd_payload_inputs_1 = VL_RAND_RESET_I(32);
    cmd_payload_inputs_0 = VL_RAND_RESET_I(32);
    cmd_payload_function_id = VL_RAND_RESET_I(10);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    cmd_valid = VL_RAND_RESET_I(1);
    cmd_ready = VL_RAND_RESET_I(1);
    rsp_valid = VL_RAND_RESET_I(1);
    rsp_ready = VL_RAND_RESET_I(1);
    rsp_payload_response_ok = VL_RAND_RESET_I(1);
    rsp_payload_outputs_0 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
            cfu__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            cfu__DOT__adc_out[__Vi0] = VL_RAND_RESET_I(32);
    }}
    cfu__DOT__shift_cnt = VL_RAND_RESET_I(5);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            cfu__DOT__acc_result[__Vi0] = VL_RAND_RESET_I(32);
    }}
    cfu__DOT__sum_acc_result = VL_RAND_RESET_I(32);
    cfu__DOT__mac_out_reg = VL_RAND_RESET_I(32);
    cfu__DOT__q_reg = VL_RAND_RESET_I(32);
    cfu__DOT__out = VL_RAND_RESET_I(32);
    cfu__DOT__i = VL_RAND_RESET_I(32);
    cfu__DOT__j = VL_RAND_RESET_I(32);
    cfu__DOT__temp_sum_acc_result = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(1024, cfu__DOT__rwl);
    __Vdly__cfu__DOT__shift_cnt = VL_RAND_RESET_I(5);
    __Vdlyvset__cfu__DOT__acc_result__v0 = 0;
    __Vdly__cfu__DOT__sum_acc_result = VL_RAND_RESET_I(32);
    __Vdlyvset__cfu__DOT__acc_result__v1 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v32 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v33 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v34 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v35 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v36 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v37 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v38 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v39 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v40 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v41 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v42 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v43 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v44 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v45 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v46 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v47 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v48 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v49 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v50 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v51 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v52 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v53 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v54 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v55 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v56 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v57 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v58 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v59 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v60 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v61 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v62 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v63 = 0;
    __Vdlyvset__cfu__DOT__mem__v0 = 0;
    __Vdlyvset__cfu__DOT__acc_result__v64 = 0;
}
