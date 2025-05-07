module full_adder(
    input logic     i_a,
    input logic     i_b,
    input logic     i_c,
    output logic    o_s,
    output logic    o_c
);

    assign o_s = i_a ^ i_b ^ i_c;
    assign o_c =  (i_a&i_b) | (i_a&i_c) | (i_b&i_c);

endmodule
