// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxi_pim.h for the primary calling header

#include "verilated.h"

#include "Vaxi_pim__Syms.h"
#include "Vaxi_pim___024root.h"

void Vaxi_pim___024root___ctor_var_reset(Vaxi_pim___024root* vlSelf);

Vaxi_pim___024root::Vaxi_pim___024root(Vaxi_pim__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vaxi_pim___024root___ctor_var_reset(this);
}

void Vaxi_pim___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vaxi_pim___024root::~Vaxi_pim___024root() {
}
