`timescale 1ns/1ps
module tb_Viterbi_decoding();

logic i_clk, i_rst_n, i_valid;
always #10 i_clk = ~i_clk; // Clock generation Frequency: 50 MHz

logic [1:0] i_data;
logic o_decision, o_valid;
Viterbi_decoding uut (
    .i_clk          (i_clk),      // Clock input
    .i_rst_n        (i_rst_n),    // Active-low reset
    .i_valid        (i_valid),    
    .i_data         (i_data),     // 2-bit input data
    .o_decision     (o_decision),     // Decoded output bit
    .o_valid        (o_valid) // Valid output indicator
);

initial begin
    $dumpfile("tb_Viterbi_decoding.vcd");
    $dumpvars(0, tb_Viterbi_decoding);
    i_clk = 0;
end

initial begin
    // Test case 1: Data input: 10101010
    //              Data conv : 1110001000100010
    i_rst_n = 0;
    i_valid = 0;
    #20;
    i_rst_n = 1; // Release reset
    #20;
    i_valid = 1; // Start valid signal
    $display("TestCase 1:");
    $display(" Data input: 10101010");
    $display(" Data conv : 1110001000100010");
    @(posedge i_clk);
    i_data = 2'b11;
    #1;
    $display("Time: %0t \t| i_valid = %b \t| i_data: %b \t| o_decision = %b \t| o_valid = %b \t|", $time, i_valid, i_data, o_decision, o_valid);
    @(posedge i_clk);
    i_data = 2'b10;
    #1;
    $display("Time: %0t \t| i_valid = %b \t| i_data: %b \t| o_decision = %b \t| o_valid = %b \t|", $time, i_valid, i_data, o_decision, o_valid);
    @(posedge i_clk);
    i_data = 2'b00;
    #1;
    $display("Time: %0t \t| i_valid = %b \t| i_data: %b \t| o_decision = %b \t| o_valid = %b \t|", $time, i_valid, i_data, o_decision, o_valid);
    @(posedge i_clk);
    i_data = 2'b10;
    #1;
    $display("Time: %0t \t| i_valid = %b \t| i_data: %b \t| o_decision = %b \t| o_valid = %b \t|", $time, i_valid, i_data, o_decision, o_valid);
    @(posedge i_clk);
    i_data = 2'b00;
    #1;
    $display("Time: %0t \t| i_valid = %b \t| i_data: %b \t| o_decision = %b \t| o_valid = %b \t|", $time, i_valid, i_data, o_decision, o_valid);
    @(posedge i_clk);
    i_data = 2'b10;
    #1;
    $display("Time: %0t \t| i_valid = %b \t| i_data: %b \t| o_decision = %b \t| o_valid = %b \t|", $time, i_valid, i_data, o_decision, o_valid);
    @(posedge i_clk);
    i_data = 2'b00;
    #1;
    $display("Time: %0t \t| i_valid = %b \t| i_data: %b \t| o_decision = %b \t| o_valid = %b \t|", $time, i_valid, i_data, o_decision, o_valid);
    @(posedge i_clk);
    i_data = 2'b10;
    #1;
    $display("Time: %0t \t| i_valid = %b \t| i_data: %b \t| o_decision = %b \t| o_valid = %b \t|", $time, i_valid, i_data, o_decision, o_valid);
    @(posedge i_clk);
    $display("Time: %0t \t| i_valid = %b \t| i_data: %b \t| o_decision = %b \t| o_valid = %b \t|", $time, i_valid, i_data, o_decision, o_valid);
    $display("==========================================================");

    // Test case 2: Data input: 00101001
    //              Data conv : 0000111000101111
    i_rst_n = 0;
    i_valid = 0;
    #20;
    i_rst_n = 1; // Release reset
    #20;
    i_valid = 1; // Start valid signal
    $display("TestCase 2:");
    $display(" Data input: 00101001");
    $display(" Data conv : 0000111000101111");
    @(posedge i_clk);
    i_data = 2'b00;
    #1;
    $display("Time: %0t \t| i_valid = %b \t| i_data: %b \t| o_decision = %b \t| o_valid = %b \t|", $time, i_valid, i_data, o_decision, o_valid);
    @(posedge i_clk);
    i_data = 2'b00;
    #1;
    $display("Time: %0t \t| i_valid = %b \t| i_data: %b \t| o_decision = %b \t| o_valid = %b \t|", $time, i_valid, i_data, o_decision, o_valid);
    @(posedge i_clk);
    i_data = 2'b11;
    #1;
    $display("Time: %0t \t| i_valid = %b \t| i_data: %b \t| o_decision = %b \t| o_valid = %b \t|", $time, i_valid, i_data, o_decision, o_valid);
    @(posedge i_clk);
    i_data = 2'b10;
    #1;
    $display("Time: %0t \t| i_valid = %b \t| i_data: %b \t| o_decision = %b \t| o_valid = %b \t|", $time, i_valid, i_data, o_decision, o_valid);
    @(posedge i_clk);
    i_data = 2'b00;
    #1;
    $display("Time: %0t \t| i_valid = %b \t| i_data: %b \t| o_decision = %b \t| o_valid = %b \t|", $time, i_valid, i_data, o_decision, o_valid);
    @(posedge i_clk);
    i_data = 2'b10;
    #1;
    $display("Time: %0t \t| i_valid = %b \t| i_data: %b \t| o_decision = %b \t| o_valid = %b \t|", $time, i_valid, i_data, o_decision, o_valid);
    @(posedge i_clk);
    i_data = 2'b11;
    #1;
    $display("Time: %0t \t| i_valid = %b \t| i_data: %b \t| o_decision = %b \t| o_valid = %b \t|", $time, i_valid, i_data, o_decision, o_valid);
    @(posedge i_clk);
    i_data = 2'b11;
    #1;
    $display("Time: %0t \t| i_valid = %b \t| i_data: %b \t| o_decision = %b \t| o_valid = %b \t|", $time, i_valid, i_data, o_decision, o_valid);
    @(posedge i_clk);
    $display("Time: %0t \t| i_valid = %b \t| i_data: %b \t| o_decision = %b \t| o_valid = %b \t|", $time, i_valid, i_data, o_decision, o_valid);
    $display("==========================================================");
    #100;
    $finish; // End simulation
end

always @(o_valid) begin
    $display("Time: %0t, o_decision: %b, o_valid: %b", $time, o_decision, o_valid);
end

endmodule
