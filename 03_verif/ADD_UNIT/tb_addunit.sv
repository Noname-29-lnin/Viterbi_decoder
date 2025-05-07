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

// Reference model function
function automatic [1:0] expected_result(input [1:0] a, input [1:0] b);
    logic [2:0] sum;
    sum = a + b;
    return (sum >= 3) ? 2'b11 : sum[1:0];
endfunction

initial begin
    $dumpfile("tb_addunit.vcd");
    $dumpvars(0, tb_addunit);
end


// Test stimulus
initial begin
    $display("Starting Add_unit testbench...");
    $display("============================");
    
    // Test all possible combinations (exhaustive test)
    for (int i = 0; i < 4; i++) begin
        for (int j = 0; j < 4; j++) begin
            test_case++;
            i_BM = i;
            i_PM = j;
            
            #10; // Wait for propagation
            
            // Check result
            if (o_PM === expected_result(i_BM, i_PM)) begin
                $display("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b", 
                        test_case, i_BM, i_PM, o_PM, expected_result(i_BM, i_PM));
                pass_count++;
            end
            else begin
                $display("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b", 
                        test_case, i_BM, i_PM, o_PM, expected_result(i_BM, i_PM));
                fail_count++;
            end
        end
    end
    
    // Additional random tests
    for (int k = 0; k < 34; k++) begin // Total 16 exhaustive + 34 random = 50 tests
        test_case++;
        i_BM = $random % 4;
        i_PM = $random % 4;
        
        #10;
        
        if (o_PM === expected_result(i_BM, i_PM)) begin
            $display("Test case %0d: PASS - Inputs: %b + %b | Output: %b | Expected: %b", 
                    test_case, i_BM, i_PM, o_PM, expected_result(i_BM, i_PM));
            pass_count++;
        end
        else begin
            $display("Test case %0d: FAIL - Inputs: %b + %b | Output: %b | Expected: %b", 
                    test_case, i_BM, i_PM, o_PM, expected_result(i_BM, i_PM));
            fail_count++;
        end
    end
    
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