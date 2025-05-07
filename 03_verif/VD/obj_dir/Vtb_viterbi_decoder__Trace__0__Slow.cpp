// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_viterbi_decoder__Syms.h"


VL_ATTR_COLD void Vtb_viterbi_decoder___024root__trace_init_sub__TOP__0(Vtb_viterbi_decoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_viterbi_decoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+71,0,"i_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"i_rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"TESTCASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("i_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+13,0,"w_idata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+31,0,"w_odata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"w_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+71,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+31,0,"o_decision",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"o_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"w_BM_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+34,0,"w_BM_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+35,0,"w_BM_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+36,0,"w_BM_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+37,0,"w_iPM_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+38,0,"w_iPM_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+39,0,"w_iPM_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+40,0,"w_iPM_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"w_oPM_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+42,0,"w_oPM_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+43,0,"w_oPM_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+44,0,"w_oPM_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+45,0,"w_valid_BMU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"w_valid_ACSU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"w_valid_PMU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"w_valid_SPMU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ACSU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+33,0,"i_BM_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+34,0,"i_BM_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+35,0,"i_BM_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+36,0,"i_BM_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+47,0,"i_PM_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+48,0,"i_PM_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+49,0,"i_PM_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+50,0,"i_PM_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+51,0,"o_PM_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+52,0,"o_PM_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+53,0,"o_PM_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+54,0,"o_PM_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+73,0,"o_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"w_PM_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+52,0,"w_PM_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+53,0,"w_PM_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+54,0,"w_PM_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("ACS_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+33,0,"i_BM_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+36,0,"i_BM_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+47,0,"i_PM_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+48,0,"i_PM_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+51,0,"o_PM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+55,0,"w_metric_path_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+56,0,"w_metric_path_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+57,0,"w_compare_less",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ADD0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+33,0,"i_BM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+47,0,"i_PM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+55,0,"o_PM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("ADD1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+36,0,"i_BM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+48,0,"i_PM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+56,0,"o_PM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("CP", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+55,0,"i_metric_path_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+56,0,"i_metric_path_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+57,0,"o_compare_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ACS_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+35,0,"i_BM_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+34,0,"i_BM_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+49,0,"i_PM_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+50,0,"i_PM_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+52,0,"o_PM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+58,0,"w_metric_path_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+59,0,"w_metric_path_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+60,0,"w_compare_less",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ADD0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+35,0,"i_BM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+49,0,"i_PM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+58,0,"o_PM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("ADD1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+34,0,"i_BM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+50,0,"i_PM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+59,0,"o_PM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("CP", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+58,0,"i_metric_path_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+59,0,"i_metric_path_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+60,0,"o_compare_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ACS_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+36,0,"i_BM_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+33,0,"i_BM_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+47,0,"i_PM_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+48,0,"i_PM_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+53,0,"o_PM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+61,0,"w_metric_path_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+62,0,"w_metric_path_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+63,0,"w_compare_less",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ADD0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+36,0,"i_BM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+47,0,"i_PM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+61,0,"o_PM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("ADD1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+33,0,"i_BM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+48,0,"i_PM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+62,0,"o_PM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("CP", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+61,0,"i_metric_path_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+62,0,"i_metric_path_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+63,0,"o_compare_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ACS_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+34,0,"i_BM_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+35,0,"i_BM_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+49,0,"i_PM_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+50,0,"i_PM_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+54,0,"o_PM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+64,0,"w_metric_path_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+65,0,"w_metric_path_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+66,0,"w_compare_less",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ADD0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+34,0,"i_BM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+49,0,"i_PM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+64,0,"o_PM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("ADD1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+35,0,"i_BM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+50,0,"i_PM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+65,0,"o_PM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("CP", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+64,0,"i_metric_path_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+65,0,"i_metric_path_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+66,0,"o_compare_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("BMU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+71,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+33,0,"o_BM_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+34,0,"o_BM_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+35,0,"o_BM_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+36,0,"o_BM_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+45,0,"o_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"w_BM_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+15,0,"w_BM_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+16,0,"w_BM_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+17,0,"w_BM_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("HD0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+74,0,"i_exp_code",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+14,0,"o_hamming_distance",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+18,0,"w_data_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"w_data_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+18,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("HD1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+76,0,"i_exp_code",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+15,0,"o_hamming_distance",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+22,0,"w_data_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"w_data_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+22,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("HD2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+77,0,"i_exp_code",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+16,0,"o_hamming_distance",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+18,0,"w_data_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"w_data_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+18,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("HD3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+78,0,"i_exp_code",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+17,0,"o_hamming_distance",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+22,0,"w_data_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"w_data_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+22,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PMU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+71,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"i_PM_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+52,0,"i_PM_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+53,0,"i_PM_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+54,0,"i_PM_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+47,0,"o_PM_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+48,0,"o_PM_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+49,0,"o_PM_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+50,0,"o_PM_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+46,0,"o_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("SPMU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+71,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"i_PM_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+52,0,"i_PM_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+53,0,"i_PM_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+54,0,"i_PM_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+31,0,"o_decision",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"o_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"w_compare_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"w_compare_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("CP0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+51,0,"i_metric_path_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+53,0,"i_metric_path_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+67,0,"o_compare_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("CP1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+52,0,"i_metric_path_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+54,0,"i_metric_path_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+68,0,"o_compare_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_state_machine", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+71,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"i_compare_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"i_compare_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"o_decision",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"o_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"S0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+76,0,"S1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+77,0,"S2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+78,0,"S3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+69,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+70,0,"nstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+31,0,"w_decision_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+30,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_viterbi_decoder___024root__trace_init_top(Vtb_viterbi_decoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root__trace_init_top\n"); );
    // Body
    Vtb_viterbi_decoder___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_viterbi_decoder___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_viterbi_decoder___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_viterbi_decoder___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_viterbi_decoder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_viterbi_decoder___024root__trace_register(Vtb_viterbi_decoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_viterbi_decoder___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_viterbi_decoder___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_viterbi_decoder___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_viterbi_decoder___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_viterbi_decoder___024root__trace_const_0_sub_0(Vtb_viterbi_decoder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_viterbi_decoder___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root__trace_const_0\n"); );
    // Init
    Vtb_viterbi_decoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_viterbi_decoder___024root*>(voidSelf);
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_viterbi_decoder___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_viterbi_decoder___024root__trace_const_0_sub_0(Vtb_viterbi_decoder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+72,(0xbU),32);
    bufp->fullBit(oldp+73,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_valid_ACSU));
    bufp->fullCData(oldp+74,(0U),2);
    bufp->fullBit(oldp+75,(0U));
    bufp->fullCData(oldp+76,(1U),2);
    bufp->fullCData(oldp+77,(2U),2);
    bufp->fullCData(oldp+78,(3U),2);
}

VL_ATTR_COLD void Vtb_viterbi_decoder___024root__trace_full_0_sub_0(Vtb_viterbi_decoder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_viterbi_decoder___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root__trace_full_0\n"); );
    // Init
    Vtb_viterbi_decoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_viterbi_decoder___024root*>(voidSelf);
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_viterbi_decoder___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_viterbi_decoder___024root__trace_full_0_sub_0(Vtb_viterbi_decoder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_viterbi_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_viterbi_decoder___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->tb_viterbi_decoder__DOT__i_data[0]),2);
    bufp->fullCData(oldp+2,(vlSelf->tb_viterbi_decoder__DOT__i_data[1]),2);
    bufp->fullCData(oldp+3,(vlSelf->tb_viterbi_decoder__DOT__i_data[2]),2);
    bufp->fullCData(oldp+4,(vlSelf->tb_viterbi_decoder__DOT__i_data[3]),2);
    bufp->fullCData(oldp+5,(vlSelf->tb_viterbi_decoder__DOT__i_data[4]),2);
    bufp->fullCData(oldp+6,(vlSelf->tb_viterbi_decoder__DOT__i_data[5]),2);
    bufp->fullCData(oldp+7,(vlSelf->tb_viterbi_decoder__DOT__i_data[6]),2);
    bufp->fullCData(oldp+8,(vlSelf->tb_viterbi_decoder__DOT__i_data[7]),2);
    bufp->fullCData(oldp+9,(vlSelf->tb_viterbi_decoder__DOT__i_data[8]),2);
    bufp->fullCData(oldp+10,(vlSelf->tb_viterbi_decoder__DOT__i_data[9]),2);
    bufp->fullCData(oldp+11,(vlSelf->tb_viterbi_decoder__DOT__i_data[10]),2);
    bufp->fullBit(oldp+12,(vlSelf->tb_viterbi_decoder__DOT__i_rst_n));
    bufp->fullCData(oldp+13,(vlSelf->tb_viterbi_decoder__DOT__w_idata),2);
    bufp->fullCData(oldp+14,((((IData)((3U == (IData)(vlSelf->tb_viterbi_decoder__DOT__w_idata))) 
                               << 1U) | (1U & VL_REDXOR_2(vlSelf->tb_viterbi_decoder__DOT__w_idata)))),2);
    bufp->fullCData(oldp+15,((((IData)((2U == (IData)(vlSelf->tb_viterbi_decoder__DOT__w_idata))) 
                               << 1U) | (1U & (~ VL_REDXOR_2(vlSelf->tb_viterbi_decoder__DOT__w_idata))))),2);
    bufp->fullCData(oldp+16,((((IData)((1U == (IData)(vlSelf->tb_viterbi_decoder__DOT__w_idata))) 
                               << 1U) | (1U & (~ VL_REDXOR_2(vlSelf->tb_viterbi_decoder__DOT__w_idata))))),2);
    bufp->fullCData(oldp+17,((((IData)((0U == (IData)(vlSelf->tb_viterbi_decoder__DOT__w_idata))) 
                               << 1U) | (1U & VL_REDXOR_2(vlSelf->tb_viterbi_decoder__DOT__w_idata)))),2);
    bufp->fullBit(oldp+18,((1U & (IData)(vlSelf->tb_viterbi_decoder__DOT__w_idata))));
    bufp->fullBit(oldp+19,((1U & ((IData)(vlSelf->tb_viterbi_decoder__DOT__w_idata) 
                                  >> 1U))));
    bufp->fullBit(oldp+20,((1U & VL_REDXOR_2(vlSelf->tb_viterbi_decoder__DOT__w_idata))));
    bufp->fullBit(oldp+21,((IData)((3U == (IData)(vlSelf->tb_viterbi_decoder__DOT__w_idata)))));
    bufp->fullBit(oldp+22,((1U & (~ (IData)(vlSelf->tb_viterbi_decoder__DOT__w_idata)))));
    bufp->fullBit(oldp+23,((1U & (~ VL_REDXOR_2(vlSelf->tb_viterbi_decoder__DOT__w_idata)))));
    bufp->fullBit(oldp+24,((IData)((2U == (IData)(vlSelf->tb_viterbi_decoder__DOT__w_idata)))));
    bufp->fullBit(oldp+25,((1U & (~ ((IData)(vlSelf->tb_viterbi_decoder__DOT__w_idata) 
                                     >> 1U)))));
    bufp->fullBit(oldp+26,((1U & (~ VL_REDXOR_2(vlSelf->tb_viterbi_decoder__DOT__w_idata)))));
    bufp->fullBit(oldp+27,((IData)((1U == (IData)(vlSelf->tb_viterbi_decoder__DOT__w_idata)))));
    bufp->fullBit(oldp+28,((1U & VL_REDXOR_2(vlSelf->tb_viterbi_decoder__DOT__w_idata))));
    bufp->fullBit(oldp+29,((IData)((0U == (IData)(vlSelf->tb_viterbi_decoder__DOT__w_idata)))));
    bufp->fullIData(oldp+30,(vlSelf->tb_viterbi_decoder__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+31,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__SPMU__DOT__u_state_machine__DOT__w_decision_bit));
    bufp->fullBit(oldp+32,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_valid_SPMU));
    bufp->fullCData(oldp+33,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_0),2);
    bufp->fullCData(oldp+34,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_1),2);
    bufp->fullCData(oldp+35,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_2),2);
    bufp->fullCData(oldp+36,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_BM_3),2);
    bufp->fullCData(oldp+37,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_0),8);
    bufp->fullCData(oldp+38,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_1),8);
    bufp->fullCData(oldp+39,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_2),8);
    bufp->fullCData(oldp+40,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_3),8);
    bufp->fullCData(oldp+41,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_0),8);
    bufp->fullCData(oldp+42,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_1),8);
    bufp->fullCData(oldp+43,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_2),8);
    bufp->fullCData(oldp+44,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_3),8);
    bufp->fullBit(oldp+45,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_valid_BMU));
    bufp->fullBit(oldp+46,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__w_valid_PMU));
    bufp->fullCData(oldp+47,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_0),2);
    bufp->fullCData(oldp+48,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_1),2);
    bufp->fullCData(oldp+49,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_2),2);
    bufp->fullCData(oldp+50,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT____Vcellout__PMU__o_PM_3),2);
    bufp->fullCData(oldp+51,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_0),2);
    bufp->fullCData(oldp+52,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_1),2);
    bufp->fullCData(oldp+53,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_2),2);
    bufp->fullCData(oldp+54,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_3),2);
    bufp->fullCData(oldp+55,((((IData)(vlSelf->__VdfgTmp_h9b75ad84__0) 
                               << 1U) | (IData)(vlSelf->__VdfgTmp_h9c4dba9f__0))),2);
    bufp->fullCData(oldp+56,((((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113151f5__0) 
                               << 1U) | (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113e01e8__0))),2);
    bufp->fullBit(oldp+57,((1U & (((~ (IData)(vlSelf->__VdfgTmp_h9c4dba9f__0)) 
                                   & (~ (IData)(vlSelf->__VdfgTmp_h9b75ad84__0))) 
                                  | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113e01e8__0) 
                                      & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113151f5__0)) 
                                     | (((~ (IData)(vlSelf->__VdfgTmp_h9b75ad84__0)) 
                                         & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113e01e8__0)) 
                                        | (((~ (IData)(vlSelf->__VdfgTmp_h9b75ad84__0)) 
                                            | (~ (IData)(vlSelf->__VdfgTmp_h9c4dba9f__0))) 
                                           & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_0__DOT__CP__DOT____VdfgTmp_h113151f5__0))))))));
    bufp->fullCData(oldp+58,((((IData)(vlSelf->__VdfgTmp_h232da30f__0) 
                               << 1U) | (IData)(vlSelf->__VdfgTmp_h56a62d2e__0))),2);
    bufp->fullCData(oldp+59,((((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113151f5__0) 
                               << 1U) | (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113e01e8__0))),2);
    bufp->fullBit(oldp+60,((1U & (((~ (IData)(vlSelf->__VdfgTmp_h56a62d2e__0)) 
                                   & (~ (IData)(vlSelf->__VdfgTmp_h232da30f__0))) 
                                  | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113e01e8__0) 
                                      & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113151f5__0)) 
                                     | (((~ (IData)(vlSelf->__VdfgTmp_h232da30f__0)) 
                                         & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113e01e8__0)) 
                                        | (((~ (IData)(vlSelf->__VdfgTmp_h232da30f__0)) 
                                            | (~ (IData)(vlSelf->__VdfgTmp_h56a62d2e__0))) 
                                           & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_1__DOT__CP__DOT____VdfgTmp_h113151f5__0))))))));
    bufp->fullCData(oldp+61,((((IData)(vlSelf->__VdfgTmp_hcc858198__0) 
                               << 1U) | (IData)(vlSelf->__VdfgTmp_h79beb834__0))),2);
    bufp->fullCData(oldp+62,((((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113151f5__0) 
                               << 1U) | (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113e01e8__0))),2);
    bufp->fullBit(oldp+63,((1U & (((~ (IData)(vlSelf->__VdfgTmp_h79beb834__0)) 
                                   & (~ (IData)(vlSelf->__VdfgTmp_hcc858198__0))) 
                                  | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113e01e8__0) 
                                      & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113151f5__0)) 
                                     | (((~ (IData)(vlSelf->__VdfgTmp_hcc858198__0)) 
                                         & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113e01e8__0)) 
                                        | (((~ (IData)(vlSelf->__VdfgTmp_hcc858198__0)) 
                                            | (~ (IData)(vlSelf->__VdfgTmp_h79beb834__0))) 
                                           & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_2__DOT__CP__DOT____VdfgTmp_h113151f5__0))))))));
    bufp->fullCData(oldp+64,((((IData)(vlSelf->__VdfgTmp_h4de230f3__0) 
                               << 1U) | (IData)(vlSelf->__VdfgTmp_h9f5944a7__0))),2);
    bufp->fullCData(oldp+65,((((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113151f5__0) 
                               << 1U) | (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113e01e8__0))),2);
    bufp->fullBit(oldp+66,((1U & (((~ (IData)(vlSelf->__VdfgTmp_h9f5944a7__0)) 
                                   & (~ (IData)(vlSelf->__VdfgTmp_h4de230f3__0))) 
                                  | (((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113e01e8__0) 
                                      & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113151f5__0)) 
                                     | (((~ (IData)(vlSelf->__VdfgTmp_h4de230f3__0)) 
                                         & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113e01e8__0)) 
                                        | (((~ (IData)(vlSelf->__VdfgTmp_h4de230f3__0)) 
                                            | (~ (IData)(vlSelf->__VdfgTmp_h9f5944a7__0))) 
                                           & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__ACS_3__DOT__CP__DOT____VdfgTmp_h113151f5__0))))))));
    bufp->fullBit(oldp+67,((1U & ((IData)((0U == (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_0))) 
                                  | ((IData)((3U == (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_2))) 
                                     | (((~ ((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_0) 
                                             >> 1U)) 
                                         & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_2)) 
                                        | ((IData)(
                                                   (3U 
                                                    != (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_0))) 
                                           & ((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_2) 
                                              >> 1U))))))));
    bufp->fullBit(oldp+68,((1U & ((IData)((0U == (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_1))) 
                                  | ((IData)((3U == (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_3))) 
                                     | (((~ ((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_1) 
                                             >> 1U)) 
                                         & (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_3)) 
                                        | ((IData)(
                                                   (3U 
                                                    != (IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_1))) 
                                           & ((IData)(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__ACSU__DOT__w_PM_3) 
                                              >> 1U))))))));
    bufp->fullCData(oldp+69,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__SPMU__DOT__u_state_machine__DOT__state),2);
    bufp->fullCData(oldp+70,(vlSelf->tb_viterbi_decoder__DOT__dut__DOT__SPMU__DOT__u_state_machine__DOT__nstate),2);
    bufp->fullBit(oldp+71,(vlSelf->tb_viterbi_decoder__DOT__i_clk));
}
