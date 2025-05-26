module Add_compare_select_unit(
    input logic [1:0]   i_BM_0      ,
    input logic [1:0]   i_BM_1      ,
    input logic [1:0]   i_BM_2      ,
    input logic [1:0]   i_BM_3      ,
    input logic [1:0]   i_PM_0     ,
    input logic [1:0]   i_PM_1     ,
    input logic [1:0]   i_PM_2     ,
    input logic [1:0]   i_PM_3     ,
    output logic [1:0]  o_PM_0     ,
    output logic [1:0]  o_PM_1     ,
    output logic [1:0]  o_PM_2     ,
    output logic [1:0]  o_PM_3     
);

wire [1:0] w_PM_0, w_PM_1, w_PM_2, w_PM_3;

ACS ACS_0(
    .i_BM_0      (i_BM_0),
    .i_BM_1      (i_BM_3),
    .i_PM_0      (i_PM_0),
    .i_PM_1      (i_PM_1),
    .o_PM        (w_PM_0)
);
ACS ACS_1(
    .i_BM_0      (i_BM_2),
    .i_BM_1      (i_BM_1),
    .i_PM_0      (i_PM_2),
    .i_PM_1      (i_PM_3),
    .o_PM        (w_PM_1)
);
ACS ACS_2(
    .i_BM_0      (i_BM_3),
    .i_BM_1      (i_BM_0),
    .i_PM_0      (i_PM_0),
    .i_PM_1      (i_PM_1),
    .o_PM        (w_PM_2)
);
ACS ACS_3(
    .i_BM_0      (i_BM_1),
    .i_BM_1      (i_BM_2),
    .i_PM_0      (i_PM_2),
    .i_PM_1      (i_PM_3),
    .o_PM        (w_PM_3)
);

always_comb begin
    o_PM_0 = w_PM_0;
    o_PM_1 = w_PM_1;
    o_PM_2 = w_PM_2;
    o_PM_3 = w_PM_3;
end

endmodule

module ACS(
    input logic [1:0]   i_BM_0      ,
    input logic [1:0]   i_BM_1      ,

    input logic [1:0]   i_PM_0      ,
    input logic [1:0]   i_PM_1      ,

    output logic [1:0]  o_PM        
);

wire [1:0] w_metric_path_0, w_metric_path_1;
wire w_compare_less;
Add_unit ADD0(
    .i_BM    (i_BM_0),
    .i_PM    (i_PM_0),
    .o_PM    (w_metric_path_0)
);
Add_unit ADD1(
    .i_BM    (i_BM_1),
    .i_PM    (i_PM_1),
    .o_PM    (w_metric_path_1)
);

Compare_unit CP(
    .i_metric_path_0    (w_metric_path_0),  // A
    .i_metric_path_1    (w_metric_path_1),  // B
    .o_compare_less     (w_compare_less)
);

always_comb begin
    if (w_compare_less) begin
        o_PM = w_metric_path_0;
    end else begin
        o_PM = w_metric_path_1;
    end
end

endmodule
