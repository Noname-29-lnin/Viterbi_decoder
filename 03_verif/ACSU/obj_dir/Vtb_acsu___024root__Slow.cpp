// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_acsu.h for the primary calling header

#include "Vtb_acsu__pch.h"
#include "Vtb_acsu__Syms.h"
#include "Vtb_acsu___024root.h"

void Vtb_acsu___024root___ctor_var_reset(Vtb_acsu___024root* vlSelf);

Vtb_acsu___024root::Vtb_acsu___024root(Vtb_acsu__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_acsu___024root___ctor_var_reset(this);
}

void Vtb_acsu___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_acsu___024root::~Vtb_acsu___024root() {
}
