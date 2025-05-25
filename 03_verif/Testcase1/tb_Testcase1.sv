`timescale 1ns/1ps

module tb_Testcase1();

// Parameters
parameter SIZE_DATA_IN  = 16;
parameter SIZE_DATA_OUT = 8;
parameter CLK_PERIOD = 10;  // 100 MHz

// System Signals
logic clk;
logic rst_n;
logic start;
logic [SIZE_DATA_IN-1:0] data_in;
logic [SIZE_DATA_OUT-1:0] data_out;
logic done;

// Testbench Control
integer error_count = 0;
integer test_case = 0;

// Clock Generation
// initial begin
//     clk = 1'b0;
//     forever #(CLK_PERIOD/2) clk = ~clk;
// end
always #(CLK_PERIOD/2) clk = ~clk;

// Device Under Test
Testcase1 dut (
    .i_clk(clk),
    .i_rst_n(rst_n),
    .i_start(start),
    .i_data(data_in),
    .o_data(data_out),
    .o_done(done)
);

// Viterbi Decoder Stimulus (Example)
// Note: Replace with actual Viterbi decoder expectations
function logic viterbi_expected(logic [1:0] input_bits);
    // This is a simple example pattern - modify according to your decoder's behavior
    return input_bits[0]; // Simple example: return LSB
endfunction

// Test Tasks
task reset();
    rst_n = 0;
    data_in = 0;
    start = 0;
    #(CLK_PERIOD*2);
    rst_n = 1;
    #(CLK_PERIOD);
endtask

task send_input(input logic [15:0] data);
    data_in = data;
    #CLK_PERIOD;
endtask

// Main Test Sequence
initial begin
    $dumpfile("tb_Testcase1.vcd");
    $dumpvars(0, tb_Testcase1);
    
    // Test Case 1: Basic Pattern
    test_case = 1;
    start = 0;
    reset();
    start = 1;
    send_input(16'hA5A5); // 1010 0101 1010 0101
    
    wait(done);
    #(CLK_PERIOD);
    
    // Verify SIPO output
    if(data_out !== 8'b10100101) begin // Expected pattern based on simple Viterbi
        $error("Test Case %0d Failed: Got %08b, Expected 10100101", test_case, data_out);
        error_count++;
    end
    
    // Test Case 2: All Ones
    test_case = 2;
    start = 0;
    reset();
    start = 1;
    send_input(16'hFFFF);
    
    wait(done);
    #(CLK_PERIOD);
    
    if(data_out !== 8'b11111111) begin
        $error("Test Case %0d Failed: Got %08b, Expected 11111111", test_case, data_out);
        error_count++;
    end
    
    // Add more test cases as needed
    
    // Final Report
    if(error_count == 0)
        $display("All test cases passed!");
    else
        $display("Failed %0d test cases", error_count);
    
    $finish;
end

// Monitor Process
always @(posedge clk) begin
    $display("Time: %0t | Start: %b | PISO Data: %2b | VD Out: %b | SIPO Out: %08b | Done: %b",
        $time, start,
        dut.w_data_PISO,
        dut.w_data_SIPO,
        data_out,
        done);
end

endmodule