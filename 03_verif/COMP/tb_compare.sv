// `timescale 10ns/1ps
// module tb_compare();

// // Signals
// logic [1:0] i_metric_path_0, i_metric_path_1;
// logic o_compare_less;

// // Test variables
// integer pass_count = 0;
// integer fail_count = 0;
// integer test_case = 0;

// // Instantiate DUT
// Compare_unit dut (
//     .i_metric_path_0(i_metric_path_0),
//     .i_metric_path_1(i_metric_path_1),
//     .o_compare_less(o_compare_less)
// );

// // Test function
// function automatic test(input [1:0] a, input [1:0] b);
//     return (a <= b);
// endfunction

// initial begin
//     $dumpfile("tb_compare.vcd");
//     $dumpvars(0, tb_compare);
// end

// // Test stimulus
// initial begin
//     $display("Starting Compare_unit testbench...");
//     $display("=================================");
    
//     for (test_case = 1; test_case <= 50; test_case++) begin
//         // Generate random inputs
//         i_metric_path_0 = $random % 4;
//         i_metric_path_1 = $random % 4;
        
//         // Wait for propagation
//         #10;
        
//         // Check result
//         if (o_compare_less == test(i_metric_path_0, i_metric_path_1)) begin
//             $display("Test case %0d: PASS - Inputs: %b, %b | Output: %b | Expected: %b", 
//                     test_case, i_metric_path_0, i_metric_path_1, 
//                     o_compare_less, test(i_metric_path_0, i_metric_path_1));
//             pass_count++;
//         end
//         else begin
//             $display("Test case %0d: FAIL - Inputs: %b, %b | Output: %b | Expected: %b", 
//                     test_case, i_metric_path_0, i_metric_path_1, 
//                     o_compare_less, test(i_metric_path_0, i_metric_path_1));
//             fail_count++;
//         end
//     end
    
//     // Summary
//     $display("\nTest Summary:");
//     $display("=============");
//     $display("Total tests : %0d", test_case-1);
//     $display("Passed      : %0d", pass_count);
//     $display("Failed      : %0d", fail_count);
//     $display("Pass rate   : %0.2f%%", (real'(pass_count)/(test_case-1))*100);
    
//     $finish;
// end

// endmodule

`timescale 10ns/1ps
module tb_compare();

// Signals
logic [1:0] i_metric_path_0, i_metric_path_1;
logic o_compare_less;

// Test variables
integer pass_count = 0;
integer fail_count = 0;
integer test_case = 0;

// Instantiate DUT
Compare_unit dut (
    .i_metric_path_0(i_metric_path_0),
    .i_metric_path_1(i_metric_path_1),
    .o_compare_less(o_compare_less)
);

// Task to test a single input combination
// Test function
function automatic test(input [1:0] a, input [1:0] b);
    return (a <= b);
endfunction
task automatic test_compare(
    input [1:0] a, b,
    input expected
);
    i_metric_path_0 = a;
    i_metric_path_1 = b;
    #10; // Wait for propagation
    test_case++;
    if (o_compare_less == expected) begin
        $display("Test case %0d \t| Inputs: A=%b \t B=%b \t| Output: %b \t| Expected: %b \t| -> PASS", 
                 test_case, a, b, o_compare_less, expected);
        pass_count++;
    end else begin
        $display("Test case %0d \t| Inputs: A=%b \t B=%b \t| Output: %b \t| Expected: %b \t| -> FAIL", 
                 test_case, a, b, o_compare_less, expected);
        fail_count++;
    end
endtask

// VCD dump
initial begin
    $dumpfile("tb_compare.vcd");
    $dumpvars(0, tb_compare);
end

// Test stimulus
initial begin
    $display("Starting Compare_unit testbench...");
    $display("=================================");
    
    // Test all combinations from the truth table
    test_compare(2'b00, 2'b00, test(2'b00, 2'b00)); // A=00, B=00, C=1
    test_compare(2'b00, 2'b01, test(2'b00, 2'b01)); // A=00, B=01, C=1
    test_compare(2'b00, 2'b10, test(2'b00, 2'b10)); // A=00, B=10, C=1
    test_compare(2'b00, 2'b11, test(2'b00, 2'b11)); // A=00, B=11, C=1
    test_compare(2'b01, 2'b00, test(2'b01, 2'b00)); // A=01, B=00, C=0
    test_compare(2'b01, 2'b01, test(2'b01, 2'b01)); // A=01, B=01, C=1
    test_compare(2'b01, 2'b10, test(2'b01, 2'b10)); // A=01, B=10, C=1
    test_compare(2'b01, 2'b11, test(2'b01, 2'b11)); // A=01, B=11, C=1
    test_compare(2'b10, 2'b00, test(2'b10, 2'b00)); // A=10, B=00, C=0
    test_compare(2'b10, 2'b01, test(2'b10, 2'b01)); // A=10, B=01, C=0
    test_compare(2'b10, 2'b10, test(2'b10, 2'b10)); // A=10, B=10, C=1
    test_compare(2'b10, 2'b11, test(2'b10, 2'b11)); // A=10, B=11, C=1
    test_compare(2'b11, 2'b00, test(2'b11, 2'b00)); // A=11, B=00, C=0
    test_compare(2'b11, 2'b01, test(2'b11, 2'b01)); // A=11, B=01, C=0
    test_compare(2'b11, 2'b10, test(2'b11, 2'b10)); // A=11, B=10, C=0
    test_compare(2'b11, 2'b11, test(2'b11, 2'b11)); // A=11, B=11, C=1
    
    // Summary
    $display("\nTest Summary:");
    $display("=============");
    $display("Total tests : %0d", test_case);
    $display("Passed      : %0d", pass_count);
    $display("Failed      : %0d", fail_count);
    $display("Pass rate   : %0.2f%%", (real'(pass_count)/test_case)*100);
    
    $finish;
end

endmodule
