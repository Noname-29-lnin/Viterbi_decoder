// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_bmu.h for the primary calling header

#include "Vtb_bmu__pch.h"
#include "Vtb_bmu__Syms.h"
#include "Vtb_bmu___024root.h"

void Vtb_bmu___024root___ctor_var_reset(Vtb_bmu___024root* vlSelf);

Vtb_bmu___024root::Vtb_bmu___024root(Vtb_bmu__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_bmu___024root___ctor_var_reset(this);
}

void Vtb_bmu___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_bmu___024root::~Vtb_bmu___024root() {
}
