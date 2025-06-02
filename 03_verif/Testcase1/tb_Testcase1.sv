`timescale 1ns/1ps
module tb_Testcase1();

parameter SIZE_DATA_IN  = 16;
parameter SIZE_DATA_OUT = 8 ;
parameter SIZE_PISO     = 2 ;
parameter SIZE_SIPO     = 1 ;
parameter SIZE_7SEG     = 7 ;

logic i_clk, i_rst_n, i_start ;
logic [SIZE_DATA_IN-1:0] i_data;
logic [SIZE_7SEG-1:0] o_HEX_0, o_HEX_1;
logic        o_done_PISO, o_done_SIPO;

Testcase1 #(
    .SIZE_DATA_IN  (SIZE_DATA_IN),
    .SIZE_DATA_OUT (SIZE_DATA_OUT),
    .SIZE_PISO     (SIZE_PISO),
    .SIZE_SIPO     (SIZE_SIPO),
    .SIZE_7SEG     (SIZE_7SEG)
) uut (
    .i_clk          (i_clk),
    .i_rst_n        (i_rst_n),
    .i_start        (i_start),
    .i_data         (i_data),
	 
    .o_HEX_0        (o_HEX_0),
    .o_HEX_1        (o_HEX_1),
    .o_done_PISO    (o_done_PISO),
    .o_done_SIPO    (o_done_SIPO)
);

initial begin
    $dumpfile("tb_Testcase1.vcd");
    $dumpvars(0, tb_Testcase1);
end

initial i_clk = 0;
always #10 i_clk = ~i_clk;

task wait_done();
    begin
        @(posedge o_done_SIPO);
        #1;
    end
endtask
task wait_PISO();
    begin
        @(posedge o_done_PISO);
        #1;
    end
endtask
task Display_case();
    input string mess_0;
    input logic [SIZE_DATA_IN-1:0] data_conv;
    input logic [SIZE_DATA_OUT-1:0] data_vd;
    begin
        $display("========== Testcase: %s ==========",mess_0);
        $display("Data Input: %b", data_conv);
        $display("Data after decoder: %b", data_vd);
    end
endtask
task Display_input();
    begin
        $display("| Time = %t \t| i_rst_n = %b \t| i_start = %b \t| i_data = %b \t|",
                    $time, i_rst_n, i_start, i_data);
    end
endtask
task Display_output();
    begin
        $display("| Time = %t \t| o_data = %b \t| HEX_0 = %h \t| HEX_1 = %h \t| o_done_PISO = %b \t| o_done_SIPO = %b \t|",
                    $time, uut.o_data, o_HEX_0, o_HEX_1, o_done_PISO, o_done_SIPO);
    end
endtask
task Main_test();
    input string mess_0;
    input logic [SIZE_DATA_IN-1:0] data_conv;
    input logic [SIZE_DATA_OUT-1:0] data_vd;
    begin
        Display_case(mess_0, data_conv, data_vd);
        i_data = data_conv;
        @(posedge i_clk);
        i_start = 1;
        Display_input();
        // wait_PISO();
        // i_start = 0;
        wait_done();
        Display_output();
        i_start = 0;
    end
endtask

// // Function to convert 4-bit binary to 7-segment display pattern
// function [6:0] seg7;
//     input [3:0] bin;
//     begin
//         case (bin)
//             4'h0: seg7 = 7'b1000000; // 0
//             4'h1: seg7 = 7'b1111001; // 1
//             4'h2: seg7 = 7'b0100100; // 2
//             4'h3: seg7 = 7'b0110000; // 3
//             4'h4: seg7 = 7'b0011001; // 4
//             4'h5: seg7 = 7'b0010010; // 5
//             4'h6: seg7 = 7'b0000010; // 6
//             4'h7: seg7 = 7'b1111000; // 7
//             4'h8: seg7 = 7'b0000000; // 8
//             4'h9: seg7 = 7'b0010000; // 9
//             4'hA: seg7 = 7'b0001000; // A
//             4'hB: seg7 = 7'b0000011; // b
//             4'hC: seg7 = 7'b1000110; // C
//             4'hD: seg7 = 7'b0100001; // d
//             4'hE: seg7 = 7'b0000110; // E
//             4'hF: seg7 = 7'b0001110; // F
//             default: seg7 = 7'b1111111; // off
//         endcase
//     end
// endfunction
// logic [6:0] exp_HEX0;
// logic [6:0] exp_HEX1;

initial begin
    $dumpfile("tb_Testcase1.vcd");
    $dumpvars(0, tb_Testcase1);
end

initial begin
    i_rst_n = 0;
    i_start = 0;
    i_data = 0;
    #100;
    i_rst_n = 1;
    #100;
    Main_test("1", 16'b1101010001010010, 8'b11011010);
    #100;
    i_rst_n = 0;
    i_start = 0;
    i_data = 0;
    #100;
    i_rst_n = 1;
    #100;
    Main_test("2", 16'b1110001000100010, 8'b10101010);
    #100;
    i_rst_n = 0;
    i_start = 0;
    i_data = 0;
    #100;
    i_rst_n = 1;
    #100;
    Main_test("3", 16'b0000000000000011, 8'b00000001);
    #100;
    i_rst_n = 0;
    i_start = 0;
    i_data = 0;
    #100;
    i_rst_n = 1;
    #100;
    Main_test("4", 16'b0000110101111101, 8'b00110011);
    #100;
    i_rst_n = 0;
    i_start = 0;
    i_data = 0;
    #100;
    i_rst_n = 1;
    
    #100;
    $display("All testcases passed successfully!");
    $finish;
end

endmodule

