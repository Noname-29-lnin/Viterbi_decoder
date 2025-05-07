// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_compare.h for the primary calling header

#ifndef VERILATED_VTB_COMPARE___024ROOT_H_
#define VERILATED_VTB_COMPARE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_compare__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_compare___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*1:0*/ tb_compare__DOT__i_metric_path_0;
    CData/*1:0*/ tb_compare__DOT__i_metric_path_1;
    CData/*0:0*/ tb_compare__DOT__o_compare_less;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_compare__DOT__pass_count;
    IData/*31:0*/ tb_compare__DOT__fail_count;
    IData/*31:0*/ tb_compare__DOT__test_case;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_compare__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_compare___024root(Vtb_compare__Syms* symsp, const char* v__name);
    ~Vtb_compare___024root();
    VL_UNCOPYABLE(Vtb_compare___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
