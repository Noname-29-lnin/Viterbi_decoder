// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_compare.h for the primary calling header

#include "Vtb_compare__pch.h"
#include "Vtb_compare___024root.h"

VL_ATTR_COLD void Vtb_compare___024root___eval_initial__TOP(Vtb_compare___024root* vlSelf);
VlCoroutine Vtb_compare___024root___eval_initial__TOP__Vtiming__0(Vtb_compare___024root* vlSelf);

void Vtb_compare___024root___eval_initial(Vtb_compare___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_compare__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_compare___024root___eval_initial\n"); );
    // Body
    Vtb_compare___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_compare___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_compare___024root___eval_initial__TOP__Vtiming__0(Vtb_compare___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_compare__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_compare___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    CData/*0:0*/ __Vfunc_tb_compare__DOT__test__0__Vfuncout;
    __Vfunc_tb_compare__DOT__test__0__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_tb_compare__DOT__test__0__a;
    __Vfunc_tb_compare__DOT__test__0__a = 0;
    CData/*1:0*/ __Vfunc_tb_compare__DOT__test__0__b;
    __Vfunc_tb_compare__DOT__test__0__b = 0;
    CData/*0:0*/ __Vfunc_tb_compare__DOT__test__1__Vfuncout;
    __Vfunc_tb_compare__DOT__test__1__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_tb_compare__DOT__test__1__a;
    __Vfunc_tb_compare__DOT__test__1__a = 0;
    CData/*1:0*/ __Vfunc_tb_compare__DOT__test__1__b;
    __Vfunc_tb_compare__DOT__test__1__b = 0;
    CData/*0:0*/ __Vfunc_tb_compare__DOT__test__2__Vfuncout;
    __Vfunc_tb_compare__DOT__test__2__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_tb_compare__DOT__test__2__a;
    __Vfunc_tb_compare__DOT__test__2__a = 0;
    CData/*1:0*/ __Vfunc_tb_compare__DOT__test__2__b;
    __Vfunc_tb_compare__DOT__test__2__b = 0;
    // Body
    VL_WRITEF("Starting Compare_unit testbench...\n=================================\n");
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 1: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 1: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 2U;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 2: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 2: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 3U;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 3: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 3: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 4U;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 4: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 4: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 5U;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 5: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 5: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 6U;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 6: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 6: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 7U;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 7: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 7: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 8U;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 8: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 8: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 9U;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 9: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 9: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0xaU;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 10: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 10: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0xbU;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 11: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 11: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0xcU;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 12: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 12: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0xdU;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 13: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 13: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0xeU;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 14: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 14: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0xfU;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 15: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 15: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x10U;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 16: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 16: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x11U;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 17: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 17: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x12U;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 18: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 18: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x13U;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 19: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 19: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x14U;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 20: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 20: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x15U;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 21: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 21: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x16U;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 22: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 22: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x17U;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 23: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 23: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x18U;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 24: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 24: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x19U;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 25: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 25: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x1aU;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 26: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 26: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x1bU;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 27: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 27: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x1cU;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 28: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 28: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x1dU;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 29: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 29: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x1eU;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 30: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 30: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x1fU;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 31: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 31: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x20U;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 32: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 32: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x21U;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 33: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 33: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x22U;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 34: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 34: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x23U;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 35: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 35: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x24U;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 36: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 36: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x25U;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 37: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 37: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x26U;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 38: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 38: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x27U;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 39: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 39: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x28U;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 40: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 40: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x29U;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 41: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 41: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x2aU;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 42: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 42: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x2bU;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 43: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 43: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x2cU;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 44: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 44: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x2dU;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 45: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 45: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x2eU;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 46: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 46: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x2fU;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 47: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 47: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x30U;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 48: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 48: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x31U;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 49: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 49: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x32U;
    vlSelf->tb_compare__DOT__i_metric_path_0 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    vlSelf->tb_compare__DOT__i_metric_path_1 = (3U 
                                                & VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I()), (IData)(4U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_compare.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_compare__DOT__o_compare_less) 
         == ([&]() {
                    __Vfunc_tb_compare__DOT__test__0__b 
                        = vlSelf->tb_compare__DOT__i_metric_path_1;
                    __Vfunc_tb_compare__DOT__test__0__a 
                        = vlSelf->tb_compare__DOT__i_metric_path_0;
                    __Vfunc_tb_compare__DOT__test__0__Vfuncout 
                        = ((IData)(__Vfunc_tb_compare__DOT__test__0__a) 
                           <= (IData)(__Vfunc_tb_compare__DOT__test__0__b));
                }(), (IData)(__Vfunc_tb_compare__DOT__test__0__Vfuncout)))) {
        VL_WRITEF("Test case 50: PASS - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__1__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__1__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__1__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__1__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__1__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__1__Vfuncout)));
        vlSelf->tb_compare__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__pass_count);
    } else {
        VL_WRITEF("Test case 50: FAIL - Inputs: %b, %b | Output: %b | Expected: %b\n",
                  2,vlSelf->tb_compare__DOT__i_metric_path_0,
                  2,(IData)(vlSelf->tb_compare__DOT__i_metric_path_1),
                  1,vlSelf->tb_compare__DOT__o_compare_less,
                  1,([&]() {
                        __Vfunc_tb_compare__DOT__test__2__b 
                            = vlSelf->tb_compare__DOT__i_metric_path_1;
                        __Vfunc_tb_compare__DOT__test__2__a 
                            = vlSelf->tb_compare__DOT__i_metric_path_0;
                        __Vfunc_tb_compare__DOT__test__2__Vfuncout 
                            = ((IData)(__Vfunc_tb_compare__DOT__test__2__a) 
                               <= (IData)(__Vfunc_tb_compare__DOT__test__2__b));
                    }(), (IData)(__Vfunc_tb_compare__DOT__test__2__Vfuncout)));
        vlSelf->tb_compare__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_compare__DOT__fail_count);
    }
    vlSelf->tb_compare__DOT__test_case = 0x33U;
    VL_WRITEF("\nTest Summary:\n=============\nTotal tests : %0d\nPassed      : %0d\nFailed      : %0d\nPass rate   : %0.2f%%\n",
              32,(vlSelf->tb_compare__DOT__test_case 
                  - (IData)(1U)),32,vlSelf->tb_compare__DOT__pass_count,
              32,vlSelf->tb_compare__DOT__fail_count,
              64,(100.0 * (VL_ISTOR_D_I(32, vlSelf->tb_compare__DOT__pass_count) 
                           / VL_ISTOR_D_I(32, (vlSelf->tb_compare__DOT__test_case 
                                               - (IData)(1U))))));
    VL_FINISH_MT("tb_compare.sv", 66, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT void Vtb_compare___024root___act_sequent__TOP__0(Vtb_compare___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_compare__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_compare___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_compare__DOT__o_compare_less = (1U & 
                                               ((IData)(
                                                        (0U 
                                                         == (IData)(vlSelf->tb_compare__DOT__i_metric_path_0))) 
                                                | ((IData)(
                                                           (3U 
                                                            == (IData)(vlSelf->tb_compare__DOT__i_metric_path_1))) 
                                                   | (((~ 
                                                        ((IData)(vlSelf->tb_compare__DOT__i_metric_path_0) 
                                                         >> 1U)) 
                                                       & (IData)(vlSelf->tb_compare__DOT__i_metric_path_1)) 
                                                      | ((IData)(
                                                                 (3U 
                                                                  != (IData)(vlSelf->tb_compare__DOT__i_metric_path_0))) 
                                                         & ((IData)(vlSelf->tb_compare__DOT__i_metric_path_1) 
                                                            >> 1U))))));
}

void Vtb_compare___024root___eval_act(Vtb_compare___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_compare__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_compare___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_compare___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_compare___024root___eval_nba(Vtb_compare___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_compare__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_compare___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_compare___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_compare___024root___timing_resume(Vtb_compare___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_compare__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_compare___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_compare___024root___eval_triggers__act(Vtb_compare___024root* vlSelf);

bool Vtb_compare___024root___eval_phase__act(Vtb_compare___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_compare__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_compare___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_compare___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_compare___024root___timing_resume(vlSelf);
        Vtb_compare___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_compare___024root___eval_phase__nba(Vtb_compare___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_compare__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_compare___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_compare___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_compare___024root___dump_triggers__nba(Vtb_compare___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_compare___024root___dump_triggers__act(Vtb_compare___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_compare___024root___eval(Vtb_compare___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_compare__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_compare___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_compare___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_compare.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_compare___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_compare.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_compare___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_compare___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_compare___024root___eval_debug_assertions(Vtb_compare___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_compare__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_compare___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
