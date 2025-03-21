// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxi_pim.h for the primary calling header

#include "verilated.h"

#include "Vaxi_pim___024root.h"

VL_ATTR_COLD void Vaxi_pim___024root___initial__TOP__0(Vaxi_pim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_pim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_pim___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->s_axi_bresp = 0U;
    vlSelf->s_axi_rresp = 0U;
    vlSelf->axi_pim__DOT__s_axi_rid_reg = 0U;
    vlSelf->axi_pim__DOT__s_axi_rlast_reg = 0U;
    vlSelf->axi_pim__DOT__s_axi_bid_reg = 0U;
    vlSelf->axi_pim__DOT__read_id_reg = 0U;
    vlSelf->axi_pim__DOT__write_id_reg = 0U;
    vlSelf->axi_pim__DOT__read_size_reg = 0U;
    vlSelf->axi_pim__DOT__read_burst_reg = 0U;
    vlSelf->axi_pim__DOT__write_size_reg = 0U;
    vlSelf->axi_pim__DOT__write_burst_reg = 0U;
    vlSelf->axi_pim__DOT__read_count_reg = 0U;
    vlSelf->axi_pim__DOT__write_count_reg = 0U;
    vlSelf->axi_pim__DOT__s_axi_rvalid_reg = 0U;
    vlSelf->axi_pim__DOT__read_state_reg = 0U;
    vlSelf->axi_pim__DOT__s_axi_bvalid_reg = 0U;
    vlSelf->axi_pim__DOT__write_state_reg = 0U;
    vlSelf->axi_pim__DOT__s_axi_arready_reg = 0U;
    vlSelf->axi_pim__DOT__s_axi_awready_reg = 0U;
    vlSelf->axi_pim__DOT__s_axi_wready_reg = 0U;
    vlSelf->axi_pim__DOT__s_axi_rdata_reg = 0U;
    vlSelf->axi_pim__DOT__read_addr_reg = 0U;
    vlSelf->axi_pim__DOT__write_addr_reg = 0U;
    vlSelf->axi_pim__DOT__i = 0U;
    while (VL_GTS_III(32, 0x4000U, vlSelf->axi_pim__DOT__i)) {
        vlSelf->axi_pim__DOT__j = vlSelf->axi_pim__DOT__i;
        while (VL_LTS_III(32, vlSelf->axi_pim__DOT__j, 
                          ((IData)(0x80U) + vlSelf->axi_pim__DOT__i))) {
            vlSelf->axi_pim__DOT__mem1[(0x3fffU & vlSelf->axi_pim__DOT__j)] = 0U;
            vlSelf->axi_pim__DOT__j = ((IData)(1U) 
                                       + vlSelf->axi_pim__DOT__j);
        }
        vlSelf->axi_pim__DOT__i = ((IData)(0x80U) + vlSelf->axi_pim__DOT__i);
    }
    vlSelf->axi_pim__DOT__i = 0U;
    while (VL_GTS_III(32, 0x4000U, vlSelf->axi_pim__DOT__i)) {
        vlSelf->axi_pim__DOT__j = vlSelf->axi_pim__DOT__i;
        while (VL_LTS_III(32, vlSelf->axi_pim__DOT__j, 
                          ((IData)(0x80U) + vlSelf->axi_pim__DOT__i))) {
            vlSelf->axi_pim__DOT__mem2[(0x3fffU & vlSelf->axi_pim__DOT__j)] = 0U;
            vlSelf->axi_pim__DOT__j = ((IData)(1U) 
                                       + vlSelf->axi_pim__DOT__j);
        }
        vlSelf->axi_pim__DOT__i = ((IData)(0x80U) + vlSelf->axi_pim__DOT__i);
    }
}

VL_ATTR_COLD void Vaxi_pim___024root___settle__TOP__0(Vaxi_pim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_pim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_pim___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->s_axi_rid = vlSelf->axi_pim__DOT__s_axi_rid_reg;
    vlSelf->s_axi_rlast = vlSelf->axi_pim__DOT__s_axi_rlast_reg;
    vlSelf->s_axi_bid = vlSelf->axi_pim__DOT__s_axi_bid_reg;
    vlSelf->s_axi_rvalid = vlSelf->axi_pim__DOT__s_axi_rvalid_reg;
    vlSelf->axi_pim__DOT__s_axi_rvalid_next = ((IData)(vlSelf->axi_pim__DOT__s_axi_rvalid_reg) 
                                               & (~ (IData)(vlSelf->s_axi_rready)));
    vlSelf->axi_pim__DOT__s_axi_rid_next = vlSelf->axi_pim__DOT__s_axi_rid_reg;
    vlSelf->axi_pim__DOT__s_axi_rlast_next = vlSelf->axi_pim__DOT__s_axi_rlast_reg;
    vlSelf->s_axi_bvalid = vlSelf->axi_pim__DOT__s_axi_bvalid_reg;
    vlSelf->s_axi_arready = vlSelf->axi_pim__DOT__s_axi_arready_reg;
    vlSelf->s_axi_awready = vlSelf->axi_pim__DOT__s_axi_awready_reg;
    vlSelf->s_axi_wready = vlSelf->axi_pim__DOT__s_axi_wready_reg;
    vlSelf->s_axi_rdata = vlSelf->axi_pim__DOT__s_axi_rdata_reg;
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

VL_ATTR_COLD void Vaxi_pim___024root___eval_initial(Vaxi_pim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_pim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_pim___024root___eval_initial\n"); );
    // Body
    Vaxi_pim___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vaxi_pim___024root___eval_settle(Vaxi_pim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_pim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_pim___024root___eval_settle\n"); );
    // Body
    Vaxi_pim___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vaxi_pim___024root___final(Vaxi_pim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_pim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_pim___024root___final\n"); );
}

VL_ATTR_COLD void Vaxi_pim___024root___ctor_var_reset(Vaxi_pim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_pim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_pim___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->s_axi_awid = VL_RAND_RESET_I(8);
    vlSelf->s_axi_awaddr = VL_RAND_RESET_I(16);
    vlSelf->s_axi_awlen = VL_RAND_RESET_I(8);
    vlSelf->s_axi_awsize = VL_RAND_RESET_I(3);
    vlSelf->s_axi_awburst = VL_RAND_RESET_I(2);
    vlSelf->s_axi_awlock = VL_RAND_RESET_I(1);
    vlSelf->s_axi_awcache = VL_RAND_RESET_I(4);
    vlSelf->s_axi_awprot = VL_RAND_RESET_I(3);
    vlSelf->s_axi_awvalid = VL_RAND_RESET_I(1);
    vlSelf->s_axi_awready = VL_RAND_RESET_I(1);
    vlSelf->s_axi_wdata = VL_RAND_RESET_I(32);
    vlSelf->s_axi_wstrb = VL_RAND_RESET_I(4);
    vlSelf->s_axi_wlast = VL_RAND_RESET_I(1);
    vlSelf->s_axi_wvalid = VL_RAND_RESET_I(1);
    vlSelf->s_axi_wready = VL_RAND_RESET_I(1);
    vlSelf->s_axi_bid = VL_RAND_RESET_I(8);
    vlSelf->s_axi_bresp = VL_RAND_RESET_I(2);
    vlSelf->s_axi_bvalid = VL_RAND_RESET_I(1);
    vlSelf->s_axi_bready = VL_RAND_RESET_I(1);
    vlSelf->s_axi_arid = VL_RAND_RESET_I(8);
    vlSelf->s_axi_araddr = VL_RAND_RESET_I(16);
    vlSelf->s_axi_arlen = VL_RAND_RESET_I(8);
    vlSelf->s_axi_arsize = VL_RAND_RESET_I(3);
    vlSelf->s_axi_arburst = VL_RAND_RESET_I(2);
    vlSelf->s_axi_arlock = VL_RAND_RESET_I(1);
    vlSelf->s_axi_arcache = VL_RAND_RESET_I(4);
    vlSelf->s_axi_arprot = VL_RAND_RESET_I(3);
    vlSelf->s_axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->s_axi_arready = VL_RAND_RESET_I(1);
    vlSelf->s_axi_rid = VL_RAND_RESET_I(8);
    vlSelf->s_axi_rdata = VL_RAND_RESET_I(32);
    vlSelf->s_axi_rresp = VL_RAND_RESET_I(2);
    vlSelf->s_axi_rlast = VL_RAND_RESET_I(1);
    vlSelf->s_axi_rvalid = VL_RAND_RESET_I(1);
    vlSelf->s_axi_rready = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->axi_pim__DOT__adc_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->axi_pim__DOT__shift_cnt = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->axi_pim__DOT__acc_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->axi_pim__DOT__sum_acc_result = VL_RAND_RESET_I(32);
    vlSelf->axi_pim__DOT__mac_out_reg = VL_RAND_RESET_I(32);
    vlSelf->axi_pim__DOT__temp_sum_acc_result = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(16384, vlSelf->axi_pim__DOT__rwl);
    vlSelf->axi_pim__DOT__read_state_reg = VL_RAND_RESET_I(1);
    vlSelf->axi_pim__DOT__read_state_next = VL_RAND_RESET_I(1);
    vlSelf->axi_pim__DOT__write_state_reg = VL_RAND_RESET_I(2);
    vlSelf->axi_pim__DOT__write_state_next = VL_RAND_RESET_I(2);
    vlSelf->axi_pim__DOT__mem_wr_en = VL_RAND_RESET_I(1);
    vlSelf->axi_pim__DOT__read_id_reg = VL_RAND_RESET_I(8);
    vlSelf->axi_pim__DOT__read_id_next = VL_RAND_RESET_I(8);
    vlSelf->axi_pim__DOT__read_addr_reg = VL_RAND_RESET_I(16);
    vlSelf->axi_pim__DOT__read_addr_next = VL_RAND_RESET_I(16);
    vlSelf->axi_pim__DOT__read_count_reg = VL_RAND_RESET_I(8);
    vlSelf->axi_pim__DOT__read_count_next = VL_RAND_RESET_I(8);
    vlSelf->axi_pim__DOT__read_size_reg = VL_RAND_RESET_I(3);
    vlSelf->axi_pim__DOT__read_size_next = VL_RAND_RESET_I(3);
    vlSelf->axi_pim__DOT__read_burst_reg = VL_RAND_RESET_I(2);
    vlSelf->axi_pim__DOT__read_burst_next = VL_RAND_RESET_I(2);
    vlSelf->axi_pim__DOT__write_id_reg = VL_RAND_RESET_I(8);
    vlSelf->axi_pim__DOT__write_id_next = VL_RAND_RESET_I(8);
    vlSelf->axi_pim__DOT__write_addr_reg = VL_RAND_RESET_I(16);
    vlSelf->axi_pim__DOT__write_addr_next = VL_RAND_RESET_I(16);
    vlSelf->axi_pim__DOT__write_count_reg = VL_RAND_RESET_I(8);
    vlSelf->axi_pim__DOT__write_count_next = VL_RAND_RESET_I(8);
    vlSelf->axi_pim__DOT__write_size_reg = VL_RAND_RESET_I(3);
    vlSelf->axi_pim__DOT__write_size_next = VL_RAND_RESET_I(3);
    vlSelf->axi_pim__DOT__write_burst_reg = VL_RAND_RESET_I(2);
    vlSelf->axi_pim__DOT__write_burst_next = VL_RAND_RESET_I(2);
    vlSelf->axi_pim__DOT__s_axi_awready_reg = VL_RAND_RESET_I(1);
    vlSelf->axi_pim__DOT__s_axi_awready_next = VL_RAND_RESET_I(1);
    vlSelf->axi_pim__DOT__s_axi_wready_reg = VL_RAND_RESET_I(1);
    vlSelf->axi_pim__DOT__s_axi_wready_next = VL_RAND_RESET_I(1);
    vlSelf->axi_pim__DOT__s_axi_bid_reg = VL_RAND_RESET_I(8);
    vlSelf->axi_pim__DOT__s_axi_bid_next = VL_RAND_RESET_I(8);
    vlSelf->axi_pim__DOT__s_axi_bvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->axi_pim__DOT__s_axi_bvalid_next = VL_RAND_RESET_I(1);
    vlSelf->axi_pim__DOT__s_axi_arready_reg = VL_RAND_RESET_I(1);
    vlSelf->axi_pim__DOT__s_axi_arready_next = VL_RAND_RESET_I(1);
    vlSelf->axi_pim__DOT__s_axi_rid_reg = VL_RAND_RESET_I(8);
    vlSelf->axi_pim__DOT__s_axi_rid_next = VL_RAND_RESET_I(8);
    vlSelf->axi_pim__DOT__s_axi_rdata_reg = VL_RAND_RESET_I(32);
    vlSelf->axi_pim__DOT__s_axi_rlast_reg = VL_RAND_RESET_I(1);
    vlSelf->axi_pim__DOT__s_axi_rlast_next = VL_RAND_RESET_I(1);
    vlSelf->axi_pim__DOT__s_axi_rvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->axi_pim__DOT__s_axi_rvalid_next = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<16384; ++__Vi0) {
        vlSelf->axi_pim__DOT__mem1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<16384; ++__Vi0) {
        vlSelf->axi_pim__DOT__mem2[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->axi_pim__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->axi_pim__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->axi_pim__DOT__p_en = VL_RAND_RESET_I(1);
    vlSelf->axi_pim__DOT__s_axi_awid_reg = VL_RAND_RESET_I(8);
    vlSelf->axi_pim__DOT__s_axi_arid_reg = VL_RAND_RESET_I(8);
    vlSelf->axi_pim__DOT__count = VL_RAND_RESET_I(32);
}
