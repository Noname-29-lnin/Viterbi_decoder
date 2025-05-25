`timescale 1ns/1ps
module tb_SIPO;

parameter SIZE_DATA_IN = 16;
parameter SIZE_DATA_OUT = 2;

logic w_clk, w_rst_n, w_start;
always #10 w_clk = ~w_clk;
logic [SIZE_DATA_IN-1:0] w_idata;
logic [SIZE_DATA_OUT-1:0] w_odata;
logic w_valid, w_done;

SIPO #(
    .SIZE_DATA_IN (SIZE_DATA_IN),
    .SIZE_DATA_OUT(SIZE_DATA_OUT)
) uut (
    .i_clk      (w_clk),
    .i_rst_n    (w_rst_n),
    .i_start    (w_start),
    .i_data     (w_idata),
    .o_data     (w_odata),
    .o_valid    (w_valid),
    .o_done     (w_done)
);

initial begin
    $dumpfile("tb_SIPO.vcd");
    $dumpvars(0, tb_SIPO);
end

initial begin
    w_clk = 1'b0;
    w_rst_n = 1'b0;
    w_start = 1'b0;
    w_idata = '0;

    // Reset
    #5;
    w_rst_n = 1'b1;

    // Start with some data
    #5;
    w_start = 1'b1;
    w_idata = 16'hAAAA; // Example data
    // Wait for a few clock cycles
    repeat (10) @(posedge w_clk);

    #20;
    w_start = 1'b0; // Stop the start signal   
    w_idata = 16'h1234; // Clear data
    repeat (10) @(posedge w_clk);

    #20;
    // Reset again
    #5;
    w_rst_n = 1'b0; // Reset again
    #20;
    w_rst_n = 1'b1;
    w_start = 1'b1;
    w_idata = 16'h1234; // New data

    // Wait for a few clock cycles
    repeat (10) @(posedge w_clk);
    $finish;
end

always @(posedge w_valid or posedge w_done) begin
    $display("|Time = %t \t| i_start = %b \t| i_data = %h \t|", $time, w_start, w_idata);
    $display("|o_data = %h \t| o_valid = %b \t| o_done = %b |", w_odata, w_valid, w_done);
end

endmodule
