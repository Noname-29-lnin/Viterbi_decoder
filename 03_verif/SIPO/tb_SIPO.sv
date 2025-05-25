`timescale 1ns / 1ps
module tb_SIPO();

parameter SIZE_DATA_IN  = 1;
parameter SIZE_DATA_OUT = 8;


logic w_clk, w_rst_n, w_start;
logic [SIZE_DATA_IN-1:0] w_idata;
logic [SIZE_DATA_OUT-1:0] w_odata;
logic w_done;

SIPO #(
    .SIZE_DATA_IN  (SIZE_DATA_IN),
    .SIZE_DATA_OUT (SIZE_DATA_OUT)
) uut (
    .i_clk          (w_clk),
    .i_rst_n        (w_rst_n),
    .i_start        (w_start),
    .i_data         (w_idata),
    .o_data         (w_odata),
    .o_done         (w_done)
);

// Create .vcd file
initial begin
    $dumpfile("tb_SIPO.vcd");
    $dumpvars(0, tb_SIPO);
end

// Clock generation
always #5 w_clk = ~w_clk;

// Testbench stimulus
initial begin
    w_clk = 0;
    w_rst_n = 0;
    w_start = 0;
    w_idata = 0;

    // Reset the DUT
    #10;
    w_rst_n = 1;
    #10;

    // Start the SIPO with some data
    w_start = 1;
    repeat (SIZE_DATA_OUT) begin
        @(posedge w_clk);
        w_idata = $random % 2; // Random data for SIZE_DATA_IN bits
    end

    // stop
    w_start = 0;
    repeat (SIZE_DATA_OUT) begin
        @(posedge w_clk);
        w_idata = $random % 2; // Random data for SIZE_DATA_IN bits
    end

    w_start = 1;
    repeat (SIZE_DATA_OUT) begin
        @(posedge w_clk);
        w_idata = $random % 2; // Random data for SIZE_DATA_IN bits
    end


    // reset
    #20;
    w_start = 1;
    w_rst_n = 0;
    #20;
    w_rst_n = 1;
    #20;
    repeat (SIZE_DATA_OUT) begin
        @(posedge w_clk);
        w_idata = 1; // Random data for SIZE_DATA_IN bits
    end
    
    // Wait for output to be done
    #100;

    $finish;
end

always @(w_done or w_idata or w_start) begin
    $display("| Time = %t \t| i_start = %b \t| i_data = %b \t| o_data = %b \t| o_done = %b \t|",
             $time, w_start, w_idata, w_odata, w_done);
end

endmodule
