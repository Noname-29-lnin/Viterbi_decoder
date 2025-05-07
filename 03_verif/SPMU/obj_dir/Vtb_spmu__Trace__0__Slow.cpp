// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_spmu__Syms.h"


VL_ATTR_COLD void Vtb_spmu___024root__trace_init_sub__TOP__0(Vtb_spmu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spmu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_spmu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+8,0,"i_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"i_rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"w_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"w_PM_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3,0,"w_PM_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"w_PM_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+5,0,"w_PM_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+10,0,"w_decision",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("spmu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+8,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"i_PM_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3,0,"i_PM_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"i_PM_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+5,0,"i_PM_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+10,0,"o_decision",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"o_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"w_compare_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"w_compare_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("CP0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2,0,"i_metric_path_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"i_metric_path_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+6,0,"o_compare_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("CP1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+3,0,"i_metric_path_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+5,0,"i_metric_path_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+7,0,"o_compare_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_state_machine", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+8,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"i_compare_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"i_compare_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"o_decision",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"o_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"S0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+14,0,"S1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+15,0,"S2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+16,0,"S3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+11,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+12,0,"nstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+10,0,"w_decision_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_spmu___024root__trace_init_top(Vtb_spmu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spmu___024root__trace_init_top\n"); );
    // Body
    Vtb_spmu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_spmu___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_spmu___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_spmu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_spmu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_spmu___024root__trace_register(Vtb_spmu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spmu___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_spmu___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_spmu___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_spmu___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_spmu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_spmu___024root__trace_const_0_sub_0(Vtb_spmu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_spmu___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spmu___024root__trace_const_0\n"); );
    // Init
    Vtb_spmu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_spmu___024root*>(voidSelf);
    Vtb_spmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_spmu___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_spmu___024root__trace_const_0_sub_0(Vtb_spmu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spmu___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+13,(0U),2);
    bufp->fullCData(oldp+14,(1U),2);
    bufp->fullCData(oldp+15,(2U),2);
    bufp->fullCData(oldp+16,(3U),2);
}

VL_ATTR_COLD void Vtb_spmu___024root__trace_full_0_sub_0(Vtb_spmu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_spmu___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spmu___024root__trace_full_0\n"); );
    // Init
    Vtb_spmu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_spmu___024root*>(voidSelf);
    Vtb_spmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_spmu___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_spmu___024root__trace_full_0_sub_0(Vtb_spmu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_spmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spmu___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_spmu__DOT__i_rst_n));
    bufp->fullCData(oldp+2,(vlSelf->tb_spmu__DOT__w_PM_0),2);
    bufp->fullCData(oldp+3,(vlSelf->tb_spmu__DOT__w_PM_1),2);
    bufp->fullCData(oldp+4,(vlSelf->tb_spmu__DOT__w_PM_2),2);
    bufp->fullCData(oldp+5,(vlSelf->tb_spmu__DOT__w_PM_3),2);
    bufp->fullBit(oldp+6,((1U & ((IData)((0U == (IData)(vlSelf->tb_spmu__DOT__w_PM_0))) 
                                 | ((IData)((3U == (IData)(vlSelf->tb_spmu__DOT__w_PM_2))) 
                                    | (((~ ((IData)(vlSelf->tb_spmu__DOT__w_PM_0) 
                                            >> 1U)) 
                                        & (IData)(vlSelf->tb_spmu__DOT__w_PM_2)) 
                                       | ((IData)((3U 
                                                   != (IData)(vlSelf->tb_spmu__DOT__w_PM_0))) 
                                          & ((IData)(vlSelf->tb_spmu__DOT__w_PM_2) 
                                             >> 1U))))))));
    bufp->fullBit(oldp+7,((1U & ((IData)((0U == (IData)(vlSelf->tb_spmu__DOT__w_PM_1))) 
                                 | ((IData)((3U == (IData)(vlSelf->tb_spmu__DOT__w_PM_3))) 
                                    | (((~ ((IData)(vlSelf->tb_spmu__DOT__w_PM_1) 
                                            >> 1U)) 
                                        & (IData)(vlSelf->tb_spmu__DOT__w_PM_3)) 
                                       | ((IData)((3U 
                                                   != (IData)(vlSelf->tb_spmu__DOT__w_PM_1))) 
                                          & ((IData)(vlSelf->tb_spmu__DOT__w_PM_3) 
                                             >> 1U))))))));
    bufp->fullBit(oldp+8,(vlSelf->tb_spmu__DOT__i_clk));
    bufp->fullBit(oldp+9,(vlSelf->tb_spmu__DOT__w_valid));
    bufp->fullBit(oldp+10,(vlSelf->tb_spmu__DOT__spmu__DOT__u_state_machine__DOT__w_decision_bit));
    bufp->fullCData(oldp+11,(vlSelf->tb_spmu__DOT__spmu__DOT__u_state_machine__DOT__state),2);
    bufp->fullCData(oldp+12,(vlSelf->tb_spmu__DOT__spmu__DOT__u_state_machine__DOT__nstate),2);
}
