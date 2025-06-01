`timescale 1ps/1ps
module tb_IP_LCD_timer_counter();

parameter SIZE_DATA = 8;
parameter SIZE_FUNC = 4;
parameter CLK_PERIOD = 20;  // 50 MHz clock

logic i_clk, i_rst_n, i_en_lcd, i_on_lcd, i_lcd_blon;
logic o_LCD_E, o_LCD_RW, o_LCD_RS, o_LCD_ON, o_LCD_BLON, o_done_lcd;
logic [SIZE_DATA-1:0] i_data, o_LCD_DATA;
logic [SIZE_FUNC-1:0] i_func;
IP_LCD_timer_counter #(
    .SIZE_DATA      (8) ,
    .SIZE_FUNC      (4) ,
    .FREQ           (50_000_000)
) uut (
    .i_clk          (i_clk),
    .i_rst_n        (i_rst_n),
    .i_en_lcd       (i_en_lcd), 
    .i_on_lcd       (i_on_lcd),
    .i_lcd_blon     (i_lcd_blon),
    .i_data         (i_data),
    .i_func         (i_func),

    .o_LCD_DATA     (o_LCD_DATA),
    .o_LCD_E        (o_LCD_E),
    .o_LCD_RW       (o_LCD_RW),
    .o_LCD_RS       (o_LCD_RS),
    .o_LCD_ON       (o_LCD_ON),
    .o_LCD_BLON     (o_LCD_BLON),
    .o_done_lcd     (o_done_lcd)
);

initial i_clk = 0;
always #(CLK_PERIOD/2) i_clk = ~i_clk;

initial begin
    $dumpfile("tb_IP_LCD_timer_counter.vcd");
    $dumpvars(0, tb_IP_LCD_timer_counter);
end

task display_testcase;
    input string testcase;
    begin
        $display("=========== Testcase: %s ===========", testcase);
    end
endtask 
task display_input;
    begin
        $display("| Time = %t \t| i_rst_n = %b \t| i_on_lcd = %b \t| i_lcd_blon = %b \t|", 
                    $time, i_rst_n, i_on_lcd, i_lcd_blon);
        $display("| Time = %t \t| i_en_lcd = %b \t| i_fun = %h \t| i_data = %h \t|", 
                    $time, i_en_lcd, i_func, i_data);
    end
endtask
task display_output;
    begin
        $display("| Time = %t \t| o_LCD_RW = %b \t| o_LCD_RS = %b \t| o_LCD_E = %b \t|", 
                    $time, o_LCD_RW, o_LCD_RS, o_LCD_E);
        $display("| Time = %t \t| o_LCD_DATA = %h \t| o_done_lcd = %b \t|", 
                    $time, o_LCD_DATA, o_done_lcd);
    end
endtask 
task wait_for_done;
    begin
        @(posedge o_done_lcd);
        #1;
    end
endtask
// task wait_for_end;
//     begin
//         // @(negedge o_done_lcd);
//         #20;
//     end
// endtask
task check_init;
    begin
        display_testcase("Init");
        @(posedge i_clk);
        i_func = 0;
        i_en_lcd = 1;
        i_data = 0;
        display_input();
        @(posedge i_clk);
        i_en_lcd = 0;
        wait_for_done();
        display_output();
        if (o_LCD_ON !== 1'b1 || o_LCD_BLON !== 1'b1) begin
            $display("ERROR: LCD not enabled after initialization");
        end
        
    end
endtask
task check_cursor;
    input [7:0] cursor_data;
    begin
        display_testcase("Setcursor");
        @(posedge i_clk);
        i_func = 1;
        i_en_lcd = 1;
        i_data = cursor_data;
        display_input();
        @(posedge i_clk);
        i_en_lcd = 0;
        wait_for_done();
        display_output();
        if (o_LCD_ON !== 1'b1 || o_LCD_BLON !== 1'b1) begin
            $display("ERROR: LCD not enabled after initialization");
        end
    end
endtask
task check_cmd;
    input [7:0] cmd_data;
    begin
        display_testcase("Command");
        @(posedge i_clk);
        i_func = 2;
        i_en_lcd = 1;
        i_data = cmd_data;
        display_input();
        @(posedge i_clk);
        i_en_lcd = 0;
        wait_for_done();
        display_output();
        if (o_LCD_ON !== 1'b1 || o_LCD_BLON !== 1'b1) begin
            $display("ERROR: LCD not enabled after initialization");
        end
    end
endtask
task check_date;
    input [7:0] data_data;
    begin
        display_testcase("Command");
        @(posedge i_clk);
        i_func = 3;
        i_en_lcd = 1;
        i_data = data_data;
        display_input();
        @(posedge i_clk);
        i_en_lcd = 0;
        wait_for_done();
        display_output();
        if (o_LCD_ON !== 1'b1 || o_LCD_BLON !== 1'b1) begin
            $display("ERROR: LCD not enabled after initialization");
        end
    end
endtask
task check_control_signal;
    begin
        display_testcase("Control Signal");
        i_on_lcd = 0;
        i_lcd_blon = 0;
        #(CLK_PERIOD*10);
        if (o_LCD_ON !== 1'b0 || o_LCD_BLON !== 1'b0) begin
            $display("ERROR: LCD should be disabled");
        end
        display_output();
        #(CLK_PERIOD*10);
        i_on_lcd = 1;
        i_lcd_blon = 1;
        #(CLK_PERIOD*10);
        if (o_LCD_ON !== 1'b0 || o_LCD_BLON !== 1'b0) begin
            $display("ERROR: LCD should be disabled");
        end
        display_output();
    end
endtask

initial begin
    i_rst_n = 0;
    i_en_lcd = 0;
    i_on_lcd = 0;
    i_lcd_blon = 0;
    i_func = 0;
    i_data = 0;
    #100;
    i_rst_n = 1;
    check_control_signal();

    #100;
    check_init();

    #100;
    check_cursor(8'h00);
    #20;
    check_cursor(8'h05);
    #20;
    check_cursor(8'h10);
    #20;
    check_cursor(8'h15);

    #100;
    check_cmd(8'h01);
    #20;
    check_cmd(8'h02);
    #20;
    check_cmd(8'h06);

    #100;
    check_date(8'h29);
    #20;
    check_date(8'h30);

    #1000;
    $display("Finish test");
    $finish;
end

endmodule
