module Hamming_distance(
    input logic [1:0]       i_data              ,
    input logic [1:0]       i_exp_code          ,
    output logic [1:0]      o_hamming_distance  
);

wire w_data_0, w_data_1;

assign w_data_0 = i_data[0] ^ i_exp_code[0];
assign w_data_1 = i_data[1] ^ i_exp_code[1];

Full_adder FA(
    .i_a     (w_data_0),
    .i_b     (w_data_1),
    .i_c     (1'b0),
    .o_s     (o_hamming_distance[0]),
    .o_c     (o_hamming_distance[1])
);

endmodule
