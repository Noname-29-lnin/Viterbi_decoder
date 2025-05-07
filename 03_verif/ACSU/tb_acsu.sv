`timescale 1ns/1ps
module tb_acsu();

reg i_clk, i_rst_n;
always #5 i_clk = ~i_clk;  // test clock 100kHz

logic [1:0] w_BM_0, w_BM_1, w_BM_2, w_BM_3;
logic [1:0] w_iPM_0, w_iPM_1, w_iPM_2, w_iPM_3;
logic [1:0] w_oPM_0, w_oPM_1, w_oPM_2, w_oPM_3;
logic w_valid_ACSU, w_valid_PMU;

Add_compare_select_unit ACSU(
    .i_clk       (i_clk),
    .i_rst_n     (i_rst_n),
    .i_BM_0      (w_BM_0),
    .i_BM_1      (w_BM_1),
    .i_BM_2      (w_BM_2),
    .i_BM_3      (w_BM_3),
    .i_iPM_0     (w_iPM_0),
    .i_iPM_1     (w_iPM_1),
    .i_iPM_2     (w_iPM_2),
    .i_iPM_3     (w_iPM_3),
    .o_oPM_0     (w_oPM_0),
    .o_oPM_1     (w_oPM_1),
    .o_oPM_2     (w_oPM_2),
    .o_oPM_3     (w_oPM_3),
    .o_valid     (w_valid_ACSU)
);

Path_metric_unit PMU(
    .i_clk        (i_clk),
    .i_rst_n      (i_rst_n),
    .i_PM_0       (w_oPM_0),
    .i_PM_1       (w_oPM_1),
    .i_PM_2       (w_oPM_2),
    .i_PM_3       (w_oPM_3),
    .o_PM_0       (w_iPM_0),
    .o_PM_1       (w_iPM_1),
    .o_PM_2       (w_iPM_2),
    .o_PM_3       (w_iPM_3),
    .o_valid      (w_valid_PMU)
);

initial begin
    $dumpfile("tb_acsu.vcd");
    $dumpvars(0, tb_acsu);
end

initial begin
    $display("Starting Add_unit testbench...");
    $display("============================");
    // Test all possible combinations (exhaustive test)
    i_clk = 0;
    i_rst_n = 0;
    $display("Time: %0t \t| i_rst_n = %b \t| \n| i_BM_0: %b \t| i_BM_1: %b \t| i_BM_2: %b \t| i_BM_3: %b \t|\n| i_iPM_0: %b \t| i_iPM_1: %b \t| i_iPM_2: %b \t| i_iPM_3: %b \t|\n| o_oPM_0: %b \t| o_oPM_1: %b \t| o_oPM_2: %b \t| o_oPM_3: %b\t|", 
             $time, i_rst_n, w_BM_0, w_BM_1, w_BM_2, w_BM_3, w_iPM_0, w_iPM_1, w_iPM_2, w_iPM_3, w_oPM_0, w_oPM_1, w_oPM_2, w_oPM_3);
    #10;
    i_rst_n = 1;
    $display("Time: %0t | i_rst_n = %b | \n| i_BM_0: %b | i_BM_1: %b | i_BM_2: %b | i_BM_3: %b |\n| i_iPM_0: %b | i_iPM_1: %b | i_iPM_2: %b | i_iPM_3: %b |\n| o_oPM_0: %b | o_oPM_1: %b | o_oPM_2: %b | o_oPM_3: %b", 
             $time, i_rst_n, w_BM_0, w_BM_1, w_BM_2, w_BM_3, w_iPM_0, w_iPM_1, w_iPM_2, w_iPM_3, w_oPM_0, w_oPM_1, w_oPM_2, w_oPM_3);
    #10;
    for(int i = 0; i < 11; i++) begin
        @(posedge i_clk); 
        w_BM_0 = $random % 4;
        w_BM_1 = $random % 4;
        w_BM_2 = $random % 4;
        w_BM_3 = $random % 4;
        $display("Time: %0t | i_rst_n = %b | \n| i_BM_0: %b | i_BM_1: %b | i_BM_2: %b | i_BM_3: %b |\n| i_iPM_0: %b | i_iPM_1: %b | i_iPM_2: %b | i_iPM_3: %b |\n| o_oPM_0: %b | o_oPM_1: %b | o_oPM_2: %b | o_oPM_3: %b", 
             $time, i_rst_n, w_BM_0, w_BM_1, w_BM_2, w_BM_3, w_iPM_0, w_iPM_1, w_iPM_2, w_iPM_3, w_oPM_0, w_oPM_1, w_oPM_2, w_oPM_3);
    end
end

initial begin
    // $monitor("Time: %0t | i_rst_n = %b | \n| i_BM_0: %b | i_BM_1: %b | i_BM_2: %b | i_BM_3: %b |\n| i_iPM_0: %b | i_iPM_1: %b | i_iPM_2: %b | i_iPM_3: %b |\n| o_oPM_0: %b | o_oPM_1: %b | o_oPM_2: %b | o_oPM_3: %b", 
    //          $time, i_rst_n, w_BM_0, w_BM_1, w_BM_2, w_BM_3, w_iPM_0, w_iPM_1, w_iPM_2, w_iPM_3, w_oPM_0, w_oPM_1, w_oPM_2, w_oPM_3);
    // Wait for the simulation to finish
    #1000; // Adjust this time as needed
    $display("Simulation finished.");
    $display("==================================");
    $finish;

end


endmodule
