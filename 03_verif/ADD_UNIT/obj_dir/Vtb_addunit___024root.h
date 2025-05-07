// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_addunit.h for the primary calling header

#ifndef VERILATED_VTB_ADDUNIT___024ROOT_H_
#define VERILATED_VTB_ADDUNIT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_addunit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_addunit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*1:0*/ tb_addunit__DOT__i_BM;
    CData/*1:0*/ tb_addunit__DOT__i_PM;
    CData/*1:0*/ tb_addunit__DOT__o_PM;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_addunit__DOT__pass_count;
    IData/*31:0*/ tb_addunit__DOT__fail_count;
    IData/*31:0*/ tb_addunit__DOT__test_case;
    IData/*31:0*/ tb_addunit__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ tb_addunit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j;
    IData/*31:0*/ tb_addunit__DOT__unnamedblk3__DOT__k;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_addunit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_addunit___024root(Vtb_addunit__Syms* symsp, const char* v__name);
    ~Vtb_addunit___024root();
    VL_UNCOPYABLE(Vtb_addunit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
