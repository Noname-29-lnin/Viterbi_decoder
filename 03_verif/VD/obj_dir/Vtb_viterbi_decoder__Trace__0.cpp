// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_viterbi_decoder__Syms.h"


void Vtb_viterbi_decoder___024root__trace_chg_0_sub_0(Vtb_viterbi_decoder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_viterbi_decoder___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root__trace_chg_0\n"); );
    // Init
    Vtb_viterbi_decoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_viterbi_decoder___024root*>(voidSelf);
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_viterbi_decoder___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_viterbi_decoder___024root__trace_chg_0_sub_0(Vtb_viterbi_decoder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->tb_viterbi_decoder__DOT__i_data[0]),2);
        bufp->chgCData(oldp+1,(vlSelf->tb_viterbi_decoder__DOT__i_data[1]),2);
        bufp->chgCData(oldp+2,(vlSelf->tb_viterbi_decoder__DOT__i_data[2]),2);
        bufp->chgCData(oldp+3,(vlSelf->tb_viterbi_decoder__DOT__i_data[3]),2);
        bufp->chgCData(oldp+4,(vlSelf->tb_viterbi_decoder__DOT__i_data[4]),2);
        bufp->chgCData(oldp+5,(vlSelf->tb_viterbi_decoder__DOT__i_data[5]),2);
        bufp->chgCData(oldp+6,(vlSelf->tb_viterbi_decoder__DOT__i_data[6]),2);
        bufp->chgCData(oldp+7,(vlSelf->tb_viterbi_decoder__DOT__i_data[7]),2);
        bufp->chgCData(oldp+8,(vlSelf->tb_viterbi_decoder__DOT__i_data[8]),2);
        bufp->chgCData(oldp+9,(vlSelf->tb_viterbi_decoder__DOT__i_data[9]),2);
        bufp->chgCData(oldp+10,(vlSelf->tb_viterbi_decoder__DOT__i_data[10]),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+11,(vlSelf->tb_viterbi_decoder__DOT__i_rst_n));
        bufp->chgCData(oldp+12,(vlSelf->tb_viterbi_decoder__DOT__w_idata),2);
        bufp->chgCData(oldp+13,((((IData)((3U == (IData)(vlSelf->tb_viterbi_decoder__DOT__w_idata))) 
                                  << 1U) | (1U & VL_REDXOR_2(vlSelf->tb_viterbi_decoder__DOT__w_idata)))),2);
        bufp->chgCData(oldp+14,((((IData)((2U == (IData)(vlSelf->tb_viterbi_decoder__DOT__w_idata))) 
                                  << 1U) | (1U & (~ 
                                                  VL_REDXOR_2(vlSelf->tb_viterbi_decoder__DOT__w_idata))))),2);
        bufp->chgCData(oldp+15,((((IData)((1U == (IData)(vlSelf->tb_viterbi_decoder__DOT__w_idata))) 
                                  << 1U) | (1U & (~ 
                                                  VL_REDXOR_2(vlSelf->tb_viterbi_decoder__DOT__w_idata))))),2);
        bufp->chgCData(oldp+16,((((IData)((0U == (IData)(vlSelf->tb_viterbi_decoder__DOT__w_idata))) 
                                  << 1U) | (1U & VL_REDXOR_2(vlSelf->tb_viterbi_decoder__DOT__w_idata)))),2);
        bufp->chgBit(oldp+17,((1U & (IData)(vlSelf->tb_viterbi_decoder__DOT__w_idata))));
        bufp->chgBit(oldp+18,((1U & ((IData)(vlSelf->tb_viterbi_decoder__DOT__w_idata) 
                                     >> 1U))));
        bufp->chgBit(oldp+19,((1U & VL_REDXOR_2(vlSelf->tb_viterbi_decoder__DOT__w_idata))));
        bufp->chgBit(oldp+20,((IData)((3U == (IData)(vlSelf->tb_viterbi_decoder__DOT__w_idata)))));
        bufp->chgBit(oldp+21,((1U & (~ (IData)(vlSelf->tb_viterbi_decoder__DOT__w_idata)))));
        bufp->chgBit(oldp+22,((1U & (~ VL_REDXOR_2(vlSelf->tb_viterbi_decoder__DOT__w_idata)))));
        bufp->chgBit(oldp+23,((IData)((2U == (IData)(vlSelf->tb_viterbi_decoder__DOT__w_idata)))));
        bufp->chgBit(oldp+24,((1U & (~ ((IData)(vlSelf->tb_viterbi_decoder__DOT__w_idata) 
                                        >> 1U)))));
        bufp->chgBit(oldp+25,((1U & (~ VL_REDXOR_2(vlSelf->tb_viterbi_decoder__DOT__w_idata)))));
        bufp->chgBit(oldp+26,((IData)((1U == (IData)(vlSelf->tb_viterbi_decoder__DOT__w_idata)))));
        bufp->chgBit(oldp+27,((1U & VL_REDXOR_2(vlSelf->tb_viterbi_decoder__DOT__w_idata))));
        bufp->chgBit(oldp+28,((IData)((0U == (IData)(vlSelf->tb_viterbi_decoder__DOT__w_idata)))));
        bufp->chgIData(oldp+29,(vlSelf->tb_viterbi_decoder__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+30,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__SPMU__DOT__u_state_machine__DOT__w_decision_bit));
        bufp->chgBit(oldp+31,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_valid_SPMU));
        bufp->chgCData(oldp+32,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_0),2);
        bufp->chgCData(oldp+33,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_1),2);
        bufp->chgCData(oldp+34,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_2),2);
        bufp->chgCData(oldp+35,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_3),2);
        bufp->chgCData(oldp+36,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_0),8);
        bufp->chgCData(oldp+37,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_1),8);
        bufp->chgCData(oldp+38,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_2),8);
        bufp->chgCData(oldp+39,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_3),8);
        bufp->chgCData(oldp+40,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_0),8);
        bufp->chgCData(oldp+41,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_1),8);
        bufp->chgCData(oldp+42,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_2),8);
        bufp->chgCData(oldp+43,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_3),8);
        bufp->chgBit(oldp+44,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_valid_BMU));
        bufp->chgBit(oldp+45,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_valid_PMU));
        bufp->chgCData(oldp+46,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_0),2);
        bufp->chgCData(oldp+47,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_1),2);
        bufp->chgCData(oldp+48,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_2),2);
        bufp->chgCData(oldp+49,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_3),2);
        bufp->chgCData(oldp+50,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_0),2);
        bufp->chgCData(oldp+51,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_1),2);
        bufp->chgCData(oldp+52,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_2),2);
        bufp->chgCData(oldp+53,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_3),2);
        bufp->chgCData(oldp+54,((((IData)(vlSelf->__VdfgTmp_h9b75ad84__0) 
                                  << 1U) | (IData)(vlSelf->__VdfgTmp_h9c4dba9f__0))),2);
        bufp->chgCData(oldp+55,((((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113151f5__0) 
                                  << 1U) | (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113e01e8__0))),2);
        bufp->chgBit(oldp+56,((1U & (((~ (IData)(vlSelf->__VdfgTmp_h9c4dba9f__0)) 
                                      & (~ (IData)(vlSelf->__VdfgTmp_h9b75ad84__0))) 
                                     | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113e01e8__0) 
                                         & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113151f5__0)) 
                                        | (((~ (IData)(vlSelf->__VdfgTmp_h9b75ad84__0)) 
                                            & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113e01e8__0)) 
                                           | (((~ (IData)(vlSelf->__VdfgTmp_h9b75ad84__0)) 
                                               | (~ (IData)(vlSelf->__VdfgTmp_h9c4dba9f__0))) 
                                              & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113151f5__0))))))));
        bufp->chgCData(oldp+57,((((IData)(vlSelf->__VdfgTmp_h232da30f__0) 
                                  << 1U) | (IData)(vlSelf->__VdfgTmp_h56a62d2e__0))),2);
        bufp->chgCData(oldp+58,((((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113151f5__0) 
                                  << 1U) | (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113e01e8__0))),2);
        bufp->chgBit(oldp+59,((1U & (((~ (IData)(vlSelf->__VdfgTmp_h56a62d2e__0)) 
                                      & (~ (IData)(vlSelf->__VdfgTmp_h232da30f__0))) 
                                     | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113e01e8__0) 
                                         & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113151f5__0)) 
                                        | (((~ (IData)(vlSelf->__VdfgTmp_h232da30f__0)) 
                                            & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113e01e8__0)) 
                                           | (((~ (IData)(vlSelf->__VdfgTmp_h232da30f__0)) 
                                               | (~ (IData)(vlSelf->__VdfgTmp_h56a62d2e__0))) 
                                              & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113151f5__0))))))));
        bufp->chgCData(oldp+60,((((IData)(vlSelf->__VdfgTmp_hcc858198__0) 
                                  << 1U) | (IData)(vlSelf->__VdfgTmp_h79beb834__0))),2);
        bufp->chgCData(oldp+61,((((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113151f5__0) 
                                  << 1U) | (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113e01e8__0))),2);
        bufp->chgBit(oldp+62,((1U & (((~ (IData)(vlSelf->__VdfgTmp_h79beb834__0)) 
                                      & (~ (IData)(vlSelf->__VdfgTmp_hcc858198__0))) 
                                     | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113e01e8__0) 
                                         & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113151f5__0)) 
                                        | (((~ (IData)(vlSelf->__VdfgTmp_hcc858198__0)) 
                                            & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113e01e8__0)) 
                                           | (((~ (IData)(vlSelf->__VdfgTmp_hcc858198__0)) 
                                               | (~ (IData)(vlSelf->__VdfgTmp_h79beb834__0))) 
                                              & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113151f5__0))))))));
        bufp->chgCData(oldp+63,((((IData)(vlSelf->__VdfgTmp_h4de230f3__0) 
                                  << 1U) | (IData)(vlSelf->__VdfgTmp_h9f5944a7__0))),2);
        bufp->chgCData(oldp+64,((((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113151f5__0) 
                                  << 1U) | (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113e01e8__0))),2);
        bufp->chgBit(oldp+65,((1U & (((~ (IData)(vlSelf->__VdfgTmp_h9f5944a7__0)) 
                                      & (~ (IData)(vlSelf->__VdfgTmp_h4de230f3__0))) 
                                     | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113e01e8__0) 
                                         & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113151f5__0)) 
                                        | (((~ (IData)(vlSelf->__VdfgTmp_h4de230f3__0)) 
                                            & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113e01e8__0)) 
                                           | (((~ (IData)(vlSelf->__VdfgTmp_h4de230f3__0)) 
                                               | (~ (IData)(vlSelf->__VdfgTmp_h9f5944a7__0))) 
                                              & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113151f5__0))))))));
        bufp->chgBit(oldp+66,((1U & ((IData)((0U == (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_0))) 
                                     | ((IData)((3U 
                                                 == (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_2))) 
                                        | (((~ ((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_0) 
                                                >> 1U)) 
                                            & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_2)) 
                                           | ((IData)(
                                                      (3U 
                                                       != (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_0))) 
                                              & ((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_2) 
                                                 >> 1U))))))));
        bufp->chgBit(oldp+67,((1U & ((IData)((0U == (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_1))) 
                                     | ((IData)((3U 
                                                 == (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_3))) 
                                        | (((~ ((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_1) 
                                                >> 1U)) 
                                            & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_3)) 
                                           | ((IData)(
                                                      (3U 
                                                       != (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_1))) 
                                              & ((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_3) 
                                                 >> 1U))))))));
        bufp->chgCData(oldp+68,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__SPMU__DOT__u_state_machine__DOT__state),2);
        bufp->chgCData(oldp+69,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__SPMU__DOT__u_state_machine__DOT__nstate),2);
    }
    bufp->chgBit(oldp+70,(vlSelf->tb_viterbi_decoder__DOT__i_clk));
}

void Vtb_viterbi_decoder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root__trace_cleanup\n"); );
    // Init
    Vtb_viterbi_decoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_viterbi_decoder___024root*>(voidSelf);
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
