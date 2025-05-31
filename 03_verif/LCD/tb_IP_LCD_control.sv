`timescale 1ps / 1ps

module tb_IP_LCD_control;
    // Định nghĩa tín hiệu
    logic                   clk;
    logic                   rst_n;
    logic [7:0]             i_data;
    logic [2:0]             i_func;
    logic [7:0]             o_LCD_DATA;
    logic                   o_LCD_RW;
    logic                   o_LCD_RS;
    logic                   o_LCD_E;
    logic                   o_LCD_ON;
    logic                   o_LCD_BLON;
    logic                   o_valid;

    // Khởi tạo module
    IP_LCD_control #(
        .CLK_FREQ(50_000_000)
    ) uut (
        .i_clk(clk),
        .i_rst_n(rst_n),
        .i_data(i_data),
        .i_func(i_func),
        .o_LCD_DATA(o_LCD_DATA),
        .o_LCD_RW(o_LCD_RW),
        .o_LCD_RS(o_LCD_RS),
        .o_LCD_E(o_LCD_E),
        .o_LCD_ON(o_LCD_ON),
        .o_LCD_BLON(o_LCD_BLON),
        .o_valid(o_valid)
    );

    // Tạo clock 50 MHz (chu kỳ 20ns)
    always #10 clk = ~clk;
    
    // // Kịch bản kiểm tra
    // initial begin
    //     // Khởi tạo
    //     rst_n = 0;
    //     i_data = 8'h00;
    //     i_func = 2'h0;
    //     #100;
    //     rst_n = 1;

    //     // Kiểm tra khởi tạo LCD
    //     i_func = 2'h0; // FUNC_INIT
    //     #100_000_000; // Chờ 100ms

    //     // Đặt con trỏ (dòng 1, vị trí 0)
    //     i_func = 2'h1; // FUNC_SETCURSOR
    //     i_data = 8'h00;
    //     #100_000;

    //     // Ghi dữ liệu
    //     i_func = 2'h2; // FUNC_DATA
    //     i_data = 8'h41; // Ký tự 'A'
    //     #100_000;

    //     // Ghi lệnh xóa màn hình
    //     i_func = 2'h3; // FUNC_CMD
    //     i_data = 8'h01; // CMD_CLEAR_DISPLAY
    //     #10_000_000;

    //     $finish;
    // end

    // Theo dõi tín hiệu
    initial begin
        $dumpfile("tb_IP_LCD_control.vcd");
        $dumpvars(0, tb_IP_LCD_control);
    end
    // initial begin
    //     @(posedge clk);
    //     $display("At clock edge: state = %h, nstate = %h", uut.state, uut.nstate);
    //     @(posedge clk);
    //     $display("In always_comb: state = %h, nstate = %h", uut.state, uut.nstate);
    // end

    task display_data();
        $display("| Time=%t \t| i_data=%h \t| i_func=%h \t|", $time, i_data, i_func);
        wait(o_valid);
        @(posedge clk);
        $display("| o_LCD_DATA=%h \t| o_valid=%b \t|", o_LCD_DATA, o_valid);
        $display("|E=%b \t| RS=%b \t| RW=%b \t|", o_LCD_E, o_LCD_RS, o_LCD_RW);
    endtask

    initial begin
        $display("Reset LCD");
        rst_n = 0;
        i_data = 8'h29;
        i_func = 3'h1;
        #100;
        $display("| Time=%t \t| i_data=%h \t| i_func=%h \t|", $time, i_data, i_func);
        $display("| o_LCD_DATA=%h \t| o_valid=%b \t|", o_LCD_DATA, o_valid);
        $display("|E=%b \t| RS=%b \t| RW=%b \t|", o_LCD_E, o_LCD_RS, o_LCD_RW);
        
        rst_n = 1;
        #100;


        $display("------------------------------- Test Case 1 -------------------------------");
        $display("Test function initial LCD");        
        @(posedge clk);
        i_data = 8'h29;
        i_func = 3'h1; // FUNC_INIT
        
        // $display("Time=%t, i_data=%h, i_func=%h, o_LCD_DATA=%h, o_valid=%b", $time, i_data, i_func, o_LCD_DATA, o_valid);
        // $display("E=%b, RS=%b, RW=%b", o_LCD_E, o_LCD_RS, o_LCD_RW);
        $display("Test initial LCD");
        display_data();

        #100;
        $display("------------------------------- Test Case 2 -------------------------------");
        @(posedge clk);
        i_data = 8'h00;
        i_func = 3'h2; // FUNC_SETCURSOR

        $display("Test setcursor (0, 0)");
        display_data();

        #100;
        @(posedge clk);
        i_data = 8'h05;
        i_func = 3'h2; // FUNC_SETCURSOR

        $display("Test setcursor (0, 5)");
        display_data();
        
        #100;
        @(posedge clk);
        i_data = 8'h10;
        i_func = 3'h2; // FUNC_SETCURSOR

        $display("Test setcursor (1, 0)");
        display_data();
        
        #100;
        @(posedge clk);
        i_data = 8'h15;
        i_func = 3'h2; // FUNC_SETCURSOR

        $display("Test setcursor (1, 5)");
        display_data();

        $display("------------------------------- Test Case 3 -------------------------------");

        #100;
        @(posedge clk);
        i_data = 8'h29;
        i_func = 3'h3; // FUNC_DATA

        $display("Test send Data = 0x29");
        display_data();

        #100;
        @(posedge clk);
        i_data = 8'h30;
        i_func = 3'h3; // FUNC_DATA

        $display("Test send Data = 0x30");
        display_data();

        $display("------------------------------- Test Case 4 -------------------------------");

        #100;
        @(posedge clk);
        i_data = 8'h01;
        i_func = 3'h4; // FUNC_DATA

        $display("Test send command = 0x01 (Clear display)");
        display_data();

        #100;
        @(posedge clk);
        i_data = 8'h06;
        i_func = 3'h4; // FUNC_DATA

        $display("Test send command = 0x06 (Entry mode set)");
        display_data();
        
        #10000;
        $display("Finish Simulation");
        $finish;
    end
endmodule
