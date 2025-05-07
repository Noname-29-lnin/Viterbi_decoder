`timescale 1ns/1ps
module tb_bmu();

logic [1:0] w_idata;
logic [1:0] w_BM_0, w_BM_1, w_BM_2, w_BM_3;

Branch_metric_unit uut(
    .i_data      (w_idata),
    .o_BM_0      (w_BM_0),
    .o_BM_1      (w_BM_1),
    .o_BM_2      (w_BM_2),
    .o_BM_3      (w_BM_3)
);

initial begin
    $dumpfile("tb_bmu.vcd");
    $dumpvars(0, tb_bmu);
end

initial begin
    // Test case 1
    w_idata = 2'b00;
    #10;
    $display("| Time = %t \t|", $time);
    $display("| w_idata = %b \t|", w_idata);
    $display("| w_BM_0 = %b \t| w_BM_1 = %b \t| w_BM_2 = %b \t| w_BM_3 = %b \t|", w_BM_0, w_BM_1, w_BM_2, w_BM_3);
    $display("Test case 1: %s", (w_BM_0 == 2'b00 && w_BM_1 == 2'b01 && w_BM_2 == 2'b01 && w_BM_3 == 2'b10) ? "Passed" : "Failed");
    $display("--------------------------------------------------");

    // Test case 2
    w_idata = 2'b01;
    #10;
    $display("| Time = %t \t|", $time);
    $display("| w_idata = %b \t|", w_idata);
    $display("| w_BM_0 = %b \t| w_BM_1 = %b \t| w_BM_2 = %b \t| w_BM_3 = %b \t|", w_BM_0, w_BM_1, w_BM_2, w_BM_3);
    $display("Test case 2: %s", (w_BM_0 == 2'b01 && w_BM_1 == 2'b00 && w_BM_2 == 2'b10 && w_BM_3 == 2'b01) ? "Passed" : "Failed");
    $display("--------------------------------------------------");

    // Test case 3
    w_idata = 2'b10;
    #10;
    $display("| Time = %t \t|", $time);
    $display("| w_idata = %b \t|", w_idata);
    $display("| w_BM_0 = %b \t| w_BM_1 = %b \t| w_BM_2 = %b \t| w_BM_3 = %b \t|", w_BM_0, w_BM_1, w_BM_2, w_BM_3);
    $display("Test case 3: %s", (w_BM_0 == 2'b01 && w_BM_1 == 2'b10 && w_BM_2 == 2'b00 && w_BM_3 == 2'b01) ? "Passed" : "Failed");
    $display("--------------------------------------------------");

    // Test case 4
    w_idata = 2'b11;
    #10;
    $display("| Time = %t \t|", $time);
    $display("| w_idata = %b \t|", w_idata);
    $display("| w_BM_0 = %b \t| w_BM_1 = %b \t| w_BM_2 = %b \t| w_BM_3 = %b \t|", w_BM_0, w_BM_1, w_BM_2, w_BM_3);
    $display("Test case 4: %s", (w_BM_0 == 2'b10 && w_BM_1 == 2'b01 && w_BM_2 == 2'b01 && w_BM_3 == 2'b00) ? "Passed" : "Failed");
    $display("--------------------------------------------------");
end

endmodule
