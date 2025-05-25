module Testcase1 #(
    parameter SIZE_DATA_IN = 16,
    parameter SIZE_DATA_OUT = 8
)(
    input logic i_clk,
    input logic i_rst_n,
    input logic i_start,
    input logic [SIZE_DATA_IN-1:0] i_data,
    output logic [SIZE_DATA_OUT-1:0] o_data,
    output logic o_done
);

endmodule
