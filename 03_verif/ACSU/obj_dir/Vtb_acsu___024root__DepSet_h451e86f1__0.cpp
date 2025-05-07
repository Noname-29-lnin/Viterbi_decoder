// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_acsu.h for the primary calling header

#include "Vtb_acsu__pch.h"
#include "Vtb_acsu___024root.h"

VL_ATTR_COLD void Vtb_acsu___024root___eval_initial__TOP(Vtb_acsu___024root* vlSelf);
VlCoroutine Vtb_acsu___024root___eval_initial__TOP__Vtiming__0(Vtb_acsu___024root* vlSelf);
VlCoroutine Vtb_acsu___024root___eval_initial__TOP__Vtiming__1(Vtb_acsu___024root* vlSelf);
VlCoroutine Vtb_acsu___024root___eval_initial__TOP__Vtiming__2(Vtb_acsu___024root* vlSelf);

void Vtb_acsu___024root___eval_initial(Vtb_acsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_acsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_acsu___024root___eval_initial\n"); );
    // Body
    Vtb_acsu___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_acsu___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_acsu___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_acsu___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_acsu__DOT__i_clk__0 
        = vlSelf->tb_acsu__DOT__i_clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_acsu__DOT__i_rst_n__0 
        = vlSelf->tb_acsu__DOT__i_rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_acsu___024root___eval_initial__TOP__Vtiming__0(Vtb_acsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_acsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_acsu___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    VL_WRITEF("Starting Add_unit testbench...\n============================\n");
    vlSelf->tb_acsu__DOT__i_clk = 0U;
    vlSelf->tb_acsu__DOT__i_rst_n = 0U;
    VL_WRITEF("Time: %0t | i_rst_n = 0 | \n| i_BM_0: %b | i_BM_1: %b | i_BM_2: %b | i_BM_3: %b |\n| i_iPM_0: %b | i_iPM_1: %b | i_iPM_2: %b | i_iPM_3: %b |\n| o_oPM_0: %b | o_oPM_1: %b | o_oPM_2: %b | o_oPM_3: %b\n",
              64,VL_TIME_UNITED_Q(1000),-9,2,(IData)(vlSelf->tb_acsu__DOT__w_BM_0),
              2,vlSelf->tb_acsu__DOT__w_BM_1,2,(IData)(vlSelf->tb_acsu__DOT__w_BM_2),
              2,vlSelf->tb_acsu__DOT__w_BM_3,2,(IData)(vlSelf->tb_acsu__DOT__w_iPM_0),
              2,vlSelf->tb_acsu__DOT__w_iPM_1,2,(IData)(vlSelf->tb_acsu__DOT__w_iPM_2),
              2,vlSelf->tb_acsu__DOT__w_iPM_3,2,(IData)(vlSelf->tb_acsu__DOT__w_oPM_0),
              2,vlSelf->tb_acsu__DOT__w_oPM_1,2,(IData)(vlSelf->tb_acsu__DOT__w_oPM_2),
              2,vlSelf->tb_acsu__DOT__w_oPM_3);
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_acsu.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_acsu__DOT__i_rst_n = 1U;
    VL_WRITEF("Time: %0t | i_rst_n = %b | \n| i_BM_0: %b | i_BM_1: %b | i_BM_2: %b | i_BM_3: %b |\n| i_iPM_0: %b | i_iPM_1: %b | i_iPM_2: %b | i_iPM_3: %b |\n| o_oPM_0: %b | o_oPM_1: %b | o_oPM_2: %b | o_oPM_3: %b\n",
              64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->tb_acsu__DOT__i_rst_n),
              2,vlSelf->tb_acsu__DOT__w_BM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_BM_1),
              2,vlSelf->tb_acsu__DOT__w_BM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_BM_3),
              2,vlSelf->tb_acsu__DOT__w_iPM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_iPM_1),
              2,vlSelf->tb_acsu__DOT__w_iPM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_iPM_3),
              2,vlSelf->tb_acsu__DOT__w_oPM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_oPM_1),
              2,vlSelf->tb_acsu__DOT__w_oPM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_oPM_3));
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_acsu.sv", 
                                       61);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hd7248c79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_acsu.i_clk)", 
                                                       "tb_acsu.sv", 
                                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_acsu__DOT__w_BM_0 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_1 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_2 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_3 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    VL_WRITEF("Time: %0t | i_rst_n = %b | \n| i_BM_0: %b | i_BM_1: %b | i_BM_2: %b | i_BM_3: %b |\n| i_iPM_0: %b | i_iPM_1: %b | i_iPM_2: %b | i_iPM_3: %b |\n| o_oPM_0: %b | o_oPM_1: %b | o_oPM_2: %b | o_oPM_3: %b\n",
              64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->tb_acsu__DOT__i_rst_n),
              2,vlSelf->tb_acsu__DOT__w_BM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_BM_1),
              2,vlSelf->tb_acsu__DOT__w_BM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_BM_3),
              2,vlSelf->tb_acsu__DOT__w_iPM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_iPM_1),
              2,vlSelf->tb_acsu__DOT__w_iPM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_iPM_3),
              2,vlSelf->tb_acsu__DOT__w_oPM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_oPM_1),
              2,vlSelf->tb_acsu__DOT__w_oPM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_oPM_3));
    vlSelf->tb_acsu__DOT__unnamedblk1__DOT__i = 1U;
    co_await vlSelf->__VtrigSched_hd7248c79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_acsu.i_clk)", 
                                                       "tb_acsu.sv", 
                                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_acsu__DOT__w_BM_0 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_1 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_2 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_3 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    VL_WRITEF("Time: %0t | i_rst_n = %b | \n| i_BM_0: %b | i_BM_1: %b | i_BM_2: %b | i_BM_3: %b |\n| i_iPM_0: %b | i_iPM_1: %b | i_iPM_2: %b | i_iPM_3: %b |\n| o_oPM_0: %b | o_oPM_1: %b | o_oPM_2: %b | o_oPM_3: %b\n",
              64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->tb_acsu__DOT__i_rst_n),
              2,vlSelf->tb_acsu__DOT__w_BM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_BM_1),
              2,vlSelf->tb_acsu__DOT__w_BM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_BM_3),
              2,vlSelf->tb_acsu__DOT__w_iPM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_iPM_1),
              2,vlSelf->tb_acsu__DOT__w_iPM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_iPM_3),
              2,vlSelf->tb_acsu__DOT__w_oPM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_oPM_1),
              2,vlSelf->tb_acsu__DOT__w_oPM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_oPM_3));
    vlSelf->tb_acsu__DOT__unnamedblk1__DOT__i = 2U;
    co_await vlSelf->__VtrigSched_hd7248c79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_acsu.i_clk)", 
                                                       "tb_acsu.sv", 
                                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_acsu__DOT__w_BM_0 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_1 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_2 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_3 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    VL_WRITEF("Time: %0t | i_rst_n = %b | \n| i_BM_0: %b | i_BM_1: %b | i_BM_2: %b | i_BM_3: %b |\n| i_iPM_0: %b | i_iPM_1: %b | i_iPM_2: %b | i_iPM_3: %b |\n| o_oPM_0: %b | o_oPM_1: %b | o_oPM_2: %b | o_oPM_3: %b\n",
              64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->tb_acsu__DOT__i_rst_n),
              2,vlSelf->tb_acsu__DOT__w_BM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_BM_1),
              2,vlSelf->tb_acsu__DOT__w_BM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_BM_3),
              2,vlSelf->tb_acsu__DOT__w_iPM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_iPM_1),
              2,vlSelf->tb_acsu__DOT__w_iPM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_iPM_3),
              2,vlSelf->tb_acsu__DOT__w_oPM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_oPM_1),
              2,vlSelf->tb_acsu__DOT__w_oPM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_oPM_3));
    vlSelf->tb_acsu__DOT__unnamedblk1__DOT__i = 3U;
    co_await vlSelf->__VtrigSched_hd7248c79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_acsu.i_clk)", 
                                                       "tb_acsu.sv", 
                                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_acsu__DOT__w_BM_0 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_1 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_2 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_3 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    VL_WRITEF("Time: %0t | i_rst_n = %b | \n| i_BM_0: %b | i_BM_1: %b | i_BM_2: %b | i_BM_3: %b |\n| i_iPM_0: %b | i_iPM_1: %b | i_iPM_2: %b | i_iPM_3: %b |\n| o_oPM_0: %b | o_oPM_1: %b | o_oPM_2: %b | o_oPM_3: %b\n",
              64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->tb_acsu__DOT__i_rst_n),
              2,vlSelf->tb_acsu__DOT__w_BM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_BM_1),
              2,vlSelf->tb_acsu__DOT__w_BM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_BM_3),
              2,vlSelf->tb_acsu__DOT__w_iPM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_iPM_1),
              2,vlSelf->tb_acsu__DOT__w_iPM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_iPM_3),
              2,vlSelf->tb_acsu__DOT__w_oPM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_oPM_1),
              2,vlSelf->tb_acsu__DOT__w_oPM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_oPM_3));
    vlSelf->tb_acsu__DOT__unnamedblk1__DOT__i = 4U;
    co_await vlSelf->__VtrigSched_hd7248c79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_acsu.i_clk)", 
                                                       "tb_acsu.sv", 
                                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_acsu__DOT__w_BM_0 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_1 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_2 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_3 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    VL_WRITEF("Time: %0t | i_rst_n = %b | \n| i_BM_0: %b | i_BM_1: %b | i_BM_2: %b | i_BM_3: %b |\n| i_iPM_0: %b | i_iPM_1: %b | i_iPM_2: %b | i_iPM_3: %b |\n| o_oPM_0: %b | o_oPM_1: %b | o_oPM_2: %b | o_oPM_3: %b\n",
              64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->tb_acsu__DOT__i_rst_n),
              2,vlSelf->tb_acsu__DOT__w_BM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_BM_1),
              2,vlSelf->tb_acsu__DOT__w_BM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_BM_3),
              2,vlSelf->tb_acsu__DOT__w_iPM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_iPM_1),
              2,vlSelf->tb_acsu__DOT__w_iPM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_iPM_3),
              2,vlSelf->tb_acsu__DOT__w_oPM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_oPM_1),
              2,vlSelf->tb_acsu__DOT__w_oPM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_oPM_3));
    vlSelf->tb_acsu__DOT__unnamedblk1__DOT__i = 5U;
    co_await vlSelf->__VtrigSched_hd7248c79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_acsu.i_clk)", 
                                                       "tb_acsu.sv", 
                                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_acsu__DOT__w_BM_0 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_1 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_2 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_3 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    VL_WRITEF("Time: %0t | i_rst_n = %b | \n| i_BM_0: %b | i_BM_1: %b | i_BM_2: %b | i_BM_3: %b |\n| i_iPM_0: %b | i_iPM_1: %b | i_iPM_2: %b | i_iPM_3: %b |\n| o_oPM_0: %b | o_oPM_1: %b | o_oPM_2: %b | o_oPM_3: %b\n",
              64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->tb_acsu__DOT__i_rst_n),
              2,vlSelf->tb_acsu__DOT__w_BM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_BM_1),
              2,vlSelf->tb_acsu__DOT__w_BM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_BM_3),
              2,vlSelf->tb_acsu__DOT__w_iPM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_iPM_1),
              2,vlSelf->tb_acsu__DOT__w_iPM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_iPM_3),
              2,vlSelf->tb_acsu__DOT__w_oPM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_oPM_1),
              2,vlSelf->tb_acsu__DOT__w_oPM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_oPM_3));
    vlSelf->tb_acsu__DOT__unnamedblk1__DOT__i = 6U;
    co_await vlSelf->__VtrigSched_hd7248c79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_acsu.i_clk)", 
                                                       "tb_acsu.sv", 
                                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_acsu__DOT__w_BM_0 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_1 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_2 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_3 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    VL_WRITEF("Time: %0t | i_rst_n = %b | \n| i_BM_0: %b | i_BM_1: %b | i_BM_2: %b | i_BM_3: %b |\n| i_iPM_0: %b | i_iPM_1: %b | i_iPM_2: %b | i_iPM_3: %b |\n| o_oPM_0: %b | o_oPM_1: %b | o_oPM_2: %b | o_oPM_3: %b\n",
              64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->tb_acsu__DOT__i_rst_n),
              2,vlSelf->tb_acsu__DOT__w_BM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_BM_1),
              2,vlSelf->tb_acsu__DOT__w_BM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_BM_3),
              2,vlSelf->tb_acsu__DOT__w_iPM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_iPM_1),
              2,vlSelf->tb_acsu__DOT__w_iPM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_iPM_3),
              2,vlSelf->tb_acsu__DOT__w_oPM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_oPM_1),
              2,vlSelf->tb_acsu__DOT__w_oPM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_oPM_3));
    vlSelf->tb_acsu__DOT__unnamedblk1__DOT__i = 7U;
    co_await vlSelf->__VtrigSched_hd7248c79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_acsu.i_clk)", 
                                                       "tb_acsu.sv", 
                                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_acsu__DOT__w_BM_0 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_1 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_2 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_3 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    VL_WRITEF("Time: %0t | i_rst_n = %b | \n| i_BM_0: %b | i_BM_1: %b | i_BM_2: %b | i_BM_3: %b |\n| i_iPM_0: %b | i_iPM_1: %b | i_iPM_2: %b | i_iPM_3: %b |\n| o_oPM_0: %b | o_oPM_1: %b | o_oPM_2: %b | o_oPM_3: %b\n",
              64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->tb_acsu__DOT__i_rst_n),
              2,vlSelf->tb_acsu__DOT__w_BM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_BM_1),
              2,vlSelf->tb_acsu__DOT__w_BM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_BM_3),
              2,vlSelf->tb_acsu__DOT__w_iPM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_iPM_1),
              2,vlSelf->tb_acsu__DOT__w_iPM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_iPM_3),
              2,vlSelf->tb_acsu__DOT__w_oPM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_oPM_1),
              2,vlSelf->tb_acsu__DOT__w_oPM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_oPM_3));
    vlSelf->tb_acsu__DOT__unnamedblk1__DOT__i = 8U;
    co_await vlSelf->__VtrigSched_hd7248c79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_acsu.i_clk)", 
                                                       "tb_acsu.sv", 
                                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_acsu__DOT__w_BM_0 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_1 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_2 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_3 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    VL_WRITEF("Time: %0t | i_rst_n = %b | \n| i_BM_0: %b | i_BM_1: %b | i_BM_2: %b | i_BM_3: %b |\n| i_iPM_0: %b | i_iPM_1: %b | i_iPM_2: %b | i_iPM_3: %b |\n| o_oPM_0: %b | o_oPM_1: %b | o_oPM_2: %b | o_oPM_3: %b\n",
              64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->tb_acsu__DOT__i_rst_n),
              2,vlSelf->tb_acsu__DOT__w_BM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_BM_1),
              2,vlSelf->tb_acsu__DOT__w_BM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_BM_3),
              2,vlSelf->tb_acsu__DOT__w_iPM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_iPM_1),
              2,vlSelf->tb_acsu__DOT__w_iPM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_iPM_3),
              2,vlSelf->tb_acsu__DOT__w_oPM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_oPM_1),
              2,vlSelf->tb_acsu__DOT__w_oPM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_oPM_3));
    vlSelf->tb_acsu__DOT__unnamedblk1__DOT__i = 9U;
    co_await vlSelf->__VtrigSched_hd7248c79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_acsu.i_clk)", 
                                                       "tb_acsu.sv", 
                                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_acsu__DOT__w_BM_0 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_1 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_2 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_3 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    VL_WRITEF("Time: %0t | i_rst_n = %b | \n| i_BM_0: %b | i_BM_1: %b | i_BM_2: %b | i_BM_3: %b |\n| i_iPM_0: %b | i_iPM_1: %b | i_iPM_2: %b | i_iPM_3: %b |\n| o_oPM_0: %b | o_oPM_1: %b | o_oPM_2: %b | o_oPM_3: %b\n",
              64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->tb_acsu__DOT__i_rst_n),
              2,vlSelf->tb_acsu__DOT__w_BM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_BM_1),
              2,vlSelf->tb_acsu__DOT__w_BM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_BM_3),
              2,vlSelf->tb_acsu__DOT__w_iPM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_iPM_1),
              2,vlSelf->tb_acsu__DOT__w_iPM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_iPM_3),
              2,vlSelf->tb_acsu__DOT__w_oPM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_oPM_1),
              2,vlSelf->tb_acsu__DOT__w_oPM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_oPM_3));
    vlSelf->tb_acsu__DOT__unnamedblk1__DOT__i = 0xaU;
    co_await vlSelf->__VtrigSched_hd7248c79__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_acsu.i_clk)", 
                                                       "tb_acsu.sv", 
                                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_acsu__DOT__w_BM_0 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_1 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_2 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_acsu__DOT__w_BM_3 = (3U & VL_MODDIVS_III(32, (IData)(
                                                                    VL_RANDOM_I()), (IData)(4U)));
    VL_WRITEF("Time: %0t | i_rst_n = %b | \n| i_BM_0: %b | i_BM_1: %b | i_BM_2: %b | i_BM_3: %b |\n| i_iPM_0: %b | i_iPM_1: %b | i_iPM_2: %b | i_iPM_3: %b |\n| o_oPM_0: %b | o_oPM_1: %b | o_oPM_2: %b | o_oPM_3: %b\n",
              64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->tb_acsu__DOT__i_rst_n),
              2,vlSelf->tb_acsu__DOT__w_BM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_BM_1),
              2,vlSelf->tb_acsu__DOT__w_BM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_BM_3),
              2,vlSelf->tb_acsu__DOT__w_iPM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_iPM_1),
              2,vlSelf->tb_acsu__DOT__w_iPM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_iPM_3),
              2,vlSelf->tb_acsu__DOT__w_oPM_0,2,(IData)(vlSelf->tb_acsu__DOT__w_oPM_1),
              2,vlSelf->tb_acsu__DOT__w_oPM_2,2,(IData)(vlSelf->tb_acsu__DOT__w_oPM_3));
    vlSelf->tb_acsu__DOT__unnamedblk1__DOT__i = 0xbU;
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_acsu___024root___eval_initial__TOP__Vtiming__1(Vtb_acsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_acsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_acsu___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xf4240ULL, 
                                       nullptr, "tb_acsu.sv", 
                                       77);
    VL_WRITEF("Simulation finished.\n==================================\n");
    VL_FINISH_MT("tb_acsu.sv", 80, "");
}

VL_INLINE_OPT VlCoroutine Vtb_acsu___024root___eval_initial__TOP__Vtiming__2(Vtb_acsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_acsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_acsu___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb_acsu.sv", 
                                           5);
        vlSelf->tb_acsu__DOT__i_clk = (1U & (~ (IData)(vlSelf->tb_acsu__DOT__i_clk)));
    }
}

VL_INLINE_OPT void Vtb_acsu___024root___act_comb__TOP__0(Vtb_acsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_acsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_acsu___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113e01e8__0 
        = (1U & (((~ (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_1)) 
                  & (IData)(vlSelf->tb_acsu__DOT__w_BM_3)) 
                 | (((~ (IData)(vlSelf->tb_acsu__DOT__w_BM_3)) 
                     & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_1)) 
                    | ((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_1) 
                       & ((IData)(vlSelf->tb_acsu__DOT__w_BM_3) 
                          >> 1U)))));
    vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113151f5__0 
        = (1U & (((IData)(vlSelf->tb_acsu__DOT__w_BM_3) 
                  >> 1U) | ((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_1) 
                            & (IData)(vlSelf->tb_acsu__DOT__w_BM_3))));
    vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113e01e8__0 
        = (1U & (((~ (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_1)) 
                  & (IData)(vlSelf->tb_acsu__DOT__w_BM_0)) 
                 | (((~ (IData)(vlSelf->tb_acsu__DOT__w_BM_0)) 
                     & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_1)) 
                    | ((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_1) 
                       & ((IData)(vlSelf->tb_acsu__DOT__w_BM_0) 
                          >> 1U)))));
    vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113151f5__0 
        = (1U & (((IData)(vlSelf->tb_acsu__DOT__w_BM_0) 
                  >> 1U) | ((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_1) 
                            & (IData)(vlSelf->tb_acsu__DOT__w_BM_0))));
    vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113e01e8__0 
        = (1U & (((~ (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_3)) 
                  & (IData)(vlSelf->tb_acsu__DOT__w_BM_1)) 
                 | (((~ (IData)(vlSelf->tb_acsu__DOT__w_BM_1)) 
                     & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_3)) 
                    | ((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_3) 
                       & ((IData)(vlSelf->tb_acsu__DOT__w_BM_1) 
                          >> 1U)))));
    vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113151f5__0 
        = (1U & (((IData)(vlSelf->tb_acsu__DOT__w_BM_1) 
                  >> 1U) | ((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_3) 
                            & (IData)(vlSelf->tb_acsu__DOT__w_BM_1))));
    vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113e01e8__0 
        = (1U & (((~ (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_3)) 
                  & (IData)(vlSelf->tb_acsu__DOT__w_BM_2)) 
                 | (((~ (IData)(vlSelf->tb_acsu__DOT__w_BM_2)) 
                     & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_3)) 
                    | ((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_3) 
                       & ((IData)(vlSelf->tb_acsu__DOT__w_BM_2) 
                          >> 1U)))));
    vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113151f5__0 
        = (1U & (((IData)(vlSelf->tb_acsu__DOT__w_BM_2) 
                  >> 1U) | ((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_3) 
                            & (IData)(vlSelf->tb_acsu__DOT__w_BM_2))));
    vlSelf->__VdfgTmp_hd6f2d07d__0 = (1U & (((IData)(vlSelf->tb_acsu__DOT__w_BM_0) 
                                             >> 1U) 
                                            | ((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_0) 
                                               & (IData)(vlSelf->tb_acsu__DOT__w_BM_0))));
    vlSelf->__VdfgTmp_h2cdf9eed__0 = (1U & (((~ (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_0)) 
                                             & (IData)(vlSelf->tb_acsu__DOT__w_BM_0)) 
                                            | (((~ (IData)(vlSelf->tb_acsu__DOT__w_BM_0)) 
                                                & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_0)) 
                                               | ((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_0) 
                                                  & ((IData)(vlSelf->tb_acsu__DOT__w_BM_0) 
                                                     >> 1U)))));
    vlSelf->__VdfgTmp_h82e2fd0f__0 = (1U & (((IData)(vlSelf->tb_acsu__DOT__w_BM_3) 
                                             >> 1U) 
                                            | ((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_0) 
                                               & (IData)(vlSelf->tb_acsu__DOT__w_BM_3))));
    vlSelf->__VdfgTmp_h1c894731__0 = (1U & (((~ (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_0)) 
                                             & (IData)(vlSelf->tb_acsu__DOT__w_BM_3)) 
                                            | (((~ (IData)(vlSelf->tb_acsu__DOT__w_BM_3)) 
                                                & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_0)) 
                                               | ((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_0) 
                                                  & ((IData)(vlSelf->tb_acsu__DOT__w_BM_3) 
                                                     >> 1U)))));
    vlSelf->__VdfgTmp_haf8536d2__0 = (1U & (((IData)(vlSelf->tb_acsu__DOT__w_BM_2) 
                                             >> 1U) 
                                            | ((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_2) 
                                               & (IData)(vlSelf->tb_acsu__DOT__w_BM_2))));
    vlSelf->__VdfgTmp_h3af6e6aa__0 = (1U & (((~ (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_2)) 
                                             & (IData)(vlSelf->tb_acsu__DOT__w_BM_2)) 
                                            | (((~ (IData)(vlSelf->tb_acsu__DOT__w_BM_2)) 
                                                & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_2)) 
                                               | ((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_2) 
                                                  & ((IData)(vlSelf->tb_acsu__DOT__w_BM_2) 
                                                     >> 1U)))));
    vlSelf->__VdfgTmp_h3ff357c8__0 = (1U & (((IData)(vlSelf->tb_acsu__DOT__w_BM_1) 
                                             >> 1U) 
                                            | ((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_2) 
                                               & (IData)(vlSelf->tb_acsu__DOT__w_BM_1))));
    vlSelf->__VdfgTmp_h1d0cb471__0 = (1U & (((~ (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_2)) 
                                             & (IData)(vlSelf->tb_acsu__DOT__w_BM_1)) 
                                            | (((~ (IData)(vlSelf->tb_acsu__DOT__w_BM_1)) 
                                                & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_2)) 
                                               | ((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_2) 
                                                  & ((IData)(vlSelf->tb_acsu__DOT__w_BM_1) 
                                                     >> 1U)))));
}

void Vtb_acsu___024root___eval_act(Vtb_acsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_acsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_acsu___024root___eval_act\n"); );
    // Body
    if ((6ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_acsu___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_acsu___024root___nba_sequent__TOP__0(Vtb_acsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_acsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_acsu___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->tb_acsu__DOT__i_rst_n) {
        vlSelf->tb_acsu__DOT__w_valid_PMU = 1U;
        vlSelf->tb_acsu__DOT__w_valid_ACSU = 1U;
        vlSelf->tb_acsu__DOT__w_iPM_3 = vlSelf->tb_acsu__DOT__w_oPM_3;
        vlSelf->tb_acsu__DOT__w_iPM_2 = vlSelf->tb_acsu__DOT__w_oPM_2;
        vlSelf->tb_acsu__DOT__w_iPM_1 = vlSelf->tb_acsu__DOT__w_oPM_1;
        vlSelf->tb_acsu__DOT__w_iPM_0 = vlSelf->tb_acsu__DOT__w_oPM_0;
        vlSelf->tb_acsu__DOT__w_oPM_3 = ((1U & (((~ (IData)(vlSelf->__VdfgTmp_h1d0cb471__0)) 
                                                 & (~ (IData)(vlSelf->__VdfgTmp_h3ff357c8__0))) 
                                                | (((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113e01e8__0) 
                                                    & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113151f5__0)) 
                                                   | (((~ (IData)(vlSelf->__VdfgTmp_h3ff357c8__0)) 
                                                       & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113e01e8__0)) 
                                                      | (((~ (IData)(vlSelf->__VdfgTmp_h3ff357c8__0)) 
                                                          | (~ (IData)(vlSelf->__VdfgTmp_h1d0cb471__0))) 
                                                         & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113151f5__0))))))
                                          ? (((IData)(vlSelf->__VdfgTmp_h3ff357c8__0) 
                                              << 1U) 
                                             | (IData)(vlSelf->__VdfgTmp_h1d0cb471__0))
                                          : (((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113151f5__0) 
                                              << 1U) 
                                             | (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113e01e8__0)));
        vlSelf->tb_acsu__DOT__w_oPM_2 = ((1U & (((~ (IData)(vlSelf->__VdfgTmp_h1c894731__0)) 
                                                 & (~ (IData)(vlSelf->__VdfgTmp_h82e2fd0f__0))) 
                                                | (((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113e01e8__0) 
                                                    & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113151f5__0)) 
                                                   | (((~ (IData)(vlSelf->__VdfgTmp_h82e2fd0f__0)) 
                                                       & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113e01e8__0)) 
                                                      | (((~ (IData)(vlSelf->__VdfgTmp_h82e2fd0f__0)) 
                                                          | (~ (IData)(vlSelf->__VdfgTmp_h1c894731__0))) 
                                                         & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113151f5__0))))))
                                          ? (((IData)(vlSelf->__VdfgTmp_h82e2fd0f__0) 
                                              << 1U) 
                                             | (IData)(vlSelf->__VdfgTmp_h1c894731__0))
                                          : (((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113151f5__0) 
                                              << 1U) 
                                             | (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113e01e8__0)));
        vlSelf->tb_acsu__DOT__w_oPM_1 = ((1U & (((~ (IData)(vlSelf->__VdfgTmp_h3af6e6aa__0)) 
                                                 & (~ (IData)(vlSelf->__VdfgTmp_haf8536d2__0))) 
                                                | (((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113e01e8__0) 
                                                    & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113151f5__0)) 
                                                   | (((~ (IData)(vlSelf->__VdfgTmp_haf8536d2__0)) 
                                                       & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113e01e8__0)) 
                                                      | (((~ (IData)(vlSelf->__VdfgTmp_haf8536d2__0)) 
                                                          | (~ (IData)(vlSelf->__VdfgTmp_h3af6e6aa__0))) 
                                                         & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113151f5__0))))))
                                          ? (((IData)(vlSelf->__VdfgTmp_haf8536d2__0) 
                                              << 1U) 
                                             | (IData)(vlSelf->__VdfgTmp_h3af6e6aa__0))
                                          : (((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113151f5__0) 
                                              << 1U) 
                                             | (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113e01e8__0)));
        vlSelf->tb_acsu__DOT__w_oPM_0 = ((1U & (((~ (IData)(vlSelf->__VdfgTmp_h2cdf9eed__0)) 
                                                 & (~ (IData)(vlSelf->__VdfgTmp_hd6f2d07d__0))) 
                                                | (((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113e01e8__0) 
                                                    & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113151f5__0)) 
                                                   | (((~ (IData)(vlSelf->__VdfgTmp_hd6f2d07d__0)) 
                                                       & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113e01e8__0)) 
                                                      | (((~ (IData)(vlSelf->__VdfgTmp_hd6f2d07d__0)) 
                                                          | (~ (IData)(vlSelf->__VdfgTmp_h2cdf9eed__0))) 
                                                         & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113151f5__0))))))
                                          ? (((IData)(vlSelf->__VdfgTmp_hd6f2d07d__0) 
                                              << 1U) 
                                             | (IData)(vlSelf->__VdfgTmp_h2cdf9eed__0))
                                          : (((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113151f5__0) 
                                              << 1U) 
                                             | (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113e01e8__0)));
    } else {
        vlSelf->tb_acsu__DOT__w_valid_PMU = 0U;
        vlSelf->tb_acsu__DOT__w_valid_ACSU = 0U;
        vlSelf->tb_acsu__DOT__w_iPM_3 = 3U;
        vlSelf->tb_acsu__DOT__w_iPM_2 = 3U;
        vlSelf->tb_acsu__DOT__w_iPM_1 = 3U;
        vlSelf->tb_acsu__DOT__w_iPM_0 = 0U;
        vlSelf->tb_acsu__DOT__w_oPM_3 = 0U;
        vlSelf->tb_acsu__DOT__w_oPM_2 = 0U;
        vlSelf->tb_acsu__DOT__w_oPM_1 = 0U;
        vlSelf->tb_acsu__DOT__w_oPM_0 = 0U;
    }
}

VL_INLINE_OPT void Vtb_acsu___024root___nba_comb__TOP__0(Vtb_acsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_acsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_acsu___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->__VdfgTmp_h1d0cb471__0 = (1U & (((~ (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_2)) 
                                             & (IData)(vlSelf->tb_acsu__DOT__w_BM_1)) 
                                            | (((~ (IData)(vlSelf->tb_acsu__DOT__w_BM_1)) 
                                                & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_2)) 
                                               | ((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_2) 
                                                  & ((IData)(vlSelf->tb_acsu__DOT__w_BM_1) 
                                                     >> 1U)))));
    vlSelf->__VdfgTmp_h3ff357c8__0 = (1U & (((IData)(vlSelf->tb_acsu__DOT__w_BM_1) 
                                             >> 1U) 
                                            | ((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_2) 
                                               & (IData)(vlSelf->tb_acsu__DOT__w_BM_1))));
    vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113e01e8__0 
        = (1U & (((~ (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_3)) 
                  & (IData)(vlSelf->tb_acsu__DOT__w_BM_2)) 
                 | (((~ (IData)(vlSelf->tb_acsu__DOT__w_BM_2)) 
                     & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_3)) 
                    | ((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_3) 
                       & ((IData)(vlSelf->tb_acsu__DOT__w_BM_2) 
                          >> 1U)))));
    vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113151f5__0 
        = (1U & (((IData)(vlSelf->tb_acsu__DOT__w_BM_2) 
                  >> 1U) | ((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_3) 
                            & (IData)(vlSelf->tb_acsu__DOT__w_BM_2))));
    vlSelf->__VdfgTmp_h1c894731__0 = (1U & (((~ (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_0)) 
                                             & (IData)(vlSelf->tb_acsu__DOT__w_BM_3)) 
                                            | (((~ (IData)(vlSelf->tb_acsu__DOT__w_BM_3)) 
                                                & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_0)) 
                                               | ((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_0) 
                                                  & ((IData)(vlSelf->tb_acsu__DOT__w_BM_3) 
                                                     >> 1U)))));
    vlSelf->__VdfgTmp_h82e2fd0f__0 = (1U & (((IData)(vlSelf->tb_acsu__DOT__w_BM_3) 
                                             >> 1U) 
                                            | ((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_0) 
                                               & (IData)(vlSelf->tb_acsu__DOT__w_BM_3))));
    vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113e01e8__0 
        = (1U & (((~ (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_1)) 
                  & (IData)(vlSelf->tb_acsu__DOT__w_BM_0)) 
                 | (((~ (IData)(vlSelf->tb_acsu__DOT__w_BM_0)) 
                     & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_1)) 
                    | ((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_1) 
                       & ((IData)(vlSelf->tb_acsu__DOT__w_BM_0) 
                          >> 1U)))));
    vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113151f5__0 
        = (1U & (((IData)(vlSelf->tb_acsu__DOT__w_BM_0) 
                  >> 1U) | ((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_1) 
                            & (IData)(vlSelf->tb_acsu__DOT__w_BM_0))));
    vlSelf->__VdfgTmp_h3af6e6aa__0 = (1U & (((~ (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_2)) 
                                             & (IData)(vlSelf->tb_acsu__DOT__w_BM_2)) 
                                            | (((~ (IData)(vlSelf->tb_acsu__DOT__w_BM_2)) 
                                                & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_2)) 
                                               | ((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_2) 
                                                  & ((IData)(vlSelf->tb_acsu__DOT__w_BM_2) 
                                                     >> 1U)))));
    vlSelf->__VdfgTmp_haf8536d2__0 = (1U & (((IData)(vlSelf->tb_acsu__DOT__w_BM_2) 
                                             >> 1U) 
                                            | ((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_2) 
                                               & (IData)(vlSelf->tb_acsu__DOT__w_BM_2))));
    vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113e01e8__0 
        = (1U & (((~ (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_3)) 
                  & (IData)(vlSelf->tb_acsu__DOT__w_BM_1)) 
                 | (((~ (IData)(vlSelf->tb_acsu__DOT__w_BM_1)) 
                     & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_3)) 
                    | ((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_3) 
                       & ((IData)(vlSelf->tb_acsu__DOT__w_BM_1) 
                          >> 1U)))));
    vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113151f5__0 
        = (1U & (((IData)(vlSelf->tb_acsu__DOT__w_BM_1) 
                  >> 1U) | ((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_3) 
                            & (IData)(vlSelf->tb_acsu__DOT__w_BM_1))));
    vlSelf->__VdfgTmp_h2cdf9eed__0 = (1U & (((~ (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_0)) 
                                             & (IData)(vlSelf->tb_acsu__DOT__w_BM_0)) 
                                            | (((~ (IData)(vlSelf->tb_acsu__DOT__w_BM_0)) 
                                                & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_0)) 
                                               | ((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_0) 
                                                  & ((IData)(vlSelf->tb_acsu__DOT__w_BM_0) 
                                                     >> 1U)))));
    vlSelf->__VdfgTmp_hd6f2d07d__0 = (1U & (((IData)(vlSelf->tb_acsu__DOT__w_BM_0) 
                                             >> 1U) 
                                            | ((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_0) 
                                               & (IData)(vlSelf->tb_acsu__DOT__w_BM_0))));
    vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113e01e8__0 
        = (1U & (((~ (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_1)) 
                  & (IData)(vlSelf->tb_acsu__DOT__w_BM_3)) 
                 | (((~ (IData)(vlSelf->tb_acsu__DOT__w_BM_3)) 
                     & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_1)) 
                    | ((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_1) 
                       & ((IData)(vlSelf->tb_acsu__DOT__w_BM_3) 
                          >> 1U)))));
    vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113151f5__0 
        = (1U & (((IData)(vlSelf->tb_acsu__DOT__w_BM_3) 
                  >> 1U) | ((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_1) 
                            & (IData)(vlSelf->tb_acsu__DOT__w_BM_3))));
}

void Vtb_acsu___024root___eval_nba(Vtb_acsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_acsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_acsu___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_acsu___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_acsu___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
}

void Vtb_acsu___024root___timing_resume(Vtb_acsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_acsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_acsu___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hd7248c79__0.resume("@(posedge tb_acsu.i_clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_acsu___024root___timing_commit(Vtb_acsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_acsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_acsu___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hd7248c79__0.commit("@(posedge tb_acsu.i_clk)");
    }
}

void Vtb_acsu___024root___eval_triggers__act(Vtb_acsu___024root* vlSelf);

bool Vtb_acsu___024root___eval_phase__act(Vtb_acsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_acsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_acsu___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_acsu___024root___eval_triggers__act(vlSelf);
    Vtb_acsu___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_acsu___024root___timing_resume(vlSelf);
        Vtb_acsu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_acsu___024root___eval_phase__nba(Vtb_acsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_acsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_acsu___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_acsu___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_acsu___024root___dump_triggers__nba(Vtb_acsu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_acsu___024root___dump_triggers__act(Vtb_acsu___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_acsu___024root___eval(Vtb_acsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_acsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_acsu___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_acsu___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_acsu.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_acsu___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_acsu.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_acsu___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_acsu___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_acsu___024root___eval_debug_assertions(Vtb_acsu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_acsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_acsu___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
