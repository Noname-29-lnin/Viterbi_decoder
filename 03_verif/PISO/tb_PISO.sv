// `timescale 1ns/1ps
// module tb_SIPO;

// parameter SIZE_DATA_IN = 16;
// parameter SIZE_DATA_OUT = 2;

// logic w_clk, w_rst_n, w_start;
// always #10 w_clk = ~w_clk;

// logic [SIZE_DATA_IN-1:0] w_idata;
// logic [SIZE_DATA_OUT-1:0] w_odata;
// logic w_valid, w_done;

// PISO #(
//     .SIZE_DATA_IN (SIZE_DATA_IN),
//     .SIZE_DATA_OUT(SIZE_DATA_OUT)
// ) uut (
//     .i_clk      (w_clk),
//     .i_rst_n    (w_rst_n),
//     .i_start    (w_start),
//     .i_data     (w_idata),
//     .o_data     (w_odata),
//     .o_valid    (w_valid),
//     .o_done     (w_done)
// );

// initial begin
//     $dumpfile("tb_SIPO.vcd");
//     $dumpvars(0, tb_SIPO);
// end

// initial begin
//     w_clk = 1'b0;
//     w_rst_n = 1'b0;
//     w_start = 1'b0;
//     w_idata = '0;

//     // Reset
//     #5;
//     w_rst_n = 1'b1;

//     // Start with some data
//     #5;
//     w_start = 1'b1;
//     w_idata = 16'hAAAA; // Example data
//     // Wait for a few clock cycles
//     repeat (10) @(posedge w_clk);

//     #20;
//     w_start = 1'b0; // Stop the start signal   
//     w_idata = 16'h1234; // Clear data
//     repeat (10) @(posedge w_clk);

//     #20;
//     // Reset again
//     #5;
//     w_rst_n = 1'b0; // Reset again
//     #20;
//     w_rst_n = 1'b1;
//     w_start = 1'b1;
//     w_idata = 16'h1234; // New data

//     // Wait for a few clock cycles
//     repeat (10) @(posedge w_clk);

//     // Test case 1: Reset and start
//     #20;
//     w_rst_n = 1'b0; // Reset the module
//     #10;
//     w_rst_n = 1'b1; // Release reset
//     w_start = 1'b0;

//     w_idata = 16'h1234; // New data after reset
//     repeat (10) begin
//         @(posedge w_clk);
//         $display("Time = %t \t| i_start = %b \t| w_idata = %b \t| w_odata = %b \t| w_valid = %b \t| w_done = %b \t|", 
//                  $time, w_start, w_idata, w_odata, w_valid, w_done);
//     end


//     // Test case 2: Test output after reset

//     // Test case 3: Change date when start is high

//     // Test case 4: Change start signal while data is being processed
//     $finish;
// end

// always @(posedge w_valid or posedge w_done) begin
//     $display("|Time = %t \t| i_start = %b \t| i_data = %b \t|", $time, w_start, w_idata);
//     $display("|o_data = %b \t| o_valid = %b \t| o_done = %b |", w_odata, w_valid, w_done);
// end

// endmodule

`timescale 1ns/1ps
module tb_PISO;

  parameter SIZE_DATA_IN = 16;
  parameter SIZE_DATA_OUT = 2;

  logic i_clk, i_rst_n, i_start;
  logic [SIZE_DATA_IN-1:0] i_data;
  logic [SIZE_DATA_OUT-1:0] o_data;
  logic o_valid, o_done;

  // Clock generation
  always #10 i_clk = ~i_clk;

  // Instantiate the PISO module
  PISO #(
      .SIZE_DATA_IN (SIZE_DATA_IN),
      .SIZE_DATA_OUT(SIZE_DATA_OUT)
  ) uut (
      .i_clk      (i_clk),
      .i_rst_n    (i_rst_n),
      .i_start    (i_start),
      .i_data     (i_data),
      .o_data     (o_data),
      .o_valid    (o_valid),
      .o_done     (o_done)
  );

  // VCD dump for waveform analysis
  initial begin
      $dumpfile("tb_PISO.vcd");
      $dumpvars(0, tb_PISO);
  end

  // Task to display signals
  task display_signals;
      $display("Time = %t \t| i_start = %b \t| i_data = %b \t| o_data = %b \t| o_valid = %b \t| o_done = %b",
               $time, i_start, i_data, o_data, o_valid, o_done);
  endtask

  // Task to run a test case with given inputs
  task run_test_case(input string test_name, logic rst_n, logic start, logic [SIZE_DATA_IN-1:0] data, integer cycles);
      $display("========== %s =========", test_name);
      i_rst_n = rst_n;
      i_start = start;
      i_data = data;
      #20; // Wait for signal stabilization
      if (!rst_n) begin
          #20;
          i_rst_n = 1'b1; // Release reset if needed
      end
      repeat (cycles) begin
          @(posedge i_clk);
          display_signals();
          if (o_done) begin
              $display("Done processing data.");
              @(posedge i_clk);
              break; // Exit loop when done
          end
      end
  endtask

  // Main test sequence
  initial begin
      // Initialize signals
      i_clk = 1'b0;
      i_rst_n = 1'b0;
      i_start = 1'b0;
      i_data = 16'h0000;

      // Test Case 1: Reset and Start
      run_test_case("Test Case 1: Reset and Start", 1'b0, 1'b0, 16'h1234, 10);

      #100; // Inter-test delay

      // Test Case 2: Test Output After Reset
      run_test_case("Test Case 2: Test Output After Reset", 1'b0, 1'b1, 16'h1234, 10);

      #100; // Inter-test delay

      // Test Case 3: Change Data When Start is High
      run_test_case("Test Case 3: Change Data When Start is High - Data = 0x1234", 1'b0, 1'b1, 16'h1234, 2);
      run_test_case("Test Case 3: Change Data When Start is High - Data = 0x5678", 1'b1, 1'b1, 16'h5678, 8);
      
      #100; // Inter-test delay

      // Test Case 4: Change Start Signal While Data is Being Processed
      $display("========== Test Case 4: Change Start Signal While Data is Being Processed =========");
      i_start = 1'b0;
      #20;
      i_start = 1'b1;
      i_data = 16'h5678;
      repeat (5) begin
          @(posedge i_clk);
          display_signals();
          if (o_done) begin
              $display("Done processing new data.");
              @(posedge i_clk);
              break;
          end
      end
      i_start = 1'b0;
      repeat (5) begin
          @(posedge i_clk);
          display_signals();
          if (o_done) begin
              $display("Done processing new data.");
              @(posedge i_clk);
              break;
          end
      end
      
      #100;

      // Finish simulation
      $display("Simulation completed.");
      $finish;
  end

endmodule