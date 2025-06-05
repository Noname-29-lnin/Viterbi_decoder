module wrapper(
    input logic         CLOCK_50,
    input logic [17:0]  SW,
    // input logic [3:0]   KEY,
    output logic [17:0] LEDR,
    output logic [6:0]  LEDG,
    output logic [7:0]  LCD_DATA,
    output logic        LCD_RW,
    output logic        LCD_EN,
    output logic        LCD_RS,
    output logic        LCD_ON,
    output logic        LCD_BLON
);

// logic w_KEY;
// assign w_KEY = ~KEY[0];

// IP_LCD_timer_counter #(
//     .SIZE_DATA     (8) ,
//     .SIZE_FUNC     (2) ,
//     .FREQ          (50_000_000)
// ) uut (
//     .i_clk          (CLOCK_50),
//     .i_rst_n        (SW[17]),
//     .i_en_lcd       (w_KEY), 
//     .i_on_lcd       (SW[16]),
//     .i_lcd_blon     (SW[15]),
//     .i_data         (SW[7:0]),
//     .i_func         (SW[9:8]),

//     .o_LCD_DATA     (LCD_DATA),
//     .o_LCD_E        (LCD_EN),
//     .o_LCD_RW       (LCD_RW),
//     .o_LCD_RS       (LCD_RS),
//     .o_LCD_ON       (LCD_ON),
//     .o_LCD_BLON     (LCD_BLON),
//     .o_done_lcd     (LEDG[6])
// );

// assign LEDR[17:0] = SW[17:0];
// assign LEDG[0] = w_KEY;
// assign LEDG[1] = LCD_EN;
// assign LEDG[2] = LCD_RS;
// assign LEDG[3] = LCD_RW;

parameter SIZE_DATA_IN  = 16   ; 
parameter SIZE_DATA_OUT = 8    ; 
parameter SIZE_PISO     = 2    ; 
parameter SIZE_SIPO     = 1    ; 
parameter SIZE_DATA     = 8    ;
parameter SIZE_FUNC     = 2    ;

Testcase_LCD #(
    .SIZE_DATA_IN  (SIZE_DATA_IN),
    .SIZE_DATA_OUT (SIZE_DATA_OUT),
    .SIZE_PISO     (SIZE_PISO),
    .SIZE_SIPO     (SIZE_SIPO),
    .SIZE_DATA     (SIZE_DATA),
    .SIZE_FUNC     (SIZE_FUNC)
)(
    .i_clk                       (CLOCK_50),
    .i_rst_n                     (SW[17]),
    .i_start                     (SW[16]),
    .i_data                      (SW[15:0]),
	 .i_en_LCD                    (1'b1),
    .i_on_LCD                    (1'b1),
    .i_blon_LCD                  (1'b1),
    .o_done_PISO                 (LEDG[0]),
    .o_done_SIPO                 (LEDG[1]),
    .o_LCD_DATA                  (LCD_DATA),
    .o_LCD_E                     (LCD_RW),
    .o_LCD_RW                    (LCD_EN),
    .o_LCD_RS                    (LCD_RS),
    .o_LCD_ON                    (LCD_ON),
    .o_LCD_BLON                  (LCD_BLON),
    .o_done_lcd                  (LEDG[2])  
);

assign LEDR = SW;

endmodule
