`timescale 1ns/1ps
module tb_viterbi();

logic i_clk, i_rst_n, i_start ;
logic [15:0] i_data;
logic [7:0]  o_data;
logic        o_valid;
Block_VD uut (
    .i_clk   (i_clk),
    .i_rst_n (i_rst_n),
    .i_start (i_start),
    .i_data  (i_data),
    .o_data  (o_data),
    .o_valid (o_valid)
);

function automatic real calc_ber_8bit (
    input logic [7:0] a,
    input logic [7:0] b
);
    int error_count = 0;
    for (int i = 0; i < 8; i++) begin
        if (a[i] ^ b[i]) error_count++;
    end
    return error_count / 8.0;
endfunction

function automatic real calc_ber_16bit (
    input logic [15:0] a,
    input logic [15:0] b
);
    int error_count = 0;
    for (int i = 0; i < 16; i++) begin
        if (a[i] ^ b[i]) error_count++;
    end
    // return error_count / 16.0;
    return error_count;
endfunction


initial begin
    $dumpfile("tb_viterbi.vcd");
    $dumpvars(0, tb_viterbi);
end 

always #5 i_clk = ~i_clk;

initial begin
    i_clk     = 0;
    i_rst_n   = 0;
    i_start   = 0;

    #10;
    i_rst_n   = 0;
    i_start   = 1;

    #10;
    i_rst_n   = 1;
    i_start   = 1;

    @(posedge i_clk);
    // i_data = 16'b1101010001010010;
    i_data = 16'b1101010001010011;
    wait(o_valid);
    $display("Time=%t, i_rst_n=%b, i_start=%b, i_data=%b, o_data=%b, o_valid=%b, TestCase=%s, BER_in=%f, BER_out=%f", $time, i_rst_n, i_start, i_data, o_data, o_valid, (o_data==8'b11011010)?"PASS":"FAIL", calc_ber_16bit(i_data, 16'b1101010001010010), calc_ber_8bit(o_data, 8'b11011010));

    #10;
    i_rst_n   = 0;
    i_start   = 1;
    #10;
    i_rst_n   = 1;
    i_start   = 1;
    @(posedge i_clk);
    // i_data = 16'b1110001000100010;
    i_data = 16'b1110001000100011;
    wait(o_valid);
    // $display("Time=%t, i_rst_n=%b, i_start=%b, i_data=%b, o_data=%b, o_valid=%b, TestCase=%s", $time, i_rst_n, i_start, i_data, o_data, o_valid, (o_data==8'b10101010)?"PASS":"FAIL");
    $display("Time=%t, i_rst_n=%b, i_start=%b, i_data=%b, o_data=%b, o_valid=%b, TestCase=%s, BER_in=%f, BER_out=%f", $time, i_rst_n, i_start, i_data, o_data, o_valid, (o_data==8'b10101010)?"PASS":"FAIL", calc_ber_16bit(i_data, 16'b1110001000100010), calc_ber_8bit(o_data, 8'b10101010));

    #10;
    i_rst_n   = 0;
    i_start   = 1;
    #10;
    i_rst_n   = 1;
    i_start   = 1;
    @(posedge i_clk);
    // i_data = 16'b0000000000000011;
    i_data = 16'b0000000000000111;
    wait(o_valid);
    // $display("Time=%t, i_rst_n=%b, i_start=%b, i_data=%b, o_data=%b, o_valid=%b, TestCase=%s", $time, i_rst_n, i_start, i_data, o_data, o_valid, (o_data==8'b00000001)?"PASS":"FAIL");
    $display("Time=%t, i_rst_n=%b, i_start=%b, i_data=%b, o_data=%b, o_valid=%b, TestCase=%s, BER_in=%f, BER_out=%f", $time, i_rst_n, i_start, i_data, o_data, o_valid, (o_data==8'b00000001)?"PASS":"FAIL", calc_ber_16bit(i_data, 16'b0000000000000011), calc_ber_8bit(o_data, 8'b00000001));
    
    #10;
    i_rst_n   = 0;
    i_start   = 1;
    #10;
    i_rst_n   = 1;
    i_start   = 1;
    @(posedge i_clk);
    i_data = 16'b0000110101111101;
    wait(o_valid);
    // $display("Time=%t, i_rst_n=%b, i_start=%b, i_data=%b, o_data=%b, o_valid=%b, TestCase=%s", $time, i_rst_n, i_start, i_data, o_data, o_valid, (o_data==8'b00110011)?"PASS":"FAIL");
    $display("Time=%t, i_rst_n=%b, i_start=%b, i_data=%b, o_data=%b, o_valid=%b, TestCase=%s, BER_in=%f, BER_out=%f", $time, i_rst_n, i_start, i_data, o_data, o_valid, (o_data==8'b00110011)?"PASS":"FAIL", calc_ber_16bit(i_data, 16'b0000110101111101), calc_ber_8bit(o_data, 8'b00110011));
    #100;
    $finish;
end 

endmodule
// test_case(16'b1101010001010010, 8'b11011010); // CASE 1
// test_case(16'b1110001000100010, 8'b10101010); // CASE 2
// test_case(16'b0000000000000011, 8'b00000001); // CASE 3
// test_case(16'b0000110101111101, 8'b00110011); // CASE 4
