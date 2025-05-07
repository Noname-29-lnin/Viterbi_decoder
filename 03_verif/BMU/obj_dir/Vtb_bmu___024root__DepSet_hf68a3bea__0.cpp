// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_bmu.h for the primary calling header

#include "Vtb_bmu__pch.h"
#include "Vtb_bmu__Syms.h"
#include "Vtb_bmu___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_bmu___024root___eval_initial__TOP__Vtiming__1(Vtb_bmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmu___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_bmu.sv", 
                                       52);
    VL_FINISH_MT("tb_bmu.sv", 53, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_bmu___024root___dump_triggers__act(Vtb_bmu___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_bmu___024root___eval_triggers__act(Vtb_bmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmu___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->tb_bmu__DOT__i_clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_bmu__DOT__i_clk__0))) 
                                     | ((~ (IData)(vlSelf->tb_bmu__DOT__i_rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_bmu__DOT__i_rst_n__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->tb_bmu__DOT__i_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_bmu__DOT__i_clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__tb_bmu__DOT__i_clk__0 
        = vlSelf->tb_bmu__DOT__i_clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_bmu__DOT__i_rst_n__0 
        = vlSelf->tb_bmu__DOT__i_rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_bmu___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_bmu___024root___act_comb__TOP__0(Vtb_bmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmu___024root___act_comb__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("Time: %0t | i_rst_n = %b | i_data: %b | o_BM_0: %b | o_BM_1: %b | o_BM_2: %b | o_BM_3: %b | o_valid: %b\n",
                  64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->tb_bmu__DOT__i_rst_n),
                  2,vlSelf->tb_bmu__DOT__w_idata,2,
                  (IData)(vlSelf->tb_bmu__DOT__w_BM_0),
                  2,vlSelf->tb_bmu__DOT__w_BM_1,2,(IData)(vlSelf->tb_bmu__DOT__w_BM_2),
                  2,vlSelf->tb_bmu__DOT__w_BM_3,1,(IData)(vlSelf->tb_bmu__DOT__w_valid));
    }
}
