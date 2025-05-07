// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_bmu.h for the primary calling header

#include "Vtb_bmu__pch.h"
#include "Vtb_bmu___024root.h"

VL_ATTR_COLD void Vtb_bmu___024root___eval_initial__TOP(Vtb_bmu___024root* vlSelf);
VlCoroutine Vtb_bmu___024root___eval_initial__TOP__Vtiming__0(Vtb_bmu___024root* vlSelf);
VlCoroutine Vtb_bmu___024root___eval_initial__TOP__Vtiming__1(Vtb_bmu___024root* vlSelf);
VlCoroutine Vtb_bmu___024root___eval_initial__TOP__Vtiming__2(Vtb_bmu___024root* vlSelf);

void Vtb_bmu___024root___eval_initial(Vtb_bmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmu___024root___eval_initial\n"); );
    // Body
    Vtb_bmu___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_bmu___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_bmu___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_bmu___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_bmu__DOT__i_clk__0 
        = vlSelf->tb_bmu__DOT__i_clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_bmu__DOT__i_rst_n__0 
        = vlSelf->tb_bmu__DOT__i_rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_bmu___024root___eval_initial__TOP__Vtiming__0(Vtb_bmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmu___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_bmu__DOT__i_clk = 0U;
    vlSelf->tb_bmu__DOT__i_rst_n = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_bmu.sv", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_bmu__DOT__i_rst_n = 1U;
    co_await vlSelf->__VtrigSched_hac8841ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_bmu.i_clk)", 
                                                       "tb_bmu.sv", 
                                                       32);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_bmu__DOT__w_idata = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_bmu.sv", 
                                       34);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hac8841ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_bmu.i_clk)", 
                                                       "tb_bmu.sv", 
                                                       36);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_bmu__DOT__w_idata = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_bmu.sv", 
                                       38);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hac8841ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_bmu.i_clk)", 
                                                       "tb_bmu.sv", 
                                                       40);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_bmu__DOT__w_idata = 2U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_bmu.sv", 
                                       42);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hac8841ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_bmu.i_clk)", 
                                                       "tb_bmu.sv", 
                                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_bmu__DOT__w_idata = 3U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_bmu.sv", 
                                       46);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_bmu___024root___eval_initial__TOP__Vtiming__2(Vtb_bmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmu___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb_bmu.sv", 
                                           24);
        vlSelf->tb_bmu__DOT__i_clk = (1U & (~ (IData)(vlSelf->tb_bmu__DOT__i_clk)));
    }
}

void Vtb_bmu___024root___act_comb__TOP__0(Vtb_bmu___024root* vlSelf);

void Vtb_bmu___024root___eval_act(Vtb_bmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmu___024root___eval_act\n"); );
    // Body
    if ((6ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_bmu___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_bmu___024root___nba_sequent__TOP__0(Vtb_bmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmu___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->tb_bmu__DOT__i_rst_n) {
        vlSelf->tb_bmu__DOT__w_valid = 1U;
        vlSelf->tb_bmu__DOT__w_BM_3 = (((IData)((0U 
                                                 == (IData)(vlSelf->tb_bmu__DOT__w_idata))) 
                                        << 1U) | (1U 
                                                  & VL_REDXOR_2(vlSelf->tb_bmu__DOT__w_idata)));
        vlSelf->tb_bmu__DOT__w_BM_2 = (((IData)((1U 
                                                 == (IData)(vlSelf->tb_bmu__DOT__w_idata))) 
                                        << 1U) | (1U 
                                                  & (~ 
                                                     VL_REDXOR_2(vlSelf->tb_bmu__DOT__w_idata))));
        vlSelf->tb_bmu__DOT__w_BM_1 = (((IData)((2U 
                                                 == (IData)(vlSelf->tb_bmu__DOT__w_idata))) 
                                        << 1U) | (1U 
                                                  & (~ 
                                                     VL_REDXOR_2(vlSelf->tb_bmu__DOT__w_idata))));
        vlSelf->tb_bmu__DOT__w_BM_0 = (((IData)((3U 
                                                 == (IData)(vlSelf->tb_bmu__DOT__w_idata))) 
                                        << 1U) | (1U 
                                                  & VL_REDXOR_2(vlSelf->tb_bmu__DOT__w_idata)));
    } else {
        vlSelf->tb_bmu__DOT__w_valid = 0U;
        vlSelf->tb_bmu__DOT__w_BM_3 = 0U;
        vlSelf->tb_bmu__DOT__w_BM_2 = 0U;
        vlSelf->tb_bmu__DOT__w_BM_1 = 0U;
        vlSelf->tb_bmu__DOT__w_BM_0 = 0U;
    }
}

void Vtb_bmu___024root___eval_nba(Vtb_bmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmu___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_bmu___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_bmu___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_bmu___024root___timing_resume(Vtb_bmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmu___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hac8841ee__0.resume("@(posedge tb_bmu.i_clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_bmu___024root___timing_commit(Vtb_bmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmu___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hac8841ee__0.commit("@(posedge tb_bmu.i_clk)");
    }
}

void Vtb_bmu___024root___eval_triggers__act(Vtb_bmu___024root* vlSelf);

bool Vtb_bmu___024root___eval_phase__act(Vtb_bmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmu___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_bmu___024root___eval_triggers__act(vlSelf);
    Vtb_bmu___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_bmu___024root___timing_resume(vlSelf);
        Vtb_bmu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_bmu___024root___eval_phase__nba(Vtb_bmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmu___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_bmu___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_bmu___024root___dump_triggers__nba(Vtb_bmu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_bmu___024root___dump_triggers__act(Vtb_bmu___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_bmu___024root___eval(Vtb_bmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmu___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_bmu___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_bmu.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_bmu___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_bmu.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_bmu___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_bmu___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_bmu___024root___eval_debug_assertions(Vtb_bmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmu___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
