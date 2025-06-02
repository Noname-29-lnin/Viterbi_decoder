module wrapper(
    input logic         CLOCK_50,
    input logic [17:0]  SW,
    input logic [3:0]   KEY,
    output logic [17:0] LEDR,
    output logic [6:0]  LEDG,
    output logic [7:0]  LCD_DATA,
    output logic        LCD_RW,
    output logic        LCD_EN,
    output logic        LCD_RS,
    output logic        LCD_ON,
    output logic        LCD_BLON
);

IP_LCD_timer_counter #(
    .SIZE_DATA     (8) ,
    .SIZE_FUNC     (4) ,
    .FREQ          (50_000_000)
) uut (
    .i_clk          (CLOCK_50),
    .i_rst_n        (SW[17]),
    .i_en_lcd       (KEY[0]), 
    .i_on_lcd       (SW[16]),
    .i_lcd_blon     (SW[15]),
    .i_data         (SW[7:0]),
    .i_func         (SW[11:8]),

    .o_LCD_DATA     (LCD_DATA),
    .o_LCD_E        (LCD_EN),
    .o_LCD_RW       (LCD_RW),
    .o_LCD_RS       (LCD_RS),
    .o_LCD_ON       (LCD_ON),
    .o_LCD_BLON     (LCD_BLON),
    .o_done_lcd     (LEDG[6])
);

assign LEDR[17:0] = SW[17:0];
assign LEDG[0] = KEY[0];
assign LEDG[1] = LCD_EN;
assign LEDG[2] = LCD_RS;
assign LEDG[3] = LCD_RW;

endmodule
