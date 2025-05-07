`timescale 1ns/1ps
module tb_acsu();

logic [1:0] w_BM_0, w_BM_1, w_BM_2, w_BM_3;
logic [1:0] w_iPM_0, w_iPM_1, w_iPM_2, w_iPM_3;
logic [1:0] w_oPM_0, w_oPM_1, w_oPM_2, w_oPM_3;

Add_compare_select_unit ACSU(
    .i_BM_0      (w_BM_0),
    .i_BM_1      (w_BM_1),
    .i_BM_2      (w_BM_2),
    .i_BM_3      (w_BM_3),
    .i_PM_0      (w_iPM_0),
    .i_PM_1      (w_iPM_1),
    .i_PM_2      (w_iPM_2),
    .i_PM_3      (w_iPM_3),
    .o_PM_0      (w_oPM_0),
    .o_PM_1      (w_oPM_1),
    .o_PM_2      (w_oPM_2),
    .o_PM_3      (w_oPM_3)
);

initial begin
    $dumpfile("tb_acsu.vcd");
    $dumpvars(0, tb_acsu);
end

initial begin
    $display("Starting Add_compare_select_unit testbench...");
    $display("=====================================");
    
    // Initialize signals
    w_BM_0 = 2'b00;
    w_BM_1 = 2'b00;
    w_BM_2 = 2'b00;
    w_BM_3 = 2'b00;
    w_iPM_0 = 2'b00;
    w_iPM_1 = 2'b00;
    w_iPM_2 = 2'b00;
    w_iPM_3 = 2'b00;
    
    $display("Time: %0t \t|", $time);
    $display("| i_BM_0: %b \t| i_BM_1: %b \t| i_BM_2: %b \t| i_BM_3: %b \t|\n| i_PM_0: %b \t| i_PM_1: %b \t| i_PM_2: %b \t| i_PM_3: %b \t|\n| o_PM_0: %b \t| o_PM_1: %b \t| o_PM_2: %b \t| o_PM_3: %b \t|", w_BM_0, w_BM_1, w_BM_2, w_BM_3, w_iPM_0, w_iPM_1, w_iPM_2, w_iPM_3, w_oPM_0, w_oPM_1, w_oPM_2, w_oPM_3);
    
    // Test with random inputs
    for(int i = 0; i < 15; i++) begin
        #10;
        w_BM_0 = $random % 4;
        w_BM_1 = $random % 4;
        w_BM_2 = $random % 4;
        w_BM_3 = $random % 4;
        w_iPM_0 = $random % 4;
        w_iPM_1 = $random % 4;
        w_iPM_2 = $random % 4;
        w_iPM_3 = $random % 4;
        #1; // Small delay to capture outputs
        $display("Time: %0t \t|", $time);
        $display("| i_BM_0: %b \t| i_BM_1: %b \t| i_BM_2: %b \t| i_BM_3: %b \t|\n| i_PM_0: %b \t| i_PM_1: %b \t| i_PM_2: %b \t| i_PM_3: %b \t|\n| o_PM_0: %b \t| o_PM_1: %b \t| o_PM_2: %b \t| o_PM_3: %b \t|", w_BM_0, w_BM_1, w_BM_2, w_BM_3, w_iPM_0, w_iPM_1, w_iPM_2, w_iPM_3, w_oPM_0, w_oPM_1, w_oPM_2, w_oPM_3);
    end
    
    #10;
    $display("Simulation finished.");
    $display("=====================================");
    $finish;
end

endmodule