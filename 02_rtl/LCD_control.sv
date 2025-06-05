// module LCD_control #(
//     parameter SIZE_CONV = 16,
//     parameter SIZE_DATA = 8,
//     parameter SIZE_FUNC = 4
// )(
//     input logic         i_clk   ,
//     input logic         i_rst_n ,
//     input logic         i_en_LCD,
//     input logic         i_done_PISO ,
//     input logic         i_done_SIPO ,
//     input logic         i_done_LCD  ,
//     input logic [SIZE_CONV-1:0] i_conv,
//     input logic [SIZE_DATA-1:0] i_data,

//     output logic                 o_en_lcd,
//     output logic [SIZE_DATA-1:0] o_data,
//     output logic [SIZE_FUNC-1:0] o_func,
//     output logic                 o_done
// );

// // Save Data Conv 
// logic w_update_iconv;
// assign w_update_iconv = i_done_PISO;
// logic [SIZE_CONV-1:0] w_iconv_next, w_iconv;
// assign w_iconv = (w_update_iconv) ? i_conv : w_iconv_next;
// always_ff @( posedge i_clk or negedge i_rst_n ) begin : save_conv_data
//     if(~i_rst_n)
//         w_iconv_next <= '0;
//     else
//         w_iconv_next <= w_iconv;
// end
// // Save Data VD
// logic w_update_idata;
// assign w_update_idata = i_done_SIPO;
// logic [SIZE_DATA-1:0] w_idata;
// logic [SIZE_DATA-1:0] w_idata_next;
// assign w_idata = (w_update_idata) ? i_data : w_idata_next;
// always_ff @( posedge i_clk or negedge i_rst_n ) begin : save_idata
//     if(~i_rst_n)
//         w_idata_next <= '0;
//     else
//         w_idata_next <= w_idata;
// end

// // Processing done_LCD
// logic w_done_lcd;
// assign w_done_lcd = i_done_LCD;

// // Processing Done Output String LCD
// // LIN0: idata = 
// // LIN1: odata = 
// logic w_done_displays_string;

// // Processing Done SIPO
// logic w_done_WAIT;
// assign w_done_WAIT = i_done_SIPO;

// // Processign Output Data LCD
// logic w_done_display_data;


// parameter STATE_DIPLAY = 3;
// logic [STATE_DIPLAY-1:0] display, ndisplay;
// localparam [STATE_DIPLAY-1:0]   DISPLAY_RESET   = 0 ,
//                                 DISPLAY_INIT    = 1 ,
//                                 DISPLAY_IDLE    = 2 ,
//                                 DISPLAY_STRING  = 3 ,
//                                 DISPLAY_WAIT    = 4 ,
//                                 DISPLAY_DATA    = 5 ,
//                                 DISPLAY_DONE    = 6 ;
// always @(*) begin 
//     case (display)
//         DISPLAY_RESET:
//             ndisplay = DISPLAY_INIT;
//         DISPLAY_INIT:
//             ndisplay = (w_done_lcd) ? DISPLAY_IDLE : DISPLAY_INIT;
//         DISPLAY_IDLE:
//             ndisplay = DISPLAY_STRING;
//         DISPLAY_STRING:
//             ndisplay = (w_done_displays_string) ? DISPLAY_WAIT : DISPLAY_STRING;
//         DISPLAY_WAIT:
//             ndisplay = (w_done_WAIT) ? DISPLAY_DATA : DISPLAY_WAIT; 
//         DISPLAY_DATA:
//             ndisplay = (w_done_display_data) ? DISPLAY_DONE : DISPLAY_DATA;
//         DISPLAY_DONE:
//             ndisplay = DISPLAY_WAIT;
//         default:
//             ndisplay = DISPLAY_IDLE; 
//     endcase
// end
// always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_display_LCD
//     if(~i_rst_n)
//         display <= DISPLAY_RESET;
//     else begin
//         if(~i_en_LCD)
//             display <= DISPLAY_IDLE;
//         else
//             display <= ndisplay;
//     end
// end



// // parameter SIZE_STATE = 3;
// // logic [SIZE_STATE-1:0] state, nstate;
// // localparam [SIZE_STATE-1:0] IDLE        = 0     ,
// //                             INIT        = 1     ,
// //                             SETCURSOR   = 2     ,
// //                             DATA        = 3     ,
// //                             DONE        = 4     ;
// // localparam [SIZE_FUNC-1:0]  FUNC_INIT       = 0 ,
// //                             FUNC_SETCURSOR  = 1 ,
// //                             FUNC_DATA       = 3 ;

// // // Enable LCD
// // logic [SIZE_FUNC-1:0] w_ofunc;
// // logic [SIZE_FUNC-1:0] w_ofunc_next;
// // assign o_func = (i_done_LCD) ? w_ofunc : w_ofunc_next;
// // always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_w_func
// //     if(~i_rst_n) begin
// //         w_ofunc_next <= '0;
// //     end else begin
// //         w_ofunc_next <= o_func;
// //     end
// // end
// // always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_func_LCD
// //     if(~i_rst_n) begin
// //         w_ofunc <= '0;
// //     end else begin
// //         if(i_en_init & ~i_done_PISO & ~i_done_SIPO & ~i_done_LCD)
// //             w_ofunc <= FUNC_INIT;
// //         else if(i_done_PISO) 
// //             w_ofunc <= FUNC_SETCURSOR;
// //         else if (i_done_SIPO)
// //             w_ofunc <= FUNC_DATA;
// //         else 
// //             w_ofunc <= FUNC_SETCURSOR;
// //     end
// // end

// // // Init LCD
// // always @(*) begin : proc_next_state
// //     case (state)
// //         IDLE: 
// //             nstate = (o_func == FUNC_INIT) ? INIT : IDLE;
// //         INIT:
// //             nstate = (o_func == FUNC_SETCURSOR) ? SETCURSOR : INIT;
// //         SETCURSOR:
// //             nstate = (o_func == FUNC_DATA) ? DATA : SETCURSOR;
// //         DATA:
// //             nstate = (o_func == FUNC_DATA) ? DONE : DATA;
// //         DONE: 
// //             nstate = (i_done_PISO) ? SETCURSOR : DONE;
// //         default:
// //             nstate = IDLE;
// //     endcase
// // end
// // always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_state
// //     if(~i_rst_n) begin
// //         state <= IDLE;
// //     end else begin
// //         state <= nstate;
// //     end
// // end
// // always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_o_en_lcd
// //     if(~i_rst_n) begin
// //         o_en_lcd <= 1'b0;
// //     end else begin
// //         case (state)
// //             INIT, SETCURSOR, DATA:
// //                 o_en_lcd <= 1'b1;
// //             default:
// //                 o_en_lcd <= 1'b0; 
// //         endcase
// //     end
// // end
// // logic [SIZE_DATA-1:0] w_idata;
// // logic [SIZE_DATA-1:0] w_idata_next;
// // assign w_idata = (i_done_SIPO) ? i_data : w_idata_next;
// // always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_save_i_data
// //     if(~i_rst_n) begin
// //         w_idata_next <= '0;
// //     end else begin
// //         w_idata_next <= w_idata;
// //     end
// // end
// // always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_data_lcd
// //     if(~i_rst_n) begin
// //         o_data <= '0;
// //     end else begin
// //         case (state)
// //             SETCURSOR:
// //                 o_data <= '0; // (0, 0)
// //             DATA:
// //                 o_data <= w_idata; 
// //             default: 
// //                 o_data <= '0;
// //         endcase
// //     end
// // end
// // always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_done
// //     if(~i_rst_n) begin
// //         o_done <= 1'b0;
// //     end else begin
// //         case (state)
// //             DONE:
// //                 o_done <= 1'b1; 
// //             default: 
// //                 o_done <= 1'b0;
// //         endcase
// //     end
// // end

// endmodule
 
//  module LCD_control #(
//     parameter SIZE_CONV = 16,
//     parameter SIZE_DATA = 8,
//     parameter SIZE_FUNC = 2
// )(
//     input logic                  i_clk,
//     input logic                  i_rst_n,
//     input logic                  i_en_LCD,
//     input logic                  i_done_PISO,
//     input logic                  i_done_SIPO,
//     input logic                  i_done_LCD,
//     input logic [SIZE_CONV-1:0]  i_conv,
//     input logic [SIZE_DATA-1:0]  i_data,

//     output logic                 o_en_lcd,
//     output logic [SIZE_DATA-1:0] o_data,
//     output logic [SIZE_FUNC-1:0] o_func,
//     output logic                 o_done
// );

// // LCD Commands from IP_LCD_timer_counter
// localparam [SIZE_DATA-1:0] CMD_CLEAR_DISPLAY  = 8'h01,
//                            CMD_RETURN_HOME    = 8'h02,
//                            CMD_ENTRY_INCREASE = 8'h06,
//                            CMD_DISPLAY_OFF    = 8'h08,
//                            CMD_DISPLAY_ON     = 8'h0E,
//                            CMD_INIT_LCD       = 8'h38,
//                            CMD_LINE_1         = 8'h80,
//                            CMD_LINE_2         = 8'hC0;

// // Save Data Conv 
// logic w_update_iconv;
// assign w_update_iconv = i_done_PISO;
// logic [SIZE_CONV-1:0] w_iconv, w_iconv_next;
// assign w_iconv = (w_update_iconv) ? i_conv : w_iconv_next;
// always_ff @(posedge i_clk or negedge i_rst_n) begin : save_conv_data
//     if (~i_rst_n)
//         w_iconv_next <= '0;
//     else
//         w_iconv_next <= w_iconv;
// end

// // Save Data VD
// logic w_update_idata;
// assign w_update_idata = i_done_SIPO;
// logic [SIZE_DATA-1:0] w_idata, w_idata_next;
// assign w_idata = (w_update_idata) ? i_data : w_idata_next;
// always_ff @(posedge i_clk or negedge i_rst_n) begin : save_idata
//     if (~i_rst_n)
//         w_idata_next <= '0;
//     else
//         w_idata_next <= w_idata;
// end

// // FSM for LCD Control
// parameter STATE_DISPLAY = 3;
// logic [STATE_DISPLAY-1:0] display, ndisplay;
// localparam [STATE_DISPLAY-1:0] DISPLAY_RESET  = 0,
//                               DISPLAY_INIT   = 1,
//                               DISPLAY_IDLE   = 2,
//                               DISPLAY_STRING = 3,
//                               DISPLAY_WAIT   = 4,
//                               DISPLAY_DATA   = 5,
//                               DISPLAY_DONE   = 6;

// // Initialization Steps
// parameter SIZE_STEP = 4;
// logic [SIZE_STEP-1:0] init_step, init_step_next;

// // String and Data Display Control
// logic [3:0] char_counter, char_counter_next;
// logic w_done_displays_string, w_done_display_data;
// logic [SIZE_DATA-1:0] string_data;
// logic [SIZE_DATA-1:0] hex_data;

// // HEX to ASCII Conversion Instances
// logic [7:0] ascii_iconv_3, ascii_iconv_2, ascii_iconv_1, ascii_iconv_0;
// logic [7:0] ascii_idata_1, ascii_idata_0;

// HEX_TO_ASCII #(
//     .SIZE_DATA_IN(4),
//     .SIZE_DATA_OUT(8)
// ) hex_to_ascii_iconv_3 (
//     .i_data(w_iconv[15:12]),
//     .o_data(ascii_iconv_3)
// );

// HEX_TO_ASCII #(
//     .SIZE_DATA_IN(4),
//     .SIZE_DATA_OUT(8)
// ) hex_to_ascii_iconv_2 (
//     .i_data(w_iconv[11:8]),
//     .o_data(ascii_iconv_2)
// );

// HEX_TO_ASCII #(
//     .SIZE_DATA_IN(4),
//     .SIZE_DATA_OUT(8)
// ) hex_to_ascii_iconv_1 (
//     .i_data(w_iconv[7:4]),
//     .o_data(ascii_iconv_1)
// );

// HEX_TO_ASCII #(
//     .SIZE_DATA_IN(4),
//     .SIZE_DATA_OUT(8)
// ) hex_to_ascii_iconv_0 (
//     .i_data(w_iconv[3:0]),
//     .o_data(ascii_iconv_0)
// );

// HEX_TO_ASCII #(
//     .SIZE_DATA_IN(4),
//     .SIZE_DATA_OUT(8)
// ) hex_to_ascii_idata_1 (
//     .i_data(w_idata[7:4]),
//     .o_data(ascii_idata_1)
// );

// HEX_TO_ASCII #(
//     .SIZE_DATA_IN(4),
//     .SIZE_DATA_OUT(8)
// ) hex_to_ascii_idata_0 (
//     .i_data(w_idata[3:0]),
//     .o_data(ascii_idata_0)
// );

// // String and Data Output Logic
// always @(*) begin
//     string_data = 8'h00;
//     hex_data = 8'h00;
//     case (display)
//         DISPLAY_INIT: begin
//             case (init_step)
//                 0: hex_data = CMD_INIT_LCD;      // Function set
//                 1: hex_data = CMD_DISPLAY_OFF;   // Display off
//                 2: hex_data = CMD_CLEAR_DISPLAY; // Clear display
//                 3: hex_data = CMD_RETURN_HOME;   // Return home
//                 4: hex_data = CMD_ENTRY_INCREASE;// Entry mode
//                 5: hex_data = CMD_DISPLAY_ON;    // Display on
//                 default: hex_data = 8'h00;
//             endcase
//         end
//         DISPLAY_STRING: begin
//             case (char_counter)
//                 // LIN0: "idata = " (cursor 0x80)
//                 4'h0: string_data = CMD_LINE_1;    // Set cursor to LIN0
//                 4'h1: string_data = 8'h69;         // 'i'
//                 4'h2: string_data = 8'h64;         // 'd'
//                 4'h3: string_data = 8'h61;         // 'a'
//                 4'h4: string_data = 8'h74;         // 't'
//                 4'h5: string_data = 8'h61;         // 'a'
//                 4'h6: string_data = 8'h20;         // ' '
//                 4'h7: string_data = 8'h3D;         // '='
//                 4'h8: string_data = CMD_LINE_2;    // Set cursor to LIN1
//                 4'h9: string_data = 8'h6F;         // 'o'
//                 4'hA: string_data = 8'h64;         // 'd'
//                 4'hB: string_data = 8'h61;         // 'a'
//                 4'hC: string_data = 8'h74;         // 't'
//                 4'hD: string_data = 8'h61;         // 'a'
//                 4'hE: string_data = 8'h20;         // ' '
//                 4'hF: string_data = 8'h3D;         // '='
//                 default: string_data = 8'h00;
//             endcase
//         end
//         DISPLAY_DATA: begin
//             case (char_counter)
//                 // Clear display and display data
//                 4'h0: hex_data = CMD_CLEAR_DISPLAY;    // Clear display
//                 4'h1: hex_data = CMD_LINE_1 + 7;       // Set cursor to 0x87 (LIN0)
//                 4'h2: hex_data = 8'h30;                // '0'
//                 4'h3: hex_data = 8'h78;                // 'x'
//                 4'h4: hex_data = ascii_iconv_3;        // i_conv[15:12]
//                 4'h5: hex_data = ascii_iconv_2;        // i_conv[11:8]
//                 4'h6: hex_data = ascii_iconv_1;        // i_conv[7:4]
//                 4'h7: hex_data = ascii_iconv_0;        // i_conv[3:0]
//                 4'h8: hex_data = CMD_LINE_2 + 7;       // Set cursor to 0xC7 (LIN1)
//                 4'h9: hex_data = 8'h30;                // '0'
//                 4'hA: hex_data = 8'h78;                // 'x'
//                 4'hB: hex_data = ascii_idata_1;        // i_data[7:4]
//                 4'hC: hex_data = ascii_idata_0;        // i_data[3:0]
//                 default: hex_data = 8'h00;
//             endcase
//         end
//         default: begin
//             string_data = 8'h00;
//             hex_data = 8'h00;
//         end
//     endcase
// end

// // Initialization Step Counter
// always_ff @(posedge i_clk or negedge i_rst_n) begin
//     if (~i_rst_n)
//         init_step <= '0;
//     else if (i_done_LCD && display == DISPLAY_INIT)
//         init_step <= init_step_next;
//     else if (display != DISPLAY_INIT)
//         init_step <= '0;
// end

// always @(*) begin
//     init_step_next = init_step + 1;
//     if (init_step >= 5)
//         init_step_next = 0;
// end

// // Character Counter for String and Data Display
// always_ff @(posedge i_clk or negedge i_rst_n) begin
//     if (~i_rst_n)
//         char_counter <= '0;
//     else if (i_done_LCD)
//         char_counter <= char_counter_next;
// end

// always @(*) begin
//     char_counter_next = char_counter;
//     w_done_displays_string = 1'b0;
//     w_done_display_data = 1'b0;
//     if (display == DISPLAY_STRING) begin
//         if (i_done_LCD && char_counter < 4'hF)
//             char_counter_next = char_counter + 1;
//         else if (char_counter == 4'hF && i_done_LCD)
//             w_done_displays_string = 1'b1;
//     end else if (display == DISPLAY_DATA) begin
//         if (i_done_LCD && char_counter < 4'hC)
//             char_counter_next = char_counter + 1;
//         else if (char_counter == 4'hC && i_done_LCD)
//             w_done_display_data = 1'b1;
//     end else begin
//         char_counter_next = '0;
//     end
// end

// // FSM State Transitions
// always @(*) begin 
//     case (display)
//         DISPLAY_RESET:
//             ndisplay = DISPLAY_INIT;
//         DISPLAY_INIT:
//             ndisplay = (i_done_LCD && init_step >= 5) ? DISPLAY_IDLE : DISPLAY_INIT;
//         DISPLAY_IDLE:
//             ndisplay = (i_en_LCD) ? DISPLAY_STRING : DISPLAY_IDLE;
//         DISPLAY_STRING:
//             ndisplay = (w_done_displays_string) ? DISPLAY_WAIT : DISPLAY_STRING;
//         DISPLAY_WAIT:
//             ndisplay = (i_done_SIPO) ? DISPLAY_DATA : DISPLAY_WAIT; 
//         DISPLAY_DATA:
//             ndisplay = (w_done_display_data) ? DISPLAY_DONE : DISPLAY_DATA;
//         DISPLAY_DONE:
//             ndisplay = DISPLAY_WAIT;
//         default:
//             ndisplay = DISPLAY_IDLE; 
//     endcase
// end

// always_ff @(posedge i_clk or negedge i_rst_n) begin : proc_display_LCD
//     if (~i_rst_n)
//         display <= DISPLAY_RESET;
//     else
//         display <= ndisplay;
// end

// // Output Control
// always_ff @(posedge i_clk or negedge i_rst_n) begin
//     if (~i_rst_n) begin
//         o_en_lcd <= 1'b0;
//         o_data <= '0;
//         o_func <= '0;
//         o_done <= 1'b0;
//     end else begin
//         o_en_lcd <= 1'b0;
//         o_data <= '0;
//         o_func <= '0;
//         o_done <= (i_done_PISO) ? 1'b0 : o_done; // Reset o_done on i_done_PISO
//         case (display)
//             DISPLAY_INIT: begin
//                 o_en_lcd <= i_done_LCD ? 1'b0 : 1'b1;
//                 o_func <= (init_step == 0) ? 2'h0 : 2'h2; // FUNC_INIT or FUNC_CMD
//                 o_data <= hex_data;
//             end
//             DISPLAY_STRING: begin
//                 o_en_lcd <= i_done_LCD ? 1'b0 : 1'b1;
//                 o_func <= (char_counter == 4'h0 || char_counter == 4'h8) ? 2'h1 : 2'h3; // FUNC_SETCURSOR or FUNC_DATA
//                 o_data <= string_data;
//             end
//             DISPLAY_DATA: begin
//                 o_en_lcd <= i_done_LCD ? 1'b0 : 1'b1;
//                 o_func <= (char_counter == 4'h0 || char_counter == 4'h1 || char_counter == 4'h8) ? 2'h2 : 2'h3; // FUNC_CMD or FUNC_DATA
//                 o_data <= hex_data;
//             end
//             DISPLAY_DONE: begin
//                 o_done <= 1'b1;
//             end
//             default: begin
//                 o_done <= 1'b1;
//             end
//         endcase
//     end
// end

// endmodule
module LCD_control #(
    parameter SIZE_CONV = 16,
    parameter SIZE_DATA = 8,
    parameter SIZE_FUNC = 2
)(
    input logic                  i_clk,
    input logic                  i_rst_n,
    input logic                  i_en_LCD,
    input logic                  i_done_PISO,
    input logic                  i_done_SIPO,
    input logic                  i_done_LCD,
    input logic [SIZE_CONV-1:0]  i_conv,
    input logic [SIZE_DATA-1:0]  i_data,

    output logic                 o_en_lcd,
    output logic [SIZE_DATA-1:0] o_data,
    output logic [SIZE_FUNC-1:0] o_func,
    output logic                 o_done
);

// LCD Commands from IP_LCD_timer_counter
localparam [SIZE_DATA-1:0] CMD_CLEAR_DISPLAY  = 8'h01,
                           CMD_LINE_1         = 8'h80,
                           CMD_LINE_2         = 8'hC0;

// Save Data Conv 
logic w_update_iconv;
assign w_update_iconv = i_done_PISO;
logic [SIZE_CONV-1:0] w_iconv, w_iconv_next;
assign w_iconv = (w_update_iconv) ? i_conv : w_iconv_next;
always_ff @(posedge i_clk or negedge i_rst_n) begin : save_conv_data
    if (~i_rst_n)
        w_iconv_next <= '0;
    else
        w_iconv_next <= w_iconv;
end

// Save Data VD
logic w_update_idata;
assign w_update_idata = i_done_SIPO;
logic [SIZE_DATA-1:0] w_idata, w_idata_next;
assign w_idata = (w_update_idata) ? i_data : w_idata_next;
always_ff @(posedge i_clk or negedge i_rst_n) begin : save_idata
    if (~i_rst_n)
        w_idata_next <= '0;
    else
        w_idata_next <= w_idata;
end

// FSM for LCD Control
parameter STATE_DISPLAY = 3;
logic [STATE_DISPLAY-1:0] display, ndisplay;
localparam [STATE_DISPLAY-1:0] DISPLAY_RESET  = 0,
                              DISPLAY_INIT   = 1,
                              DISPLAY_IDLE   = 2,
                              DISPLAY_STRING = 3,
                              DISPLAY_WAIT   = 4,
                              DISPLAY_DATA   = 5,
                              DISPLAY_DONE   = 6;

// String and Data Display Control
logic [3:0] char_counter, char_counter_next;
logic w_done_displays_string, w_done_display_data;
logic [SIZE_DATA-1:0] string_data;
logic [SIZE_DATA-1:0] hex_data;

// HEX to ASCII Conversion Instances
logic [7:0] ascii_iconv_3, ascii_iconv_2, ascii_iconv_1, ascii_iconv_0;
logic [7:0] ascii_idata_1, ascii_idata_0;

HEX_TO_ASCII #(
    .SIZE_DATA_IN(4),
    .SIZE_DATA_OUT(8)
) hex_to_ascii_iconv_3 (
    .i_data(w_iconv[15:12]),
    .o_data(ascii_iconv_3)
);

HEX_TO_ASCII #(
    .SIZE_DATA_IN(4),
    .SIZE_DATA_OUT(8)
) hex_to_ascii_iconv_2 (
    .i_data(w_iconv[11:8]),
    .o_data(ascii_iconv_2)
);

HEX_TO_ASCII #(
    .SIZE_DATA_IN(4),
    .SIZE_DATA_OUT(8)
) hex_to_ascii_iconv_1 (
    .i_data(w_iconv[7:4]),
    .o_data(ascii_iconv_1)
);

HEX_TO_ASCII #(
    .SIZE_DATA_IN(4),
    .SIZE_DATA_OUT(8)
) hex_to_ascii_iconv_0 (
    .i_data(w_iconv[3:0]),
    .o_data(ascii_iconv_0)
);

HEX_TO_ASCII #(
    .SIZE_DATA_IN(4),
    .SIZE_DATA_OUT(8)
) hex_to_ascii_idata_1 (
    .i_data(w_idata[7:4]),
    .o_data(ascii_idata_1)
);

HEX_TO_ASCII #(
    .SIZE_DATA_IN(4),
    .SIZE_DATA_OUT(8)
) hex_to_ascii_idata_0 (
    .i_data(w_idata[3:0]),
    .o_data(ascii_idata_0)
);

// String and Data Output Logic
always @(*) begin
    string_data = 8'h00;
    hex_data = 8'h00;
    case (display)
        DISPLAY_STRING: begin
            case (char_counter)
                // LIN0: "idata = " (cursor 0x80)
                4'h0: string_data = CMD_LINE_1;    // Set cursor to LIN0
                4'h1: string_data = 8'h69;         // 'i'
                4'h2: string_data = 8'h64;         // 'd'
                4'h3: string_data = 8'h61;         // 'a'
                4'h4: string_data = 8'h74;         // 't'
                4'h5: string_data = 8'h61;         // 'a'
                4'h6: string_data = 8'h20;         // ' '
                4'h7: string_data = 8'h3D;         // '='
                4'h8: string_data = CMD_LINE_2;    // Set cursor to LIN1
                4'h9: string_data = 8'h6F;         // 'o'
                4'hA: string_data = 8'h64;         // 'd'
                4'hB: string_data = 8'h61;         // 'a'
                4'hC: string_data = 8'h74;         // 't'
                4'hD: string_data = 8'h61;         // 'a'
                4'hE: string_data = 8'h20;         // ' '
                4'hF: string_data = 8'h3D;         // '='
                default: string_data = 8'h00;
            endcase
        end
        DISPLAY_DATA: begin
            case (char_counter)
                // Clear display and display data
                4'h0: hex_data = CMD_CLEAR_DISPLAY;    // Clear display
                4'h1: hex_data = CMD_LINE_1 + 8'd7;       // Set cursor to 0x87 (LIN0)
                4'h2: hex_data = 8'h30;                // '0'
                4'h3: hex_data = 8'h78;                // 'x'
                4'h4: hex_data = ascii_iconv_3;        // i_conv[15:12]
                4'h5: hex_data = ascii_iconv_2;        // i_conv[11:8]
                4'h6: hex_data = ascii_iconv_1;        // i_conv[7:4]
                4'h7: hex_data = ascii_iconv_0;        // i_conv[3:0]
                4'h8: hex_data = CMD_LINE_2 + 8'd7;       // Set cursor to 0xC7 (LIN1)
                4'h9: hex_data = 8'h30;                // '0'
                4'hA: hex_data = 8'h78;                // 'x'
                4'hB: hex_data = ascii_idata_1;        // i_data[7:4]
                4'hC: hex_data = ascii_idata_0;        // i_data[3:0]
                default: hex_data = 8'h00;
            endcase
        end
        default: begin
            string_data = 8'h00;
            hex_data = 8'h00;
        end
    endcase
end

// Character Counter for String and Data Display
always_ff @(posedge i_clk or negedge i_rst_n) begin
    if (~i_rst_n)
        char_counter <= '0;
    else if (i_done_LCD)
        char_counter <= char_counter_next;
end

always @(*) begin
    char_counter_next = char_counter;
    w_done_displays_string = 1'b0;
    w_done_display_data = 1'b0;
    if (display == DISPLAY_STRING) begin
        if (i_done_LCD && char_counter < 4'hF)
            char_counter_next = char_counter + 1'b1;
        else if (char_counter == 4'hF && i_done_LCD)
            w_done_displays_string = 1'b1;
    end else if (display == DISPLAY_DATA) begin
        if (i_done_LCD && char_counter < 4'hC)
            char_counter_next = char_counter + 1'b1;
        else if (char_counter == 4'hC && i_done_LCD)
            w_done_display_data = 1'b1;
    end else begin
        char_counter_next = '0;
    end
end

// FSM State Transitions
always @(*) begin 
    case (display)
        DISPLAY_RESET:
            ndisplay = DISPLAY_INIT;
        DISPLAY_INIT:
            ndisplay = (i_done_LCD) ? DISPLAY_IDLE : DISPLAY_INIT;
        DISPLAY_IDLE:
            ndisplay = (i_en_LCD) ? DISPLAY_STRING : DISPLAY_IDLE;
        DISPLAY_STRING:
            ndisplay = (w_done_displays_string) ? DISPLAY_WAIT : DISPLAY_STRING;
        DISPLAY_WAIT:
            ndisplay = (i_done_SIPO) ? DISPLAY_DATA : DISPLAY_WAIT; 
        DISPLAY_DATA:
            ndisplay = (w_done_display_data) ? DISPLAY_DONE : DISPLAY_DATA;
        DISPLAY_DONE:
            ndisplay = DISPLAY_WAIT;
        default:
            ndisplay = DISPLAY_IDLE; 
    endcase
end

always_ff @(posedge i_clk or negedge i_rst_n) begin : proc_display_LCD
    if (~i_rst_n)
        display <= DISPLAY_RESET;
    else
        display <= ndisplay;
end

// Output Control
always_ff @(posedge i_clk or negedge i_rst_n) begin
    if (~i_rst_n) begin
        o_en_lcd <= 1'b0;
        o_data <= '0;
        o_func <= '0;
        o_done <= 1'b0;
    end else begin
        case (display)
            DISPLAY_INIT: begin
                o_en_lcd <= i_done_LCD ? 1'b0 : 1'b1;
                o_func <= 2'h0; // FUNC_INIT
                o_data <= 8'h00; // No specific data needed
            end
            DISPLAY_STRING: begin
                o_en_lcd <= i_done_LCD ? 1'b0 : 1'b1;
                o_func <= (char_counter == 4'h0 || char_counter == 4'h8) ? 2'h1 : 2'h3; // FUNC_SETCURSOR or FUNC_DATA
                o_data <= string_data;
            end
            DISPLAY_DATA: begin
                o_en_lcd <= i_done_LCD ? 1'b0 : 1'b1;
                o_func <= (char_counter == 4'h0 || char_counter == 4'h1 || char_counter == 4'h8) ? 2'h2 : 2'h3; // FUNC_CMD or FUNC_DATA
                o_data <= hex_data;
            end
            DISPLAY_DONE: begin
                o_done <= 1'b1;
            end
            default: begin
                o_en_lcd <= 1'b0;
                o_data <= '0;
                o_func <= '0;
                o_done <= (i_done_PISO) ? 1'b0 : o_done; // Reset o_done on i_done_PISO
            end
        endcase
    end
end

endmodule
