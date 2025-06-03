module Viterbi_decoding(
    input  logic       i_clk,      // Clock input
    input  logic       i_rst_n,    // Active-low reset
    input  logic       i_valid,    
    input  logic [1:0] i_data,     // 2-bit input data
    output logic       o_decision,     // Decoded output bit
    output logic       o_valid     // Valid output indicator
);

// wire [1:0] w_iBM_0, w_iBM_1, w_iBM_2, w_iBM_3;
wire [1:0] w_oBM_0, w_oBM_1, w_oBM_2, w_oBM_3;
wire [1:0] w_iPM_0, w_iPM_1, w_iPM_2, w_iPM_3;
wire [1:0] w_oPM_0, w_oPM_1, w_oPM_2, w_oPM_3;

Branch_metric_unit #(
    .SIZE_DATA (2)
) BMU (
    .i_data     (i_data),
    .o_BM_0     (w_oBM_0),
    .o_BM_1     (w_oBM_1),
    .o_BM_2     (w_oBM_2),
    .o_BM_3     (w_oBM_3)
);

Path_metric_unit #(
    .SIZE_DATA (2)
) PMU (
    .i_clk          (i_clk),
    .i_rst_n        (i_rst_n),
    .i_valid        (i_valid),
    .i_PM_0         (w_oPM_0),
    .i_PM_1         (w_oPM_1),
    .i_PM_2         (w_oPM_2),
    .i_PM_3         (w_oPM_3),
    .o_PM_0         (w_iPM_0),
    .o_PM_1         (w_iPM_1),
    .o_PM_2         (w_iPM_2),
    .o_PM_3         (w_iPM_3)
);

Add_compare_select_unit ACSU(
    .i_BM_0      (w_oBM_0),
    .i_BM_1      (w_oBM_1),
    .i_BM_2      (w_oBM_2),
    .i_BM_3      (w_oBM_3),
    .i_PM_0      (w_iPM_0),
    .i_PM_1      (w_iPM_1),
    .i_PM_2      (w_iPM_2),
    .i_PM_3      (w_iPM_3),
    .o_PM_0      (w_oPM_0),
    .o_PM_1      (w_oPM_1),
    .o_PM_2      (w_oPM_2),
    .o_PM_3      (w_oPM_3)  
);

Survivor_path_memory_unit SPMU(
    .i_clk       (i_clk),
    .i_rst_n     (i_rst_n),
    .i_valid     (i_valid),
    .i_PM_0      (w_oPM_0),
    .i_PM_1      (w_oPM_1),
    .i_PM_2      (w_oPM_2),
    .i_PM_3      (w_oPM_3),
    .o_decision  (o_decision),
    .o_valid     (o_valid)
);

endmodule

