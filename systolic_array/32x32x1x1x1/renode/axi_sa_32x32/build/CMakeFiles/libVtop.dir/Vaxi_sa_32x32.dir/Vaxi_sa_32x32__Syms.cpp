// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vaxi_sa_32x32__Syms.h"
#include "Vaxi_sa_32x32.h"
#include "Vaxi_sa_32x32___024root.h"

// FUNCTIONS
Vaxi_sa_32x32__Syms::~Vaxi_sa_32x32__Syms()
{
}

Vaxi_sa_32x32__Syms::Vaxi_sa_32x32__Syms(VerilatedContext* contextp, const char* namep, Vaxi_sa_32x32* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
