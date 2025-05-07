// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_spmu.h for the primary calling header

#include "Vtb_spmu__pch.h"
#include "Vtb_spmu___024root.h"

VL_ATTR_COLD void Vtb_spmu___024root___eval_initial__TOP(Vtb_spmu___024root* vlSelf);
VlCoroutine Vtb_spmu___024root___eval_initial__TOP__Vtiming__0(Vtb_spmu___024root* vlSelf);
VlCoroutine Vtb_spmu___024root___eval_initial__TOP__Vtiming__1(Vtb_spmu___024root* vlSelf);

void Vtb_spmu___024root___eval_initial(Vtb_spmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spmu___024root___eval_initial\n"); );
    // Body
    Vtb_spmu___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_spmu___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_spmu___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_spmu__DOT__i_clk__0 
        = vlSelf->tb_spmu__DOT__i_clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_spmu__DOT__i_rst_n__0 
        = vlSelf->tb_spmu__DOT__i_rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_spmu___024root___eval_initial__TOP__Vtiming__0(Vtb_spmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spmu___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_spmu__DOT__i_clk = 0U;
    vlSelf->tb_spmu__DOT__i_rst_n = 0U;
    co_await vlSelf->__VtrigSched_h6b6052f2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_spmu.i_clk)", 
                                                       "tb_spmu.sv", 
                                                       30);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spmu__DOT__i_rst_n = 1U;
    VL_WRITEF("Time = %t \t| i_rst_n = %1# \t| o_decision = %1# \t| o_valid = %1# \t|\nPM_0 = %1# \t| PM_1 = %1# \t| PM_2 = %1# \t| PM_3 = %1# \t| \n=========================================\n",
              64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->tb_spmu__DOT__i_rst_n),
              1,vlSelf->tb_spmu__DOT__spmu__DOT__u_state_machine__DOT__w_decision_bit,
              1,(IData)(vlSelf->tb_spmu__DOT__w_valid),
              2,vlSelf->tb_spmu__DOT__w_PM_0,2,(IData)(vlSelf->tb_spmu__DOT__w_PM_1),
              2,vlSelf->tb_spmu__DOT__w_PM_2,2,(IData)(vlSelf->tb_spmu__DOT__w_PM_3));
    co_await vlSelf->__VtrigSched_h6b6052f2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_spmu.i_clk)", 
                                                       "tb_spmu.sv", 
                                                       38);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spmu__DOT__w_PM_0 = 0U;
    vlSelf->tb_spmu__DOT__w_PM_1 = 1U;
    vlSelf->tb_spmu__DOT__w_PM_2 = 2U;
    vlSelf->tb_spmu__DOT__w_PM_3 = 3U;
    VL_WRITEF("case 1: S0 -> S0\nTime = %t \t| i_rst_n = %1# \t| o_decision = %1# \t| o_valid = %1# \t|\nPM_0 = %1# \t| PM_1 = %1# \t| PM_2 = %1# \t| PM_3 = %1# \t| \n=========================================\n",
              64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->tb_spmu__DOT__i_rst_n),
              1,vlSelf->tb_spmu__DOT__spmu__DOT__u_state_machine__DOT__w_decision_bit,
              1,(IData)(vlSelf->tb_spmu__DOT__w_valid),
              2,vlSelf->tb_spmu__DOT__w_PM_0,2,(IData)(vlSelf->tb_spmu__DOT__w_PM_1),
              2,vlSelf->tb_spmu__DOT__w_PM_2,2,(IData)(vlSelf->tb_spmu__DOT__w_PM_3));
    co_await vlSelf->__VtrigSched_h6b6052f2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_spmu.i_clk)", 
                                                       "tb_spmu.sv", 
                                                       50);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spmu__DOT__w_PM_0 = 3U;
    vlSelf->tb_spmu__DOT__w_PM_1 = 2U;
    vlSelf->tb_spmu__DOT__w_PM_2 = 1U;
    vlSelf->tb_spmu__DOT__w_PM_3 = 0U;
    VL_WRITEF("case 2: S0 -> S2\nTime = %t \t| i_rst_n = %1# \t| o_decision = %1# \t| o_valid = %1# \t|\nPM_0 = %1# \t| PM_1 = %1# \t| PM_2 = %1# \t| PM_3 = %1# \t| \n=========================================\n",
              64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->tb_spmu__DOT__i_rst_n),
              1,vlSelf->tb_spmu__DOT__spmu__DOT__u_state_machine__DOT__w_decision_bit,
              1,(IData)(vlSelf->tb_spmu__DOT__w_valid),
              2,vlSelf->tb_spmu__DOT__w_PM_0,2,(IData)(vlSelf->tb_spmu__DOT__w_PM_1),
              2,vlSelf->tb_spmu__DOT__w_PM_2,2,(IData)(vlSelf->tb_spmu__DOT__w_PM_3));
    co_await vlSelf->__VtrigSched_h6b6052f2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_spmu.i_clk)", 
                                                       "tb_spmu.sv", 
                                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spmu__DOT__w_PM_0 = 2U;
    vlSelf->tb_spmu__DOT__w_PM_1 = 0U;
    vlSelf->tb_spmu__DOT__w_PM_2 = 0U;
    vlSelf->tb_spmu__DOT__w_PM_3 = 1U;
    VL_WRITEF("case 3: S2 -> S1\nTime = %t \t| i_rst_n = %1# \t| o_decision = %1# \t| o_valid = %1# \t|\nPM_0 = %1# \t| PM_1 = %1# \t| PM_2 = %1# \t| PM_3 = %1# \t| \n=========================================\n",
              64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->tb_spmu__DOT__i_rst_n),
              1,vlSelf->tb_spmu__DOT__spmu__DOT__u_state_machine__DOT__w_decision_bit,
              1,(IData)(vlSelf->tb_spmu__DOT__w_valid),
              2,vlSelf->tb_spmu__DOT__w_PM_0,2,(IData)(vlSelf->tb_spmu__DOT__w_PM_1),
              2,vlSelf->tb_spmu__DOT__w_PM_2,2,(IData)(vlSelf->tb_spmu__DOT__w_PM_3));
    co_await vlSelf->__VtrigSched_h6b6052f2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_spmu.i_clk)", 
                                                       "tb_spmu.sv", 
                                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spmu__DOT__w_PM_0 = 3U;
    vlSelf->tb_spmu__DOT__w_PM_1 = 0U;
    vlSelf->tb_spmu__DOT__w_PM_2 = 1U;
    vlSelf->tb_spmu__DOT__w_PM_3 = 2U;
    VL_WRITEF("case 4: S1 -> S2\nTime = %t \t| i_rst_n = %1# \t| o_decision = %1# \t| o_valid = %1# \t|\nPM_0 = %1# \t| PM_1 = %1# \t| PM_2 = %1# \t| PM_3 = %1# \t| \n=========================================\n",
              64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->tb_spmu__DOT__i_rst_n),
              1,vlSelf->tb_spmu__DOT__spmu__DOT__u_state_machine__DOT__w_decision_bit,
              1,(IData)(vlSelf->tb_spmu__DOT__w_valid),
              2,vlSelf->tb_spmu__DOT__w_PM_0,2,(IData)(vlSelf->tb_spmu__DOT__w_PM_1),
              2,vlSelf->tb_spmu__DOT__w_PM_2,2,(IData)(vlSelf->tb_spmu__DOT__w_PM_3));
    co_await vlSelf->__VtrigSched_h6b6052f2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_spmu.i_clk)", 
                                                       "tb_spmu.sv", 
                                                       86);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spmu__DOT__w_PM_0 = 1U;
    vlSelf->tb_spmu__DOT__w_PM_1 = 2U;
    vlSelf->tb_spmu__DOT__w_PM_2 = 3U;
    vlSelf->tb_spmu__DOT__w_PM_3 = 0U;
    VL_WRITEF("case 5: S2 -> S3\nTime = %t \t| i_rst_n = %1# \t| o_decision = %1# \t| o_valid = %1# \t|\nPM_0 = %1# \t| PM_1 = %1# \t| PM_2 = %1# \t| PM_3 = %1# \t| \n=========================================\n",
              64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->tb_spmu__DOT__i_rst_n),
              1,vlSelf->tb_spmu__DOT__spmu__DOT__u_state_machine__DOT__w_decision_bit,
              1,(IData)(vlSelf->tb_spmu__DOT__w_valid),
              2,vlSelf->tb_spmu__DOT__w_PM_0,2,(IData)(vlSelf->tb_spmu__DOT__w_PM_1),
              2,vlSelf->tb_spmu__DOT__w_PM_2,2,(IData)(vlSelf->tb_spmu__DOT__w_PM_3));
    co_await vlSelf->__VtrigSched_h6b6052f2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_spmu.i_clk)", 
                                                       "tb_spmu.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_spmu__DOT__w_PM_0 = 3U;
    vlSelf->tb_spmu__DOT__w_PM_1 = 2U;
    vlSelf->tb_spmu__DOT__w_PM_2 = 1U;
    vlSelf->tb_spmu__DOT__w_PM_3 = 0U;
    VL_WRITEF("case 6: S3 -> S3\nTime = %t \t| i_rst_n = %1# \t| o_decision = %1# \t| o_valid = %1# \t|\nPM_0 = %1# \t| PM_1 = %1# \t| PM_2 = %1# \t| PM_3 = %1# \t| \n=========================================\n",
              64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->tb_spmu__DOT__i_rst_n),
              1,vlSelf->tb_spmu__DOT__spmu__DOT__u_state_machine__DOT__w_decision_bit,
              1,(IData)(vlSelf->tb_spmu__DOT__w_valid),
              2,vlSelf->tb_spmu__DOT__w_PM_0,2,(IData)(vlSelf->tb_spmu__DOT__w_PM_1),
              2,vlSelf->tb_spmu__DOT__w_PM_2,2,(IData)(vlSelf->tb_spmu__DOT__w_PM_3));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_spmu.sv", 
                                       110);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("Testbench completed successfully\n==================================\n");
    VL_FINISH_MT("tb_spmu.sv", 113, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_spmu___024root___eval_initial__TOP__Vtiming__1(Vtb_spmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spmu___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb_spmu.sv", 
                                           19);
        vlSelf->tb_spmu__DOT__i_clk = (1U & (~ (IData)(vlSelf->tb_spmu__DOT__i_clk)));
    }
}

extern const VlUnpacked<CData/*0:0*/, 16> Vtb_spmu__ConstPool__TABLE_hba7c1475_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtb_spmu__ConstPool__TABLE_h28881fdb_0;

VL_INLINE_OPT void Vtb_spmu___024root___act_comb__TOP__0(Vtb_spmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spmu___024root___act_comb__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = ((8U & (((IData)((0U == (IData)(vlSelf->tb_spmu__DOT__w_PM_0))) 
                            << 3U) | (((IData)((3U 
                                                == (IData)(vlSelf->tb_spmu__DOT__w_PM_2))) 
                                       << 3U) | (((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_spmu__DOT__w_PM_0) 
                                                     >> 1U)) 
                                                   & (IData)(vlSelf->tb_spmu__DOT__w_PM_2)) 
                                                  << 3U) 
                                                 | (0xfffffff8U 
                                                    & (((IData)(
                                                                (3U 
                                                                 != (IData)(vlSelf->tb_spmu__DOT__w_PM_0))) 
                                                        << 3U) 
                                                       & ((IData)(vlSelf->tb_spmu__DOT__w_PM_2) 
                                                          << 2U))))))) 
                    | ((4U & (((IData)((0U == (IData)(vlSelf->tb_spmu__DOT__w_PM_1))) 
                               << 2U) | (((IData)((3U 
                                                   == (IData)(vlSelf->tb_spmu__DOT__w_PM_3))) 
                                          << 2U) | 
                                         ((((~ ((IData)(vlSelf->tb_spmu__DOT__w_PM_1) 
                                                >> 1U)) 
                                            & (IData)(vlSelf->tb_spmu__DOT__w_PM_3)) 
                                           << 2U) | 
                                          (0xfffffffcU 
                                           & (((IData)(
                                                       (3U 
                                                        != (IData)(vlSelf->tb_spmu__DOT__w_PM_1))) 
                                               << 2U) 
                                              & ((IData)(vlSelf->tb_spmu__DOT__w_PM_3) 
                                                 << 1U))))))) 
                       | (IData)(vlSelf->tb_spmu__DOT__spmu__DOT__u_state_machine__DOT__state)));
    vlSelf->tb_spmu__DOT__spmu__DOT__u_state_machine__DOT__w_decision_bit 
        = Vtb_spmu__ConstPool__TABLE_hba7c1475_0[__Vtableidx1];
    vlSelf->tb_spmu__DOT__spmu__DOT__u_state_machine__DOT__nstate 
        = Vtb_spmu__ConstPool__TABLE_h28881fdb_0[__Vtableidx1];
}

void Vtb_spmu___024root___eval_act(Vtb_spmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spmu___024root___eval_act\n"); );
    // Body
    if ((6ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_spmu___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_spmu___024root___nba_sequent__TOP__0(Vtb_spmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spmu___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->tb_spmu__DOT__i_rst_n) {
        vlSelf->tb_spmu__DOT__w_valid = 1U;
        vlSelf->tb_spmu__DOT__spmu__DOT__u_state_machine__DOT__state 
            = vlSelf->tb_spmu__DOT__spmu__DOT__u_state_machine__DOT__nstate;
    } else {
        vlSelf->tb_spmu__DOT__w_valid = 0U;
        vlSelf->tb_spmu__DOT__spmu__DOT__u_state_machine__DOT__state = 0U;
    }
}

void Vtb_spmu___024root___eval_nba(Vtb_spmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spmu___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_spmu___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_spmu___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_spmu___024root___timing_resume(Vtb_spmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spmu___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h6b6052f2__0.resume("@(posedge tb_spmu.i_clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_spmu___024root___timing_commit(Vtb_spmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spmu___024root___timing_commit\n"); );
    // Body
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h6b6052f2__0.commit("@(posedge tb_spmu.i_clk)");
    }
}

void Vtb_spmu___024root___eval_triggers__act(Vtb_spmu___024root* vlSelf);

bool Vtb_spmu___024root___eval_phase__act(Vtb_spmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spmu___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_spmu___024root___eval_triggers__act(vlSelf);
    Vtb_spmu___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_spmu___024root___timing_resume(vlSelf);
        Vtb_spmu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_spmu___024root___eval_phase__nba(Vtb_spmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spmu___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_spmu___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_spmu___024root___dump_triggers__nba(Vtb_spmu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_spmu___024root___dump_triggers__act(Vtb_spmu___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_spmu___024root___eval(Vtb_spmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spmu___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_spmu___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_spmu.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_spmu___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_spmu.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_spmu___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_spmu___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_spmu___024root___eval_debug_assertions(Vtb_spmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spmu___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
