module d_ff(
    input logic         i_clk,
    input logic         i_rst_n,
    input logic         i_en,
    input logic [1:0]   i_data,
    output logic [1:0]  o_data
);
always_ff @(posedge i_clk or negedge i_rst_n) begin 
    if(!i_rst_n)    o_data <= 1'b0;
    else if(i_en)   o_data <= i_data;
    else            o_data <= o_data;
end 
endmodule
