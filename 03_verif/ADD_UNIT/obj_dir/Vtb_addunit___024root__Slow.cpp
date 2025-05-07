// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_addunit.h for the primary calling header

#include "Vtb_addunit__pch.h"
#include "Vtb_addunit__Syms.h"
#include "Vtb_addunit___024root.h"

void Vtb_addunit___024root___ctor_var_reset(Vtb_addunit___024root* vlSelf);

Vtb_addunit___024root::Vtb_addunit___024root(Vtb_addunit__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_addunit___024root___ctor_var_reset(this);
}

void Vtb_addunit___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_addunit___024root::~Vtb_addunit___024root() {
}
