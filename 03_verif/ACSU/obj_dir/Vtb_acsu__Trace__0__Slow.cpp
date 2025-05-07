// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_acsu__Syms.h"


VL_ATTR_COLD void Vtb_acsu___024root__trace_init_sub__TOP__0(Vtb_acsu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_acsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_acsu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_acsu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+33,0,"i_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"i_rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"w_BM_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3,0,"w_BM_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"w_BM_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+5,0,"w_BM_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+23,0,"w_iPM_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+24,0,"w_iPM_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+25,0,"w_iPM_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+26,0,"w_iPM_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+27,0,"w_oPM_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+28,0,"w_oPM_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+29,0,"w_oPM_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+30,0,"w_oPM_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+31,0,"w_valid_ACSU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"w_valid_PMU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ACSU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+33,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"i_BM_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3,0,"i_BM_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"i_BM_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+5,0,"i_BM_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+23,0,"i_iPM_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+24,0,"i_iPM_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+25,0,"i_iPM_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+26,0,"i_iPM_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+27,0,"o_oPM_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+28,0,"o_oPM_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+29,0,"o_oPM_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+30,0,"o_oPM_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+31,0,"o_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"w_PM_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+8,0,"w_PM_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9,0,"w_PM_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10,0,"w_PM_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+34,0,"i_PM_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"i_PM_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"i_PM_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"i_PM_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ACS_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2,0,"i_BM_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+5,0,"i_BM_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+38,0,"i_PM_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+39,0,"i_PM_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+7,0,"o_PM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+11,0,"w_metric_path_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+12,0,"w_metric_path_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+13,0,"w_compare_less",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ADD0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2,0,"i_BM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+38,0,"i_PM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+11,0,"o_PM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("ADD1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"i_BM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+39,0,"i_PM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+12,0,"o_PM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("CP", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+11,0,"i_metric_path_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+12,0,"i_metric_path_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+13,0,"o_compare_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ACS_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+4,0,"i_BM_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3,0,"i_BM_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+40,0,"i_PM_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+41,0,"i_PM_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+8,0,"o_PM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+14,0,"w_metric_path_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+15,0,"w_metric_path_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+16,0,"w_compare_less",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ADD0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+4,0,"i_BM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+40,0,"i_PM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+14,0,"o_PM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("ADD1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+3,0,"i_BM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+41,0,"i_PM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+15,0,"o_PM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("CP", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+14,0,"i_metric_path_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+15,0,"i_metric_path_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+16,0,"o_compare_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ACS_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"i_BM_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2,0,"i_BM_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+38,0,"i_PM_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+39,0,"i_PM_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9,0,"o_PM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+17,0,"w_metric_path_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+18,0,"w_metric_path_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+19,0,"w_compare_less",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ADD0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"i_BM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+38,0,"i_PM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+17,0,"o_PM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("ADD1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2,0,"i_BM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+39,0,"i_PM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+18,0,"o_PM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("CP", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17,0,"i_metric_path_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+18,0,"i_metric_path_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+19,0,"o_compare_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ACS_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+3,0,"i_BM_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"i_BM_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+40,0,"i_PM_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+41,0,"i_PM_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10,0,"o_PM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+20,0,"w_metric_path_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+21,0,"w_metric_path_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+22,0,"w_compare_less",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ADD0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+3,0,"i_BM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+40,0,"i_PM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+20,0,"o_PM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("ADD1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+4,0,"i_BM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+41,0,"i_PM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+21,0,"o_PM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("CP", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+20,0,"i_metric_path_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+21,0,"i_metric_path_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+22,0,"o_compare_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PMU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+33,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"i_PM_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+28,0,"i_PM_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+29,0,"i_PM_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+30,0,"i_PM_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+23,0,"o_PM_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+24,0,"o_PM_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+25,0,"o_PM_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+26,0,"o_PM_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+32,0,"o_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_acsu___024root__trace_init_top(Vtb_acsu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_acsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_acsu___024root__trace_init_top\n"); );
    // Body
    Vtb_acsu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_acsu___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_acsu___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_acsu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_acsu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_acsu___024root__trace_register(Vtb_acsu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_acsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_acsu___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_acsu___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_acsu___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_acsu___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_acsu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_acsu___024root__trace_const_0_sub_0(Vtb_acsu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_acsu___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_acsu___024root__trace_const_0\n"); );
    // Init
    Vtb_acsu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_acsu___024root*>(voidSelf);
    Vtb_acsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_acsu___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_acsu___024root__trace_const_0_sub_0(Vtb_acsu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_acsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_acsu___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+34,(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_0));
    bufp->fullBit(oldp+35,(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_1));
    bufp->fullBit(oldp+36,(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_2));
    bufp->fullBit(oldp+37,(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_3));
    bufp->fullCData(oldp+38,(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_0),2);
    bufp->fullCData(oldp+39,(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_1),2);
    bufp->fullCData(oldp+40,(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_2),2);
    bufp->fullCData(oldp+41,(vlSelf->tb_acsu__DOT__ACSU__DOT__i_PM_3),2);
}

VL_ATTR_COLD void Vtb_acsu___024root__trace_full_0_sub_0(Vtb_acsu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_acsu___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_acsu___024root__trace_full_0\n"); );
    // Init
    Vtb_acsu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_acsu___024root*>(voidSelf);
    Vtb_acsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_acsu___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_acsu___024root__trace_full_0_sub_0(Vtb_acsu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_acsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_acsu___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_acsu__DOT__i_rst_n));
    bufp->fullCData(oldp+2,(vlSelf->tb_acsu__DOT__w_BM_0),2);
    bufp->fullCData(oldp+3,(vlSelf->tb_acsu__DOT__w_BM_1),2);
    bufp->fullCData(oldp+4,(vlSelf->tb_acsu__DOT__w_BM_2),2);
    bufp->fullCData(oldp+5,(vlSelf->tb_acsu__DOT__w_BM_3),2);
    bufp->fullIData(oldp+6,(vlSelf->tb_acsu__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+7,(((1U & (((~ (IData)(vlSelf->__VdfgTmp_h2cdf9eed__0)) 
                                     & (~ (IData)(vlSelf->__VdfgTmp_hd6f2d07d__0))) 
                                    | (((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113e01e8__0) 
                                        & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113151f5__0)) 
                                       | (((~ (IData)(vlSelf->__VdfgTmp_hd6f2d07d__0)) 
                                           & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113e01e8__0)) 
                                          | (((~ (IData)(vlSelf->__VdfgTmp_hd6f2d07d__0)) 
                                              | (~ (IData)(vlSelf->__VdfgTmp_h2cdf9eed__0))) 
                                             & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113151f5__0))))))
                              ? (((IData)(vlSelf->__VdfgTmp_hd6f2d07d__0) 
                                  << 1U) | (IData)(vlSelf->__VdfgTmp_h2cdf9eed__0))
                              : (((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113151f5__0) 
                                  << 1U) | (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113e01e8__0)))),2);
    bufp->fullCData(oldp+8,(((1U & (((~ (IData)(vlSelf->__VdfgTmp_h3af6e6aa__0)) 
                                     & (~ (IData)(vlSelf->__VdfgTmp_haf8536d2__0))) 
                                    | (((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113e01e8__0) 
                                        & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113151f5__0)) 
                                       | (((~ (IData)(vlSelf->__VdfgTmp_haf8536d2__0)) 
                                           & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113e01e8__0)) 
                                          | (((~ (IData)(vlSelf->__VdfgTmp_haf8536d2__0)) 
                                              | (~ (IData)(vlSelf->__VdfgTmp_h3af6e6aa__0))) 
                                             & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113151f5__0))))))
                              ? (((IData)(vlSelf->__VdfgTmp_haf8536d2__0) 
                                  << 1U) | (IData)(vlSelf->__VdfgTmp_h3af6e6aa__0))
                              : (((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113151f5__0) 
                                  << 1U) | (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113e01e8__0)))),2);
    bufp->fullCData(oldp+9,(((1U & (((~ (IData)(vlSelf->__VdfgTmp_h1c894731__0)) 
                                     & (~ (IData)(vlSelf->__VdfgTmp_h82e2fd0f__0))) 
                                    | (((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113e01e8__0) 
                                        & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113151f5__0)) 
                                       | (((~ (IData)(vlSelf->__VdfgTmp_h82e2fd0f__0)) 
                                           & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113e01e8__0)) 
                                          | (((~ (IData)(vlSelf->__VdfgTmp_h82e2fd0f__0)) 
                                              | (~ (IData)(vlSelf->__VdfgTmp_h1c894731__0))) 
                                             & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113151f5__0))))))
                              ? (((IData)(vlSelf->__VdfgTmp_h82e2fd0f__0) 
                                  << 1U) | (IData)(vlSelf->__VdfgTmp_h1c894731__0))
                              : (((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113151f5__0) 
                                  << 1U) | (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113e01e8__0)))),2);
    bufp->fullCData(oldp+10,(((1U & (((~ (IData)(vlSelf->__VdfgTmp_h1d0cb471__0)) 
                                      & (~ (IData)(vlSelf->__VdfgTmp_h3ff357c8__0))) 
                                     | (((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113e01e8__0) 
                                         & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113151f5__0)) 
                                        | (((~ (IData)(vlSelf->__VdfgTmp_h3ff357c8__0)) 
                                            & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113e01e8__0)) 
                                           | (((~ (IData)(vlSelf->__VdfgTmp_h3ff357c8__0)) 
                                               | (~ (IData)(vlSelf->__VdfgTmp_h1d0cb471__0))) 
                                              & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113151f5__0))))))
                               ? (((IData)(vlSelf->__VdfgTmp_h3ff357c8__0) 
                                   << 1U) | (IData)(vlSelf->__VdfgTmp_h1d0cb471__0))
                               : (((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113151f5__0) 
                                   << 1U) | (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113e01e8__0)))),2);
    bufp->fullCData(oldp+11,((((IData)(vlSelf->__VdfgTmp_hd6f2d07d__0) 
                               << 1U) | (IData)(vlSelf->__VdfgTmp_h2cdf9eed__0))),2);
    bufp->fullCData(oldp+12,((((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113151f5__0) 
                               << 1U) | (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113e01e8__0))),2);
    bufp->fullBit(oldp+13,((1U & (((~ (IData)(vlSelf->__VdfgTmp_h2cdf9eed__0)) 
                                   & (~ (IData)(vlSelf->__VdfgTmp_hd6f2d07d__0))) 
                                  | (((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113e01e8__0) 
                                      & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113151f5__0)) 
                                     | (((~ (IData)(vlSelf->__VdfgTmp_hd6f2d07d__0)) 
                                         & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113e01e8__0)) 
                                        | (((~ (IData)(vlSelf->__VdfgTmp_hd6f2d07d__0)) 
                                            | (~ (IData)(vlSelf->__VdfgTmp_h2cdf9eed__0))) 
                                           & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113151f5__0))))))));
    bufp->fullCData(oldp+14,((((IData)(vlSelf->__VdfgTmp_haf8536d2__0) 
                               << 1U) | (IData)(vlSelf->__VdfgTmp_h3af6e6aa__0))),2);
    bufp->fullCData(oldp+15,((((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113151f5__0) 
                               << 1U) | (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113e01e8__0))),2);
    bufp->fullBit(oldp+16,((1U & (((~ (IData)(vlSelf->__VdfgTmp_h3af6e6aa__0)) 
                                   & (~ (IData)(vlSelf->__VdfgTmp_haf8536d2__0))) 
                                  | (((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113e01e8__0) 
                                      & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113151f5__0)) 
                                     | (((~ (IData)(vlSelf->__VdfgTmp_haf8536d2__0)) 
                                         & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113e01e8__0)) 
                                        | (((~ (IData)(vlSelf->__VdfgTmp_haf8536d2__0)) 
                                            | (~ (IData)(vlSelf->__VdfgTmp_h3af6e6aa__0))) 
                                           & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113151f5__0))))))));
    bufp->fullCData(oldp+17,((((IData)(vlSelf->__VdfgTmp_h82e2fd0f__0) 
                               << 1U) | (IData)(vlSelf->__VdfgTmp_h1c894731__0))),2);
    bufp->fullCData(oldp+18,((((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113151f5__0) 
                               << 1U) | (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113e01e8__0))),2);
    bufp->fullBit(oldp+19,((1U & (((~ (IData)(vlSelf->__VdfgTmp_h1c894731__0)) 
                                   & (~ (IData)(vlSelf->__VdfgTmp_h82e2fd0f__0))) 
                                  | (((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113e01e8__0) 
                                      & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113151f5__0)) 
                                     | (((~ (IData)(vlSelf->__VdfgTmp_h82e2fd0f__0)) 
                                         & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113e01e8__0)) 
                                        | (((~ (IData)(vlSelf->__VdfgTmp_h82e2fd0f__0)) 
                                            | (~ (IData)(vlSelf->__VdfgTmp_h1c894731__0))) 
                                           & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113151f5__0))))))));
    bufp->fullCData(oldp+20,((((IData)(vlSelf->__VdfgTmp_h3ff357c8__0) 
                               << 1U) | (IData)(vlSelf->__VdfgTmp_h1d0cb471__0))),2);
    bufp->fullCData(oldp+21,((((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113151f5__0) 
                               << 1U) | (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113e01e8__0))),2);
    bufp->fullBit(oldp+22,((1U & (((~ (IData)(vlSelf->__VdfgTmp_h1d0cb471__0)) 
                                   & (~ (IData)(vlSelf->__VdfgTmp_h3ff357c8__0))) 
                                  | (((IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113e01e8__0) 
                                      & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113151f5__0)) 
                                     | (((~ (IData)(vlSelf->__VdfgTmp_h3ff357c8__0)) 
                                         & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113e01e8__0)) 
                                        | (((~ (IData)(vlSelf->__VdfgTmp_h3ff357c8__0)) 
                                            | (~ (IData)(vlSelf->__VdfgTmp_h1d0cb471__0))) 
                                           & (IData)(vlSelf->tb_acsu__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113151f5__0))))))));
    bufp->fullCData(oldp+23,(vlSelf->tb_acsu__DOT__w_iPM_0),2);
    bufp->fullCData(oldp+24,(vlSelf->tb_acsu__DOT__w_iPM_1),2);
    bufp->fullCData(oldp+25,(vlSelf->tb_acsu__DOT__w_iPM_2),2);
    bufp->fullCData(oldp+26,(vlSelf->tb_acsu__DOT__w_iPM_3),2);
    bufp->fullCData(oldp+27,(vlSelf->tb_acsu__DOT__w_oPM_0),2);
    bufp->fullCData(oldp+28,(vlSelf->tb_acsu__DOT__w_oPM_1),2);
    bufp->fullCData(oldp+29,(vlSelf->tb_acsu__DOT__w_oPM_2),2);
    bufp->fullCData(oldp+30,(vlSelf->tb_acsu__DOT__w_oPM_3),2);
    bufp->fullBit(oldp+31,(vlSelf->tb_acsu__DOT__w_valid_ACSU));
    bufp->fullBit(oldp+32,(vlSelf->tb_acsu__DOT__w_valid_PMU));
    bufp->fullBit(oldp+33,(vlSelf->tb_acsu__DOT__i_clk));
}
