// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_addunit__Syms.h"


void Vtb_addunit___024root__trace_chg_0_sub_0(Vtb_addunit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_addunit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_addunit___024root__trace_chg_0\n"); );
    // Init
    Vtb_addunit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_addunit___024root*>(voidSelf);
    Vtb_addunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_addunit___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_addunit___024root__trace_chg_0_sub_0(Vtb_addunit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_addunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_addunit___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->tb_addunit__DOT__i_BM),2);
        bufp->chgCData(oldp+1,(vlSelf->tb_addunit__DOT__i_PM),2);
        bufp->chgCData(oldp+2,(((2U & ((0xfffffffeU 
                                        & (IData)(vlSelf->tb_addunit__DOT__i_PM)) 
                                       | ((0xfffffffeU 
                                           & (IData)(vlSelf->tb_addunit__DOT__i_BM)) 
                                          | (((IData)(vlSelf->tb_addunit__DOT__i_PM) 
                                              & (IData)(vlSelf->tb_addunit__DOT__i_BM)) 
                                             << 1U)))) 
                                | (1U & (((~ (IData)(vlSelf->tb_addunit__DOT__i_PM)) 
                                          & (IData)(vlSelf->tb_addunit__DOT__i_BM)) 
                                         | (((~ (IData)(vlSelf->tb_addunit__DOT__i_BM)) 
                                             & (IData)(vlSelf->tb_addunit__DOT__i_PM)) 
                                            | (((IData)(vlSelf->tb_addunit__DOT__i_PM) 
                                                & ((IData)(vlSelf->tb_addunit__DOT__i_BM) 
                                                   >> 1U)) 
                                               | (((IData)(vlSelf->tb_addunit__DOT__i_PM) 
                                                   >> 1U) 
                                                  & (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->tb_addunit__DOT__i_BM)))))))))),2);
        bufp->chgIData(oldp+3,(vlSelf->tb_addunit__DOT__pass_count),32);
        bufp->chgIData(oldp+4,(vlSelf->tb_addunit__DOT__fail_count),32);
        bufp->chgIData(oldp+5,(vlSelf->tb_addunit__DOT__test_case),32);
        bufp->chgIData(oldp+6,(vlSelf->tb_addunit__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+7,(vlSelf->tb_addunit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
        bufp->chgIData(oldp+8,(vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k),32);
    }
}

void Vtb_addunit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_addunit___024root__trace_cleanup\n"); );
    // Init
    Vtb_addunit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_addunit___024root*>(voidSelf);
    Vtb_addunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
