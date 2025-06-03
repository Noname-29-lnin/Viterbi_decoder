module D_FF (
    input  logic i_clk,
    input  logic i_rst_n,
    input  logic i_en,
    input  logic i_d,
    output logic o_q
);

always_ff @(posedge i_clk or negedge i_rst_n) begin
    if (!i_rst_n)
        o_q <= '0;
    else if (i_en)
        o_q <= i_d;
    else 
        o_q <= o_q;
end

endmodule
