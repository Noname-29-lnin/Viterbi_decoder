// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_bmu.h for the primary calling header

#ifndef VERILATED_VTB_BMU___024ROOT_H_
#define VERILATED_VTB_BMU___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_bmu___024unit;


class Vtb_bmu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_bmu___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_bmu___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_bmu__DOT__i_clk;
    CData/*0:0*/ tb_bmu__DOT__i_rst_n;
    CData/*0:0*/ tb_bmu__DOT__w_valid;
    CData/*1:0*/ tb_bmu__DOT__w_idata;
    CData/*1:0*/ tb_bmu__DOT__w_BM_0;
    CData/*1:0*/ tb_bmu__DOT__w_BM_1;
    CData/*1:0*/ tb_bmu__DOT__w_BM_2;
    CData/*1:0*/ tb_bmu__DOT__w_BM_3;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_bmu__DOT__i_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_bmu__DOT__i_rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hac8841ee__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_bmu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_bmu___024root(Vtb_bmu__Syms* symsp, const char* v__name);
    ~Vtb_bmu___024root();
    VL_UNCOPYABLE(Vtb_bmu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
