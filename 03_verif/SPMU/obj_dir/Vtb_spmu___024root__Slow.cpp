// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_spmu.h for the primary calling header

#include "Vtb_spmu__pch.h"
#include "Vtb_spmu__Syms.h"
#include "Vtb_spmu___024root.h"

void Vtb_spmu___024root___ctor_var_reset(Vtb_spmu___024root* vlSelf);

Vtb_spmu___024root::Vtb_spmu___024root(Vtb_spmu__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_spmu___024root___ctor_var_reset(this);
}

void Vtb_spmu___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_spmu___024root::~Vtb_spmu___024root() {
}
