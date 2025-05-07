// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_viterbi_decoder.h for the primary calling header

#include "Vtb_viterbi_decoder__pch.h"
#include "Vtb_viterbi_decoder___024root.h"

VL_ATTR_COLD void Vtb_viterbi_decoder___024root___eval_static__TOP(Vtb_viterbi_decoder___024root* vlSelf);

VL_ATTR_COLD void Vtb_viterbi_decoder___024root___eval_static(Vtb_viterbi_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root___eval_static\n"); );
    // Body
    Vtb_viterbi_decoder___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtb_viterbi_decoder___024root___eval_static__TOP(Vtb_viterbi_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_viterbi_decoder__DOT__i_clk = 0U;
    vlSelf->tb_viterbi_decoder__DOT__i_data[0U] = 0U;
    vlSelf->tb_viterbi_decoder__DOT__i_data[1U] = 3U;
    vlSelf->tb_viterbi_decoder__DOT__i_data[2U] = 2U;
    vlSelf->tb_viterbi_decoder__DOT__i_data[3U] = 0U;
    vlSelf->tb_viterbi_decoder__DOT__i_data[4U] = 2U;
    vlSelf->tb_viterbi_decoder__DOT__i_data[5U] = 0U;
    vlSelf->tb_viterbi_decoder__DOT__i_data[6U] = 1U;
    vlSelf->tb_viterbi_decoder__DOT__i_data[7U] = 2U;
    vlSelf->tb_viterbi_decoder__DOT__i_data[8U] = 3U;
    vlSelf->tb_viterbi_decoder__DOT__i_data[9U] = 1U;
    vlSelf->tb_viterbi_decoder__DOT__i_data[0xaU] = 3U;
}

VL_ATTR_COLD void Vtb_viterbi_decoder___024root___eval_final(Vtb_viterbi_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_viterbi_decoder___024root___dump_triggers__stl(Vtb_viterbi_decoder___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_viterbi_decoder___024root___eval_phase__stl(Vtb_viterbi_decoder___024root* vlSelf);

VL_ATTR_COLD void Vtb_viterbi_decoder___024root___eval_settle(Vtb_viterbi_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_viterbi_decoder___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_viterbi_decoder.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_viterbi_decoder___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_viterbi_decoder___024root___dump_triggers__stl(Vtb_viterbi_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*0:0*/, 16> Vtb_viterbi_decoder__ConstPool__TABLE_hba7c1475_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtb_viterbi_decoder__ConstPool__TABLE_h28881fdb_0;

VL_ATTR_COLD void Vtb_viterbi_decoder___024root___stl_sequent__TOP__0(Vtb_viterbi_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
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

VL_ATTR_COLD void Vtb_viterbi_decoder___024root___eval_stl(Vtb_viterbi_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_viterbi_decoder___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtb_viterbi_decoder___024root___eval_triggers__stl(Vtb_viterbi_decoder___024root* vlSelf);

VL_ATTR_COLD bool Vtb_viterbi_decoder___024root___eval_phase__stl(Vtb_viterbi_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_viterbi_decoder___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_viterbi_decoder___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_viterbi_decoder___024root___dump_triggers__act(Vtb_viterbi_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_viterbi_decoder.i_clk or negedge tb_viterbi_decoder.i_rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tb_viterbi_decoder.i_clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_viterbi_decoder___024root___dump_triggers__nba(Vtb_viterbi_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_viterbi_decoder.i_clk or negedge tb_viterbi_decoder.i_rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tb_viterbi_decoder.i_clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_viterbi_decoder___024root___ctor_var_reset(Vtb_viterbi_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_viterbi_decoder__DOT__i_clk = VL_RAND_RESET_I(1);
    vlSelf->tb_viterbi_decoder__DOT__i_rst_n = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->tb_viterbi_decoder__DOT__i_data[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->tb_viterbi_decoder__DOT__w_idata = VL_RAND_RESET_I(2);
    vlSelf->tb_viterbi_decoder__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_0 = VL_RAND_RESET_I(2);
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_1 = VL_RAND_RESET_I(2);
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_2 = VL_RAND_RESET_I(2);
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_3 = VL_RAND_RESET_I(2);
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_valid_BMU = VL_RAND_RESET_I(1);
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_valid_ACSU = VL_RAND_RESET_I(1);
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_valid_PMU = VL_RAND_RESET_I(1);
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_valid_SPMU = VL_RAND_RESET_I(1);
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_3 = VL_RAND_RESET_I(2);
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_2 = VL_RAND_RESET_I(2);
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_1 = VL_RAND_RESET_I(2);
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_0 = VL_RAND_RESET_I(2);
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_0 = VL_RAND_RESET_I(2);
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_1 = VL_RAND_RESET_I(2);
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_2 = VL_RAND_RESET_I(2);
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_3 = VL_RAND_RESET_I(2);
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113e01e8__0 = 0;
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113151f5__0 = 0;
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113e01e8__0 = 0;
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113151f5__0 = 0;
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113e01e8__0 = 0;
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113151f5__0 = 0;
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113e01e8__0 = 0;
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113151f5__0 = 0;
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__SPMU__DOT__u_state_machine__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__SPMU__DOT__u_state_machine__DOT__nstate = VL_RAND_RESET_I(2);
    vlSelf->tb_viterbi_decoder__DOT__dut__DOT__SPMU__DOT__u_state_machine__DOT__w_decision_bit = VL_RAND_RESET_I(1);
    vlSelf->__VdfgTmp_h9b75ad84__0 = 0;
    vlSelf->__VdfgTmp_h9c4dba9f__0 = 0;
    vlSelf->__VdfgTmp_hcc858198__0 = 0;
    vlSelf->__VdfgTmp_h79beb834__0 = 0;
    vlSelf->__VdfgTmp_h232da30f__0 = 0;
    vlSelf->__VdfgTmp_h56a62d2e__0 = 0;
    vlSelf->__VdfgTmp_h4de230f3__0 = 0;
    vlSelf->__VdfgTmp_h9f5944a7__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_viterbi_decoder__DOT__i_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_viterbi_decoder__DOT__i_rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
