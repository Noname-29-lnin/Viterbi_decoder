// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_viterbi_decoder.h for the primary calling header

#ifndef VERILATED_VTB_VITERBI_DECODER___024ROOT_H_
#define VERILATED_VTB_VITERBI_DECODER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_viterbi_decoder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_viterbi_decoder___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_viterbi_decoder__DOT__i_clk;
    CData/*0:0*/ tb_viterbi_decoder__DOT__i_rst_n;
    CData/*1:0*/ tb_viterbi_decoder__DOT__w_idata;
    CData/*1:0*/ tb_viterbi_decoder__DOT__dut__DOT__w_BM_0;
    CData/*1:0*/ tb_viterbi_decoder__DOT__dut__DOT__w_BM_1;
    CData/*1:0*/ tb_viterbi_decoder__DOT__dut__DOT__w_BM_2;
    CData/*1:0*/ tb_viterbi_decoder__DOT__dut__DOT__w_BM_3;
    CData/*0:0*/ tb_viterbi_decoder__DOT__dut__DOT__w_valid_BMU;
    CData/*0:0*/ tb_viterbi_decoder__DOT__dut__DOT__w_valid_ACSU;
    CData/*0:0*/ tb_viterbi_decoder__DOT__dut__DOT__w_valid_PMU;
    CData/*0:0*/ tb_viterbi_decoder__DOT__dut__DOT__w_valid_SPMU;
    CData/*1:0*/ tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_3;
    CData/*1:0*/ tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_2;
    CData/*1:0*/ tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_1;
    CData/*1:0*/ tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_0;
    CData/*1:0*/ tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_0;
    CData/*1:0*/ tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_1;
    CData/*1:0*/ tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_2;
    CData/*1:0*/ tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_3;
    CData/*0:0*/ tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113e01e8__0;
    CData/*0:0*/ tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113151f5__0;
    CData/*0:0*/ tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113e01e8__0;
    CData/*0:0*/ tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113151f5__0;
    CData/*0:0*/ tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113e01e8__0;
    CData/*0:0*/ tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113151f5__0;
    CData/*0:0*/ tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113e01e8__0;
    CData/*0:0*/ tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113151f5__0;
    CData/*1:0*/ tb_viterbi_decoder__DOT__dut__DOT__SPMU__DOT__u_state_machine__DOT__state;
    CData/*1:0*/ tb_viterbi_decoder__DOT__dut__DOT__SPMU__DOT__u_state_machine__DOT__nstate;
    CData/*0:0*/ tb_viterbi_decoder__DOT__dut__DOT__SPMU__DOT__u_state_machine__DOT__w_decision_bit;
    CData/*0:0*/ __VdfgTmp_h9b75ad84__0;
    CData/*0:0*/ __VdfgTmp_h9c4dba9f__0;
    CData/*0:0*/ __VdfgTmp_hcc858198__0;
    CData/*0:0*/ __VdfgTmp_h79beb834__0;
    CData/*0:0*/ __VdfgTmp_h232da30f__0;
    CData/*0:0*/ __VdfgTmp_h56a62d2e__0;
    CData/*0:0*/ __VdfgTmp_h4de230f3__0;
    CData/*0:0*/ __VdfgTmp_h9f5944a7__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_viterbi_decoder__DOT__i_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_viterbi_decoder__DOT__i_rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_viterbi_decoder__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*1:0*/, 11> tb_viterbi_decoder__DOT__i_data;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h021c5932__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_viterbi_decoder__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_viterbi_decoder___024root(Vtb_viterbi_decoder__Syms* symsp, const char* v__name);
    ~Vtb_viterbi_decoder___024root();
    VL_UNCOPYABLE(Vtb_viterbi_decoder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
