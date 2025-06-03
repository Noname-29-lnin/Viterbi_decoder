`timescale 1ns/1ps

module tb_Conv_block;

parameter SIZE_IN  = 1;
parameter SIZE_OUT = 2;

logic i_clk, i_rst_n, i_start;
logic [SIZE_IN-1:0]  i_data;
logic [SIZE_OUT-1:0] o_data;
logic                o_valid;

// Instantiate DUT
Conv_block #(
    .SIZE_IN   (SIZE_IN),
    .SIZE_OUT  (SIZE_OUT)
) uut (
    .i_clk     (i_clk),
    .i_rst_n   (i_rst_n),
    .i_start   (i_start),
    .i_data    (i_data),
    .o_data    (o_data),
    .o_valid   (o_valid)
);

// Clock generation: 50 MHz
initial i_clk = 0;
always #10 i_clk = ~i_clk;

// VCD for waveform viewing
initial begin
    $dumpfile("tb_Conv_block.vcd");
    $dumpvars(0, tb_Conv_block);
end

// Task: reset DUT
task reset_dut();
    begin
        i_rst_n = 0;
        i_start = 0;
        i_data  = 0;
        #100;
        i_rst_n = 1;
        #100;
    end
endtask

// Task: display input state
task Display_in();
    $display("| Time = %t | i_rst_n = %b | i_start = %b | i_data = %b |",
             $time, i_rst_n, i_start, i_data);
endtask

// Task: display output state
task Display_out();
    $display("| Time = %t | o_valid = %b | o_data = %b |",
             $time, o_valid, o_data);
endtask

// Task: send one input bit with start signal
task main_test(
    input logic [SIZE_IN-1:0] data,
    input logic               start
);
    begin
        i_start = start;
        i_data  = data;
        @(posedge i_clk);
        Display_in();
        // #1;
        Display_out();
    end
endtask

// Task: send multiple bits (MSB first)
task send_serial_bits(
    input logic [7:0] bits,
    input int         length
);
    int i;
    for (i = length - 1; i >= 0; i--) begin
        main_test(bits[i], 1);
    end
endtask

// Main test sequence
initial begin
    reset_dut();
    #100;
    $display("==========================================================");
    $display("TestCase 1: Input 11011010");
    $display("Expected output: 1101010001010010 (if R=1/2 conv encoder)");
    send_serial_bits(8'b11011010, 8);
    #200;
    $display("==========================================================");
    
    reset_dut();
    #100;
    $display("==========================================================");
    $display("TestCase 1: Input 10101010");
    $display("Expected output: 1110001000100010 (if R=1/2 conv encoder)");
    send_serial_bits(8'b10101010, 8);
    #200;
    $display("==========================================================");

    reset_dut();
    #100;
    $display("==========================================================");
    $display("TestCase 1: Input 00000001");
    $display("Expected output: 0000000000000011 (if R=1/2 conv encoder)");
    send_serial_bits(8'b00000001, 8);
    #200;
    $display("==========================================================");

    #200;
    $display("Finish Test ...");
    $finish;
end

endmodule
