// `timescale 1ns/1ps
// module tb_acsu();

// logic [1:0] w_BM_0, w_BM_1, w_BM_2, w_BM_3;
// logic [1:0] w_iPM_0, w_iPM_1, w_iPM_2, w_iPM_3;
// logic [1:0] w_oPM_0, w_oPM_1, w_oPM_2, w_oPM_3
// logic [1:0] t_oPM_0, t_oPM_1, t_oPM_2, t_oPM_3;

// Add_compare_select_unit ACSU(
//     .i_BM_0      (w_BM_0),
//     .i_BM_1      (w_BM_1),
//     .i_BM_2      (w_BM_2),
//     .i_BM_3      (w_BM_3),
//     .i_PM_0      (w_iPM_0),
//     .i_PM_1      (w_iPM_1),
//     .i_PM_2      (w_iPM_2),
//     .i_PM_3      (w_iPM_3),
//     .o_PM_0      (w_oPM_0),
//     .o_PM_1      (w_oPM_1),
//     .o_PM_2      (w_oPM_2),
//     .o_PM_3      (w_oPM_3)
// );

// initial begin
//     $dumpfile("tb_acsu.vcd");
//     $dumpvars(0, tb_acsu);
// end

// // task CheckResult(
// //     input logic [1:0] i_BM_0, input logic [1:0] i_BM_1,
// //     input logic [1:0] i_BM_2, input logic [1:0] i_BM_3,
// //     input logic [1:0] i_PM_0, input logic [1:0] i_PM_1,
// //     input logic [1:0] i_PM_2, input logic [1:0] i_PM_3,
// //     output logic [1:0] o_PM_0, output logic [1:0] o_PM_1,
// //     output logic [1:0] o_PM_2, output logic [1:0] o_PM_3
// // );
// //     logic [1:0] w_oPM_0, w_oPM_1, w_oPM_2, w_oPM_3;
// //     // Check the outputs based on the inputs
// //     t_oPM_0 = (i_BM_0 + i_PM_0) <= (i_BM_3 + i_PM_1) ? (i_BM_0 + i_PM_0) : (i_BM_3 + i_PM_1);
// //     t_oPM_1 = (i_BM_2 + i_PM_2) <= (i_BM_1 + i_PM_3) ? (i_BM_2 + i_PM_2) : (i_BM_1 + i_PM_3);
// //     t_oPM_2 = (i_BM_3 + i_PM_0) <= (i_BM_0 + i_PM_1) ? (i_BM_3 + i_PM_0) : (i_BM_0 + i_PM_1);
// //     t_oPM_3 = (i_BM_1 + i_PM_2) <= (i_BM_2 + i_PM_3) ? (i_BM_1 + i_PM_2) : (i_BM_2 + i_PM_3);
// //     $display("-> %s", (w_oPM_0 == o_PM_0 && w_oPM_1 == o_PM_1 && w_oPM_2 == o_PM_2 && w_oPM_3 == o_PM_3) ? "PASS" : "FAIL");
// // endtask //automatic

// initial begin
//     $display("Starting Add_compare_select_unit testbench...");
//     $display("=====================================");
    
//     // Initialize signals
//     w_BM_0 = 2'b00;
//     w_BM_1 = 2'b00;
//     w_BM_2 = 2'b00;
//     w_BM_3 = 2'b00;
//     w_iPM_0 = 2'b00;
//     w_iPM_1 = 2'b00;
//     w_iPM_2 = 2'b00;
//     w_iPM_3 = 2'b00;
    
//     $display("Time: %0t \t|", $time);
//     $display("| i_BM_0: %b \t| i_BM_1: %b \t| i_BM_2: %b \t| i_BM_3: %b \t|\n| i_PM_0: %b \t| i_PM_1: %b \t| i_PM_2: %b \t| i_PM_3: %b \t|\n| o_PM_0: %b \t| o_PM_1: %b \t| o_PM_2: %b \t| o_PM_3: %b \t|", w_BM_0, w_BM_1, w_BM_2, w_BM_3, w_iPM_0, w_iPM_1, w_iPM_2, w_iPM_3, w_oPM_0, w_oPM_1, w_oPM_2, w_oPM_3);
    
//     // Test with random inputs
//     for(int i = 0; i < 15; i++) begin
//         #10;
//         w_BM_0 = $random % 4;
//         w_BM_1 = $random % 4;
//         w_BM_2 = $random % 4;
//         w_BM_3 = $random % 4;
//         w_iPM_0 = $random % 4;
//         w_iPM_1 = $random % 4;
//         w_iPM_2 = $random % 4;
//         w_iPM_3 = $random % 4;
//         t_oPM_0 = (i_BM_0 + i_PM_0) <= (i_BM_3 + i_PM_1) ? (i_BM_0 + i_PM_0) : (i_BM_3 + i_PM_1);
//         t_oPM_1 = (i_BM_2 + i_PM_2) <= (i_BM_1 + i_PM_3) ? (i_BM_2 + i_PM_2) : (i_BM_1 + i_PM_3);
//         t_oPM_2 = (i_BM_3 + i_PM_0) <= (i_BM_0 + i_PM_1) ? (i_BM_3 + i_PM_0) : (i_BM_0 + i_PM_1);
//         t_oPM_3 = (i_BM_1 + i_PM_2) <= (i_BM_2 + i_PM_3) ? (i_BM_1 + i_PM_2) : (i_BM_2 + i_PM_3);
//         #1; // Small delay to capture outputs
//         $display("Time: %0t \t|", $time);
//         $display("| i_BM_0: %b \t| i_BM_1: %b \t| i_BM_2: %b \t| i_BM_3: %b \t|\n| i_PM_0: %b \t| i_PM_1: %b \t| i_PM_2: %b \t| i_PM_3: %b \t|\n| o_PM_0: %b \t| o_PM_1: %b \t| o_PM_2: %b \t| o_PM_3: %b \t|", w_BM_0, w_BM_1, w_BM_2, w_BM_3, w_iPM_0, w_iPM_1, w_iPM_2, w_iPM_3, w_oPM_0, w_oPM_1, w_oPM_2, w_oPM_3);
//         $display("-> %s", (w_oPM_0 == t_oPM_0 && w_oPM_1 == t_oPM_1 && w_oPM_2 == t_oPM_2 && w_oPM_3 == t_oPM_3) ? "PASS" : "FAIL");
//         $display("=====================================");
//     end
    
//     #10;
//     $display("Simulation finished.");
//     $display("=====================================");
//     $finish;
// end

// endmodule

`timescale 1ns/1ps
module tb_acsu();

logic w_clk, w_rst_n, i_valid, o_valid;
logic [1:0] i_BM_0, i_BM_1, i_BM_2, i_BM_3;
logic [1:0] o_BM_0, o_BM_1, o_BM_2, o_BM_3;
logic [1:0] i_PM_0, i_PM_1, i_PM_2, i_PM_3;
logic [1:0] o_PM_0, o_PM_1, o_PM_2, o_PM_3;

D_BMU_ACSU DFF(
    .i_clk        (w_clk),
    .i_rst_n      (w_rst_n),
    .i_valid      (i_valid),
    .i_BM_0       (i_BM_0),
    .i_BM_1       (i_BM_1),
    .i_BM_2       (i_BM_2),
    .i_BM_3       (i_BM_3),
    .i_PM_0       (o_PM_0),
    .i_PM_1       (o_PM_1),
    .i_PM_2       (o_PM_2),
    .i_PM_3       (o_PM_3),
    .o_BM_0       (o_BM_0),
    .o_BM_1       (o_BM_1),
    .o_BM_2       (o_BM_2),
    .o_BM_3       (o_BM_3),
    .o_PM_0       (i_PM_0),
    .o_PM_1       (i_PM_1),
    .o_PM_2       (i_PM_2),
    .o_PM_3       (i_PM_3),
    .o_valid      (o_valid)
);

Add_compare_select_unit ACSU(
    .i_BM_0      (o_BM_0),
    .i_BM_1      (o_BM_1),
    .i_BM_2      (o_BM_2),
    .i_BM_3      (o_BM_3),
    .i_PM_0      (i_PM_0),
    .i_PM_1      (i_PM_1),
    .i_PM_2      (i_PM_2),
    .i_PM_3      (i_PM_3),
    .o_PM_0      (o_PM_0),
    .o_PM_1      (o_PM_1),
    .o_PM_2      (o_PM_2),
    .o_PM_3      (o_PM_3)
);

initial begin
    $dumpfile("tb_acsu.vcd");
    $dumpvars(0, tb_acsu);
end

// Clock generation
always begin
    #5 w_clk = ~w_clk; // Toggle clock every 5 time units
end
task automatic CheckResult(
    input logic [1:0] t_i_BM_0, t_i_BM_1, t_i_BM_2, t_i_BM_3,
    input logic [1:0] t_i_PM_0, t_i_PM_1, t_i_PM_2, t_i_PM_3,
    input logic [1:0] t_o_PM_0, t_o_PM_1, t_o_PM_2, t_o_PM_3
);
    logic [1:0] t_oPM_0, t_oPM_1, t_oPM_2, t_oPM_3;
    // Calculate expected outputs
    t_oPM_0 = (t_i_BM_0 + t_i_PM_0) <= (t_i_BM_3 + t_i_PM_1) ? (t_i_BM_0 + t_i_PM_0) : (t_i_BM_3 + t_i_PM_1);
    t_oPM_1 = (t_i_BM_2 + t_i_PM_2) <= (t_i_BM_1 + t_i_PM_3) ? (t_i_BM_2 + t_i_PM_2) : (t_i_BM_1 + t_i_PM_3);
    t_oPM_2 = (t_i_BM_3 + t_i_PM_0) <= (t_i_BM_0 + t_i_PM_1) ? (t_i_BM_3 + t_i_PM_0) : (t_i_BM_0 + t_i_PM_1);
    t_oPM_3 = (t_i_BM_1 + t_i_PM_2) <= (t_i_BM_2 + t_i_PM_3) ? (t_i_BM_1 + t_i_PM_2) : (t_i_BM_2 + t_i_PM_3);
    
    @(posedge w_clk); // Wait for clock edge to capture outputs
    $display("Time: %0t", $time);
    $display("| i_BM_0: %b | i_BM_1: %b | i_BM_2: %b | i_BM_3: %b |", 
             t_i_BM_0, t_i_BM_1, t_i_BM_2, t_i_BM_3);
    $display("| i_PM_0: %b | i_PM_1: %b | i_PM_2: %b | i_PM_3: %b |", 
             t_i_PM_0, t_i_PM_1, t_i_PM_2, t_i_PM_3);
    #1; // Small delay to ensure outputs are stable
    $display("| o_PM_0: %b | o_PM_1: %b | o_PM_2: %b | o_PM_3: %b |", 
             t_o_PM_0, t_o_PM_1, t_o_PM_2, t_o_PM_3);
    $display("| t_oPM_0: %b | t_oPM_1: %b | t_oPM_2: %b | t_oPM_3: %b |", 
             t_oPM_0, t_oPM_1, t_oPM_2, t_oPM_3);
    $display("-> %s", (t_o_PM_0 == t_oPM_0 && t_o_PM_1 == t_oPM_1 && 
                      t_o_PM_2 == t_oPM_2 && t_o_PM_3 == t_oPM_3) ? "PASS" : "FAIL");
    $display("=====================================");
endtask

initial begin
    w_rst_n = 0;
    i_valid = 0;
    #10; // Hold reset for 10 time units
    $display("Starting Add_compare_select_unit testbench...");
    w_rst_n = 1; // Release reset
    i_valid = 1; // Set valid signal to indicate inputs are ready
    i_BM_0 = 2'b00; i_BM_1 = 2'b00; i_BM_2 = 2'b00; i_BM_3 = 2'b00;
    $display("TestCase 0: Initialize signals");
    CheckResult(i_BM_0, i_BM_1, i_BM_2, i_BM_3, i_PM_0, i_PM_1, i_PM_2, i_PM_3, 
    o_PM_0, o_PM_1, o_PM_2, o_PM_3);
    #20;
    CheckResult(i_BM_0, i_BM_1, i_BM_2, i_BM_3, i_PM_0, i_PM_1, i_PM_2, i_PM_3, 
    o_PM_0, o_PM_1, o_PM_2, o_PM_3);
    $display("=====================================");
    
    // Test case 1: All inputs are equal
    @(posedge w_clk);
    $display("TestCase 1: All inputs are equal");
    i_BM_0 = 2'b01; i_BM_1 = 2'b01; i_BM_2 = 2'b01; i_BM_3 = 2'b01;
    CheckResult(i_BM_0, i_BM_1, i_BM_2, i_BM_3, i_PM_0, i_PM_1, i_PM_2, i_PM_3, 
                o_PM_0, o_PM_1, o_PM_2, o_PM_3);
    
    // Test case 2: Different values
    @(posedge w_clk);
    $display("TestCase 2: Different values");
    i_BM_0 = 2'b00; i_BM_1 = 2'b01; i_BM_2 = 2'b10; i_BM_3 = 2'b11;
    CheckResult(i_BM_0, i_BM_1, i_BM_2, i_BM_3, i_PM_0, i_PM_1, i_PM_2, i_PM_3, 
                o_PM_0, o_PM_1, o_PM_2, o_PM_3);
    
    // Random test cases
    $display("TestCase 3: Random test cases");
    for(int i = 0; i < 5; i++) begin
        @(posedge w_clk);
        i_BM_0 = $urandom % 4;
        i_BM_1 = $urandom % 4;
        i_BM_2 = $urandom % 4;
        i_BM_3 = $urandom % 4;
        CheckResult(i_BM_0, i_BM_1, i_BM_2, i_BM_3, i_PM_0, i_PM_1, i_PM_2, i_PM_3, 
                o_PM_0, o_PM_1, o_PM_2, o_PM_3);
    end
    
    #20;
    $display("Simulation finished.");
    $display("=====================================");
    $finish;
end

endmodule
