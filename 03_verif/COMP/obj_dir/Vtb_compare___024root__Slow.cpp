// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_compare.h for the primary calling header

#include "Vtb_compare__pch.h"
#include "Vtb_compare__Syms.h"
#include "Vtb_compare___024root.h"

void Vtb_compare___024root___ctor_var_reset(Vtb_compare___024root* vlSelf);

Vtb_compare___024root::Vtb_compare___024root(Vtb_compare__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_compare___024root___ctor_var_reset(this);
}

void Vtb_compare___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_compare___024root::~Vtb_compare___024root() {
}
