// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_bmu.h for the primary calling header

#include "Vtb_bmu__pch.h"
#include "Vtb_bmu___024unit.h"

VL_ATTR_COLD void Vtb_bmu___024unit___ctor_var_reset(Vtb_bmu___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_bmu___024unit___ctor_var_reset\n"); );
    // Body
    vlSelf->__VmonitorNum = VL_RAND_RESET_Q(64);
    vlSelf->__VmonitorOff = VL_RAND_RESET_I(1);
}
