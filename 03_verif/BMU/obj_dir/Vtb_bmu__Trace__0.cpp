// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_bmu__Syms.h"


void Vtb_bmu___024root__trace_chg_0_sub_0(Vtb_bmu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_bmu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmu___024root__trace_chg_0\n"); );
    // Init
    Vtb_bmu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_bmu___024root*>(voidSelf);
    Vtb_bmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_bmu___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_bmu___024root__trace_chg_0_sub_0(Vtb_bmu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmu___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb_bmu__DOT__i_rst_n));
        bufp->chgCData(oldp+1,(vlSelf->tb_bmu__DOT__w_idata),2);
        bufp->chgCData(oldp+2,((((IData)((3U == (IData)(vlSelf->tb_bmu__DOT__w_idata))) 
                                 << 1U) | (1U & VL_REDXOR_2(vlSelf->tb_bmu__DOT__w_idata)))),2);
        bufp->chgCData(oldp+3,((((IData)((2U == (IData)(vlSelf->tb_bmu__DOT__w_idata))) 
                                 << 1U) | (1U & (~ 
                                                 VL_REDXOR_2(vlSelf->tb_bmu__DOT__w_idata))))),2);
        bufp->chgCData(oldp+4,((((IData)((1U == (IData)(vlSelf->tb_bmu__DOT__w_idata))) 
                                 << 1U) | (1U & (~ 
                                                 VL_REDXOR_2(vlSelf->tb_bmu__DOT__w_idata))))),2);
        bufp->chgCData(oldp+5,((((IData)((0U == (IData)(vlSelf->tb_bmu__DOT__w_idata))) 
                                 << 1U) | (1U & VL_REDXOR_2(vlSelf->tb_bmu__DOT__w_idata)))),2);
        bufp->chgBit(oldp+6,((1U & (IData)(vlSelf->tb_bmu__DOT__w_idata))));
        bufp->chgBit(oldp+7,((1U & ((IData)(vlSelf->tb_bmu__DOT__w_idata) 
                                    >> 1U))));
        bufp->chgBit(oldp+8,((1U & VL_REDXOR_2(vlSelf->tb_bmu__DOT__w_idata))));
        bufp->chgBit(oldp+9,((IData)((3U == (IData)(vlSelf->tb_bmu__DOT__w_idata)))));
        bufp->chgBit(oldp+10,((1U & (~ (IData)(vlSelf->tb_bmu__DOT__w_idata)))));
        bufp->chgBit(oldp+11,((1U & (~ VL_REDXOR_2(vlSelf->tb_bmu__DOT__w_idata)))));
        bufp->chgBit(oldp+12,((IData)((2U == (IData)(vlSelf->tb_bmu__DOT__w_idata)))));
        bufp->chgBit(oldp+13,((1U & (~ ((IData)(vlSelf->tb_bmu__DOT__w_idata) 
                                        >> 1U)))));
        bufp->chgBit(oldp+14,((1U & (~ VL_REDXOR_2(vlSelf->tb_bmu__DOT__w_idata)))));
        bufp->chgBit(oldp+15,((IData)((1U == (IData)(vlSelf->tb_bmu__DOT__w_idata)))));
        bufp->chgBit(oldp+16,((1U & VL_REDXOR_2(vlSelf->tb_bmu__DOT__w_idata))));
        bufp->chgBit(oldp+17,((IData)((0U == (IData)(vlSelf->tb_bmu__DOT__w_idata)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+18,(vlSelf->tb_bmu__DOT__w_valid));
        bufp->chgCData(oldp+19,(vlSelf->tb_bmu__DOT__w_BM_0),2);
        bufp->chgCData(oldp+20,(vlSelf->tb_bmu__DOT__w_BM_1),2);
        bufp->chgCData(oldp+21,(vlSelf->tb_bmu__DOT__w_BM_2),2);
        bufp->chgCData(oldp+22,(vlSelf->tb_bmu__DOT__w_BM_3),2);
    }
    bufp->chgBit(oldp+23,(vlSelf->tb_bmu__DOT__i_clk));
}

void Vtb_bmu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmu___024root__trace_cleanup\n"); );
    // Init
    Vtb_bmu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_bmu___024root*>(voidSelf);
    Vtb_bmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
