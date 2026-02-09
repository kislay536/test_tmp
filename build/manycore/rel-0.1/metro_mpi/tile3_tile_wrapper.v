module tile3_tile_wrapper (
  clk,
  rst_n,
  clk_en,
  default_chipid,
  default_coreid_x,
  default_coreid_y,
  default_total_num_tiles,
  flat_tileid,
  debug_req_i,
  unavailable_o,
  timer_irq_i,
  ipi_i,
  irq_i,
  tile_jtag_ucb_val,
  tile_jtag_ucb_data,
  jtag_tiles_ucb_val,
  jtag_tiles_ucb_data,
  dyn0_dataIn_N,
  dyn0_dataIn_E,
  dyn0_dataIn_W,
  dyn0_dataIn_S,
  dyn0_validIn_N,
  dyn0_validIn_E,
  dyn0_validIn_W,
  dyn0_validIn_S,
  dyn0_dNo_yummy,
  dyn0_dEo_yummy,
  dyn0_dWo_yummy,
  dyn0_dSo_yummy,
  dyn0_dNo,
  dyn0_dEo,
  dyn0_dWo,
  dyn0_dSo,
  dyn0_dNo_valid,
  dyn0_dEo_valid,
  dyn0_dWo_valid,
  dyn0_dSo_valid,
  dyn0_yummyOut_N,
  dyn0_yummyOut_E,
  dyn0_yummyOut_W,
  dyn0_yummyOut_S,
  dyn1_dataIn_N,
  dyn1_dataIn_E,
  dyn1_dataIn_W,
  dyn1_dataIn_S,
  dyn1_validIn_N,
  dyn1_validIn_E,
  dyn1_validIn_W,
  dyn1_validIn_S,
  dyn1_dNo_yummy,
  dyn1_dEo_yummy,
  dyn1_dWo_yummy,
  dyn1_dSo_yummy,
  dyn1_dNo,
  dyn1_dEo,
  dyn1_dWo,
  dyn1_dSo,
  dyn1_dNo_valid,
  dyn1_dEo_valid,
  dyn1_dWo_valid,
  dyn1_dSo_valid,
  dyn1_yummyOut_N,
  dyn1_yummyOut_E,
  dyn1_yummyOut_W,
  dyn1_yummyOut_S,
  dyn2_dataIn_N,
  dyn2_dataIn_E,
  dyn2_dataIn_W,
  dyn2_dataIn_S,
  dyn2_validIn_N,
  dyn2_validIn_E,
  dyn2_validIn_W,
  dyn2_validIn_S,
  dyn2_dNo_yummy,
  dyn2_dEo_yummy,
  dyn2_dWo_yummy,
  dyn2_dSo_yummy,
  dyn2_dNo,
  dyn2_dEo,
  dyn2_dWo,
  dyn2_dSo,
  dyn2_dNo_valid,
  dyn2_dEo_valid,
  dyn2_dWo_valid,
  dyn2_dSo_valid,
  dyn2_yummyOut_N,
  dyn2_yummyOut_E,
  dyn2_yummyOut_W,
  dyn2_yummyOut_S
);

  input wire clk;
  input wire rst_n;
  input wire clk_en;
  input wire [13:0] default_chipid;
  input wire [7:0] default_coreid_x;
  input wire [7:0] default_coreid_y;
  input wire [31:0] default_total_num_tiles;
  input wire [7:0] flat_tileid;
  input wire debug_req_i;
  output reg unavailable_o;
  input wire timer_irq_i;
  input wire ipi_i;
  input wire [1:0] irq_i;
  output reg tile_jtag_ucb_val;
  output reg [3:0] tile_jtag_ucb_data;
  input wire jtag_tiles_ucb_val;
  input wire [3:0] jtag_tiles_ucb_data;
  input wire [63:0] dyn0_dataIn_N;
  input wire [63:0] dyn0_dataIn_E;
  input wire [63:0] dyn0_dataIn_W;
  input wire [63:0] dyn0_dataIn_S;
  input wire dyn0_validIn_N;
  input wire dyn0_validIn_E;
  input wire dyn0_validIn_W;
  input wire dyn0_validIn_S;
  input wire dyn0_dNo_yummy;
  input wire dyn0_dEo_yummy;
  input wire dyn0_dWo_yummy;
  input wire dyn0_dSo_yummy;
  output reg [63:0] dyn0_dNo;
  output reg [63:0] dyn0_dEo;
  output reg [63:0] dyn0_dWo;
  output reg [63:0] dyn0_dSo;
  output reg dyn0_dNo_valid;
  output reg dyn0_dEo_valid;
  output reg dyn0_dWo_valid;
  output reg dyn0_dSo_valid;
  output reg dyn0_yummyOut_N;
  output reg dyn0_yummyOut_E;
  output reg dyn0_yummyOut_W;
  output reg dyn0_yummyOut_S;
  input wire [63:0] dyn1_dataIn_N;
  input wire [63:0] dyn1_dataIn_E;
  input wire [63:0] dyn1_dataIn_W;
  input wire [63:0] dyn1_dataIn_S;
  input wire dyn1_validIn_N;
  input wire dyn1_validIn_E;
  input wire dyn1_validIn_W;
  input wire dyn1_validIn_S;
  input wire dyn1_dNo_yummy;
  input wire dyn1_dEo_yummy;
  input wire dyn1_dWo_yummy;
  input wire dyn1_dSo_yummy;
  output reg [63:0] dyn1_dNo;
  output reg [63:0] dyn1_dEo;
  output reg [63:0] dyn1_dWo;
  output reg [63:0] dyn1_dSo;
  output reg dyn1_dNo_valid;
  output reg dyn1_dEo_valid;
  output reg dyn1_dWo_valid;
  output reg dyn1_dSo_valid;
  output reg dyn1_yummyOut_N;
  output reg dyn1_yummyOut_E;
  output reg dyn1_yummyOut_W;
  output reg dyn1_yummyOut_S;
  input wire [63:0] dyn2_dataIn_N;
  input wire [63:0] dyn2_dataIn_E;
  input wire [63:0] dyn2_dataIn_W;
  input wire [63:0] dyn2_dataIn_S;
  input wire dyn2_validIn_N;
  input wire dyn2_validIn_E;
  input wire dyn2_validIn_W;
  input wire dyn2_validIn_S;
  input wire dyn2_dNo_yummy;
  input wire dyn2_dEo_yummy;
  input wire dyn2_dWo_yummy;
  input wire dyn2_dSo_yummy;
  output reg [63:0] dyn2_dNo;
  output reg [63:0] dyn2_dEo;
  output reg [63:0] dyn2_dWo;
  output reg [63:0] dyn2_dSo;
  output reg dyn2_dNo_valid;
  output reg dyn2_dEo_valid;
  output reg dyn2_dWo_valid;
  output reg dyn2_dSo_valid;
  output reg dyn2_yummyOut_N;
  output reg dyn2_yummyOut_E;
  output reg dyn2_yummyOut_W;
  output reg dyn2_yummyOut_S;

  modified_tile #(
    .PARTITION_ID(4)
  ) inst (
    .clk(clk),
    .rst_n(rst_n),
    .clk_en(clk_en),
    .default_chipid(default_chipid),
    .default_coreid_x(default_coreid_x),
    .default_coreid_y(default_coreid_y),
    .default_total_num_tiles(default_total_num_tiles),
    .flat_tileid(flat_tileid),
    .debug_req_i(debug_req_i),
    .unavailable_o(unavailable_o),
    .timer_irq_i(timer_irq_i),
    .ipi_i(ipi_i),
    .irq_i(irq_i),
    .tile_jtag_ucb_val(tile_jtag_ucb_val),
    .tile_jtag_ucb_data(tile_jtag_ucb_data),
    .jtag_tiles_ucb_val(jtag_tiles_ucb_val),
    .jtag_tiles_ucb_data(jtag_tiles_ucb_data),
    .dyn0_dataIn_N(dyn0_dataIn_N),
    .dyn0_dataIn_E(dyn0_dataIn_E),
    .dyn0_dataIn_W(dyn0_dataIn_W),
    .dyn0_dataIn_S(dyn0_dataIn_S),
    .dyn0_validIn_N(dyn0_validIn_N),
    .dyn0_validIn_E(dyn0_validIn_E),
    .dyn0_validIn_W(dyn0_validIn_W),
    .dyn0_validIn_S(dyn0_validIn_S),
    .dyn0_dNo_yummy(dyn0_dNo_yummy),
    .dyn0_dEo_yummy(dyn0_dEo_yummy),
    .dyn0_dWo_yummy(dyn0_dWo_yummy),
    .dyn0_dSo_yummy(dyn0_dSo_yummy),
    .dyn0_dNo(dyn0_dNo),
    .dyn0_dEo(dyn0_dEo),
    .dyn0_dWo(dyn0_dWo),
    .dyn0_dSo(dyn0_dSo),
    .dyn0_dNo_valid(dyn0_dNo_valid),
    .dyn0_dEo_valid(dyn0_dEo_valid),
    .dyn0_dWo_valid(dyn0_dWo_valid),
    .dyn0_dSo_valid(dyn0_dSo_valid),
    .dyn0_yummyOut_N(dyn0_yummyOut_N),
    .dyn0_yummyOut_E(dyn0_yummyOut_E),
    .dyn0_yummyOut_W(dyn0_yummyOut_W),
    .dyn0_yummyOut_S(dyn0_yummyOut_S),
    .dyn1_dataIn_N(dyn1_dataIn_N),
    .dyn1_dataIn_E(dyn1_dataIn_E),
    .dyn1_dataIn_W(dyn1_dataIn_W),
    .dyn1_dataIn_S(dyn1_dataIn_S),
    .dyn1_validIn_N(dyn1_validIn_N),
    .dyn1_validIn_E(dyn1_validIn_E),
    .dyn1_validIn_W(dyn1_validIn_W),
    .dyn1_validIn_S(dyn1_validIn_S),
    .dyn1_dNo_yummy(dyn1_dNo_yummy),
    .dyn1_dEo_yummy(dyn1_dEo_yummy),
    .dyn1_dWo_yummy(dyn1_dWo_yummy),
    .dyn1_dSo_yummy(dyn1_dSo_yummy),
    .dyn1_dNo(dyn1_dNo),
    .dyn1_dEo(dyn1_dEo),
    .dyn1_dWo(dyn1_dWo),
    .dyn1_dSo(dyn1_dSo),
    .dyn1_dNo_valid(dyn1_dNo_valid),
    .dyn1_dEo_valid(dyn1_dEo_valid),
    .dyn1_dWo_valid(dyn1_dWo_valid),
    .dyn1_dSo_valid(dyn1_dSo_valid),
    .dyn1_yummyOut_N(dyn1_yummyOut_N),
    .dyn1_yummyOut_E(dyn1_yummyOut_E),
    .dyn1_yummyOut_W(dyn1_yummyOut_W),
    .dyn1_yummyOut_S(dyn1_yummyOut_S),
    .dyn2_dataIn_N(dyn2_dataIn_N),
    .dyn2_dataIn_E(dyn2_dataIn_E),
    .dyn2_dataIn_W(dyn2_dataIn_W),
    .dyn2_dataIn_S(dyn2_dataIn_S),
    .dyn2_validIn_N(dyn2_validIn_N),
    .dyn2_validIn_E(dyn2_validIn_E),
    .dyn2_validIn_W(dyn2_validIn_W),
    .dyn2_validIn_S(dyn2_validIn_S),
    .dyn2_dNo_yummy(dyn2_dNo_yummy),
    .dyn2_dEo_yummy(dyn2_dEo_yummy),
    .dyn2_dWo_yummy(dyn2_dWo_yummy),
    .dyn2_dSo_yummy(dyn2_dSo_yummy),
    .dyn2_dNo(dyn2_dNo),
    .dyn2_dEo(dyn2_dEo),
    .dyn2_dWo(dyn2_dWo),
    .dyn2_dSo(dyn2_dSo),
    .dyn2_dNo_valid(dyn2_dNo_valid),
    .dyn2_dEo_valid(dyn2_dEo_valid),
    .dyn2_dWo_valid(dyn2_dWo_valid),
    .dyn2_dSo_valid(dyn2_dSo_valid),
    .dyn2_yummyOut_N(dyn2_yummyOut_N),
    .dyn2_yummyOut_E(dyn2_yummyOut_E),
    .dyn2_yummyOut_W(dyn2_yummyOut_W),
    .dyn2_yummyOut_S(dyn2_yummyOut_S)
  );
endmodule
