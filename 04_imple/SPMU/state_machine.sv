module state_machine(
    input  wire      i_clk,
    input  wire      i_rst_n,
    input  wire      i_comare_02,
    input  wire      i_comare_13,
    output wire      o_data,
    output wire      o_done
);

// Định nghĩa thanh ghi trạng thái
reg [1:0] state, nstate;
reg       data, done; // Sử dụng reg vì được cập nhật trong always

// Mã hóa trạng thái
localparam S0 = 2'b00;
localparam S1 = 2'b01;
localparam S2 = 2'b10;
localparam S3 = 2'b11;

// D-FF: Cập nhật trạng thái sau mỗi clock
always @(posedge i_clk or negedge i_rst_n) begin
    if (~i_rst_n) 
        state <= S0; 
    else         
        state <= nstate;
end 

// Logic trạng thái tiếp theo
always @(*) begin
    case(state)
        S0, S1: begin  // Gộp S0 và S1 vì chung logic
            if (i_comare_02) begin
                nstate = S0; 
                data   = 1'b0;
            end else begin
                nstate = S2;
                data   = 1'b1;
            end
            done = 1'b1;
        end 

        S2, S3: begin  // Gộp S2 và S3 vì chung logic
            if (i_comare_13) begin
                nstate = S1;
                data   = 1'b0;
            end else begin
                nstate = S0;  // Sửa từ S3 thành S0 để tránh bị kẹt
                data   = 1'b1;
            end
            done = 1'b1;
        end

        default: begin
            nstate = S0;
            data   = 1'b0;
            done   = 1'b0;
        end 
    endcase 
end 

// Gán giá trị đầu ra
assign o_data = data;
assign o_done = done;

endmodule
