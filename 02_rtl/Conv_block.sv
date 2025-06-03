module Conv_block #(
    parameter SIZE_IN       = 1,
    parameter SIZE_OUT      = 2
)(
    input logic                 i_clk   ,
    input logic                 i_rst_n ,
    input logic                 i_start ,
    input logic [SIZE_IN-1:0]   i_data  ,
    
    output logic [SIZE_OUT-1:0] o_data  ,
    output logic                o_valid 
);
logic [SIZE_IN-1:0] w_data_0, w_data_1, w_data_2;
assign w_data_0 = i_data;

D_FF D_FF_0(
    .i_clk      (i_clk),
    .i_rst_n    (i_rst_n),
    .i_en       (i_start),
    .i_d        (w_data_0),
    .o_q        (w_data_1)
);
D_FF D_FF_1(
    .i_clk      (i_clk),
    .i_rst_n    (i_rst_n),
    .i_en       (i_start),
    .i_d        (w_data_1),
    .o_q        (w_data_2)
);

// G = [111][101]
logic [SIZE_IN-1:0] w_odata_0;
assign w_odata_1 = w_data_0 ^ w_data_2;
logic [SIZE_IN-1:0] w_odata_1;
assign w_odata_0 = w_data_0 ^ w_data_1 ^ w_data_2;
// OUTPUT
assign o_data = {w_odata_1, w_odata_0};
assign o_valid = i_start;

endmodule

module D_FF (
    input logic i_clk,
    input logic i_rst_n,
    input logic i_en,
    input logic i_d,
    output logic o_q
);

always_ff @( posedge i_clk or negedge i_rst_n ) begin : flipflop_unit
    if(~i_rst_n) begin
        o_q <= '0;
    end else begin
        if(i_en) 
            o_q <= i_d;
        else
            o_q <= o_q; 
    end
end

endmodule
