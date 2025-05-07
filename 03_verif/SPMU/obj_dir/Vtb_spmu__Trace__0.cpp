// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_spmu__Syms.h"


void Vtb_spmu___024root__trace_chg_0_sub_0(Vtb_spmu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_spmu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spmu___024root__trace_chg_0\n"); );
    // Init
    Vtb_spmu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_spmu___024root*>(voidSelf);
    Vtb_spmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_spmu___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_spmu___024root__trace_chg_0_sub_0(Vtb_spmu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spmu___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb_spmu__DOT__i_rst_n));
        bufp->chgCData(oldp+1,(vlSelf->tb_spmu__DOT__w_PM_0),2);
        bufp->chgCData(oldp+2,(vlSelf->tb_spmu__DOT__w_PM_1),2);
        bufp->chgCData(oldp+3,(vlSelf->tb_spmu__DOT__w_PM_2),2);
        bufp->chgCData(oldp+4,(vlSelf->tb_spmu__DOT__w_PM_3),2);
        bufp->chgBit(oldp+5,((1U & ((IData)((0U == (IData)(vlSelf->tb_spmu__DOT__w_PM_0))) 
                                    | ((IData)((3U 
                                                == (IData)(vlSelf->tb_spmu__DOT__w_PM_2))) 
                                       | (((~ ((IData)(vlSelf->tb_spmu__DOT__w_PM_0) 
                                               >> 1U)) 
                                           & (IData)(vlSelf->tb_spmu__DOT__w_PM_2)) 
                                          | ((IData)(
                                                     (3U 
                                                      != (IData)(vlSelf->tb_spmu__DOT__w_PM_0))) 
                                             & ((IData)(vlSelf->tb_spmu__DOT__w_PM_2) 
                                                >> 1U))))))));
        bufp->chgBit(oldp+6,((1U & ((IData)((0U == (IData)(vlSelf->tb_spmu__DOT__w_PM_1))) 
                                    | ((IData)((3U 
                                                == (IData)(vlSelf->tb_spmu__DOT__w_PM_3))) 
                                       | (((~ ((IData)(vlSelf->tb_spmu__DOT__w_PM_1) 
                                               >> 1U)) 
                                           & (IData)(vlSelf->tb_spmu__DOT__w_PM_3)) 
                                          | ((IData)(
                                                     (3U 
                                                      != (IData)(vlSelf->tb_spmu__DOT__w_PM_1))) 
                                             & ((IData)(vlSelf->tb_spmu__DOT__w_PM_3) 
                                                >> 1U))))))));
    }
    bufp->chgBit(oldp+7,(vlSelf->tb_spmu__DOT__i_clk));
    bufp->chgBit(oldp+8,(vlSelf->tb_spmu__DOT__w_valid));
    bufp->chgBit(oldp+9,(vlSelf->tb_spmu__DOT__spmu__DOT__u_state_machine__DOT__w_decision_bit));
    bufp->chgCData(oldp+10,(vlSelf->tb_spmu__DOT__spmu__DOT__u_state_machine__DOT__state),2);
    bufp->chgCData(oldp+11,(vlSelf->tb_spmu__DOT__spmu__DOT__u_state_machine__DOT__nstate),2);
}

void Vtb_spmu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spmu___024root__trace_cleanup\n"); );
    // Init
    Vtb_spmu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_spmu___024root*>(voidSelf);
    Vtb_spmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
