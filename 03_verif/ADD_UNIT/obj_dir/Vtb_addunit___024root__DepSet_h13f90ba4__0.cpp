// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_addunit.h for the primary calling header

#include "Vtb_addunit__pch.h"
#include "Vtb_addunit___024root.h"

VL_ATTR_COLD void Vtb_addunit___024root___eval_initial__TOP(Vtb_addunit___024root* vlSelf);
VlCoroutine Vtb_addunit___024root___eval_initial__TOP__Vtiming__0(Vtb_addunit___024root* vlSelf);

void Vtb_addunit___024root___eval_initial(Vtb_addunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_addunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_addunit___024root___eval_initial\n"); );
    // Body
    Vtb_addunit___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_addunit___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_addunit___024root___eval_initial__TOP__Vtiming__0(Vtb_addunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_addunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_addunit___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    CData/*1:0*/ __Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout;
    __Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_tb_addunit__DOT__expected_result__0__a;
    __Vfunc_tb_addunit__DOT__expected_result__0__a = 0;
    CData/*1:0*/ __Vfunc_tb_addunit__DOT__expected_result__0__b;
    __Vfunc_tb_addunit__DOT__expected_result__0__b = 0;
    CData/*2:0*/ __Vfunc_tb_addunit__DOT__expected_result__0__sum;
    __Vfunc_tb_addunit__DOT__expected_result__0__sum = 0;
    CData/*1:0*/ __Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout;
    __Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_tb_addunit__DOT__expected_result__1__a;
    __Vfunc_tb_addunit__DOT__expected_result__1__a = 0;
    CData/*1:0*/ __Vfunc_tb_addunit__DOT__expected_result__1__b;
    __Vfunc_tb_addunit__DOT__expected_result__1__b = 0;
    CData/*2:0*/ __Vfunc_tb_addunit__DOT__expected_result__1__sum;
    __Vfunc_tb_addunit__DOT__expected_result__1__sum = 0;
    CData/*1:0*/ __Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout;
    __Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_tb_addunit__DOT__expected_result__2__a;
    __Vfunc_tb_addunit__DOT__expected_result__2__a = 0;
    CData/*1:0*/ __Vfunc_tb_addunit__DOT__expected_result__2__b;
    __Vfunc_tb_addunit__DOT__expected_result__2__b = 0;
    CData/*2:0*/ __Vfunc_tb_addunit__DOT__expected_result__2__sum;
    __Vfunc_tb_addunit__DOT__expected_result__2__sum = 0;
    CData/*1:0*/ __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout;
    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_tb_addunit__DOT__expected_result__3__a;
    __Vfunc_tb_addunit__DOT__expected_result__3__a = 0;
    CData/*1:0*/ __Vfunc_tb_addunit__DOT__expected_result__3__b;
    __Vfunc_tb_addunit__DOT__expected_result__3__b = 0;
    CData/*2:0*/ __Vfunc_tb_addunit__DOT__expected_result__3__sum;
    __Vfunc_tb_addunit__DOT__expected_result__3__sum = 0;
    CData/*1:0*/ __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout;
    __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_tb_addunit__DOT__expected_result__4__a;
    __Vfunc_tb_addunit__DOT__expected_result__4__a = 0;
    CData/*1:0*/ __Vfunc_tb_addunit__DOT__expected_result__4__b;
    __Vfunc_tb_addunit__DOT__expected_result__4__b = 0;
    CData/*2:0*/ __Vfunc_tb_addunit__DOT__expected_result__4__sum;
    __Vfunc_tb_addunit__DOT__expected_result__4__sum = 0;
    CData/*1:0*/ __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout;
    __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_tb_addunit__DOT__expected_result__5__a;
    __Vfunc_tb_addunit__DOT__expected_result__5__a = 0;
    CData/*1:0*/ __Vfunc_tb_addunit__DOT__expected_result__5__b;
    __Vfunc_tb_addunit__DOT__expected_result__5__b = 0;
    CData/*2:0*/ __Vfunc_tb_addunit__DOT__expected_result__5__sum;
    __Vfunc_tb_addunit__DOT__expected_result__5__sum = 0;
    // Body
    VL_WRITEF("Starting Add_unit testbench...\n============================\n");
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = 0U;
    vlSelf->tb_addunit__DOT__i_PM = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__0__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__0__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__0__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__0__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__1__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__1__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__1__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__1__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__2__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__2__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__2__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__2__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 1U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = 0U;
    vlSelf->tb_addunit__DOT__i_PM = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__0__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__0__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__0__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__0__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__1__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__1__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__1__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__1__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__2__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__2__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__2__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__2__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = 0U;
    vlSelf->tb_addunit__DOT__i_PM = 2U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__0__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__0__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__0__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__0__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__1__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__1__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__1__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__1__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__2__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__2__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__2__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__2__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = 0U;
    vlSelf->tb_addunit__DOT__i_PM = 3U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__0__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__0__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__0__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__0__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__1__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__1__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__1__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__1__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__2__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__2__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__2__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__2__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    vlSelf->tb_addunit__DOT__unnamedblk1__DOT__i = 1U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = 1U;
    vlSelf->tb_addunit__DOT__i_PM = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__0__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__0__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__0__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__0__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__1__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__1__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__1__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__1__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__2__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__2__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__2__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__2__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 1U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = 1U;
    vlSelf->tb_addunit__DOT__i_PM = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__0__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__0__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__0__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__0__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__1__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__1__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__1__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__1__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__2__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__2__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__2__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__2__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = 1U;
    vlSelf->tb_addunit__DOT__i_PM = 2U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__0__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__0__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__0__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__0__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__1__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__1__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__1__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__1__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__2__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__2__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__2__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__2__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = 1U;
    vlSelf->tb_addunit__DOT__i_PM = 3U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__0__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__0__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__0__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__0__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__1__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__1__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__1__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__1__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__2__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__2__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__2__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__2__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    vlSelf->tb_addunit__DOT__unnamedblk1__DOT__i = 2U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = 2U;
    vlSelf->tb_addunit__DOT__i_PM = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__0__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__0__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__0__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__0__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__1__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__1__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__1__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__1__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__2__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__2__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__2__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__2__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 1U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = 2U;
    vlSelf->tb_addunit__DOT__i_PM = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__0__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__0__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__0__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__0__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__1__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__1__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__1__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__1__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__2__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__2__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__2__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__2__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = 2U;
    vlSelf->tb_addunit__DOT__i_PM = 2U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__0__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__0__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__0__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__0__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__1__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__1__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__1__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__1__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__2__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__2__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__2__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__2__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = 2U;
    vlSelf->tb_addunit__DOT__i_PM = 3U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__0__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__0__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__0__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__0__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__1__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__1__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__1__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__1__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__2__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__2__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__2__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__2__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    vlSelf->tb_addunit__DOT__unnamedblk1__DOT__i = 3U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = 3U;
    vlSelf->tb_addunit__DOT__i_PM = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__0__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__0__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__0__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__0__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__1__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__1__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__1__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__1__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__2__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__2__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__2__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__2__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 1U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = 3U;
    vlSelf->tb_addunit__DOT__i_PM = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__0__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__0__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__0__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__0__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__1__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__1__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__1__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__1__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__2__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__2__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__2__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__2__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = 3U;
    vlSelf->tb_addunit__DOT__i_PM = 2U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__0__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__0__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__0__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__0__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__1__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__1__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__1__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__1__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__2__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__2__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__2__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__2__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = 3U;
    vlSelf->tb_addunit__DOT__i_PM = 3U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__0__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__0__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__0__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__0__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__0__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__1__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__1__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__1__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__1__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__1__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__2__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__2__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__2__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__2__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__2__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    vlSelf->tb_addunit__DOT__unnamedblk1__DOT__i = 4U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 1U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 2U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 3U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 4U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 5U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 6U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 7U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 8U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 9U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 0xaU;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 0xbU;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 0xcU;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 0xdU;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 0xeU;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 0xfU;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 0x10U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 0x11U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 0x12U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 0x13U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 0x14U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 0x15U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 0x16U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 0x17U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 0x18U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 0x19U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 0x1aU;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 0x1bU;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 0x1cU;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 0x1dU;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 0x1eU;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 0x1fU;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 0x20U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 0x21U;
    vlSelf->tb_addunit__DOT__test_case = ((IData)(1U) 
                                          + vlSelf->tb_addunit__DOT__test_case);
    vlSelf->tb_addunit__DOT__i_BM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_addunit__DOT__i_PM = (3U & VL_MODDIVS_III(32, (IData)(
                                                                     VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_addunit.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_addunit__DOT__o_PM) == 
         ([&]() {
                    __Vfunc_tb_addunit__DOT__expected_result__3__b 
                        = vlSelf->tb_addunit__DOT__i_PM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__a 
                        = vlSelf->tb_addunit__DOT__i_BM;
                    __Vfunc_tb_addunit__DOT__expected_result__3__sum 
                        = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__3__a) 
                                 + (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__b)));
                    __Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout 
                        = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum))
                            ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__sum)));
                }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__3__Vfuncout)))) {
        VL_WRITEF("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__4__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__4__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__4__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__4__Vfuncout)));
        vlSelf->tb_addunit__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__pass_count);
    } else {
        VL_WRITEF("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b\n",
                  32,vlSelf->tb_addunit__DOT__test_case,
                  2,(IData)(vlSelf->tb_addunit__DOT__i_BM),
                  2,vlSelf->tb_addunit__DOT__i_PM,2,
                  (IData)(vlSelf->tb_addunit__DOT__o_PM),
                  2,([&]() {
                        __Vfunc_tb_addunit__DOT__expected_result__5__b 
                            = vlSelf->tb_addunit__DOT__i_PM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__a 
                            = vlSelf->tb_addunit__DOT__i_BM;
                        __Vfunc_tb_addunit__DOT__expected_result__5__sum 
                            = (7U & ((IData)(__Vfunc_tb_addunit__DOT__expected_result__5__a) 
                                     + (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__b)));
                        __Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum))
                                ? 3U : (3U & (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__sum)));
                    }(), (IData)(__Vfunc_tb_addunit__DOT__expected_result__5__Vfuncout)));
        vlSelf->tb_addunit__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_addunit__DOT__fail_count);
    }
    vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k = 0x22U;
    VL_WRITEF("\nTest Summary:\n=============\nTotal tests : %0d\nPassed      : %0d\nFailed      : %0d\nPass rate   : %0.2f%%\n",
              32,vlSelf->tb_addunit__DOT__test_case,
              32,vlSelf->tb_addunit__DOT__pass_count,
              32,vlSelf->tb_addunit__DOT__fail_count,
              64,(100.0 * (VL_ISTOR_D_I(32, vlSelf->tb_addunit__DOT__pass_count) 
                           / VL_ISTOR_D_I(32, vlSelf->tb_addunit__DOT__test_case))));
    VL_FINISH_MT("tb_addunit.sv", 88, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT void Vtb_addunit___024root___act_sequent__TOP__0(Vtb_addunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_addunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_addunit___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_addunit__DOT__o_PM = ((2U & ((0xfffffffeU 
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
                                                                  != (IData)(vlSelf->tb_addunit__DOT__i_BM)))))))));
}

void Vtb_addunit___024root___eval_act(Vtb_addunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_addunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_addunit___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_addunit___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_addunit___024root___eval_nba(Vtb_addunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_addunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_addunit___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_addunit___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_addunit___024root___timing_resume(Vtb_addunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_addunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_addunit___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_addunit___024root___eval_triggers__act(Vtb_addunit___024root* vlSelf);

bool Vtb_addunit___024root___eval_phase__act(Vtb_addunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_addunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_addunit___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_addunit___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_addunit___024root___timing_resume(vlSelf);
        Vtb_addunit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_addunit___024root___eval_phase__nba(Vtb_addunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_addunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_addunit___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_addunit___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_addunit___024root___dump_triggers__nba(Vtb_addunit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_addunit___024root___dump_triggers__act(Vtb_addunit___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_addunit___024root___eval(Vtb_addunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_addunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_addunit___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_addunit___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_addunit.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_addunit___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_addunit.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_addunit___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_addunit___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_addunit___024root___eval_debug_assertions(Vtb_addunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_addunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_addunit___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
