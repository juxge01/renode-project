// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxi_sa_16x16.h for the primary calling header

#include "verilated.h"

#include "Vaxi_sa_16x16__Syms.h"
#include "Vaxi_sa_16x16_group_processing_element_32.h"

void Vaxi_sa_16x16_group_processing_element_32___ctor_var_reset(Vaxi_sa_16x16_group_processing_element_32* vlSelf);

Vaxi_sa_16x16_group_processing_element_32::Vaxi_sa_16x16_group_processing_element_32(Vaxi_sa_16x16__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vaxi_sa_16x16_group_processing_element_32___ctor_var_reset(this);
}

void Vaxi_sa_16x16_group_processing_element_32::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vaxi_sa_16x16_group_processing_element_32::~Vaxi_sa_16x16_group_processing_element_32() {
}
