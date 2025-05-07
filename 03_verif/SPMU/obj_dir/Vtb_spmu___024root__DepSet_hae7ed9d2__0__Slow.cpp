// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_spmu.h for the primary calling header

#include "Vtb_spmu__pch.h"
#include "Vtb_spmu___024root.h"

VL_ATTR_COLD void Vtb_spmu___024root___eval_static(Vtb_spmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spmu___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_spmu___024root___eval_final(Vtb_spmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spmu___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_spmu___024root___dump_triggers__stl(Vtb_spmu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_spmu___024root___eval_phase__stl(Vtb_spmu___024root* vlSelf);

VL_ATTR_COLD void Vtb_spmu___024root___eval_settle(Vtb_spmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spmu___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_spmu___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_spmu.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_spmu___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_spmu___024root___dump_triggers__stl(Vtb_spmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spmu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtb_spmu___024root___act_comb__TOP__0(Vtb_spmu___024root* vlSelf);

VL_ATTR_COLD void Vtb_spmu___024root___eval_stl(Vtb_spmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spmu___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_spmu___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_spmu___024root___eval_triggers__stl(Vtb_spmu___024root* vlSelf);

VL_ATTR_COLD bool Vtb_spmu___024root___eval_phase__stl(Vtb_spmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spmu___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_spmu___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_spmu___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_spmu___024root___dump_triggers__act(Vtb_spmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spmu___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_spmu.i_clk or negedge tb_spmu.i_rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_spmu.i_clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_spmu___024root___dump_triggers__nba(Vtb_spmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spmu___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_spmu.i_clk or negedge tb_spmu.i_rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_spmu.i_clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_spmu___024root___ctor_var_reset(Vtb_spmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spmu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_spmu__DOT__i_clk = VL_RAND_RESET_I(1);
    vlSelf->tb_spmu__DOT__i_rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_spmu__DOT__w_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_spmu__DOT__w_PM_0 = VL_RAND_RESET_I(2);
    vlSelf->tb_spmu__DOT__w_PM_1 = VL_RAND_RESET_I(2);
    vlSelf->tb_spmu__DOT__w_PM_2 = VL_RAND_RESET_I(2);
    vlSelf->tb_spmu__DOT__w_PM_3 = VL_RAND_RESET_I(2);
    vlSelf->tb_spmu__DOT__spmu__DOT__u_state_machine__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb_spmu__DOT__spmu__DOT__u_state_machine__DOT__nstate = VL_RAND_RESET_I(2);
    vlSelf->tb_spmu__DOT__spmu__DOT__u_state_machine__DOT__w_decision_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_spmu__DOT__i_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_spmu__DOT__i_rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
