`timescale 1ns / 1ps
module tb_uart;

parameter SIZE_DATA = 8;
parameter OVER_SAMPLE = 16;
parameter MID_SAMPLE = 8;

logic w_clk, w_rst_n;
logic w_stick;
logic w_tx_en, w_rx_en;
logic w_fifo_empty, w_fifo_full;
logic [SIZE_DATA-1:0] w_idata;
logic w_uart_data;
logic [SIZE_DATA-1:0] w_odata;
logic w_tx_done, w_rx_done;
logic w_valid_trans;

always #10 w_clk = ~w_clk; // FREQUENCY = 50MHz

baud_generator #(
    .SIZE_BAUD      (24) ,// 3byte
    .BAUDRATE_VALUE (325) // BAUD=9600, OVER_SAMPLE=16
) baudrate (
    .i_clk          (w_clk),    // clock for CPU
    .i_rst_n        (w_rst_n),  // active low reset
    .o_stick        (w_stick)   // baud rate signal
);

Transmitter #(
    .SIZE_DATA   (SIZE_DATA),
    .OVER_SAMPLE (OVER_SAMPLE)// oversampling
) uut_transmitter (
    .i_clk          (w_clk), // clock for CPU
    .i_rst_n        (w_rst_n), // active low reset
    .i_stick        (w_stick), // baud rate signal
    .i_tx_en        (w_tx_en), // start signal
    .i_fifo_empty   (w_fifo_empty), // FIFO empty signal
    .i_tx_data      (w_idata), // data to be transmitted parallel
    .o_tx_serial    (w_uart_data), // serial data output 
    .o_tx_done      (w_tx_done), // end signal
    .o_valid        (w_valid_trans)
);

Receiver #(
    .SIZE_DATA      (SIZE_DATA  ),
    .OVER_SAMPLE    (OVER_SAMPLE),
    .MID_SAMPLE     (MID_SAMPLE)
) uut_receiver (
    .i_clk          (w_clk), // clock for CPU
    .i_rst_n        (w_rst_n), // active low reset
    .i_stick        (w_stick), // baud rate signal
    .i_rx_en        (w_rx_en), // enable signal for receiver
    .i_fifo_full    (w_fifo_full), // FIFO full signal
    .i_rx_serial    (w_uart_data), // serial data to be received
    .i_valid        (w_valid_trans),

    .o_rx_data      (w_odata), // data to be received parallel
    .o_rx_done      (w_rx_done) // end signal
);

initial begin
    $dumpfile("tb_uart.vcd");
    $dumpvars(0, tb_uart);
end

initial begin
    w_clk = 1'b0;
    w_rst_n = 1'b0;
    w_tx_en = 1'b0;
    w_rx_en = 1'b0;
    w_fifo_empty = 1'b0;
    w_fifo_full = 1'b0;
    w_idata = '0;

    #40;
    w_rst_n = 1'b1;

    #100;
    w_tx_en = 1'b1;
    w_fifo_empty = 1'b0;
    w_rx_en = 1'b1;
    w_fifo_full = 1'b0;
    w_idata = 8'h29; // 00101001

    #2000000;
    $finish;
end

always @(w_rx_en or w_uart_data or w_tx_done or w_rx_done or w_idata or w_odata) begin
    $display("Time = %t \t| wrt_n = %b \|", $time, w_rst_n);
    $display("Transmitter: \t | w_tx_en = %b \t| w_fifo_empty = %b \t| w_idata = %b \t| w_uart_data = %b \t| o_tx_done = %b", w_tx_en, w_fifo_empty, w_idata, w_uart_data, w_tx_done);
    $display("Receiver: \t | w_rx_en = %b \t| w_fifo_full = %b \t| w_uart_data = %b \t| w_odata = %b \t| o_rx_done = %b", w_rx_en, w_fifo_full, w_uart_data, w_odata, w_rx_done);
    $display("---------------------------------------------------------");
end

endmodule
