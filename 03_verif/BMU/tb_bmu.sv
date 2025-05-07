`timescale 1ns/1ps
module tb_bmu();

logic i_clk, i_rst_n, w_valid;
logic [1:0] w_idata;
logic [1:0] w_BM_0, w_BM_1, w_BM_2, w_BM_3;

Branch_metric_unit uut(
    .i_clk       (i_clk),
    .i_rst_n     (i_rst_n),
    .i_data      (w_idata),
    .o_BM_0      (w_BM_0),
    .o_BM_1      (w_BM_1),
    .o_BM_2      (w_BM_2),
    .o_BM_3      (w_BM_3),
    .o_valid     (w_valid)
);

initial begin
    $dumpfile("tb_bmu.vcd");
    $dumpvars(0, tb_bmu);
end

always #5 i_clk = ~i_clk;

initial begin
    i_clk = 0;
    i_rst_n = 0;
    #10 i_rst_n = 1;
    
    // Test case 1
    @(posedge i_clk);
    w_idata = 2'b00;
    #10;
    // Test case 2
    @(posedge i_clk);
    w_idata = 2'b01;
    #10;
    // Test case 3
    @(posedge i_clk);
    w_idata = 2'b10;
    #10;
    // Test case 4
    @(posedge i_clk);
    w_idata = 2'b11;
    #10;
end 

initial begin
    $monitor("Time: %0t | i_rst_n = %b | i_data: %b | o_BM_0: %b | o_BM_1: %b | o_BM_2: %b | o_BM_3: %b | o_valid: %b", 
        $time, i_rst_n, w_idata, w_BM_0, w_BM_1, w_BM_2, w_BM_3, w_valid);
    #100;
    $finish;
end

endmodule
