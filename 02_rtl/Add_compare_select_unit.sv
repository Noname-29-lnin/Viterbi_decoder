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
