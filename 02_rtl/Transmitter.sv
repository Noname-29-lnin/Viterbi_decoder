module Transmitter #(
    parameter SIZE_DATA = 8,
    parameter OVER_SAMPLE = 16 // oversampling
)(
    input wire i_clk                        , // clock for CPU
    input wire i_rst_n                      , // active low reset
    input wire i_stick                      , // baud rate signal
    input wire i_tx_en                      , // start signal
    input wire i_fifo_empty                 , // FIFO empty signal
    input wire [SIZE_DATA - 1 : 0] i_tx_data, // data to be transmitted parallel
    output reg o_tx_serial                  , // serial data output 
    output wire o_tx_done                   , // end signal
    output wire o_valid                     
);

localparam SIZE_STATUS = 3;
localparam [SIZE_STATUS-1:0] IDLE        = 3'b000,
                             START       = 3'b001,
                             TRANSMIT    = 3'b010,
                             //PARYTY      = 3'b011,
                             STOP_I      = 3'b100;
                             //STOP_II     = 3'b101;
reg [SIZE_STATUS-1:0] state, n_state;

localparam SIZE_INDEX = 4; // 8bits
reg [SIZE_INDEX-1:0] index, n_index; // counter for data bits
wire w_update_data;
assign w_update_data = (index == SIZE_DATA-1) ? 1'b1 : 1'b0;

localparam SIZE_COUNT = 5;// 1start bit + 8 data bits + 1stop bit
reg [SIZE_COUNT-1:0] count, n_count; // counter for data bits
wire w_update_sample;
assign w_update_sample = (count == OVER_SAMPLE-1) ? 1'b1 : 1'b0;

wire w_update_start;
assign w_update_start = i_tx_en & ~i_fifo_empty; 

always_comb begin : proc_state
    case(state) 
        IDLE: begin
            n_state = w_update_start ? START : IDLE;
            n_count = '0;
            n_index = '0;
        end
        START: begin
            n_state = (w_update_sample) ? TRANSMIT : START;
            n_count = (w_update_sample) ? '0 : (i_stick ? count + 1'b1 : count);
            n_index = '0;
        end
        TRANSMIT: begin
            n_state = (w_update_sample & w_update_data) ? STOP_I : TRANSMIT;
            n_count = (w_update_sample) ? '0 : (i_stick ? count + 1'b1 : count);
            n_index = (w_update_data) ? index : (w_update_sample ? index + 1'b1 : index);
        end
        STOP_I: begin
            n_state = (w_update_sample) ? IDLE : STOP_I;
            n_count = (w_update_sample) ? '0 : (i_stick ? count + 1'b1 : count);
            n_index = index;
        end
        default: begin
            n_state = IDLE;
            n_count = '0;
            n_index = '0;
        end
    endcase
end
always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_state_update
    if(~i_rst_n) begin
        state   <= IDLE;
        count   <= '0;
        index   <= '0;
    end else begin
        state   <= n_state;
        count   <= n_count;
        index   <= n_index;
    end
end

reg w_tx_done;
reg w_valid;
always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_tx_out
    if(~i_rst_n) begin
        o_tx_serial <= 1'b1; // idle state is HIGH
        w_tx_done   <= 1'b0;
        w_valid     <= 1'b0;
    end else begin
        case(state)
            IDLE : begin 
                o_tx_serial <= 1'b1; // idle state is HIGH
                w_valid     <= 1'b1;
            end
            START: begin
                o_tx_serial <= 1'b0; // start bit is LOW
                w_valid     <= 1'b1;
            end
            TRANSMIT: begin
                o_tx_serial <= i_tx_data[index[SIZE_INDEX-2:0]]; // data bits
                w_valid     <= 1'b1;
            end
            STOP_I: begin
                o_tx_serial <= 1'b1; // stop bit I
                w_valid     <= 1'b1;
            end
            default: begin
                o_tx_serial <= 1'b1; // idle state is HIGH
                w_valid     <= 1'b0;
            end
        endcase
    end
end
always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_tx_done
    if(~i_rst_n) begin
        w_tx_done <= 1'b0;
    end else begin
        case(state)
            STOP_I: begin
                w_tx_done <= ((state==STOP_I) && (n_state==IDLE)) ? 1'b1 : 1'b0; // stop bit I
            end
            default: begin
                w_tx_done <= 1'b0;
            end
        endcase
    end
end
assign o_tx_done = w_tx_done;
assign o_valid   = w_valid;

endmodule 
