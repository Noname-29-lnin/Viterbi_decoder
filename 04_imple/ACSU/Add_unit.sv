module Add_unit(
    input logic [1:0]   i_branch_metric,
    input logic [1:0]   i_path_metric,
    output logic [1:0]  o_path_metric
);

wire c0, c1, c2;
reg [2:0] sum;
full_adder  FA0(
    .i_a        (i_branch_metric[0]),
    .i_b        (i_path_metric[0]),
    .i_c        (1'b0),
    .o_s        (sum[0]),
    .o_c        (c0)
);
full_adder  FA1(
    .i_a        (i_branch_metric[1]),
    .i_b        (i_path_metric[1]),
    .i_c        (c0),
    .o_s        (sum[1]),
    .o_c        (c1)
);
full_adder  FA2(
    .i_a        (1'b0),
    .i_b        (1'b0),
    .i_c        (c1),
    .o_s        (sum[2]),
    .o_c        (c2)
);

assign o_path_metric = (sum[2]) ? 2'b11 : sum[1:0];
endmodule
