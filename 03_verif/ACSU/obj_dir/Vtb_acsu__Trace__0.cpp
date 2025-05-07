// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_acsu__Syms.h"


void Vtb_acsu___024root__trace_chg_0_sub_0(Vtb_acsu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_acsu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_acsu___024root__trace_chg_0\n"); );
    // Init
    Vtb_acsu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_acsu___024root*>(voidSelf);
    Vtb_acsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_acsu___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_acsu___024root__trace_chg_0_sub_0(Vtb_acsu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_acsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_acsu___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb_acsu__DOT__i_rst_n));
        bufp->chgCData(oldp+1,(vlSelf->tb_acsu__DOT__w_BM_0),2);
        bufp->chgCData(oldp+2,(vlSelf->tb_acsu__DOT__w_BM_1),2);
        bufp->chgCData(oldp+3,(vlSelf->tb_acsu__DOT__w_BM_2),2);
        bufp->chgCData(oldp+4,(vlSelf->tb_acsu__DOT__w_BM_3),2);
        bufp->chgIData(oldp+5,(vlSelf->tb_acsu__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgCData(oldp+6,(((1U & (((~ (IData)(vlSelf->__VdfgTmp_h2cdf9eed__0)) 
                                        & (~ (IData)(vlSelf->__VdfgTmp_hd6f2d07d__0))) 
                                       | (((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113e01e8__0) 
                                           & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113151f5__0)) 
                                          | (((~ (IData)(vlSelf->__VdfgTmp_hd6f2d07d__0)) 
                                              & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113e01e8__0)) 
                                             | (((~ (IData)(vlSelf->__VdfgTmp_hd6f2d07d__0)) 
                                                 | (~ (IData)(vlSelf->__VdfgTmp_h2cdf9eed__0))) 
                                                & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113151f5__0))))))
                                 ? (((IData)(vlSelf->__VdfgTmp_hd6f2d07d__0) 
                                     << 1U) | (IData)(vlSelf->__VdfgTmp_h2cdf9eed__0))
                                 : (((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113151f5__0) 
                                     << 1U) | (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113e01e8__0)))),2);
        bufp->chgCData(oldp+7,(((1U & (((~ (IData)(vlSelf->__VdfgTmp_h3af6e6aa__0)) 
                                        & (~ (IData)(vlSelf->__VdfgTmp_haf8536d2__0))) 
                                       | (((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113e01e8__0) 
                                           & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113151f5__0)) 
                                          | (((~ (IData)(vlSelf->__VdfgTmp_haf8536d2__0)) 
                                              & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113e01e8__0)) 
                                             | (((~ (IData)(vlSelf->__VdfgTmp_haf8536d2__0)) 
                                                 | (~ (IData)(vlSelf->__VdfgTmp_h3af6e6aa__0))) 
                                                & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113151f5__0))))))
                                 ? (((IData)(vlSelf->__VdfgTmp_haf8536d2__0) 
                                     << 1U) | (IData)(vlSelf->__VdfgTmp_h3af6e6aa__0))
                                 : (((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113151f5__0) 
                                     << 1U) | (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113e01e8__0)))),2);
        bufp->chgCData(oldp+8,(((1U & (((~ (IData)(vlSelf->__VdfgTmp_h1c894731__0)) 
                                        & (~ (IData)(vlSelf->__VdfgTmp_h82e2fd0f__0))) 
                                       | (((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113e01e8__0) 
                                           & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113151f5__0)) 
                                          | (((~ (IData)(vlSelf->__VdfgTmp_h82e2fd0f__0)) 
                                              & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113e01e8__0)) 
                                             | (((~ (IData)(vlSelf->__VdfgTmp_h82e2fd0f__0)) 
                                                 | (~ (IData)(vlSelf->__VdfgTmp_h1c894731__0))) 
                                                & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113151f5__0))))))
                                 ? (((IData)(vlSelf->__VdfgTmp_h82e2fd0f__0) 
                                     << 1U) | (IData)(vlSelf->__VdfgTmp_h1c894731__0))
                                 : (((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113151f5__0) 
                                     << 1U) | (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113e01e8__0)))),2);
        bufp->chgCData(oldp+9,(((1U & (((~ (IData)(vlSelf->__VdfgTmp_h1d0cb471__0)) 
                                        & (~ (IData)(vlSelf->__VdfgTmp_h3ff357c8__0))) 
                                       | (((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113e01e8__0) 
                                           & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113151f5__0)) 
                                          | (((~ (IData)(vlSelf->__VdfgTmp_h3ff357c8__0)) 
                                              & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113e01e8__0)) 
                                             | (((~ (IData)(vlSelf->__VdfgTmp_h3ff357c8__0)) 
                                                 | (~ (IData)(vlSelf->__VdfgTmp_h1d0cb471__0))) 
                                                & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113151f5__0))))))
                                 ? (((IData)(vlSelf->__VdfgTmp_h3ff357c8__0) 
                                     << 1U) | (IData)(vlSelf->__VdfgTmp_h1d0cb471__0))
                                 : (((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113151f5__0) 
                                     << 1U) | (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113e01e8__0)))),2);
        bufp->chgCData(oldp+10,((((IData)(vlSelf->__VdfgTmp_hd6f2d07d__0) 
                                  << 1U) | (IData)(vlSelf->__VdfgTmp_h2cdf9eed__0))),2);
        bufp->chgCData(oldp+11,((((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113151f5__0) 
                                  << 1U) | (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113e01e8__0))),2);
        bufp->chgBit(oldp+12,((1U & (((~ (IData)(vlSelf->__VdfgTmp_h2cdf9eed__0)) 
                                      & (~ (IData)(vlSelf->__VdfgTmp_hd6f2d07d__0))) 
                                     | (((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113e01e8__0) 
                                         & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113151f5__0)) 
                                        | (((~ (IData)(vlSelf->__VdfgTmp_hd6f2d07d__0)) 
                                            & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113e01e8__0)) 
                                           | (((~ (IData)(vlSelf->__VdfgTmp_hd6f2d07d__0)) 
                                               | (~ (IData)(vlSelf->__VdfgTmp_h2cdf9eed__0))) 
                                              & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113151f5__0))))))));
        bufp->chgCData(oldp+13,((((IData)(vlSelf->__VdfgTmp_haf8536d2__0) 
                                  << 1U) | (IData)(vlSelf->__VdfgTmp_h3af6e6aa__0))),2);
        bufp->chgCData(oldp+14,((((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113151f5__0) 
                                  << 1U) | (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113e01e8__0))),2);
        bufp->chgBit(oldp+15,((1U & (((~ (IData)(vlSelf->__VdfgTmp_h3af6e6aa__0)) 
                                      & (~ (IData)(vlSelf->__VdfgTmp_haf8536d2__0))) 
                                     | (((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113e01e8__0) 
                                         & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113151f5__0)) 
                                        | (((~ (IData)(vlSelf->__VdfgTmp_haf8536d2__0)) 
                                            & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113e01e8__0)) 
                                           | (((~ (IData)(vlSelf->__VdfgTmp_haf8536d2__0)) 
                                               | (~ (IData)(vlSelf->__VdfgTmp_h3af6e6aa__0))) 
                                              & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113151f5__0))))))));
        bufp->chgCData(oldp+16,((((IData)(vlSelf->__VdfgTmp_h82e2fd0f__0) 
                                  << 1U) | (IData)(vlSelf->__VdfgTmp_h1c894731__0))),2);
        bufp->chgCData(oldp+17,((((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113151f5__0) 
                                  << 1U) | (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113e01e8__0))),2);
        bufp->chgBit(oldp+18,((1U & (((~ (IData)(vlSelf->__VdfgTmp_h1c894731__0)) 
                                      & (~ (IData)(vlSelf->__VdfgTmp_h82e2fd0f__0))) 
                                     | (((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113e01e8__0) 
                                         & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113151f5__0)) 
                                        | (((~ (IData)(vlSelf->__VdfgTmp_h82e2fd0f__0)) 
                                            & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113e01e8__0)) 
                                           | (((~ (IData)(vlSelf->__VdfgTmp_h82e2fd0f__0)) 
                                               | (~ (IData)(vlSelf->__VdfgTmp_h1c894731__0))) 
                                              & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113151f5__0))))))));
        bufp->chgCData(oldp+19,((((IData)(vlSelf->__VdfgTmp_h3ff357c8__0) 
                                  << 1U) | (IData)(vlSelf->__VdfgTmp_h1d0cb471__0))),2);
        bufp->chgCData(oldp+20,((((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113151f5__0) 
                                  << 1U) | (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113e01e8__0))),2);
        bufp->chgBit(oldp+21,((1U & (((~ (IData)(vlSelf->__VdfgTmp_h1d0cb471__0)) 
                                      & (~ (IData)(vlSelf->__VdfgTmp_h3ff357c8__0))) 
                                     | (((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113e01e8__0) 
                                         & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113151f5__0)) 
                                        | (((~ (IData)(vlSelf->__VdfgTmp_h3ff357c8__0)) 
                                            & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113e01e8__0)) 
                                           | (((~ (IData)(vlSelf->__VdfgTmp_h3ff357c8__0)) 
                                               | (~ (IData)(vlSelf->__VdfgTmp_h1d0cb471__0))) 
                                              & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113151f5__0))))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+22,(vlSelf->tb_acsu__DOT__w_iPM_0),2);
        bufp->chgCData(oldp+23,(vlSelf->tb_acsu__DOT__w_iPM_1),2);
        bufp->chgCData(oldp+24,(vlSelf->tb_acsu__DOT__w_iPM_2),2);
        bufp->chgCData(oldp+25,(vlSelf->tb_acsu__DOT__w_iPM_3),2);
        bufp->chgCData(oldp+26,(vlSelf->tb_acsu__DOT__w_oPM_0),2);
        bufp->chgCData(oldp+27,(vlSelf->tb_acsu__DOT__w_oPM_1),2);
        bufp->chgCData(oldp+28,(vlSelf->tb_acsu__DOT__w_oPM_2),2);
        bufp->chgCData(oldp+29,(vlSelf->tb_acsu__DOT__w_oPM_3),2);
        bufp->chgBit(oldp+30,(vlSelf->tb_acsu__DOT__w_valid_ACSU));
        bufp->chgBit(oldp+31,(vlSelf->tb_acsu__DOT__w_valid_PMU));
    }
    bufp->chgBit(oldp+32,(vlSelf->tb_acsu__DOT__i_clk));
}

void Vtb_acsu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_acsu___024root__trace_cleanup\n"); );
    // Init
    Vtb_acsu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_acsu___024root*>(voidSelf);
    Vtb_acsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
