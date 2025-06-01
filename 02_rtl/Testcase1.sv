module Testcase1 #(
    parameter SIZE_DATA_IN  = 16,
    parameter SIZE_DATA_OUT = 8,
    parameter SIZE_PISO     = 2,
    parameter SIZE_SIPO     = 1
)(
    input logic i_clk,
    input logic i_rst_n,
    input logic i_start,
    input logic [SIZE_DATA_IN-1:0] i_data,
    output logic [SIZE_DATA_OUT-1:0] o_data,
    output logic o_done
);

logic [SIZE_PISO-1:0] w_data_PISO;
logic w_valid_PISO;
// logic w_done_PISO;

// PISO #(
//     .SIZE_DATA_IN  (16),
//     .SIZE_DATA_OUT ( 2)
// ) PISO_unit (
//     .i_clk          (i_clk),
//     .i_rst_n        (i_rst_n),
//     .i_start        (i_start),
//     .i_data         (i_data),
//     .o_data         (w_data_PISO),
//     .o_valid        (w_valid_PISO),
//     .o_done         ()
// );

Input_interface_block #(
    .SIZE_IN   (16),
    .SIZE_OUT  (2 )
) IIB (
    .i_clk              (i_clk  ),
    .i_rst_n            (i_rst_n),

    .i_start            (i_start),
    .i_data             (i_data),
    .o_data             (w_data_PISO),
    .o_valid            (w_valid_PISO),
    .o_stop             ()   
);

logic w_valid_VD;
Viterbi_decoding VD_unit(
    .i_clk          (i_clk),      // Clock input
    .i_rst_n        (i_rst_n),    // Active-low reset
    .i_valid        (w_valid_PISO),    
    .i_data         (w_data_PISO),     // 2-bit input data
    .o_decision     (w_data_SIPO),     // Decoded output bit
    .o_valid        (w_valid_VD) // Valid output indicator
);

logic [SIZE_SIPO-1:0] w_data_SIPO;
logic w_done_SIPO;
SIPO #(
    .SIZE_DATA_IN  ( 1),
    .SIZE_DATA_OUT ( 8)
) SIPO_unit (
    .i_clk          (i_clk),
    .i_rst_n        (i_rst_n),
    .i_start        (w_valid_VD),
    .i_data         (w_data_SIPO),
    .o_data         (o_data),
    .o_done         (w_done_SIPO)
);
// Output_interface_block #(
//     .SIZE_IN  (1),
//     .SIZE_OUT (8)
// ) OIP (
//     .i_clk              (i_clk),
//     .i_rst_n            (i_rst_n),
//     .i_start            (w_valid_VD),
//     .i_valid            (),
//     input logic [SIZE_IN-1:0]   i_data,
//     output logic [SIZE_OUT-1:0] o_data,
//     output logic                o_valid
// );


assign o_done = w_done_SIPO;

endmodule
