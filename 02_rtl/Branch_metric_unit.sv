module Branch_metric_unit(
    // input logic             i_clk       ,
    // input logic             i_rst_n     ,
    // 
    // input logic             i_valid     ,
    input logic [1:0]       i_data      ,
    output logic [1:0]      o_BM_0      ,
    output logic [1:0]      o_BM_1      ,
    output logic [1:0]      o_BM_2      ,
    output logic [1:0]      o_BM_3      
    // output logic            o_valid     
);

wire [1:0] w_BM_0, w_BM_1, w_BM_2, w_BM_3;

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

// always_ff @(posedge i_clk or negedge i_rst_n) begin
//     if(!i_rst_n) begin
//         o_BM_0  <= 2'b00;
//         o_BM_1  <= 2'b00;
//         o_BM_2  <= 2'b00;
//         o_BM_3  <= 2'b00;
//         o_valid <= 1'b0;
//     end else if(!i_valid) begin
//         o_BM_0  <= o_BM_0;
//         o_BM_1  <= o_BM_1;
//         o_BM_2  <= o_BM_2;
//         o_BM_3  <= o_BM_3;
//         o_valid <= 1'b0;
//     end else begin
//         o_BM_0  <= w_BM_0;
//         o_BM_1  <= w_BM_1;
//         o_BM_2  <= w_BM_2;
//         o_BM_3  <= w_BM_3;
//         o_valid <= 1'b1;
//     end
// end

always_comb begin 
     o_BM_0  = w_BM_0;
     o_BM_1  = w_BM_1;
     o_BM_2  = w_BM_2;
     o_BM_3  = w_BM_3;
end 
endmodule
