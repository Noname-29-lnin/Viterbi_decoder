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

// Test function
function automatic test(input [1:0] a, input [1:0] b);
    return (a <= b);
endfunction

initial begin
    $dumpfile("tb_compare.vcd");
    $dumpvars(0, tb_compare);
end

// Test stimulus
initial begin
    $display("Starting Compare_unit testbench...");
    $display("=================================");
    
    for (test_case = 1; test_case <= 50; test_case++) begin
        // Generate random inputs
        i_metric_path_0 = $random % 4;
        i_metric_path_1 = $random % 4;
        
        // Wait for propagation
        #10;
        
        // Check result
        if (o_compare_less == test(i_metric_path_0, i_metric_path_1)) begin
            $display("Test case %0d: PASS - Inputs: %b, %b | Output: %b | Expected: %b", 
                    test_case, i_metric_path_0, i_metric_path_1, 
                    o_compare_less, test(i_metric_path_0, i_metric_path_1));
            pass_count++;
        end
        else begin
            $display("Test case %0d: FAIL - Inputs: %b, %b | Output: %b | Expected: %b", 
                    test_case, i_metric_path_0, i_metric_path_1, 
                    o_compare_less, test(i_metric_path_0, i_metric_path_1));
            fail_count++;
        end
    end
    
    // Summary
    $display("\nTest Summary:");
    $display("=============");
    $display("Total tests : %0d", test_case-1);
    $display("Passed      : %0d", pass_count);
    $display("Failed      : %0d", fail_count);
    $display("Pass rate   : %0.2f%%", (real'(pass_count)/(test_case-1))*100);
    
    $finish;
end

endmodule