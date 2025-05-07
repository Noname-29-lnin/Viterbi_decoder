// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_acsu.h for the primary calling header

#ifndef VERILATED_VTB_ACSU___024ROOT_H_
#define VERILATED_VTB_ACSU___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_acsu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_acsu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_acsu__DOT__i_clk;
    CData/*0:0*/ tb_acsu__DOT__i_rst_n;
    CData/*1:0*/ tb_acsu__DOT__w_BM_0;
    CData/*1:0*/ tb_acsu__DOT__w_BM_1;
    CData/*1:0*/ tb_acsu__DOT__w_BM_2;
    CData/*1:0*/ tb_acsu__DOT__w_BM_3;
    CData/*1:0*/ tb_acsu__DOT__w_iPM_0;
    CData/*1:0*/ tb_acsu__DOT__w_iPM_1;
    CData/*1:0*/ tb_acsu__DOT__w_iPM_2;
    CData/*1:0*/ tb_acsu__DOT__w_iPM_3;
    CData/*1:0*/ tb_acsu__DOT__w_oPM_0;
    CData/*1:0*/ tb_acsu__DOT__w_oPM_1;
    CData/*1:0*/ tb_acsu__DOT__w_oPM_2;
    CData/*1:0*/ tb_acsu__DOT__w_oPM_3;
    CData/*0:0*/ tb_acsu__DOT__w_valid_ACSU;
    CData/*0:0*/ tb_acsu__DOT__w_valid_PMU;
    CData/*0:0*/ tb_acsu__DOT__ACSU__DOT__i_PM_0;
    CData/*0:0*/ tb_acsu__DOT__ACSU__DOT__i_PM_1;
    CData/*0:0*/ tb_acsu__DOT__ACSU__DOT__i_PM_2;
    CData/*0:0*/ tb_acsu__DOT__ACSU__DOT__i_PM_3;
    CData/*0:0*/ tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113e01e8__0;
    CData/*0:0*/ tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113151f5__0;
    CData/*0:0*/ tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113e01e8__0;
    CData/*0:0*/ tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113151f5__0;
    CData/*0:0*/ tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113e01e8__0;
    CData/*0:0*/ tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113151f5__0;
    CData/*0:0*/ tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113e01e8__0;
    CData/*0:0*/ tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113151f5__0;
    CData/*0:0*/ __VdfgTmp_hd6f2d07d__0;
    CData/*0:0*/ __VdfgTmp_h2cdf9eed__0;
    CData/*0:0*/ __VdfgTmp_h82e2fd0f__0;
    CData/*0:0*/ __VdfgTmp_h1c894731__0;
    CData/*0:0*/ __VdfgTmp_haf8536d2__0;
    CData/*0:0*/ __VdfgTmp_h3af6e6aa__0;
    CData/*0:0*/ __VdfgTmp_h3ff357c8__0;
    CData/*0:0*/ __VdfgTmp_h1d0cb471__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_acsu__DOT__i_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_acsu__DOT__i_rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_acsu__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hd7248c79__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_acsu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_acsu___024root(Vtb_acsu__Syms* symsp, const char* v__name);
    ~Vtb_acsu___024root();
    VL_UNCOPYABLE(Vtb_acsu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
