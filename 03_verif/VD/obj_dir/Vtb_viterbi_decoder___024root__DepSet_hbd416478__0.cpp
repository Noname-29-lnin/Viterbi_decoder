// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_viterbi_decoder.h for the primary calling header

#include "Vtb_viterbi_decoder__pch.h"
#include "Vtb_viterbi_decoder___024root.h"

VL_ATTR_COLD void Vtb_viterbi_decoder___024root___eval_initial__TOP(Vtb_viterbi_decoder___024root* vlSelf);
VlCoroutine Vtb_viterbi_decoder___024root___eval_initial__TOP__Vtiming__0(Vtb_viterbi_decoder___024root* vlSelf);
VlCoroutine Vtb_viterbi_decoder___024root___eval_initial__TOP__Vtiming__1(Vtb_viterbi_decoder___024root* vlSelf);

void Vtb_viterbi_decoder___024root___eval_initial(Vtb_viterbi_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root___eval_initial\n"); );
    // Body
    Vtb_viterbi_decoder___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_viterbi_decoder___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_viterbi_decoder___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_viterbi_decoder__DOT__i_clk__0 
        = vlSelf->tb_viterbi_decoder__DOT__i_clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_viterbi_decoder__DOT__i_rst_n__0 
        = vlSelf->tb_viterbi_decoder__DOT__i_rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_viterbi_decoder___024root___eval_initial__TOP__Vtiming__0(Vtb_viterbi_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_viterbi_decoder__DOT__i_rst_n = 0U;
    vlSelf->tb_viterbi_decoder__DOT__w_idata = 0U;
    VL_WRITEF("Starting Viterbi (3,1,2) Decoder Testbench\n=========================================\n");
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "tb_viterbi_decoder.sv", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_viterbi_decoder__DOT__i_rst_n = 1U;
    VL_WRITEF("Reset released at %0t ps\n",64,VL_TIME_UNITED_Q(1000),
              -9);
    co_await vlSelf->__VtrigSched_h021c5932__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_viterbi_decoder.i_clk)", 
                                                       "tb_viterbi_decoder.sv", 
                                                       51);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb_viterbi_decoder.sv", 
                                       52);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_viterbi_decoder__DOT__w_idata = vlSelf->tb_viterbi_decoder__DOT__i_data
        [0U];
    VL_WRITEF("Time = %t \t| i_rst_n = %b \t| i_data = %1# \t| o_data = %1# \t| o_valid = %1# \t|\n\n",
              64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->tb_viterbi_decoder__DOT__i_rst_n),
              2,vlSelf->tb_viterbi_decoder__DOT__w_idata,
              1,(IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__SPMU__DOT__u_state_machine__DOT__w_decision_bit),
              1,vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_valid_SPMU);
    vlSelf->tb_viterbi_decoder__DOT__unnamedblk1__DOT__i = 1U;
    co_await vlSelf->__VtrigSched_h021c5932__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_viterbi_decoder.i_clk)", 
                                                       "tb_viterbi_decoder.sv", 
                                                       51);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb_viterbi_decoder.sv", 
                                       52);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_viterbi_decoder__DOT__w_idata = vlSelf->tb_viterbi_decoder__DOT__i_data
        [1U];
    VL_WRITEF("Time = %t \t| i_rst_n = %b \t| i_data = %1# \t| o_data = %1# \t| o_valid = %1# \t|\n\n",
              64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->tb_viterbi_decoder__DOT__i_rst_n),
              2,vlSelf->tb_viterbi_decoder__DOT__w_idata,
              1,(IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__SPMU__DOT__u_state_machine__DOT__w_decision_bit),
              1,vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_valid_SPMU);
    vlSelf->tb_viterbi_decoder__DOT__unnamedblk1__DOT__i = 2U;
    co_await vlSelf->__VtrigSched_h021c5932__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_viterbi_decoder.i_clk)", 
                                                       "tb_viterbi_decoder.sv", 
                                                       51);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb_viterbi_decoder.sv", 
                                       52);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_viterbi_decoder__DOT__w_idata = vlSelf->tb_viterbi_decoder__DOT__i_data
        [2U];
    VL_WRITEF("Time = %t \t| i_rst_n = %b \t| i_data = %1# \t| o_data = %1# \t| o_valid = %1# \t|\n\n",
              64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->tb_viterbi_decoder__DOT__i_rst_n),
              2,vlSelf->tb_viterbi_decoder__DOT__w_idata,
              1,(IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__SPMU__DOT__u_state_machine__DOT__w_decision_bit),
              1,vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_valid_SPMU);
    vlSelf->tb_viterbi_decoder__DOT__unnamedblk1__DOT__i = 3U;
    co_await vlSelf->__VtrigSched_h021c5932__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_viterbi_decoder.i_clk)", 
                                                       "tb_viterbi_decoder.sv", 
                                                       51);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb_viterbi_decoder.sv", 
                                       52);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_viterbi_decoder__DOT__w_idata = vlSelf->tb_viterbi_decoder__DOT__i_data
        [3U];
    VL_WRITEF("Time = %t \t| i_rst_n = %b \t| i_data = %1# \t| o_data = %1# \t| o_valid = %1# \t|\n\n",
              64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->tb_viterbi_decoder__DOT__i_rst_n),
              2,vlSelf->tb_viterbi_decoder__DOT__w_idata,
              1,(IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__SPMU__DOT__u_state_machine__DOT__w_decision_bit),
              1,vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_valid_SPMU);
    vlSelf->tb_viterbi_decoder__DOT__unnamedblk1__DOT__i = 4U;
    co_await vlSelf->__VtrigSched_h021c5932__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_viterbi_decoder.i_clk)", 
                                                       "tb_viterbi_decoder.sv", 
                                                       51);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb_viterbi_decoder.sv", 
                                       52);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_viterbi_decoder__DOT__w_idata = vlSelf->tb_viterbi_decoder__DOT__i_data
        [4U];
    VL_WRITEF("Time = %t \t| i_rst_n = %b \t| i_data = %1# \t| o_data = %1# \t| o_valid = %1# \t|\n\n",
              64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->tb_viterbi_decoder__DOT__i_rst_n),
              2,vlSelf->tb_viterbi_decoder__DOT__w_idata,
              1,(IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__SPMU__DOT__u_state_machine__DOT__w_decision_bit),
              1,vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_valid_SPMU);
    vlSelf->tb_viterbi_decoder__DOT__unnamedblk1__DOT__i = 5U;
    co_await vlSelf->__VtrigSched_h021c5932__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_viterbi_decoder.i_clk)", 
                                                       "tb_viterbi_decoder.sv", 
                                                       51);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb_viterbi_decoder.sv", 
                                       52);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_viterbi_decoder__DOT__w_idata = vlSelf->tb_viterbi_decoder__DOT__i_data
        [5U];
    VL_WRITEF("Time = %t \t| i_rst_n = %b \t| i_data = %1# \t| o_data = %1# \t| o_valid = %1# \t|\n\n",
              64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->tb_viterbi_decoder__DOT__i_rst_n),
              2,vlSelf->tb_viterbi_decoder__DOT__w_idata,
              1,(IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__SPMU__DOT__u_state_machine__DOT__w_decision_bit),
              1,vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_valid_SPMU);
    vlSelf->tb_viterbi_decoder__DOT__unnamedblk1__DOT__i = 6U;
    co_await vlSelf->__VtrigSched_h021c5932__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_viterbi_decoder.i_clk)", 
                                                       "tb_viterbi_decoder.sv", 
                                                       51);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb_viterbi_decoder.sv", 
                                       52);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_viterbi_decoder__DOT__w_idata = vlSelf->tb_viterbi_decoder__DOT__i_data
        [6U];
    VL_WRITEF("Time = %t \t| i_rst_n = %b \t| i_data = %1# \t| o_data = %1# \t| o_valid = %1# \t|\n\n",
              64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->tb_viterbi_decoder__DOT__i_rst_n),
              2,vlSelf->tb_viterbi_decoder__DOT__w_idata,
              1,(IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__SPMU__DOT__u_state_machine__DOT__w_decision_bit),
              1,vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_valid_SPMU);
    vlSelf->tb_viterbi_decoder__DOT__unnamedblk1__DOT__i = 7U;
    co_await vlSelf->__VtrigSched_h021c5932__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_viterbi_decoder.i_clk)", 
                                                       "tb_viterbi_decoder.sv", 
                                                       51);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb_viterbi_decoder.sv", 
                                       52);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_viterbi_decoder__DOT__w_idata = vlSelf->tb_viterbi_decoder__DOT__i_data
        [7U];
    VL_WRITEF("Time = %t \t| i_rst_n = %b \t| i_data = %1# \t| o_data = %1# \t| o_valid = %1# \t|\n\n",
              64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->tb_viterbi_decoder__DOT__i_rst_n),
              2,vlSelf->tb_viterbi_decoder__DOT__w_idata,
              1,(IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__SPMU__DOT__u_state_machine__DOT__w_decision_bit),
              1,vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_valid_SPMU);
    vlSelf->tb_viterbi_decoder__DOT__unnamedblk1__DOT__i = 8U;
    co_await vlSelf->__VtrigSched_h021c5932__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_viterbi_decoder.i_clk)", 
                                                       "tb_viterbi_decoder.sv", 
                                                       51);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb_viterbi_decoder.sv", 
                                       52);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_viterbi_decoder__DOT__w_idata = vlSelf->tb_viterbi_decoder__DOT__i_data
        [8U];
    VL_WRITEF("Time = %t \t| i_rst_n = %b \t| i_data = %1# \t| o_data = %1# \t| o_valid = %1# \t|\n\n",
              64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->tb_viterbi_decoder__DOT__i_rst_n),
              2,vlSelf->tb_viterbi_decoder__DOT__w_idata,
              1,(IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__SPMU__DOT__u_state_machine__DOT__w_decision_bit),
              1,vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_valid_SPMU);
    vlSelf->tb_viterbi_decoder__DOT__unnamedblk1__DOT__i = 9U;
    co_await vlSelf->__VtrigSched_h021c5932__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_viterbi_decoder.i_clk)", 
                                                       "tb_viterbi_decoder.sv", 
                                                       51);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb_viterbi_decoder.sv", 
                                       52);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_viterbi_decoder__DOT__w_idata = vlSelf->tb_viterbi_decoder__DOT__i_data
        [9U];
    VL_WRITEF("Time = %t \t| i_rst_n = %b \t| i_data = %1# \t| o_data = %1# \t| o_valid = %1# \t|\n\n",
              64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->tb_viterbi_decoder__DOT__i_rst_n),
              2,vlSelf->tb_viterbi_decoder__DOT__w_idata,
              1,(IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__SPMU__DOT__u_state_machine__DOT__w_decision_bit),
              1,vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_valid_SPMU);
    vlSelf->tb_viterbi_decoder__DOT__unnamedblk1__DOT__i = 0xaU;
    co_await vlSelf->__VtrigSched_h021c5932__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_viterbi_decoder.i_clk)", 
                                                       "tb_viterbi_decoder.sv", 
                                                       51);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb_viterbi_decoder.sv", 
                                       52);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_viterbi_decoder__DOT__w_idata = vlSelf->tb_viterbi_decoder__DOT__i_data
        [0xaU];
    VL_WRITEF("Time = %t \t| i_rst_n = %b \t| i_data = %1# \t| o_data = %1# \t| o_valid = %1# \t|\n\n",
              64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->tb_viterbi_decoder__DOT__i_rst_n),
              2,vlSelf->tb_viterbi_decoder__DOT__w_idata,
              1,(IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__SPMU__DOT__u_state_machine__DOT__w_decision_bit),
              1,vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_valid_SPMU);
    vlSelf->tb_viterbi_decoder__DOT__unnamedblk1__DOT__i = 0xbU;
    co_await vlSelf->__VtrigSched_h021c5932__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_viterbi_decoder.i_clk)", 
                                                       "tb_viterbi_decoder.sv", 
                                                       51);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb_viterbi_decoder.sv", 
                                       52);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_viterbi_decoder__DOT__w_idata = 0U;
    VL_WRITEF("Time = %t \t| i_rst_n = %b \t| i_data = %1# \t| o_data = %1# \t| o_valid = %1# \t|\n\n",
              64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->tb_viterbi_decoder__DOT__i_rst_n),
              2,vlSelf->tb_viterbi_decoder__DOT__w_idata,
              1,(IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__SPMU__DOT__u_state_machine__DOT__w_decision_bit),
              1,vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_valid_SPMU);
    vlSelf->tb_viterbi_decoder__DOT__unnamedblk1__DOT__i = 0xcU;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_viterbi_decoder.sv", 
                                       60);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("Testbench completed successfully\n==================================\n");
    VL_FINISH_MT("tb_viterbi_decoder.sv", 63, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_viterbi_decoder___024root___eval_initial__TOP__Vtiming__1(Vtb_viterbi_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb_viterbi_decoder.sv", 
                                           18);
        vlSelf->tb_viterbi_decoder__DOT__i_clk = (1U 
                                                  & (~ (IData)(vlSelf->tb_viterbi_decoder__DOT__i_clk)));
    }
}

void Vtb_viterbi_decoder___024root___eval_act(Vtb_viterbi_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*0:0*/, 16> Vtb_viterbi_decoder__ConstPool__TABLE_hba7c1475_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtb_viterbi_decoder__ConstPool__TABLE_h28881fdb_0;

VL_INLINE_OPT void Vtb_viterbi_decoder___024root___nba_sequent__TOP__0(Vtb_viterbi_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if (vlSelf->tb_viterbi_decoder__DOT__i_rst_n) {
        vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_valid_SPMU = 1U;
        vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_valid_PMU = 1U;
        vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_valid_BMU = 1U;
        vlSelf->tb_viterbi_decoder__DOT__dut__DOT__SPMU__DOT__u_state_machine__DOT__state 
            = vlSelf->tb_viterbi_decoder__DOT__dut__DOT__SPMU__DOT__u_state_machine__DOT__nstate;
        vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_3 
            = (((IData)((0U == (IData)(vlSelf->tb_viterbi_decoder__DOT__w_idata))) 
                << 1U) | (1U & VL_REDXOR_2(vlSelf->tb_viterbi_decoder__DOT__w_idata)));
        vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_2 
            = (((IData)((1U == (IData)(vlSelf->tb_viterbi_decoder__DOT__w_idata))) 
                << 1U) | (1U & (~ VL_REDXOR_2(vlSelf->tb_viterbi_decoder__DOT__w_idata))));
        vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_1 
            = (((IData)((2U == (IData)(vlSelf->tb_viterbi_decoder__DOT__w_idata))) 
                << 1U) | (1U & (~ VL_REDXOR_2(vlSelf->tb_viterbi_decoder__DOT__w_idata))));
        vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_0 
            = (((IData)((3U == (IData)(vlSelf->tb_viterbi_decoder__DOT__w_idata))) 
                << 1U) | (1U & VL_REDXOR_2(vlSelf->tb_viterbi_decoder__DOT__w_idata)));
        vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_3 
            = vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_3;
        vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_2 
            = vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_2;
        vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_1 
            = vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_1;
        vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_0 
            = vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_0;
    } else {
        vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_valid_SPMU = 0U;
        vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_valid_PMU = 0U;
        vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_valid_BMU = 0U;
        vlSelf->tb_viterbi_decoder__DOT__dut__DOT__SPMU__DOT__u_state_machine__DOT__state = 0U;
        vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_3 = 0U;
        vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_2 = 0U;
        vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_1 = 0U;
        vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_0 = 0U;
        vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_3 = 3U;
        vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_2 = 3U;
        vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_1 = 3U;
        vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_0 = 0U;
    }
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113e01e8__0 
        = (1U & (((~ (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_3)) 
                  & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_1)) 
                 | (((~ (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_1)) 
                     & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_3)) 
                    | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_3) 
                        & ((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_1) 
                           >> 1U)) | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_3) 
                                       >> 1U) & (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_1))))))));
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113151f5__0 
        = (1U & (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_3) 
                  >> 1U) | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_1) 
                             >> 1U) | ((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_3) 
                                       & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_1)))));
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113e01e8__0 
        = (1U & (((~ (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_3)) 
                  & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_2)) 
                 | (((~ (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_2)) 
                     & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_3)) 
                    | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_3) 
                        & ((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_2) 
                           >> 1U)) | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_3) 
                                       >> 1U) & (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_2))))))));
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113151f5__0 
        = (1U & (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_3) 
                  >> 1U) | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_2) 
                             >> 1U) | ((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_3) 
                                       & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_2)))));
    vlSelf->__VdfgTmp_h232da30f__0 = (1U & (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_2) 
                                             >> 1U) 
                                            | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_2) 
                                                >> 1U) 
                                               | ((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_2) 
                                                  & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_2)))));
    vlSelf->__VdfgTmp_h56a62d2e__0 = (1U & (((~ (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_2)) 
                                             & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_2)) 
                                            | (((~ (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_2)) 
                                                & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_2)) 
                                               | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_2) 
                                                   & ((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_2) 
                                                      >> 1U)) 
                                                  | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_2) 
                                                      >> 1U) 
                                                     & (IData)(
                                                               (0U 
                                                                != (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_2))))))));
    vlSelf->__VdfgTmp_h4de230f3__0 = (1U & (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_2) 
                                             >> 1U) 
                                            | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_1) 
                                                >> 1U) 
                                               | ((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_2) 
                                                  & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_1)))));
    vlSelf->__VdfgTmp_h9f5944a7__0 = (1U & (((~ (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_2)) 
                                             & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_1)) 
                                            | (((~ (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_1)) 
                                                & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_2)) 
                                               | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_2) 
                                                   & ((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_1) 
                                                      >> 1U)) 
                                                  | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_2) 
                                                      >> 1U) 
                                                     & (IData)(
                                                               (0U 
                                                                != (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_1))))))));
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113e01e8__0 
        = (1U & (((~ (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_1)) 
                  & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_3)) 
                 | (((~ (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_3)) 
                     & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_1)) 
                    | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_1) 
                        & ((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_3) 
                           >> 1U)) | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_1) 
                                       >> 1U) & (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_3))))))));
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113151f5__0 
        = (1U & (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_1) 
                  >> 1U) | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_3) 
                             >> 1U) | ((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_1) 
                                       & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_3)))));
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113e01e8__0 
        = (1U & (((~ (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_1)) 
                  & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_0)) 
                 | (((~ (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_0)) 
                     & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_1)) 
                    | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_1) 
                        & ((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_0) 
                           >> 1U)) | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_1) 
                                       >> 1U) & (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_0))))))));
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113151f5__0 
        = (1U & (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_1) 
                  >> 1U) | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_0) 
                             >> 1U) | ((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_1) 
                                       & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_0)))));
    vlSelf->__VdfgTmp_h9b75ad84__0 = (1U & (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_0) 
                                             >> 1U) 
                                            | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_0) 
                                                >> 1U) 
                                               | ((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_0) 
                                                  & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_0)))));
    vlSelf->__VdfgTmp_h9c4dba9f__0 = (1U & (((~ (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_0)) 
                                             & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_0)) 
                                            | (((~ (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_0)) 
                                                & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_0)) 
                                               | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_0) 
                                                   & ((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_0) 
                                                      >> 1U)) 
                                                  | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_0) 
                                                      >> 1U) 
                                                     & (IData)(
                                                               (0U 
                                                                != (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_0))))))));
    vlSelf->__VdfgTmp_hcc858198__0 = (1U & (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_0) 
                                             >> 1U) 
                                            | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_3) 
                                                >> 1U) 
                                               | ((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_0) 
                                                  & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_3)))));
    vlSelf->__VdfgTmp_h79beb834__0 = (1U & (((~ (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_0)) 
                                             & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_3)) 
                                            | (((~ (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_3)) 
                                                & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_0)) 
                                               | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_0) 
                                                   & ((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_3) 
                                                      >> 1U)) 
                                                  | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_0) 
                                                      >> 1U) 
                                                     & (IData)(
                                                               (0U 
                                                                != (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_3))))))));
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_1 
        = ((1U & (((~ (IData)(vlSelf->__VdfgTmp_h56a62d2e__0)) 
                   & (~ (IData)(vlSelf->__VdfgTmp_h232da30f__0))) 
                  | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113e01e8__0) 
                      & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113151f5__0)) 
                     | (((~ (IData)(vlSelf->__VdfgTmp_h232da30f__0)) 
                         & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113e01e8__0)) 
                        | (((~ (IData)(vlSelf->__VdfgTmp_h232da30f__0)) 
                            | (~ (IData)(vlSelf->__VdfgTmp_h56a62d2e__0))) 
                           & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113151f5__0))))))
            ? (((IData)(vlSelf->__VdfgTmp_h232da30f__0) 
                << 1U) | (IData)(vlSelf->__VdfgTmp_h56a62d2e__0))
            : (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113151f5__0) 
                << 1U) | (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113e01e8__0)));
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_3 
        = ((1U & (((~ (IData)(vlSelf->__VdfgTmp_h9f5944a7__0)) 
                   & (~ (IData)(vlSelf->__VdfgTmp_h4de230f3__0))) 
                  | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113e01e8__0) 
                      & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113151f5__0)) 
                     | (((~ (IData)(vlSelf->__VdfgTmp_h4de230f3__0)) 
                         & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113e01e8__0)) 
                        | (((~ (IData)(vlSelf->__VdfgTmp_h4de230f3__0)) 
                            | (~ (IData)(vlSelf->__VdfgTmp_h9f5944a7__0))) 
                           & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113151f5__0))))))
            ? (((IData)(vlSelf->__VdfgTmp_h4de230f3__0) 
                << 1U) | (IData)(vlSelf->__VdfgTmp_h9f5944a7__0))
            : (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113151f5__0) 
                << 1U) | (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113e01e8__0)));
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_0 
        = ((1U & (((~ (IData)(vlSelf->__VdfgTmp_h9c4dba9f__0)) 
                   & (~ (IData)(vlSelf->__VdfgTmp_h9b75ad84__0))) 
                  | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113e01e8__0) 
                      & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113151f5__0)) 
                     | (((~ (IData)(vlSelf->__VdfgTmp_h9b75ad84__0)) 
                         & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113e01e8__0)) 
                        | (((~ (IData)(vlSelf->__VdfgTmp_h9b75ad84__0)) 
                            | (~ (IData)(vlSelf->__VdfgTmp_h9c4dba9f__0))) 
                           & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113151f5__0))))))
            ? (((IData)(vlSelf->__VdfgTmp_h9b75ad84__0) 
                << 1U) | (IData)(vlSelf->__VdfgTmp_h9c4dba9f__0))
            : (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113151f5__0) 
                << 1U) | (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113e01e8__0)));
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_2 
        = ((1U & (((~ (IData)(vlSelf->__VdfgTmp_h79beb834__0)) 
                   & (~ (IData)(vlSelf->__VdfgTmp_hcc858198__0))) 
                  | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113e01e8__0) 
                      & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113151f5__0)) 
                     | (((~ (IData)(vlSelf->__VdfgTmp_hcc858198__0)) 
                         & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113e01e8__0)) 
                        | (((~ (IData)(vlSelf->__VdfgTmp_hcc858198__0)) 
                            | (~ (IData)(vlSelf->__VdfgTmp_h79beb834__0))) 
                           & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113151f5__0))))))
            ? (((IData)(vlSelf->__VdfgTmp_hcc858198__0) 
                << 1U) | (IData)(vlSelf->__VdfgTmp_h79beb834__0))
            : (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113151f5__0) 
                << 1U) | (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113e01e8__0)));
    __Vtableidx1 = ((8U & (((IData)((0U == (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_0))) 
                            << 3U) | (((IData)((3U 
                                                == (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_2))) 
                                       << 3U) | (((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_0) 
                                                     >> 1U)) 
                                                   & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_2)) 
                                                  << 3U) 
                                                 | (0xfffffff8U 
                                                    & (((IData)(
                                                                (3U 
                                                                 != (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_0))) 
                                                        << 3U) 
                                                       & ((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_2) 
                                                          << 2U))))))) 
                    | ((4U & (((IData)((0U == (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_1))) 
                               << 2U) | (((IData)((3U 
                                                   == (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_3))) 
                                          << 2U) | 
                                         ((((~ ((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_1) 
                                                >> 1U)) 
                                            & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_3)) 
                                           << 2U) | 
                                          (0xfffffffcU 
                                           & (((IData)(
                                                       (3U 
                                                        != (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_1))) 
                                               << 2U) 
                                              & ((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_3) 
                                                 << 1U))))))) 
                       | (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__SPMU__DOT__u_state_machine__DOT__state)));
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__SPMU__DOT__u_state_machine__DOT__w_decision_bit 
        = Vtb_viterbi_decoder__ConstPool__TABLE_hba7c1475_0
        [__Vtableidx1];
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__SPMU__DOT__u_state_machine__DOT__nstate 
        = Vtb_viterbi_decoder__ConstPool__TABLE_h28881fdb_0
        [__Vtableidx1];
}

void Vtb_viterbi_decoder___024root___eval_nba(Vtb_viterbi_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_viterbi_decoder___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void Vtb_viterbi_decoder___024root___timing_resume(Vtb_viterbi_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h021c5932__0.resume("@(posedge tb_viterbi_decoder.i_clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_viterbi_decoder___024root___timing_commit(Vtb_viterbi_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h021c5932__0.commit("@(posedge tb_viterbi_decoder.i_clk)");
    }
}

void Vtb_viterbi_decoder___024root___eval_triggers__act(Vtb_viterbi_decoder___024root* vlSelf);

bool Vtb_viterbi_decoder___024root___eval_phase__act(Vtb_viterbi_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_viterbi_decoder___024root___eval_triggers__act(vlSelf);
    Vtb_viterbi_decoder___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_viterbi_decoder___024root___timing_resume(vlSelf);
        Vtb_viterbi_decoder___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_viterbi_decoder___024root___eval_phase__nba(Vtb_viterbi_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_viterbi_decoder___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_viterbi_decoder___024root___dump_triggers__nba(Vtb_viterbi_decoder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_viterbi_decoder___024root___dump_triggers__act(Vtb_viterbi_decoder___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_viterbi_decoder___024root___eval(Vtb_viterbi_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_viterbi_decoder___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_viterbi_decoder.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_viterbi_decoder___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_viterbi_decoder.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_viterbi_decoder___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_viterbi_decoder___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_viterbi_decoder___024root___eval_debug_assertions(Vtb_viterbi_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
