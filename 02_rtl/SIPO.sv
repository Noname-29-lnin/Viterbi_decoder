module SIPO #(
    parameter SIZE_DATA_IN  = 1,
    parameter SIZE_DATA_OUT = 8
)(
    input logic i_clk,
    input logic i_rst_n,
    input logic i_start,
    input logic [SIZE_DATA_IN-1:0] i_data,
    output logic [SIZE_DATA_OUT-1:0] o_data,
    output logic o_done
);

parameter DEPTH = SIZE_DATA_OUT / SIZE_DATA_IN;
parameter SIZE_DEPTH = $clog2(DEPTH);
logic [SIZE_DATA_IN-1:0] shift_reg [0:DEPTH-1];

// Setup counter
logic [SIZE_DEPTH-1:0] count, ncount;
logic w_update_count;
logic w_count, w_count_next;
assign w_update_count = i_start & (~o_done);
assign w_count_next = w_update_count & w_count;
assign ncount = w_count_next ? count + 1'b1 : count;
always_ff @(posedge i_clk or negedge i_rst_n) begin : proc_count
    if(~i_rst_n) begin
        count   <= '0;
        w_count <= 1'b0;
    end else begin
        count   <= ncount;
        w_count <= w_update_count;
    end
end

// Setup shift register
logic [SIZE_DATA_IN-1:0] w_idata;
assign w_idata = i_data;
always_ff @(posedge i_clk or negedge i_rst_n) begin : proc_shift_count
    if(~i_rst_n) begin
        for (int i = 0; i < DEPTH; i++) begin
            shift_reg[i] <= '0;
        end
    end else begin
        shift_reg[count] <= w_idata;
    end
end

// Setup output data
logic [SIZE_DATA_OUT-1:0] w_odata;
always_comb begin : proc_output_data
    w_odata[0] = shift_reg[0];
    w_odata[1] = shift_reg[1];
    w_odata[2] = shift_reg[2];
    w_odata[3] = shift_reg[3];
    w_odata[4] = shift_reg[4];
    w_odata[5] = shift_reg[5];
    w_odata[6] = shift_reg[6];
    w_odata[7] = shift_reg[7];
end
assign o_data = (o_done) ? w_odata : '0;

// Setup done signal
logic w_done;
assign w_done = &count;
always_ff @(posedge i_clk or negedge i_rst_n) begin : proc_done
    if(~i_rst_n) begin
        o_done <= 1'b0;
    end else begin
        o_done <= w_done;
    end
end
endmodule
