module Receiver #(
    parameter SIZE_DATA = 16,
    parameter OVER_SAMPLE = 16,
    parameter MID_SAMPLE = 8
)(
    input wire i_clk, // clock for CPU
    input wire i_rst_n, // active low reset
    input wire i_stick, // baud rate signal
    input wire i_rx_en, // enable signal for receiver
    input wire i_fifo_full, // FIFO full signal
    input wire i_rx_serial, // serial data to be received
    input wire i_valid,

    output reg [SIZE_DATA - 1 : 0] o_rx_data, // data to be received parallel
    output wire o_rx_done // end signal
);

localparam SIZE_STATUS = 3;
localparam [SIZE_STATUS-1:0] IDLE        = 3'b000,
                             START       = 3'b001,
                             TRANSMIT    = 3'b010,
                             //PARYTY      = 3'b011,
                             STOP_I      = 3'b100;
                             //STOP_II     = 3'b101;
reg [SIZE_STATUS-1:0] state, n_state;

localparam SIZE_COUNT = $clog2(OVER_SAMPLE);// 
reg [SIZE_COUNT:0] count, n_count; // counter for data bits

localparam SIZE_INDEX = $clog2(SIZE_DATA); // 8bits
reg [SIZE_INDEX:0] index, n_index; // counter for data bits

wire w_update_sample, w_update_mid_sample, w_update_data, w_update_idle, w_idata;

assign w_update_sample = (count == OVER_SAMPLE-1) ? 1'b1 : 1'b0;
assign w_update_mid_sample = (count == MID_SAMPLE-1) ? 1'b1 : 1'b0;
assign w_update_data = (index == SIZE_DATA-1) ? 1'b1 : 1'b0;
assign w_update_idle = (i_rx_en & ~i_fifo_full);

reg w_input_next;
assign w_idata = (i_valid) ? i_rx_serial : w_input_next;
always_ff @( posedge i_clk or negedge i_rst_n ) begin 
    if(~i_rst_n)
        w_input_next <= '0;
    else
        w_input_next <= w_idata;
end

always @(*) begin : proc_state
    case(state)
        IDLE: begin
            n_state = (~w_idata & i_stick & w_update_idle) ? START : IDLE; // phat hien canh xuong
            n_count = '0;
            n_index = '0;
        end
        START: begin
            n_state = (w_update_mid_sample) ? ((w_idata) ? IDLE : TRANSMIT) : START;
            n_count = (w_update_mid_sample) ? '0 : ((i_stick) ? count + 1'b1 : count);
            n_index = '0;
        end
        TRANSMIT: begin
            n_state = (w_update_sample & w_update_data) ? STOP_I : TRANSMIT;
            n_count = (w_update_sample) ? '0 : (i_stick ? count + 1'b1 : count);
            n_index = w_update_data ? index : ((w_update_sample) ? index + 1'b1 : index);
        end
        STOP_I: begin
            n_state = (w_update_sample) ? IDLE : STOP_I;
            n_count = (w_update_sample) ? '0 : (i_stick ? count + 1 : count);
            n_index = index;
        end
        default: begin
            n_state = IDLE;
            n_count = '0;
            n_index = '0;
        end
    endcase
end
always_ff @(posedge i_clk or negedge i_rst_n) begin : proc_state_update
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

// Output data
reg t_rx_data [SIZE_DATA - 1 : 0];
reg w_rx_done;
always_ff @(posedge i_clk or negedge i_rst_n) begin : proc_rx_out
    if(~i_rst_n) begin
        for(int i = 0; i < SIZE_DATA; i++) begin
            t_rx_data[i] <= 1'b0;
        end
    end else begin
        case(state)
            TRANSMIT: begin 
                t_rx_data[index[SIZE_INDEX-1:0]] <= w_idata;
            end
            STOP_I: begin
                for(int i = 0; i < SIZE_DATA; i++) begin
                    t_rx_data[i] <= t_rx_data[i];
                end
            end
            default: begin
                for(int i = 0; i < SIZE_DATA; i++) begin
                    t_rx_data[i] <= 1'b0;
                end
            end
        endcase
    end
end
always_ff @(posedge i_clk or negedge i_rst_n) begin : proc_rx_done
    if(~i_rst_n) begin
        w_rx_done <= 1'b0;
    end else begin
        w_rx_done <= ((state==STOP_I) && (n_state==IDLE)) ? 1'b1 : 1'b0; 
    end
end

// assign o_rx_data = (w_rx_done) ? {t_rx_data[7], t_rx_data[6], t_rx_data[5], t_rx_data[4], t_rx_data[3], t_rx_data[2], t_rx_data[1], t_rx_data[0]} : o_rx_data; // output data;
always @(*) begin : proc_rx_data
    if(w_rx_done) begin
        for(int i = 0; i < SIZE_DATA; i++) begin
            o_rx_data[i] = t_rx_data[i];
        end
    end else begin
        for (int i = 0; i < SIZE_DATA; i++) begin
            o_rx_data[i] = o_rx_data[i];
        end
    end
end

assign o_rx_done = w_rx_done; 
endmodule 
