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
module tb_acsu_pmu();

logic i_clk, i_rst_n, i_valid;
logic [1:0] i_data;
logic [1:0] i_BM_0, i_BM_1, i_BM_2, i_BM_3;
logic [1:0] i_PM_0, i_PM_1, i_PM_2, i_PM_3;
logic [1:0] o_PM_0, o_PM_1, o_PM_2, o_PM_3;

// Instantiate Path_metric_unit
Path_metric_unit #(
    .SIZE_DATA(2)
) PMU (
    .i_clk      (i_clk),
    .i_rst_n    (i_rst_n),
    .i_valid    (i_valid),
    .i_PM_0     (o_PM_0),
    .i_PM_1     (o_PM_1),
    .i_PM_2     (o_PM_2),
    .i_PM_3     (o_PM_3),
    .o_PM_0     (i_PM_0),
    .o_PM_1     (i_PM_1),
    .o_PM_2     (i_PM_2),
    .o_PM_3     (i_PM_3)
);

// Instantiate Add_compare_select_unit
Add_compare_select_unit ACSU (
    .i_BM_0     (i_BM_0),
    .i_BM_1     (i_BM_1),
    .i_BM_2     (i_BM_2),
    .i_BM_3     (i_BM_3),
    .i_PM_0     (i_PM_0),
    .i_PM_1     (i_PM_1),
    .i_PM_2     (i_PM_2),
    .i_PM_3     (i_PM_3),
    .o_PM_0     (o_PM_0),
    .o_PM_1     (o_PM_1),
    .o_PM_2     (o_PM_2),
    .o_PM_3     (o_PM_3)
);

Branch_metric_unit uut(
    .i_data      (i_data),
    .o_BM_0      (i_BM_0),
    .o_BM_1      (i_BM_1),
    .o_BM_2      (i_BM_2),
    .o_BM_3      (i_BM_3)
);

// VCD dump for waveform analysis
initial begin
    $dumpfile("tb_acsu.vcd");
    $dumpvars(0, tb_acsu);
end

// Clock generation
always #10 i_clk = ~i_clk; // 50 MHz clock

// // Task to check results
// task CheckResult(
//     input logic [1:0] t_i_BM_0, t_i_BM_1, t_i_BM_2, t_i_BM_3,
//     input logic [1:0] t_i_PM_0, t_i_PM_1, t_i_PM_2, t_i_PM_3,
//     input logic [1:0] t_o_PM_0, t_o_PM_1, t_o_PM_2, t_o_PM_3
// );
//     logic [1:0] t_oPM_0, t_oPM_1, t_oPM_2, t_oPM_3;
//     logic [1:0] metric_path_0, metric_path_1, metric_path_2, metric_path_3, 
//                 metric_path_4, metric_path_5, metric_path_6, metric_path_7;
//     logic compare_result_0, compare_result_1, compare_result_2, compare_result_3;

//     // Calculate expected ACSU outputs
//     metric_path_0 = t_i_BM_0 + t_i_PM_0;
//     metric_path_1 = t_i_BM_3 + t_i_PM_1;
//     compare_result_0 = metric_path_0 <= metric_path_1;
//     // t_oPM_0 = (t_i_BM_0 + t_i_PM_0) <= (t_i_BM_3 + t_i_PM_1) ? (t_i_BM_0 + t_i_PM_0) : (t_i_BM_3 + t_i_PM_1);
//     t_oPM_0 = compare_result_0 ? metric_path_0 : metric_path_1;
    
//     metric_path_2 = t_i_BM_2 + t_i_PM_2;
//     metric_path_3 = t_i_BM_1 + t_i_PM_3;
//     compare_result_1 = metric_path_2 <= metric_path_3;
//     // t_oPM_1 = (t_i_BM_2 + t_i_PM_2) <= (t_i_BM_1 + t_i_PM_3) ? (t_i_BM_2 + t_i_PM_2) : (t_i_BM_1 + t_i_PM_3);
//     t_oPM_1 = compare_result_1 ? metric_path_2 : metric_path_3;
    
//     metric_path_4 = t_i_BM_3 + t_i_PM_0;
//     metric_path_5 = t_i_BM_0 + t_i_PM_1;
//     compare_result_2 = metric_path_4 <= metric_path_5;
//     // t_oPM_2 = (t_i_BM_3 + t_i_PM_0) <= (t_i_BM_0 + t_i_PM_1) ? (t_i_BM_3 + t_i_PM_0) : (t_i_BM_0 + t_i_PM_1);
//     t_oPM_2 = compare_result_2 ? metric_path_4 : metric_path_5;
    
//     metric_path_6 = t_i_BM_1 + t_i_PM_2;
//     metric_path_7 = t_i_BM_2 + t_i_PM_3;
//     compare_result_3 = metric_path_6 <= metric_path_7;
//     // t_oPM_3 = (t_i_BM_1 + t_i_PM_2) <= (t_i_BM_2 + t_i_PM_3) ? (t_i_BM_1 + t_i_PM_2) : (t_i_BM_2 + t_i_PM_3);
//     t_oPM_3 = compare_result_3 ? metric_path_6 : metric_path_7;

//     @(posedge i_clk); // Wait for clock edge to capture PMU outputs
//     $display("Time: %0t", $time);
//     $display("| i_BM_0: %b | i_BM_1: %b | i_BM_2: %b | i_BM_3: %b |", 
//              t_i_BM_0, t_i_BM_1, t_i_BM_2, t_i_BM_3);
//     $display("| i_PM_0: %b | i_PM_1: %b | i_PM_2: %b | i_PM_3: %b |", 
//              t_i_PM_0, t_i_PM_1, t_i_PM_2, t_i_PM_3);
//     #1; // Small delay to ensure stable outputs
//     $display("| o_PM_0: %b | o_PM_1: %b | o_PM_2: %b | o_PM_3: %b |", 
//              t_o_PM_0, t_o_PM_1, t_o_PM_2, t_o_PM_3);
//     $display("| t_oPM_0: %b | t_oPM_1: %b | t_oPM_2: %b | t_oPM_3: %b |", 
//              t_oPM_0, t_oPM_1, t_oPM_2, t_oPM_3);
//     $display("-> %s", (t_o_PM_0 == t_oPM_0 && t_o_PM_1 == t_oPM_1 && 
//                        t_o_PM_2 == t_oPM_2 && t_o_PM_3 == t_oPM_3) ? "PASS" : "FAIL");
//     $display("=====================================");
// endtask

task CheckResult();
    logic [2:0] metric_path_0, metric_path_1, metric_path_2, metric_path_3, 
                metric_path_4, metric_path_5, metric_path_6, metric_path_7;
    logic compare_result_0, compare_result_1, compare_result_2, compare_result_3;
    logic [1:0] t_PM_0, t_PM_1, t_PM_2, t_PM_3;

    @(posedge i_clk); // Wait for clock edge to capture PMU outputs
    $display("Time: %0t \t| i_data = %b \t| i_valid \t|", $time, i_data, i_valid);
    $display("| i_BM_0: %b \t| i_BM_1: %b \t| i_BM_2: %b \t| i_BM_3: %b \t|", 
            i_BM_0, i_BM_1, i_BM_2, i_BM_3);
    $display("| i_PM_0: %b \t| i_PM_1: %b \t| i_PM_2: %b \t| i_PM_3: %b \t|",
            i_PM_0, i_PM_1, i_PM_2, i_PM_3);
    // Calculate expected ACSU outputs
    #1;
    // Path 0
    metric_path_0 = (i_BM_0 + i_PM_0) > 3 ? 3 : (i_BM_0 + i_PM_0);
    metric_path_1 = (i_BM_3 + i_PM_1) > 3 ? 3 : (i_BM_3 + i_PM_1);
    compare_result_0 = metric_path_0 <= metric_path_1;
    t_PM_0 = compare_result_0 ? metric_path_0[1:0] : metric_path_1[1:0];

    // Path 1
    metric_path_2 = (i_BM_2 + i_PM_2) > 3 ? 3 : (i_BM_2 + i_PM_2);
    metric_path_3 = (i_BM_1 + i_PM_3) > 3 ? 3 : (i_BM_1 + i_PM_3);
    compare_result_1 = metric_path_2 <= metric_path_3;
    t_PM_1 = compare_result_1 ? metric_path_2[1:0] : metric_path_3[1:0];

    // Path 2
    metric_path_4 = (i_BM_3 + i_PM_0) > 3 ? 3 : (i_BM_3 + i_PM_0);
    metric_path_5 = (i_BM_0 + i_PM_1) > 3 ? 3 : (i_BM_0 + i_PM_1);
    compare_result_2 = metric_path_4 <= metric_path_5; 
    t_PM_2 = compare_result_2 ? metric_path_4[1:0] : metric_path_5[1:0];

    // Path 3
    metric_path_6 = (i_BM_1 + i_PM_2) > 3 ? 3 : (i_BM_1 + i_PM_2);
    metric_path_7 = (i_BM_2 + i_PM_3) > 3 ? 3 : (i_BM_2 + i_PM_3);
    compare_result_3 = metric_path_6 <= metric_path_7;
    t_PM_3 = compare_result_3 ? metric_path_6[1:0] : metric_path_7[1:0];

    // Display results 
    $display("| o_PM_0: %b \t| o_PM_1: %b \t| o_PM_2: %b \t| o_PM_3: %b \t|", 
            o_PM_0, o_PM_1, o_PM_2, o_PM_3);
    $display("| t_PM_0: %b \t| t_PM_1: %b \t| t_PM_2: %b \t| t_PM_3: %b \t|",
            t_PM_0, t_PM_1, t_PM_2, t_PM_3);
    $display("-> %s", (o_PM_0 == t_PM_0 && o_PM_1 == t_PM_1 && 
                       o_PM_2 == t_PM_2 && o_PM_3 == t_PM_3) ? "PASS" : "FAIL");
    $display("=====================================");
endtask 

// Test stimulus
// initial begin
//     // Initialize signals
//     i_rst_n = 0;
//     i_valid = 0;
//     i_BM_0 = 2'b00; i_BM_1 = 2'b00; i_BM_2 = 2'b00; i_BM_3 = 2'b00;
    
//     // Hold reset
//     #10;
//     $display("Starting ACSU and PMU testbench...");
//     i_rst_n = 1; // Release reset
//     i_valid = 1; // Enable PMU updates
    
//     // Test case 0: Zero branch metrics after reset
//     @(posedge i_clk);
//     $display("TestCase 0: Zero branch metrics after reset");
//     CheckResult(i_BM_0, i_BM_1, i_BM_2, i_BM_3, i_PM_0, i_PM_1, i_PM_2, i_PM_3, 
//                 o_PM_0, o_PM_1, o_PM_2, o_PM_3);
    
//     // // Test case 1: All branch metrics equal
//     // @(posedge i_clk);
//     // $display("TestCase 1: All branch metrics equal");
//     // i_BM_0 = 2'b01; i_BM_1 = 2'b01; i_BM_2 = 2'b01; i_BM_3 = 2'b01;
//     // CheckResult(i_BM_0, i_BM_1, i_BM_2, i_BM_3, i_PM_0, i_PM_1, i_PM_2, i_PM_3, 
//     //             o_PM_0, o_PM_1, o_PM_2, o_PM_3);
    
//     // // Test case 2: Different branch metrics
//     // @(posedge i_clk);
//     // $display("TestCase 2: Different branch metrics");
//     // i_BM_0 = 2'b00; i_BM_1 = 2'b01; i_BM_2 = 2'b10; i_BM_3 = 2'b10;
//     // CheckResult(i_BM_0, i_BM_1, i_BM_2, i_BM_3, i_PM_0, i_PM_1, i_PM_2, i_PM_3, 
//     //             o_PM_0, o_PM_1, o_PM_2, o_PM_3);
    
//     // Test case 3: Random inputs
//     $display("TestCase 1: Random inputs");
//     // for (int i = 0; i < 5; i++) begin
//     //     @(posedge i_clk);
//     //     i_BM_0 = $urandom % 4;
//     //     i_BM_1 = $urandom % 4;
//     //     i_BM_2 = $urandom % 4;
//     //     i_BM_3 = $urandom % 4;
//     //     CheckResult(i_BM_0, i_BM_1, i_BM_2, i_BM_3, i_PM_0, i_PM_1, i_PM_2, i_PM_3, 
//     //                 o_PM_0, o_PM_1, o_PM_2, o_PM_3);
//     // end
//     i_BM_0 = 2'b00; i_BM_1 = 2'b01; i_BM_2 = 2'b01; i_BM_3 = 2'b01;
//     CheckResult(i_BM_0, i_BM_1, i_BM_2, i_BM_3, i_PM_0, i_PM_1, i_PM_2, i_PM_3, 
//                 o_PM_0, o_PM_1, o_PM_2, o_PM_3);
    
//     i_BM_0 = 2'b01; i_BM_1 = 2'b01; i_BM_2 = 2'b10; i_BM_3 = 2'b01;
//     CheckResult(i_BM_0, i_BM_1, i_BM_2, i_BM_3, i_PM_0, i_PM_1, i_PM_2, i_PM_3, 
//                 o_PM_0, o_PM_1, o_PM_2, o_PM_3);
    
//     i_BM_0 = 2'b10; i_BM_1 = 2'b10; i_BM_2 = 2'b00; i_BM_3 = 2'b10;
//     CheckResult(i_BM_0, i_BM_1, i_BM_2, i_BM_3, i_PM_0, i_PM_1, i_PM_2, i_PM_3, 
//                 o_PM_0, o_PM_1, o_PM_2, o_PM_3);

//     i_BM_0 = 2'b10; i_BM_1 = 2'b00; i_BM_2 = 2'b00; i_BM_3 = 2'b10;
//     CheckResult(i_BM_0, i_BM_1, i_BM_2, i_BM_3, i_PM_0, i_PM_1, i_PM_2, i_PM_3, 
//                 o_PM_0, o_PM_1, o_PM_2, o_PM_3);
//     // Test case 4: Invalid input phase
//     @(posedge i_clk);
//     $display("TestCase 2: Invalid input phase");
//     i_valid = 0; // Disable PMU updates
//     i_BM_0 = 2'b10; i_BM_1 = 2'b10; i_BM_2 = 2'b00; i_BM_3 = 2'b01;
//     CheckResult(i_BM_0, i_BM_1, i_BM_2, i_BM_3, i_PM_0, i_PM_1, i_PM_2, i_PM_3, 
//                 o_PM_0, o_PM_1, o_PM_2, o_PM_3);
    
//     // End simulation
//     #20;
//     $display("Simulation finished.");
//     $display("=====================================");
//     $finish;
// end

initial begin
    i_rst_n = 0;
    i_clk = 0;
    i_valid = 0;
    i_data = 2'b00;

    #100;
    i_rst_n = 1; // Release reset
    i_valid = 0;
    CheckResult(); // Check initial state after reset
    $display("Starting ACSU and PMU testbench...");
    i_valid = 1; // Enable PMU updates
    CheckResult();
    $display("=====================================");
    i_data = 2'b00;
    CheckResult();
    $display("=====================================");
    i_data = 2'b01;
    CheckResult();
    $display("=====================================");
    // Test case 1: All branch metrics equal
    i_data = 2'b10;
    CheckResult();
    $display("=====================================");
    i_data = 2'b11;
    CheckResult();
    $display("=====================================");
    
    
    // End simulation
    #100
    $display("Simulation finished.");
    $display("=====================================");
    $finish;
end

endmodule
