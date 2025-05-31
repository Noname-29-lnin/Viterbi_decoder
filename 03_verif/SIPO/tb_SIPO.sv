`timescale 1ns / 1ps

module tb_SIPO();

  // Parameters
  parameter SIZE_DATA_IN  = 1;
  parameter SIZE_DATA_OUT = 8;
  parameter CLK_PERIOD    = 20; // 50 MHz clock (20ns period)

  // Signals
  logic [SIZE_DATA_IN-1:0]  i_data;
  logic [SIZE_DATA_OUT-1:0] o_data;
  logic                     i_clk, i_rst_n, i_start;
  logic                     o_done;

  // Instantiate DUT
  SIPO #(
    .SIZE_DATA_IN  (SIZE_DATA_IN),
    .SIZE_DATA_OUT (SIZE_DATA_OUT)
  ) uut (
    .i_clk          (i_clk),
    .i_rst_n        (i_rst_n),
    .i_start        (i_start),
    .i_data         (i_data),
    .o_data         (o_data),
    .o_done         (o_done)
  );

  // Clock generation
  initial begin
    i_clk = 0;
    forever #(CLK_PERIOD/2) i_clk = ~i_clk;
  end

  // Create .vcd file for waveform
  initial begin
    $dumpfile("tb_SIPO.vcd");
    $dumpvars(0, tb_SIPO);
  end

  // Task to reset DUT
  task reset_dut;
    input integer reset_time;
    begin
      i_rst_n = 0;
      i_start = 0;
      i_data  = 0;
      #reset_time;
      i_rst_n = 1;
    end
  endtask

  // Task to send data (LSB first)
  task send_data;
    input integer num_cycles;
    input logic start_value;
    input logic [SIZE_DATA_OUT-1:0] data_in; // Use SIZE_DATA_OUT for flexibility
    output logic done;
    logic [SIZE_DATA_OUT-1:0] shift_data;
    begin
      i_start = start_value;
      done = 0;
      shift_data = data_in;
      repeat (num_cycles) begin
        @(posedge i_clk);
        i_data = shift_data[0]; // Output LSB
        shift_data = shift_data >> 1; // Shift right for next bit
        #1;
        display_signals();
        if (o_done) begin
          @(posedge i_clk);
          #1;
          $display("Output done at time %t, o_data = %h", $time, o_data);
          done = 1;
          @(posedge i_clk);
          break;
        end
      end
    end
  endtask

  // Task to display signals
  task display_signals;
    $display("Time = %t \t| i_start = %b \t| i_data = %b \t| o_data = %b \t| o_done = %b \t| count = %h",
             $time, i_start, i_data, o_data, o_done, uut.count);
  endtask

  // Testbench stimulus
  initial begin
    // Initialize
    reset_dut(20);
    #20;

    // Test case 1: Reset and send fixed data 0xAA (LSB first: 0,1,0,1,0,1,0,1)
    $display("Test case 1: Reset and send fixed data 0xAA (LSB first)");
    reset_dut(20);
    #20;
    send_data(8, 1, 8'hAA, o_done); // Send 0xAA (10101010)
    #40;

    // Test case 2: Send different fixed data 0x55 (LSB first: 1,0,1,0,1,0,1,0)
    $display("Test case 2: Send fixed data 0x55 (LSB first)");
    reset_dut(20);
    #20;
    send_data(8, 1, 8'h55, o_done); // Send 0x55 (01010101)
    #40;

    // Test case 3: Send data 0xAA, i_start low, then send 0xCC
    $display("Test case 3: Send data 0xAA (LSB first), i_start low, then send 0xCC (LSB first)");
    reset_dut(20);
    #20;
    send_data(8, 1, 8'hAA, o_done); // Send 0xAA
    i_start = 0;
    #50;
    send_data(8, 1, 8'hCC, o_done); // Send 0xCC (11001100)
    #40;

    // Test case 4: Send data 0xF0, then reset, then send with i_start=0
    $display("Test case 4: Send data 0xF0 (LSB first), then reset, then send with i_start=0");
    reset_dut(20);
    #20;
    send_data(8, 1, 8'hF0, o_done); // Send 0xF0 (11110000)
    reset_dut(20);
    #20;
    send_data(8, 1, 8'hAA, o_done); // Should not shift due to i_start=0
    #40;

    // End simulation
    #100;
    $display("Simulation completed successfully!");
    $finish;
  end

endmodule
