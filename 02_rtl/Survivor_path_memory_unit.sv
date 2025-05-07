module Survivor_path_memory_unit(
    input logic         i_clk       ,
    input logic         i_rst_n     ,

    input logic         i_valid     ,
    input logic [1:0]   i_PM_0      ,
    input logic [1:0]   i_PM_1      ,
    input logic [1:0]   i_PM_2      ,
    input logic [1:0]   i_PM_3      ,

    output logic        o_decision
  );
  wire w_compare_0;
  wire w_compare_1;

  Compare_unit CP0(
                 .i_metric_path_0    (i_PM_0),  // A
                 .i_metric_path_1    (i_PM_2),  // B
                 .o_compare_less     (w_compare_0)
               );

  Compare_unit CP1(
                 .i_metric_path_0    (i_PM_1),  // A
                 .i_metric_path_1    (i_PM_3),  // B
                 .o_compare_less     (w_compare_1)
               );


  state_machine u_state_machine (
                  .i_clk(i_clk),
                  .i_rst_n(i_rst_n),
                  .i_valid(i_valid),
                  .i_compare_0(w_compare_0),
                  .i_compare_1(w_compare_1),
                  .o_decision(o_decision)
                );

endmodule

module state_machine(
    input logic         i_clk,
    input logic         i_rst_n,
    input logic         i_valid,
    input logic         i_compare_0,
    input logic         i_compare_1,
    output logic        o_decision
  );

  parameter logic [1:0] S0 = 2'b00;
  parameter logic [1:0] S1 = 2'b01;
  parameter logic [1:0] S2 = 2'b10;
  parameter logic [1:0] S3 = 2'b11;

  logic [1:0] state, nstate;

  next_state_logic NSL(
                     .i_valid          (i_valid),
                     .i_compare_0      (i_compare_0),
                     .i_compare_1      (i_compare_1),
                     .i_pre_state      (state),
                     .o_next_state     (nstate)
                   );

  state_memory SM(
                 .i_clk            (i_clk),
                 .i_rst_n          (i_rst_n),
                 .i_next_state     (nstate),
                 .o_curr_state     (state)
               );

  output_logic OL(
                 .i_curr_state     (nstate),
                 .o_decision_bit   (o_decision)
               );

endmodule

module next_state_logic(
    input logic         i_valid,
    input logic         i_compare_0,
    input logic         i_compare_1,
    input logic [1:0]   i_pre_state,
    output logic [1:0]  o_next_state
  );

  parameter logic [1:0] S0 = 2'b00;
  parameter logic [1:0] S1 = 2'b01;
  parameter logic [1:0] S2 = 2'b10;
  parameter logic [1:0] S3 = 2'b11;

  always_comb
  begin
    if (!i_valid)
    begin
      o_next_state = i_pre_state;
    end
    else
    begin
      case(i_pre_state)
        S0, S1:
        begin
          if (i_compare_0)
            o_next_state = S0;
          else
            o_next_state = S2;
        end
        S2, S3:
        begin
          if (i_compare_1)
            o_next_state = S1;
          else
            o_next_state = S3;
        end
        default:
          o_next_state = S0;
      endcase
    end
  end
endmodule

module state_memory(
    input logic         i_clk,
    input logic         i_rst_n,
    input logic [1:0]   i_next_state,
    output logic [1:0]  o_curr_state
  );

  parameter logic [1:0] S0 = 2'b00;
  parameter logic [1:0] S1 = 2'b01;
  parameter logic [1:0] S2 = 2'b10;
  parameter logic [1:0] S3 = 2'b11;

  always_ff @(posedge i_clk or negedge i_rst_n)
  begin
    if (!i_rst_n)
    begin
      o_curr_state <= S0;
    end
    else
    begin
      o_curr_state <= i_next_state;
    end
  end
endmodule

module output_logic(
    input logic [1:0]       i_curr_state,
    output logic            o_decision_bit
  );

  parameter logic [1:0] S0 = 2'b00;
  parameter logic [1:0] S1 = 2'b01;
  parameter logic [1:0] S2 = 2'b10;
  parameter logic [1:0] S3 = 2'b11;

  always_comb
  begin
    case(i_curr_state)
      S0, S1:
      begin
        o_decision_bit = 1'b0;
      end
      S2, S3:
      begin
        o_decision_bit = 1'b1;
      end
      default:
      begin
        o_decision_bit = 1'b0;
      end
    endcase
  end
endmodule
