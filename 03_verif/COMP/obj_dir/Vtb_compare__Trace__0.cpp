// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_compare__Syms.h"


void Vtb_compare___024root__trace_chg_0_sub_0(Vtb_compare___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_compare___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_compare___024root__trace_chg_0\n"); );
    // Init
    Vtb_compare___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_compare___024root*>(voidSelf);
    Vtb_compare__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_compare___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_compare___024root__trace_chg_0_sub_0(Vtb_compare___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_compare__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_compare___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->tb_compare__DOT__i_metric_path_0),2);
        bufp->chgCData(oldp+1,(vlSelf->tb_compare__DOT__i_metric_path_1),2);
        bufp->chgBit(oldp+2,((1U & ((IData)((0U == (IData)(vlSelf->tb_compare__DOT__i_metric_path_0))) 
                                    | ((IData)((3U 
                                                == (IData)(vlSelf->tb_compare__DOT__i_metric_path_1))) 
                                       | (((~ ((IData)(vlSelf->tb_compare__DOT__i_metric_path_0) 
                                               >> 1U)) 
                                           & (IData)(vlSelf->tb_compare__DOT__i_metric_path_1)) 
                                          | ((IData)(
                                                     (3U 
                                                      != (IData)(vlSelf->tb_compare__DOT__i_metric_path_0))) 
                                             & ((IData)(vlSelf->tb_compare__DOT__i_metric_path_1) 
                                                >> 1U))))))));
        bufp->chgIData(oldp+3,(vlSelf->tb_compare__DOT__pass_count),32);
        bufp->chgIData(oldp+4,(vlSelf->tb_compare__DOT__fail_count),32);
        bufp->chgIData(oldp+5,(vlSelf->tb_compare__DOT__test_case),32);
    }
}

void Vtb_compare___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_compare___024root__trace_cleanup\n"); );
    // Init
    Vtb_compare___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_compare___024root*>(voidSelf);
    Vtb_compare__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
