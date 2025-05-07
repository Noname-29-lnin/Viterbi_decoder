// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_compare__Syms.h"


VL_ATTR_COLD void Vtb_compare___024root__trace_init_sub__TOP__0(Vtb_compare___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_compare__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_compare___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_compare", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"i_metric_path_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2,0,"i_metric_path_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+3,0,"o_compare_less",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+5,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+6,0,"test_case",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"i_metric_path_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2,0,"i_metric_path_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+3,0,"o_compare_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_compare___024root__trace_init_top(Vtb_compare___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_compare__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_compare___024root__trace_init_top\n"); );
    // Body
    Vtb_compare___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_compare___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_compare___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_compare___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_compare___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_compare___024root__trace_register(Vtb_compare___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_compare__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_compare___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_compare___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_compare___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_compare___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_compare___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_compare___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_compare___024root__trace_const_0\n"); );
    // Init
    Vtb_compare___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_compare___024root*>(voidSelf);
    Vtb_compare__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vtb_compare___024root__trace_full_0_sub_0(Vtb_compare___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_compare___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_compare___024root__trace_full_0\n"); );
    // Init
    Vtb_compare___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_compare___024root*>(voidSelf);
    Vtb_compare__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_compare___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_compare___024root__trace_full_0_sub_0(Vtb_compare___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_compare__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_compare___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->tb_compare__DOT__i_metric_path_0),2);
    bufp->fullCData(oldp+2,(vlSelf->tb_compare__DOT__i_metric_path_1),2);
    bufp->fullBit(oldp+3,((1U & ((IData)((0U == (IData)(vlSelf->tb_compare__DOT__i_metric_path_0))) 
                                 | ((IData)((3U == (IData)(vlSelf->tb_compare__DOT__i_metric_path_1))) 
                                    | (((~ ((IData)(vlSelf->tb_compare__DOT__i_metric_path_0) 
                                            >> 1U)) 
                                        & (IData)(vlSelf->tb_compare__DOT__i_metric_path_1)) 
                                       | ((IData)((3U 
                                                   != (IData)(vlSelf->tb_compare__DOT__i_metric_path_0))) 
                                          & ((IData)(vlSelf->tb_compare__DOT__i_metric_path_1) 
                                             >> 1U))))))));
    bufp->fullIData(oldp+4,(vlSelf->tb_compare__DOT__pass_count),32);
    bufp->fullIData(oldp+5,(vlSelf->tb_compare__DOT__fail_count),32);
    bufp->fullIData(oldp+6,(vlSelf->tb_compare__DOT__test_case),32);
}
