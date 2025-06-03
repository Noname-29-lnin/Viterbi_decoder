// module tb_Testcase2();

// parameter SIZE_DATA     = 8 ; 
// parameter OVER_SAMPLE   = 16;
// parameter MID_SAMPLE    = 8 ;
// parameter SIZE_IN       = 1 ;
// parameter SIZE_OUT      = 2 ;
// parameter SIZE_7SEG     = 7 ;

// logic                     i_clk;
// logic                     i_rst_n;
// logic                     i_tx_en;
// logic                     i_rx_en;
// logic [SIZE_DATA-1:0]     i_data;
// logic [SIZE_DATA-1:0]    o_data;
// logic                    o_tx_done;
// logic                    o_rx_done;
// logic [SIZE_7SEG-1:0]    o_HEX4;
// logic [SIZE_7SEG-1:0]    o_HEX5;

// Testcase2 #(
//     .SIZE_DATA          (SIZE_DATA  ),
//     .OVER_SAMPLE        (OVER_SAMPLE),
//     .MID_SAMPLE         (MID_SAMPLE ),
//     .SIZE_IN            (SIZE_IN    ),
//     .SIZE_OUT           (SIZE_OUT   ),
//     .SIZE_7SEG          (SIZE_7SEG  )
// ) uut (
//     .i_clk              (i_clk    ),
//     .i_rst_n            (i_rst_n  ),
//     .i_tx_en            (i_tx_en  ),
//     .i_rx_en            (i_rx_en  ),
//     .i_data             (i_data   ),
//     .o_data             (o_data   ),
//     .o_tx_done          (o_tx_done),
//     .o_rx_done          (o_rx_done),
//     .o_HEX4             (o_HEX4   ), // Output VD 8bit
//     .o_HEX5             (o_HEX5   )
// );

// initial begin
//     $dumpfile("tb_Testcase2.vcd");
//     $dumpvars(0, tb_Testcase2);
// end
// initial i_clk = 0;
// always #10 i_clk = ~i_clk;

// task Display_input();
//     begin
//         $display("| Time = %t \t| i_rst_n = %b \t| i_tx_en = %b \t| i_rx_en = %b \t| i_data = %h \t|",
//                     $time, i_rst_n, i_tx_en, i_rx_en, i_data);
//     end
// endtask
// task Display_output();
//     begin
//         always @( posedge o_rx_done ) begin
//             $display("| Time = %t \t| o_tx_done = %b \t| o_rx_done = %b \t| o_data = %h \t| o_HEX_4 = %h \t| o_HEX_5 = %h \t|",
//                     $time, o_tx_done, o_rx_done, o_data, o_HEX4, o_HEX5);
//         end
//     end
// endtask
// task Display_Trans();
//     begin
//         always @(uut.w_conv_valid) begin
//             $display("| Trans \t| Time = %t \t| i_data = %b \t| o_tx_data = %b \t| o_conv_data = %b \t| o_conv_valid = %b \t|",
//                 $time, i_data, uut.w_tx_data, uut.w_conv_data, uut.w_conv_valid);
//         end
//     end 
// endtask
// task Display_Rec();
//     begin
//         always @(uut.w_vd_valid) begin
//             $display("| Rec \t| Time = %t \t| i_rx_valid = %b \t| i_data = %b \t| o_rx_data = %b \t| o_rx_done = %b \t|",
//                     $time, uut.w_vd_valid, uut.w_vd_data, o_data, o_rx_done);
//         end
//     end 
// endtask

// initial begin
//     i_rst_n = 0;
//     i_tx_en = 0;
//     i_rx_en = 0;
//     i_data  = 0;
//     #100;
//     i_rst_n = 1;
//     #100;
//     $display("==================== TestCase - Reset ====================");
//     Display_input();
//     #1000;
//     Display_Trans();
//     Display_Rec();
//     Display_output();
//     $display("===========================================================");

//     #100;
//     $display("==================== TestCase - Trans =====================");
//     @(posedge i_clk);
//     i_tx_en = 1;
//     i_rx_en = 0;
//     i_data  = 8'h29;
//     Display_input();
//     Display_Trans();
//     Display_Rec();
//     Display_output();
//     $display("===========================================================");

//     #100;
//     $display("==================== TestCase - Trans-Rec =================");
//     @(posedge i_clk);
//     i_tx_en = 1;
//     i_rx_en = 1;
//     i_data  = 8'h30;
//     Display_input();
//     Display_Trans();
//     Display_Rec();
//     Display_output();
//     $display("===========================================================");
// end

// endmodule
module tb_Testcase2();

parameter SIZE_DATA     = 8; 
parameter OVER_SAMPLE   = 16;
parameter MID_SAMPLE    = 8;
parameter SIZE_IN       = 1;
parameter SIZE_OUT      = 2;
parameter SIZE_7SEG     = 7;
parameter CLK_PERIOD    = 20; // 20 ns for 50 MHz clock
parameter BAUD_RATE     = 9600; // Approximate baud rate (9615.38)
parameter BIT_TIME      = 104_000; // Bit time in ns (104 us)
parameter SAMPLE_TIME   = BIT_TIME / OVER_SAMPLE; // Sample time in ns

logic                     i_clk;
logic                     i_rst_n;
logic                     i_tx_en;
logic                     i_rx_en;
logic [SIZE_DATA-1:0]     i_data;
logic [SIZE_DATA-1:0]     o_data;
logic                     o_tx_done;
logic                     o_rx_done;
logic [SIZE_7SEG-1:0]     o_HEX4;
logic [SIZE_7SEG-1:0]     o_HEX5;

// Instantiate the UART module
Testcase2 #(
    .SIZE_DATA          (SIZE_DATA),
    .OVER_SAMPLE        (OVER_SAMPLE),
    .MID_SAMPLE         (MID_SAMPLE),
    .SIZE_IN            (SIZE_IN),
    .SIZE_OUT           (SIZE_OUT),
    .SIZE_7SEG          (SIZE_7SEG)
) uut (
    .i_clk              (i_clk),
    .i_rst_n            (i_rst_n),
    .i_tx_en            (i_tx_en),
    .i_rx_en            (i_rx_en),
    .i_data             (i_data),
    .o_data             (o_data),
    .o_tx_done          (o_tx_done),
    .o_rx_done          (o_rx_done),
    .o_HEX4             (o_HEX4),
    .o_HEX5             (o_HEX5)
);

// Clock generation
initial begin
    i_clk = 0;
    forever #(CLK_PERIOD / 2) i_clk = ~i_clk;
end

// VCD dump for waveform analysis
initial begin
    $dumpfile("tb_Testcase2.vcd");
    $dumpvars(0, tb_Testcase2);
end

// Task to display input signals
task Display_input();
    $display("| Time = %t \t| i_rst_n = %b \t| i_tx_en = %b \t| i_rx_en = %b \t| i_data = %h \t|",
             $time, i_rst_n, i_tx_en, i_rx_en, i_data);
endtask

// Task to display output signals
task Display_output();
    $display("| Time = %t \t| o_tx_done = %b \t| o_rx_done = %b \t| o_data = %h \t| o_HEX4 = %b \t| o_HEX5 = %b \t|",
             $time, o_tx_done, o_rx_done, o_data, o_HEX4, o_HEX5);
endtask

// Task to display transmission signals
task Display_Trans();
    $display("| Trans \t| Time = %t \t| i_data = %b \t| w_tx_data = %b \t| w_conv_data = %b \t| w_conv_valid = %b \t|",
             $time, i_data, uut.w_tx_data, uut.w_conv_data, uut.w_conv_valid);
endtask

// Task to display reception signals
task Display_Rec();
    $display("| Rec \t| Time = %t \t| w_vd_valid = %b \t| w_vd_data = %b \t| o_rx_data = %b \t| o_rx_done = %b \t|",
             $time, uut.w_vd_valid, uut.w_vd_data, o_data, o_rx_done);
endtask

// Task to verify 7-segment outputs
task Verify_7seg(input [SIZE_DATA-1:0] data);
    logic [SIZE_7SEG-1:0] expected_hex4, expected_hex5;
    // Expected 7-segment patterns (common cathode, active-high)
    case (data[3:0]) // Lower nibble for o_HEX4
        4'h0: expected_hex4 = 7'b1111110;
        4'h1: expected_hex4 = 7'b0110000;
        4'h2: expected_hex4 = 7'b1101101;
        4'h3: expected_hex4 = 7'b1111001;
        4'h4: expected_hex4 = 7'b0110011;
        4'h5: expected_hex4 = 7'b1011011;
        4'h6: expected_hex4 = 7'b1011111;
        4'h7: expected_hex4 = 7'b1110000;
        4'h8: expected_hex4 = 7'b1111111;
        4'h9: expected_hex4 = 7'b1111011;
        4'hA: expected_hex4 = 7'b1110111;
        4'hB: expected_hex4 = 7'b0011111;
        4'hC: expected_hex4 = 7'b1001110;
        4'hD: expected_hex4 = 7'b0111101;
        4'hE: expected_hex4 = 7'b1001111;
        4'hF: expected_hex4 = 7'b1000111;
        default: expected_hex4 = 7'b0000000;
    endcase
    case (data[7:4]) // Upper nibble for o_HEX5
        4'h0: expected_hex5 = 7'b1111110;
        4'h1: expected_hex5 = 7'b0110000;
        4'h2: expected_hex5 = 7'b1101101;
        4'h3: expected_hex5 = 7'b1111001;
        4'h4: expected_hex5 = 7'b0110011;
        4'h5: expected_hex5 = 7'b1011011;
        4'h6: expected_hex5 = 7'b1011111;
        4'h7: expected_hex5 = 7'b1110000;
        4'h8: expected_hex5 = 7'b1111111;
        4'h9: expected_hex5 = 7'b1111011;
        4'hA: expected_hex5 = 7'b1110111;
        4'hB: expected_hex5 = 7'b0011111;
        4'hC: expected_hex5 = 7'b1001110;
        4'hD: expected_hex5 = 7'b0111101;
        4'hE: expected_hex5 = 7'b1001111;
        4'hF: expected_hex5 = 7'b1000111;
        default: expected_hex5 = 7'b0000000;
    endcase
    if (o_HEX4 !== expected_hex4 || o_HEX5 !== expected_hex5) begin
        $display("ERROR: 7-segment mismatch at time %t | Expected o_HEX4 = %b, o_HEX5 = %b | Got o_HEX4 = %b, o_HEX5 = %b",
                 $time, expected_hex4, expected_hex5, o_HEX4, o_HEX5);
    end else begin
        $display("7-segment outputs correct at time %t | o_HEX4 = %b, o_HEX5 = %b", $time, o_HEX4, o_HEX5);
    end
endtask

// Task to reset the system
task reset_system();
    $display("==================== TestCase - Reset ====================");
    i_rst_n = 0;
    i_tx_en = 0;
    i_rx_en = 0;
    i_data  = 0;
    Display_input();
    #100;
    i_rst_n = 1;
    #100;
    Display_input();
    Display_output();
    if (o_data !== 0 || o_tx_done !== 0 || o_rx_done !== 0 || o_HEX4 !== 0 || o_HEX5 !== 0) begin
        $display("ERROR: Reset failed at time %t", $time);
    end
    $display("=========================================================");
endtask

// Task to transmit data
task transmit_data(input [SIZE_DATA-1:0] data);
    $display("==================== TestCase - Transmit ====================");
    @(posedge i_clk);
    i_tx_en = 1;
    i_rx_en = 0;
    i_data  = data;
    Display_input();
    @(posedge o_tx_done); // Wait for transmission to complete
    Display_Trans();
    Display_output();
    i_tx_en = 0;
    #(BIT_TIME * 10); // Wait for 10 bits (start + 8 data + stop)
    $display("=========================================================");
endtask

// Task to transmit and receive data
task transmit_receive_data(input [SIZE_DATA-1:0] data);
    $display("==================== TestCase - Transmit & Receive ====================");
    @(posedge i_clk);
    i_tx_en = 1;
    i_rx_en = 1;
    i_data  = data;
    Display_input();
    @(posedge o_rx_done); // Wait for reception to complete
    Display_Trans();
    Display_Rec();
    Display_output();
    Verify_7seg(data); // Verify 7-segment outputs
    if (o_data !== data) begin
        $display("ERROR: Data mismatch at time %t | Expected o_data = %h, Got o_data = %h", $time, data, o_data);
    end
    i_tx_en = 0;
    i_rx_en = 0;
    #(BIT_TIME * 10); // Wait for 10 bits
    $display("=========================================================");
endtask

// Task to test back-to-back transmission
task back_to_back_transmit(input [SIZE_DATA-1:0] data1, input [SIZE_DATA-1:0] data2);
    $display("==================== TestCase - Back-to-Back Transmit ====================");
    @(posedge i_clk);
    i_tx_en = 1;
    i_rx_en = 0;
    i_data  = data1;
    Display_input();
    @(posedge o_tx_done); // Wait for first transmission
    Display_Trans();
    i_data  = data2;
    @(posedge i_clk);
    Display_input();
    @(posedge o_tx_done); // Wait for second transmission
    Display_Trans();
    Display_output();
    i_tx_en = 0;
    #(BIT_TIME * 10);
    $display("=========================================================");
endtask

// Task to test error condition (e.g., data corruption in Viterbi decoder)
task error_test(input [SIZE_DATA-1:0] data);
    $display("==================== TestCase - Error Condition ====================");
    @(posedge i_clk);
    i_tx_en = 1;
    i_rx_en = 1;
    i_data  = data;
    Display_input();
    @(posedge uut.w_conv_valid);
    force uut.w_conv_data = ~uut.w_conv_data; // Simulate convolutional encoding error
    @(posedge o_rx_done);
    Display_Rec();
    Display_output();
    Verify_7seg(data); // Check if 7-segment reflects corrupted data
    if (o_data === data) begin
        $display("ERROR: Expected data corruption but o_data = %h matches input %h", o_data, data);
    end
    release uut.w_conv_data;
    i_tx_en = 0;
    i_rx_en = 0;
    #(BIT_TIME * 10);
    $display("=========================================================");
endtask

// Main test sequence
initial begin
    // Initialize signals
    i_rst_n = 0;
    i_tx_en = 0;
    i_rx_en = 0;
    i_data  = 0;

    // Run test cases
    #100;
    reset_system();

    #1000;
    transmit_data(8'h29); // Test single-byte transmission

    #1000;
    transmit_receive_data(8'h30); // Test transmit and receive

    #1000;
    transmit_receive_data(8'h00); // Test zero data

    #1000;
    transmit_receive_data(8'hFF); // Test max data

    #1000;
    back_to_back_transmit(8'h55, 8'hAA); // Test back-to-back transmission

    #1000;
    error_test(8'h3C); // Test error condition with data corruption

    // End simulation
    #1000;
    $display("==================== Simulation Complete ====================");
    $finish;
end

// Monitor internal signals continuously
initial begin
    forever begin
        @(posedge uut.w_conv_valid or posedge uut.w_vd_valid or posedge o_tx_done or posedge o_rx_done);
        if (uut.w_conv_valid) Display_Trans();
        if (uut.w_vd_valid) Display_Rec();
        if (o_tx_done || o_rx_done) Display_output();
    end
end

endmodule
