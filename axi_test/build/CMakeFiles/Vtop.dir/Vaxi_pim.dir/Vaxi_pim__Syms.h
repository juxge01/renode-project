// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VAXI_PIM__SYMS_H_
#define VERILATED_VAXI_PIM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vaxi_pim.h"

// INCLUDE MODULE CLASSES
#include "Vaxi_pim___024root.h"

// SYMS CLASS (contains all model state)
class Vaxi_pim__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vaxi_pim* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vaxi_pim___024root             TOP;

    // CONSTRUCTORS
    Vaxi_pim__Syms(VerilatedContext* contextp, const char* namep, Vaxi_pim* modelp);
    ~Vaxi_pim__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
