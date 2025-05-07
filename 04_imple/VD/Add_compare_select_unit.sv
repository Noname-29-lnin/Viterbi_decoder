module Add_compare_select_unit(
    // input logic     i_clk,
    // input logic     i_rst_n,
    // input logic     i_en,

    input logic [1:0] i_branch_metric_0,
    input logic [1:0] i_branch_metric_1,
    input logic [1:0] i_branch_metric_2,
    input logic [1:0] i_branch_metric_3,

    input logic [1:0] i_path_metric_0,
    input logic [1:0] i_path_metric_1,
    input logic [1:0] i_path_metric_2,
    input logic [1:0] i_path_metric_3,

    output logic [1:0] o_path_metric_0,
    output logic [1:0] o_path_metric_1,
    output logic [1:0] o_path_metric_2,
    output logic [1:0] o_path_metric_3

    // output logic       o_done
);

reg [1:0] w_path_metric_0, w_path_metric_1, w_path_metric_2, w_path_metric_3;
ACSU ACSU0(
    .i_branch_metric_0      (i_branch_metric_0),
    .i_branch_metric_1      (i_path_metric_0),
    .i_path_metric_0        (i_branch_metric_3),
    .i_path_metric_1        (i_path_metric_1),
    .o_path_metric          (w_path_metric_0)
);

ACSU ACSU1(
    .i_branch_metric_0      (i_branch_metric_2),
    .i_branch_metric_1      (i_path_metric_2),
    .i_path_metric_0        (i_branch_metric_1),
    .i_path_metric_1        (i_path_metric_3),
    .o_path_metric          (w_path_metric_1)
);

ACSU ACSU2(
    .i_branch_metric_0      (i_branch_metric_3),
    .i_branch_metric_1      (i_path_metric_0),
    .i_path_metric_0        (i_branch_metric_0),
    .i_path_metric_1        (i_path_metric_1),
    .o_path_metric          (w_path_metric_2)
);

ACSU ACSU3(
    .i_branch_metric_0      (i_branch_metric_1),
    .i_branch_metric_1      (i_path_metric_2),
    .i_path_metric_0        (i_branch_metric_2),
    .i_path_metric_1        (i_path_metric_3),
    .o_path_metric          (w_path_metric_3)
);

assign o_path_metric_0 = w_path_metric_0;
assign o_path_metric_1 = w_path_metric_1;
assign o_path_metric_2 = w_path_metric_2;
assign o_path_metric_3 = w_path_metric_3;
// always_ff @(posedge i_clk or negedge i_rst_n) begin
//     if(~i_rst_n | ~i_en) begin
//        o_path_metric_0 <= 2'b00;
//        o_path_metric_1 <= 2'b00;
//        o_path_metric_2 <= 2'b00;
//        o_path_metric_3 <= 2'b00;
//        o_done          <= 1'b0;
//     end else begin
//         o_path_metric_0 <= w_path_metric_0;
//         o_path_metric_1 <= w_path_metric_1;
//         o_path_metric_2 <= w_path_metric_2;
//         o_path_metric_3 <= w_path_metric_3;
//         o_done          <= 1'b1;
//     end
// end

endmodule

module ACSU(
    input logic [1:0] i_branch_metric_0,
    input logic [1:0] i_branch_metric_1,
    input logic [1:0] i_path_metric_0,
    input logic [1:0] i_path_metric_1,

    output logic [1:0] o_path_metric
);
reg [1:0] w_path_metric_0, w_path_metric_1;
reg       w_less_select;
Add_unit ADD0(
   .i_branch_metric     (i_branch_metric_0),
   .i_path_metric       (i_path_metric_0),
   .o_path_metric       (w_path_metric_0)
);

Add_unit ADD1(
   .i_branch_metric     (i_branch_metric_1),
   .i_path_metric       (i_path_metric_1),
   .o_path_metric       (w_path_metric_1)
);

Compare_unit CP0(
    .i_path_metric_0    (w_path_metric_0),
    .i_path_metric_1    (w_path_metric_1),
    .o_less_select      (w_less_select)
);

assign o_path_metric = (w_less_select) ? w_path_metric_0 : w_path_metric_1;
endmodule
