// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_addunit__Syms.h"


VL_ATTR_COLD void Vtb_addunit___024root__trace_init_sub__TOP__0(Vtb_addunit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_addunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_addunit___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_addunit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"i_BM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2,0,"i_PM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3,0,"o_PM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+5,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+6,0,"test_case",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"i_BM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2,0,"i_PM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3,0,"o_PM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+7,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+8,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+9,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_addunit___024root__trace_init_top(Vtb_addunit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_addunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_addunit___024root__trace_init_top\n"); );
    // Body
    Vtb_addunit___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_addunit___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_addunit___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_addunit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_addunit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_addunit___024root__trace_register(Vtb_addunit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_addunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_addunit___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_addunit___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_addunit___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_addunit___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_addunit___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_addunit___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_addunit___024root__trace_const_0\n"); );
    // Init
    Vtb_addunit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_addunit___024root*>(voidSelf);
    Vtb_addunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vtb_addunit___024root__trace_full_0_sub_0(Vtb_addunit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_addunit___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_addunit___024root__trace_full_0\n"); );
    // Init
    Vtb_addunit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_addunit___024root*>(voidSelf);
    Vtb_addunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_addunit___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_addunit___024root__trace_full_0_sub_0(Vtb_addunit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_addunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_addunit___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->tb_addunit__DOT__i_BM),2);
    bufp->fullCData(oldp+2,(vlSelf->tb_addunit__DOT__i_PM),2);
    bufp->fullCData(oldp+3,(((2U & ((0xfffffffeU & (IData)(vlSelf->tb_addunit__DOT__i_PM)) 
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
                                                          != (IData)(vlSelf->tb_addunit__DOT__i_BM)))))))))),2);
    bufp->fullIData(oldp+4,(vlSelf->tb_addunit__DOT__pass_count),32);
    bufp->fullIData(oldp+5,(vlSelf->tb_addunit__DOT__fail_count),32);
    bufp->fullIData(oldp+6,(vlSelf->tb_addunit__DOT__test_case),32);
    bufp->fullIData(oldp+7,(vlSelf->tb_addunit__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+8,(vlSelf->tb_addunit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
    bufp->fullIData(oldp+9,(vlSelf->tb_addunit__DOT__unnamedblk3__DOT__k),32);
}
