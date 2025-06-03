module Testcase2 #(
    parameter SIZE_DATA     = 8 ,
    parameter OVER_SAMPLE   = 16,
    parameter MID_SAMPLE    = 8 ,
    parameter SIZE_IN       = 1 ,
    parameter SIZE_OUT      = 2 ,
    parameter SIZE_7SEG     = 7 
)(
    input logic                     i_clk,
    input logic                     i_rst_n,
    input logic                     i_tx_en,
    input logic                     i_rx_en,
    input logic [SIZE_DATA-1:0]     i_data,
    output logic [SIZE_DATA-1:0]    o_data,
    output logic                    o_tx_done,
    output logic                    o_rx_done,
    // output logic [SIZE_7SEG-1:0]    o_HEX0, // Output Conv 16bit
    // output logic [SIZE_7SEG-1:0]    o_HEX1,
    // output logic [SIZE_7SEG-1:0]    o_HEX2,
    // output logic [SIZE_7SEG-1:0]    o_HEX3,
    output logic [SIZE_7SEG-1:0]    o_HEX4, // Output VD 8bit
    output logic [SIZE_7SEG-1:0]    o_HEX5
);

logic w_stick;
baud_generator #(
    .SIZE_BAUD      (24) // 3byte
) baudrate (
    .i_clk          (i_clk),    // clock for CPU
    .i_rst_n        (i_rst_n),  // active low reset
    .i_baud_rate    (24'd325),
    .o_stick        (w_stick)   // baud rate signal
);

logic w_tx_data;
logic w_tx_valid;
Transmitter #(
    .SIZE_DATA   (SIZE_DATA),
    .OVER_SAMPLE (OVER_SAMPLE)// oversampling
) uut_transmitter (
    .i_clk          (i_clk), // clock for CPU
    .i_rst_n        (i_rst_n), // active low reset
    .i_stick        (w_stick), // baud rate signal
    .i_tx_en        (i_tx_en), // start signal
    .i_fifo_empty   (1'b0), // FIFO empty signal
    .i_tx_data      (i_data), // data to be transmitted parallel
    .o_tx_serial    (w_tx_data), // serial data output 
    .o_tx_done      (o_tx_done), // end signal
    .o_valid        (w_tx_valid)
);

logic [SIZE_OUT-1:0] w_conv_data;
logic w_conv_valid;
// logic w_reset_conv;
// assign w_reset_conv = i_rst_n & ~o_tx_done;
Conv_block #(
    .SIZE_IN  (SIZE_IN  ),
    .SIZE_OUT (SIZE_OUT )
) uut_Conv (
    .i_clk          (i_clk),
    .i_rst_n        (w_reset_vd),
    .i_start        (w_tx_valid),
    .i_data         (w_tx_data),

    .o_data         (w_conv_data),
    .o_valid        (w_conv_valid)
);

logic [SIZE_IN-1:0] w_vd_data;
logic w_vd_valid; 
logic w_reset_vd;
assign w_reset_vd = i_rst_n & ~o_rx_done;
Viterbi_decoding uut_VD(
    .i_clk          (i_clk),
    .i_rst_n        (w_reset_vd),
    .i_valid        (w_conv_valid),
    .i_data         (w_conv_data),
    .o_decision     (w_vd_data),
    .o_valid        (w_vd_valid)
);

Receiver #(
    .SIZE_DATA      (SIZE_DATA  ),
    .OVER_SAMPLE    (OVER_SAMPLE),
    .MID_SAMPLE     (MID_SAMPLE)
) uut_receiver (
    .i_clk          (i_clk), // clock for CPU
    .i_rst_n        (i_rst_n), // active low reset
    .i_stick        (w_stick), // baud rate signal
    .i_rx_en        (i_rx_en), // enable signal for receiver
    .i_fifo_full    (1'b0), // FIFO full signal
    .i_rx_serial    (w_vd_data), // serial data to be received
    .i_valid        (w_vd_valid),

    .o_rx_data      (o_data), // data to be received parallel
    .o_rx_done      (o_rx_done) // end signal
);

logic [SIZE_DATA-1:0] w_odata_Rx;
logic [SIZE_DATA-1:0] w_odata_Rx_next;
assign w_odata_Rx = (o_rx_done) ? o_data : w_odata_Rx_next;
always_ff @( posedge i_clk or negedge i_rst_n ) begin : output_Rx_HEX
    if(~i_rst_n)
        w_odata_Rx_next <= '0;
    else
        w_odata_Rx_next <= w_odata_Rx;
end
Hex_to_7seg #(
    .SIZE_DATA (4),
    .SIZE_7SEG (7)
) HEX_0_unit (
    .i_en_hex       (i_rst_n)       ,
    .i_data         (w_odata_Rx[3:0])   ,
    .o_HEX          (o_HEX4)       
);

Hex_to_7seg #(
    .SIZE_DATA (4),
    .SIZE_7SEG (7)
) HEX_1_unit (
    .i_en_hex       (i_rst_n)       ,
    .i_data         (w_odata_Rx[7:4])   ,
    .o_HEX          (o_HEX5)       
);

endmodule
