`timescale 1ns/1ps

module tb_viterbi_decoder();

// Clock and Reset
logic i_clk = 0;
logic i_rst_n;

localparam TESTCASE = 11;
// Test Data
logic [1:0] i_data [0:TESTCASE - 1] = '{2'b00, 2'b11, 2'b10, 2'b00, 2'b10, 2'b00, 2'b01, 2'b10, 2'b11, 2'b01, 2'b11};

logic [1:0] w_idata;
logic w_odata;
logic w_valid;

// Clock generation (100MHz)
always #5 i_clk = ~i_clk;

// Instantiate the DUT
Viterbi_decoding dut (
    .i_clk      (i_clk),
    .i_rst_n    (i_rst_n),
    .i_data     (w_idata),
    .o_decision (w_odata),
    .o_valid    (w_valid)
);

// Waveform dumping
initial begin
    $dumpfile("tb_viterbi_decoder.vcd");
    $dumpvars(0, tb_viterbi_decoder);
end

// Test sequence
initial begin
    // Initialize
    i_rst_n = 0;
    w_idata = 0;
    
    $display("Starting Viterbi (3,1,2) Decoder Testbench");
    $display("=========================================");
    
    // Reset sequence
    #20;
    i_rst_n = 1;
    $display("Reset released at %0t ps", $time);
    
    // Apply test vectors
    for(int i = 0; i <= TESTCASE; i ++) begin
        @(posedge i_clk);
        #1;
        w_idata = i_data[i];

        $display("Time = %t \t| i_rst_n = %b \t| i_data = %d \t| o_data = %d \t| o_valid = %d \t|\n",
                $time, i_rst_n, w_idata, w_odata, w_valid);
    end
    
    // Finish simulation
    #100;
    $display("Testbench completed successfully");
    $display("==================================");
    $finish;
end

// // Monitor to track signals
// initial begin
//     $monitor("Time: %0t ps | Input: %b | Output: %b | Valid: %b",
//              $time, w_idata, w_odata, w_valid);
// end

endmodule

