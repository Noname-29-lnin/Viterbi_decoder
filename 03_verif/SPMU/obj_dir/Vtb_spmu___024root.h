// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_spmu.h for the primary calling header

#ifndef VERILATED_VTB_SPMU___024ROOT_H_
#define VERILATED_VTB_SPMU___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_spmu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_spmu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_spmu__DOT__i_clk;
    CData/*0:0*/ tb_spmu__DOT__i_rst_n;
    CData/*0:0*/ tb_spmu__DOT__w_valid;
    CData/*1:0*/ tb_spmu__DOT__w_PM_0;
    CData/*1:0*/ tb_spmu__DOT__w_PM_1;
    CData/*1:0*/ tb_spmu__DOT__w_PM_2;
    CData/*1:0*/ tb_spmu__DOT__w_PM_3;
    CData/*1:0*/ tb_spmu__DOT__spmu__DOT__u_state_machine__DOT__state;
    CData/*1:0*/ tb_spmu__DOT__spmu__DOT__u_state_machine__DOT__nstate;
    CData/*0:0*/ tb_spmu__DOT__spmu__DOT__u_state_machine__DOT__w_decision_bit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_spmu__DOT__i_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_spmu__DOT__i_rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h6b6052f2__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_spmu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_spmu___024root(Vtb_spmu__Syms* symsp, const char* v__name);
    ~Vtb_spmu___024root();
    VL_UNCOPYABLE(Vtb_spmu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
