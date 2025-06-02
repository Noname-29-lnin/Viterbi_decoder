module tb_Hex_to_7seg();

    // Test signals
    logic i_en_hex;
    logic [3:0] i_data;
    logic [7:0] o_HEX;

    // Instantiate DUT with 8-bit data size
    Hex_to_7seg #(.SIZE_DATA(8)) dut (
        .i_en_hex(i_en_hex),
        .i_data({4'b0, i_data}),  // Pad with zeros for 8-bit input
        .o_HEX(o_HEX)
    );

    // VCD file dumping
    initial begin
        $dumpfile("tb_Hex_to_7seg.vcd");
        $dumpvars(0, tb_Hex_to_7seg);
    end

    // Stimulus and verification
    initial begin
        // Test 1: Disabled module - all segments should be off
        i_en_hex = 0;
        i_data = 4'h0;
        #10;
        if (o_HEX !== 8'hFF) 
            $display("Error (Disabled): Expected 8'hFF, got %h", o_HEX);
        else 
            $display("Pass: Disabled - All segments off");

        // Test 2: Enable module and verify all hex values
        i_en_hex = 1;
        for (int i = 0; i < 16; i++) begin
            i_data = i;
            #10;
            
            // Expected values for common anode display
            case (i_data)
                4'h0: check_output(8'h40, "0");
                4'h1: check_output(8'h79, "1");
                4'h2: check_output(8'h24, "2");
                4'h3: check_output(8'h30, "3");
                4'h4: check_output(8'h19, "4");
                4'h5: check_output(8'h12, "5");
                4'h6: check_output(8'h02, "6");
                4'h7: check_output(8'h78, "7");
                4'h8: check_output(8'h00, "8");
                4'h9: check_output(8'h10, "9");
                4'hA: check_output(8'h08, "A");
                4'hB: check_output(8'h03, "b");
                4'hC: check_output(8'h46, "C");
                4'hD: check_output(8'h21, "d");
                4'hE: check_output(8'h06, "E");
                4'hF: check_output(8'h0E, "F");
            endcase
        end

        // Test 3: Disable module again
        i_en_hex = 0;
        i_data = 4'hF;  // Any data value
        #10;
        if (o_HEX !== 8'hFF) 
            $display("Error (Re-Disable): Expected 8'hFF, got %h", o_HEX);
        else 
            $display("Pass: Re-Disable - All segments off");

        $display("\nAll tests completed!");
        $finish;
    end

    // Helper task for output verification
    task check_output(input logic [7:0] expected, input string char);
        if (o_HEX !== expected) begin
            $display("Hex %s (0x%h) - Expected: %b (%h), Got: %b (%h) -> FAIL",
                     char, i_data, expected, expected, o_HEX, o_HEX);
        end
        else begin
            $display("Hex %s (0x%h) - Output: %b -> PASS", 
                     char, i_data, o_HEX);
        end
    endtask

endmodule
