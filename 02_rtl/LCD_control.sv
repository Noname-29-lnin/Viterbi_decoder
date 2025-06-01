module LCD_control #(
    parameter SIZE_DATA = 8,
    parameter SIZE_FUNC = 4
)(
    input logic         i_clk   ,
    input logic         i_rst_n ,
    input logic         i_en_init,
    input logic         i_done_PISO ,
    input logic         i_done_SIPO ,
    input logic         i_done_LCD  ,
    input logic [SIZE_DATA-1:0] i_data,

    output logic                 o_en_lcd,
    output logic [SIZE_DATA-1:0] o_data,
    output logic [SIZE_FUNC-1:0] o_func,
    output logic                 o_done,    
    output logic                 o_start
);

parameter SIZE_STATE = 3;
logic [SIZE_STATE-1:0] state, nstate;
localparam [SIZE_STATE-1:0] IDLE        = 0     ,
                            INIT        = 1     ,
                            SETCURSOR   = 2     ,
                            DATA        = 3     ,
                            DONE        = 4     ;
localparam [SIZE_FUNC-1:0]  FUNC_INIT       = 0 ,
                            FUNC_SETCURSOR  = 1 ,
                            FUNC_DATA       = 3 ;

// Enable LCD
logic [SIZE_FUNC-1:0] w_ofunc;
logic [SIZE_FUNC-1:0] w_ofunc_next;
assign o_func = (i_done_LCD) ? w_ofunc : w_ofunc_next;
always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_w_func
    if(~i_rst_n) begin
        w_ofunc_next <= '0;
    end else begin
        w_ofunc_next <= o_func;
    end
end
always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_func_LCD
    if(~i_rst_n) begin
        w_ofunc <= '0;
    end else begin
        if(i_en_init & ~i_done_PISO & ~i_done_SIPO & ~i_done_LCD)
            w_ofunc <= FUNC_INIT;
        else if(i_done_PISO) 
            w_ofunc <= FUNC_SETCURSOR;
        else if (i_done_SIPO)
            w_ofunc <= FUNC_DATA;
        else 
            w_ofunc <= FUNC_SETCURSOR;
    end
end

// Init LCD
always @(*) begin : proc_next_state
    case (state)
        IDLE: 
            nstate = (o_func == FUNC_INIT) ? INIT : IDLE;
        INIT:
            nstate = (o_func == FUNC_SETCURSOR) ? SETCURSOR : INIT;
        SETCURSOR:
            nstate = (o_func == FUNC_DATA) ? DATA : SETCURSOR;
        DATA:
            nstate = (o_func == FUNC_DATA) ? DONE : DATA;
        DONE: 
            nstate = SETCURSOR;
        default:
            nstate = IDLE;
    endcase
end
always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_state
    if(~i_rst_n) begin
        state <= IDLE;
    end else begin
        state <= nstate;
    end
end
always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_o_en_lcd
    if(~i_rst_n) begin
        o_en_lcd <= 1'b0;
    end else begin
        case (state)
            INIT, SETCURSOR, DATA:
                o_en_lcd <= 1'b1;
            default:
                o_en_lcd <= 1'b0; 
        endcase
    end
end
logic [SIZE_DATA-1:0] w_idata;
logic [SIZE_DATA-1:0] w_idata_next;
assign w_idata = (i_done_SIPO) ? i_data : w_idata_next;
always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_save_i_data
    if(~i_rst_n) begin
        w_idata_next <= '0;
    end else begin
        w_idata_next <= w_idata;
    end
end
always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_data_lcd
    if(~i_rst_n) begin
        o_data <= '0;
    end else begin
        case (state)
            SETCURSOR:
                o_data <= '0; // (0, 0)
            DATA:
                o_data <= w_idata; 
            default: 
                o_data <= '0;
        endcase
    end
end
always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_done
    if(~i_rst_n) begin
        o_done <= 1'b0;
    end else begin
        case (state)
            DONE:
                o_done <= 1'b1; 
            default: 
                o_done <= 1'b0;
        endcase
    end
end
always @(*) begin : proc_start
    o_start = (state == DONE);
end
endmodule
