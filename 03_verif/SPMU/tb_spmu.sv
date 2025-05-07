`timescale 1ns/1ps
module tb_spmu();

logic i_clk, i_rst_n, w_valid;
logic [1:0] w_PM_0, w_PM_1, w_PM_2, w_PM_3;
logic w_decision;

Survivor_path_metric_unit spmu(
    .i_clk       (i_clk),
    .i_rst_n     (i_rst_n),
    .i_PM_0      (w_PM_0),
    .i_PM_1      (w_PM_1),
    .i_PM_2      (w_PM_2),
    .i_PM_3      (w_PM_3),
    .o_decision  (w_decision),
    .o_valid     (w_valid)
);

always #5 i_clk = ~i_clk;

initial begin
    $dumpfile("tb_spmu.vcd");
    $dumpvars(0, tb_spmu);
end

initial begin
    i_clk = 1'b0;
    i_rst_n = 1'b0;

    @(posedge i_clk);
    i_rst_n = 1'b1;
    $display("Time = %t \t| i_rst_n = %d \t| o_decision = %d \t| o_valid = %d \t|", 
            $time, i_rst_n, w_decision, w_valid);
    $display("PM_0 = %d \t| PM_1 = %d \t| PM_2 = %d \t| PM_3 = %d \t| ",
            w_PM_0, w_PM_1, w_PM_2, w_PM_3);
    $display("=========================================");
    // case 1: S0 -> S0
    @(posedge i_clk);
    w_PM_0 = 2'b00;
    w_PM_1 = 2'b01;
    w_PM_2 = 2'b10;
    w_PM_3 = 2'b11;
    $display("case 1: S0 -> S0");
    $display("Time = %t \t| i_rst_n = %d \t| o_decision = %d \t| o_valid = %d \t|", 
            $time, i_rst_n, w_decision, w_valid);
    $display("PM_0 = %d \t| PM_1 = %d \t| PM_2 = %d \t| PM_3 = %d \t| ",
            w_PM_0, w_PM_1, w_PM_2, w_PM_3);
    $display("=========================================");
    // case 2: S0 -> S2
    @(posedge i_clk);
    w_PM_0 = 2'b11;
    w_PM_1 = 2'b10;
    w_PM_2 = 2'b01;
    w_PM_3 = 2'b00;
    $display("case 2: S0 -> S2");
    $display("Time = %t \t| i_rst_n = %d \t| o_decision = %d \t| o_valid = %d \t|", 
            $time, i_rst_n, w_decision, w_valid);
    $display("PM_0 = %d \t| PM_1 = %d \t| PM_2 = %d \t| PM_3 = %d \t| ",
            w_PM_0, w_PM_1, w_PM_2, w_PM_3);
    $display("=========================================");
    // case 3: S2 -> S1
    @(posedge i_clk);
    w_PM_0 = 2'b10;
    w_PM_1 = 2'b00;
    w_PM_2 = 2'b00;
    w_PM_3 = 2'b01;
    $display("case 3: S2 -> S1");
    $display("Time = %t \t| i_rst_n = %d \t| o_decision = %d \t| o_valid = %d \t|", 
            $time, i_rst_n, w_decision, w_valid);
    $display("PM_0 = %d \t| PM_1 = %d \t| PM_2 = %d \t| PM_3 = %d \t| ",
            w_PM_0, w_PM_1, w_PM_2, w_PM_3);
    $display("=========================================");
    // case 4: S1 -> S2
    @(posedge i_clk);
    w_PM_0 = 2'b11;
    w_PM_1 = 2'b00;
    w_PM_2 = 2'b01;
    w_PM_3 = 2'b10;
    $display("case 4: S1 -> S2");
    $display("Time = %t \t| i_rst_n = %d \t| o_decision = %d \t| o_valid = %d \t|", 
            $time, i_rst_n, w_decision, w_valid);
    $display("PM_0 = %d \t| PM_1 = %d \t| PM_2 = %d \t| PM_3 = %d \t| ",
            w_PM_0, w_PM_1, w_PM_2, w_PM_3);
    $display("=========================================");
    // case 5: S2 -> S3
    @(posedge i_clk);
    w_PM_0 = 2'b01;
    w_PM_1 = 2'b10;
    w_PM_2 = 2'b11;
    w_PM_3 = 2'b00;
    $display("case 5: S2 -> S3");
    $display("Time = %t \t| i_rst_n = %d \t| o_decision = %d \t| o_valid = %d \t|", 
            $time, i_rst_n, w_decision, w_valid);
    $display("PM_0 = %d \t| PM_1 = %d \t| PM_2 = %d \t| PM_3 = %d \t| ",
            w_PM_0, w_PM_1, w_PM_2, w_PM_3);
    $display("=========================================");
    // case 6: S3 -> S3
    @(posedge i_clk);
    w_PM_0 = 2'b11;
    w_PM_1 = 2'b10;
    w_PM_2 = 2'b01;
    w_PM_3 = 2'b00;
    $display("case 6: S3 -> S3");
    $display("Time = %t \t| i_rst_n = %d \t| o_decision = %d \t| o_valid = %d \t|", 
            $time, i_rst_n, w_decision, w_valid);
    $display("PM_0 = %d \t| PM_1 = %d \t| PM_2 = %d \t| PM_3 = %d \t| ",
            w_PM_0, w_PM_1, w_PM_2, w_PM_3);
    $display("=========================================");

    #100;
    $display("Testbench completed successfully");
    $display("==================================");
    $finish;
end
endmodule