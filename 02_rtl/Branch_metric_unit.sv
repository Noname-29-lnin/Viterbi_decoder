module Branch_metric_unit #(
    parameter SIZE_DATA = 2
)(
    input logic  [SIZE_DATA-1:0]      i_data      ,
    output logic [SIZE_DATA-1:0]      o_BM_0      ,
    output logic [SIZE_DATA-1:0]      o_BM_1      ,
    output logic [SIZE_DATA-1:0]      o_BM_2      ,
    output logic [SIZE_DATA-1:0]      o_BM_3      
    // output logic            o_valid     
);

wire [SIZE_DATA-1:0] w_BM_0, w_BM_1, w_BM_2, w_BM_3;
Hamming_distance HD0(
    .i_data                 (i_data),
    .i_exp_code             (2'b00),
    .o_hamming_distance     (w_BM_0)
);

Hamming_distance HD1(
    .i_data                 (i_data),
    .i_exp_code             (2'b01),
    .o_hamming_distance     (w_BM_1)
);

Hamming_distance HD2(
    .i_data                 (i_data),
    .i_exp_code             (2'b10),
    .o_hamming_distance     (w_BM_2)
);

Hamming_distance HD3(
    .i_data                 (i_data),
    .i_exp_code             (2'b11),
    .o_hamming_distance     (w_BM_3)
);

always_comb begin : proc_output_branch_metric
    o_BM_0  = w_BM_0;
    o_BM_1  = w_BM_1;
    o_BM_2  = w_BM_2;
    o_BM_3  = w_BM_3;
end 
endmodule
