module branch_metric_unit(
    // input logic         i_clk,
    // input logic         i_rst_n,
    // input logic         i_en,
    input logic [1:0]   i_data,
    output logic [1:0]  o_branch_metric_0,
    output logic [1:0]  o_branch_metric_1,
    output logic [1:0]  o_branch_metric_2,
    output logic [1:0]  o_branch_metric_3
);

wire [1:0] w_branch_metric_0, w_branch_metric_1, w_branch_metric_2, w_branch_metric_3; 
// State 0 
hamming_distance HD0(
    .i_data                 (i_data),
    .i_exp_code_word        (2'b00),
    .o_hamming_distance     (w_branch_metric_0)
);

// State 1 
hamming_distance HD1(
    .i_data                 (i_data),
    .i_exp_code_word        (2'b01),
    .o_hamming_distance     (w_branch_metric_1)
);

// State 2 
hamming_distance HD2(
    .i_data                 (i_data),
    .i_exp_code_word        (2'b10),
    .o_hamming_distance     (w_branch_metric_2)
);

// State 3 
hamming_distance HD3(
    .i_data                 (i_data),
    .i_exp_code_word        (2'b11),
    .o_hamming_distance     (w_branch_metric_3)
);
assign o_branch_metric_0 = w_branch_metric_0;
assign o_branch_metric_1 = w_branch_metric_1;
assign o_branch_metric_2 = w_branch_metric_2;
assign o_branch_metric_3 = w_branch_metric_3;
// Output logic 
// always_ff @(posedge i_clk or negedge i_rst_n) begin
//     if(~i_rst_n | ~i_en) begin
//         o_branch_metric_0 <= 2'b00;
//         o_branch_metric_1 <= 2'b00;
//         o_branch_metric_2 <= 2'b00;
//         o_branch_metric_3 <= 2'b00;
//     end else begin
//         o_branch_metric_0 <= w_branch_metric_0;
//         o_branch_metric_1 <= w_branch_metric_1;
//         o_branch_metric_2 <= w_branch_metric_2;
//         o_branch_metric_3 <= w_branch_metric_3;
//     end 
// end 
endmodule

