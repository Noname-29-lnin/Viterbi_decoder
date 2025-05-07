module hamming_distance(
    input logic [1:0]   i_data,
    input logic [1:0]   i_exp_code_word,
    output logic [1:0]  o_hamming_distance
);
wire branch_metric_0, branch_metric_1;
assign branch_metric_0 = i_data[0] ^ i_exp_code_word[0];
assign branch_metric_1 = i_data[1] ^ i_exp_code_word[1];

full_adder fa(
    .i_a        (branch_metric_0),
    .i_b        (branch_metric_1),
    .i_c        (1'b0),
    .o_s        (o_hamming_distance[0]),
    .o_c        (o_hamming_distance[1])
);

endmodule
