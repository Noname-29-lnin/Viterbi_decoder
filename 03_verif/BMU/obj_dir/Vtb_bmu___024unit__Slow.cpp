// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_bmu.h for the primary calling header

#include "Vtb_bmu__pch.h"
#include "Vtb_bmu__Syms.h"
#include "Vtb_bmu___024unit.h"

void Vtb_bmu___024unit___ctor_var_reset(Vtb_bmu___024unit* vlSelf);

Vtb_bmu___024unit::Vtb_bmu___024unit(Vtb_bmu__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_bmu___024unit___ctor_var_reset(this);
}

void Vtb_bmu___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_bmu___024unit::~Vtb_bmu___024unit() {
}
