module Wrapper(
    input logic CLOCK_50,
    input logic [17:0] SW,
    output logic [17:0] LEDR,
    output logic [6:0] LEDG,
    output logic [6:0] HEX0,
    output logic [6:0] HEX1
);

parameter SIZE_DATA     = 8 ;
parameter OVER_SAMPLE   = 16;
parameter MID_SAMPLE    = 8 ;
parameter SIZE_IN       = 1 ;
parameter SIZE_OUT      = 2 ;
parameter SIZE_7SEG     = 7 ;

Testcase2 #(
    .SIZE_DATA     (SIZE_DATA),
    .OVER_SAMPLE   (OVER_SAMPLE),
    .MID_SAMPLE    (MID_SAMPLE),
    .SIZE_IN       (SIZE_IN),
    .SIZE_OUT      (SIZE_OUT),
    .SIZE_7SEG     (SIZE_7SEG)
)(
    .i_clk          (CLOCK_50),
    .i_rst_n        (SW[17]),
    .i_tx_en        (SW[8]),
    .i_rx_en        (SW[9]),
    .i_data         (SW[7:0]),
    .o_data         (LEDR[15:8]),
    .o_tx_done      (LEDG[0]),
    .o_rx_done      (LEDG[1]),
    // output logic [SIZE_7SEG-1:0]    o_HEX0, // Output Conv 16bit
    // output logic [SIZE_7SEG-1:0]    o_HEX1,
    // output logic [SIZE_7SEG-1:0]    o_HEX2,
    // output logic [SIZE_7SEG-1:0]    o_HEX3,
    .o_HEX4         (HEX0), // Output VD 8bit
    .o_HEX5         (HEX1)
);

assign LEDR[7:0] = SW[7:0];
assign LEDG[6] = SW[9];
assign LEDG[5] = SW[8];

endmodule
