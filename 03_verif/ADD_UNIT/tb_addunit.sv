// module tb_addunit();

// // Signals
// logic [1:0] i_BM, i_PM;
// logic [1:0] o_PM;

// // Test variables
// integer pass_count = 0;
// integer fail_count = 0;
// integer test_case = 0;

// // Instantiate DUT
// Add_unit dut (
//     .i_BM(i_BM),
//     .i_PM(i_PM),
//     .o_PM(o_PM)
// );

// // Reference model function
// function automatic [1:0] expected_result(input [1:0] a, input [1:0] b);
//     logic [2:0] sum;
//     sum = a + b;
//     return (sum >= 3) ? 2'b11 : sum[1:0];
// endfunction

// initial begin
//     $dumpfile("tb_addunit.vcd");
//     $dumpvars(0, tb_addunit);
// end


// // Test stimulus
// initial begin
//     $display("Starting Add_unit testbench...");
//     $display("============================");
    
//     // Test all possible combinations (exhaustive test)
//     for (int i = 0; i < 4; i++) begin
//         for (int j = 0; j < 4; j++) begin
//             test_case++;
//             i_BM = i;
//             i_PM = j;
            
//             #10; // Wait for propagation
            
//             // Check result
//             if (o_PM === expected_result(i_BM, i_PM)) begin
//                 $display("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b", 
//                         test_case, i_BM, i_PM, o_PM, expected_result(i_BM, i_PM));
//                 pass_count++;
//             end
//             else begin
//                 $display("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b", 
//                         test_case, i_BM, i_PM, o_PM, expected_result(i_BM, i_PM));
//                 fail_count++;
//             end
//         end
//     end
    
//     // Additional random tests
//     for (int k = 0; k < 34; k++) begin // Total 16 exhaustive + 34 random = 50 tests
//         test_case++;
//         i_BM = $random % 4;
//         i_PM = $random % 4;
        
//         #10;
        
//         if (o_PM === expected_result(i_BM, i_PM)) begin
//             $display("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b", 
//                     test_case, i_BM, i_PM, o_PM, expected_result(i_BM, i_PM));
//             pass_count++;
//         end
//         else begin
//             $display("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b", 
//                     test_case, i_BM, i_PM, o_PM, expected_result(i_BM, i_PM));
//             fail_count++;
//         end
//     end
    
//     // Summary
//     $display("\nTest Summary:");
//     $display("=============");
//     $display("Total tests : %0d", test_case);
//     $display("Passed      : %0d", pass_count);
//     $display("Failed      : %0d", fail_count);
//     $display("Pass rate   : %0.2f%%", (real'(pass_count)/test_case)*100);
    
//     $finish;
// end

// endmodule
`timescale 1ns/1ps
module tb_addunit();

// Signals
logic [1:0] i_BM, i_PM;
logic [1:0] o_PM;

// Test variables
integer pass_count = 0;
integer fail_count = 0;
integer test_case = 0;

// Instantiate DUT
Add_unit dut (
    .i_BM(i_BM),
    .i_PM(i_PM),
    .o_PM(o_PM)
);

// Task to test a single input combination
function automatic [1:0] expected_result(input [1:0] a, input [1:0] b);
    logic [2:0] sum;
    sum = a + b;
    return (sum >= 3) ? 2'b11 : sum[1:0];
endfunction
task automatic test_add(
    input [1:0] a, b,
    input [1:0] expected
);
    i_BM = a;
    i_PM = b;
    #10; // Wait for propagation
    test_case++;
    if (o_PM === expected) begin
        $display("Test case %0d \t| Inputs: %b + %b \t| Output: %b \t| Expected: %b \t| -> PASS", 
                 test_case, a, b, o_PM, expected);
        pass_count++;
    end else begin
        $display("Test case %0d \t| Inputs: %b + %b \t| Output: %b \t| Expected: %b \t| -> FAIL", 
                 test_case, a, b, o_PM, expected);
        fail_count++;
    end
endtask

// VCD dump
initial begin
    $dumpfile("tb_addunit.vcd");
    $dumpvars(0, tb_addunit);
end

// Test stimulus
initial begin
    $display("Starting Add_unit testbench...");
    $display("============================");
    
    // Test all combinations from the truth table
    test_add(2'b00, 2'b00, expected_result(2'b00, 2'b00)); // A=00, B=00, S=00
    test_add(2'b00, 2'b01, expected_result(2'b00, 2'b01)); // A=00, B=01, S=01
    test_add(2'b00, 2'b10, expected_result(2'b00, 2'b10)); // A=00, B=10, S=10
    test_add(2'b00, 2'b11, expected_result(2'b00, 2'b11)); // A=00, B=11, S=11
    test_add(2'b01, 2'b00, expected_result(2'b01, 2'b00)); // A=01, B=00, S=01
    test_add(2'b01, 2'b01, expected_result(2'b01, 2'b01)); // A=01, B=01, S=10
    test_add(2'b01, 2'b10, expected_result(2'b01, 2'b10)); // A=01, B=10, S=11
    test_add(2'b01, 2'b11, expected_result(2'b01, 2'b11)); // A=01, B=11, S=11
    test_add(2'b10, 2'b00, expected_result(2'b10, 2'b00)); // A=10, B=00, S=10
    test_add(2'b10, 2'b01, expected_result(2'b10, 2'b01)); // A=10, B=01, S=11
    test_add(2'b10, 2'b10, expected_result(2'b10, 2'b10)); // A=10, B=10, S=11
    test_add(2'b10, 2'b11, expected_result(2'b10, 2'b11)); // A=10, B=11, S=11
    test_add(2'b11, 2'b00, expected_result(2'b11, 2'b00)); // A=11, B=00, S=11
    test_add(2'b11, 2'b01, expected_result(2'b11, 2'b01)); // A=11, B=01, S=11
    test_add(2'b11, 2'b10, expected_result(2'b11, 2'b10)); // A=11, B=10, S=11
    test_add(2'b11, 2'b11, expected_result(2'b11, 2'b11)); // A=11, B=11, S=11
    
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
