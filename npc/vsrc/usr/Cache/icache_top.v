`include "sysconfig.v"
// // 地址位宽 32,icache<->cpu (数据64位) mem<-->icache(数据128位)
// // 连接方式 ram<-->cache<-->cpu
// // cache<-->cpu : 地址线宽度:32 数据线宽度:64

// // 1. cache 总容量: 8KB (8192Byte)
// // 2. cahce 块大小: 64Byte
// // 4. 映射方式 直接映射
// // 5. 块内地址: 6bit(2^6==64)
// // 3. cache 块个数: 128个 (128 * 64Byte==8192Byte)
// // 6. 组号: 7bit（2^7==128）
// // 6. tag: 32-6-7 == 19 bit 


module icache_top (
    input clk,
    input rst,
    /* cpu<-->cache 端口 */
    input [`XLEN-1:0] preif_raddr_i,  // CPU 的访存信息 
    // input [7:0] preif_rmask_i,  // 访存掩码
    input preif_raddr_valid_i,  // 地址是否有效，无效时，停止访问 cache
    output [`XLEN-1:0] if_rdata_o,  // icache 返回读数据

    //input  if_rdata_ready_i,  // 是否准备好接收数据
    output if_rdata_valid_o,   // icache 读数据是否准备好(未准备好需要暂停流水线
    output next_rdata_unvalid_o, // 下一个读数据无效（跨块预取未完成）
    output cross_refill_o,
    /* cache<-->mem 端口 */
    output [`XLEN-1:0] ram_raddr_icache_o,
    output                             ram_raddr_valid_icache_o,
    output [                      3:0] ram_rmask_icache_o,
    output [                      3:0] ram_rsize_icache_o,
    output [                      7:0] ram_rlen_icache_o,
    input                              ram_rdata_ready_icache_i,
    input  [    `XLEN-1:0] ram_rdata_icache_i,

    /* sram */
    output [                      6:0] io_sram4_addr,
    output                             io_sram4_cen,
    output                             io_sram4_wen,
    output [                    127:0] io_sram4_wmask,
    output [                    127:0] io_sram4_wdata,
    input  [                    127:0] io_sram4_rdata,
    output [                      6:0] io_sram5_addr,
    output                             io_sram5_cen,
    output                             io_sram5_wen,
    output [                    127:0] io_sram5_wmask,
    output [                    127:0] io_sram5_wdata,
    input  [                    127:0] io_sram5_rdata,
    output [                      6:0] io_sram6_addr,
    output                             io_sram6_cen,
    output                             io_sram6_wen,
    output [                    127:0] io_sram6_wmask,
    output [                    127:0] io_sram6_wdata,
    input  [                    127:0] io_sram6_rdata,
    output [                      6:0] io_sram7_addr,
    output                             io_sram7_cen,
    output                             io_sram7_wen,
    output [                    127:0] io_sram7_wmask,
    output [                    127:0] io_sram7_wdata,
    input  [                    127:0] io_sram7_rdata
);

`ifndef YSYX_SOC
  import "DPI-C" function void icache_hit_count(
    input int last_pc,
    input int now_pc
  );
  import "DPI-C" function void icache_unhit_count();
`endif


  // 寄存器已复位

  wire [5:0] cache_blk_addr;  // 6bit块内地址（保持不变）
  wire [6:0] cache_line_idx;  // 7bit组号
  wire [18:0] cache_line_tag; // 19bit tag
  assign {cache_line_tag, cache_line_idx, cache_blk_addr} = preif_raddr_i;

  wire icache_hit;
  wire next_icache_hit;
  wire uncache;


  /* cache 命中 */
  localparam CACHE_RST = 4'd0;
  localparam CACHE_IDLE = 4'd1;
  localparam CACHE_MISS = 4'd2;
  localparam UNCACHE_READ = 4'd3;
  localparam CACHE_LOOKUP = 4'd4;
  localparam CACHE_REFILL = 4'd5;


  reg [`XLEN-1:0] uncache_rdata;
  reg [3:0] icache_state;


  reg [5:0] blk_addr_reg;
  reg [6:0] line_idx_reg;
  reg [18:0] line_tag_reg;
  reg icache_tag_write_valid;

  reg uncache_data_ready;
  // cache<-->mem 端口 
  reg [`XLEN-1:0] _ram_raddr_icache_o;
  reg _ram_raddr_valid_icache_o;
  reg [3:0] _ram_rmask_icache_o;
  reg [3:0] _ram_rsize_icache_o;
  reg [7:0] _ram_rlen_icache_o;
  reg [3:0] burst_count;

  reg refill_stall;
  reg need_cross_sram128_reg;
  wire ram_r_handshake = _ram_raddr_valid_icache_o & ram_rdata_ready_icache_i;
  wire [3:0] burst_count_plus1 = burst_count + 1;
  

  uncache_check u_uncache_check (
      .addr_check_i   ({line_tag_reg, line_idx_reg, blk_addr_reg}),
      .uncache_valid_o(uncache)
  );

  always @(posedge clk) begin
    if (rst) begin
      icache_state              <= CACHE_RST;
      blk_addr_reg              <= 0;
      line_idx_reg              <= 0;
      line_tag_reg              <= 0;

      next_blk_addr_reg         <= 0;
      next_line_idx_reg         <= 0;
      next_line_tag_reg         <= 0;
      
      icache_tag_write_valid    <= 0;
      _ram_rmask_icache_o       <= 0;
      _ram_rsize_icache_o       <= 0;
      _ram_raddr_valid_icache_o <= 0;
      uncache_data_ready        <= 0;
      _ram_raddr_icache_o       <= 0;
      _ram_rlen_icache_o        <= 0;
      burst_count               <= 0;
      uncache_rdata             <= 0;
    end else begin
      case (icache_state)
        CACHE_RST: begin
          icache_state <= CACHE_IDLE;
        end
        CACHE_IDLE: begin
          blk_addr_reg           <= cache_blk_addr;
          line_idx_reg           <= cache_line_idx;
          line_tag_reg           <= cache_line_tag;
          
          next_blk_addr_reg         <= next_cache_blk_addr;
          next_line_idx_reg         <= next_cache_line_idx;
          next_line_tag_reg         <= next_cache_line_tag;


          icache_tag_write_valid <= 0;
          uncache_data_ready     <= 0;
          // 执行 fencei 指令时，保证 icache 处于 idle 状态
          if (preif_raddr_valid_i) begin
            icache_state <= CACHE_LOOKUP;
          end
        end
        CACHE_LOOKUP: begin
          blk_addr_reg <= cache_blk_addr;
          line_idx_reg <= cache_line_idx;
          line_tag_reg <= cache_line_tag;

          next_blk_addr_reg         <= next_cache_blk_addr;
          next_line_idx_reg         <= next_cache_line_idx;
          next_line_tag_reg         <= next_cache_line_tag;

          icache_tag_write_valid    <= 0;
          uncache_data_ready <= 0;
          // 执行 fencei 指令时，保证 icache 处于 idle 状态
        if (~icache_hit && ~uncache) begin
            icache_state <= CACHE_MISS;
            _ram_raddr_icache_o <= {line_tag_reg, line_idx_reg, 6'b0};  // 读地址
            _ram_raddr_valid_icache_o <= 1;  // 地址有效
            _ram_rmask_icache_o <= 4'b_1111;  // 读掩码
            _ram_rsize_icache_o <= 4'b0100;  // 32bit 
            _ram_rlen_icache_o <= 15;    // 突发15+1次 
             burst_count <= 0;  // 清空计数器
`ifndef YSYX_SOC 
            icache_unhit_count();
`endif
          end else if (~icache_hit && uncache) begin
            icache_state              <= UNCACHE_READ;
            _ram_raddr_icache_o       <= {line_tag_reg, line_idx_reg, 6'b0};  // 读地址
            _ram_raddr_valid_icache_o <= 1;  // 地址有效
            _ram_rmask_icache_o       <= 4'b_1111;  // 读掩码
            _ram_rsize_icache_o       <= 4'b0100;  //读大小 32bit,一条指令
            _ram_rlen_icache_o        <= 8'd0;  // 不突发
          end
          else if(need_cross_sram128 & !next_icache_hit) begin
            icache_state <= CACHE_REFILL;
            _ram_raddr_icache_o <= {next_cache_line_tag,next_cache_line_idx,next_cache_blk_addr};
            _ram_raddr_valid_icache_o <= 1;  // 地址有效
            _ram_rmask_icache_o <= 4'b_1111;  // 读掩码
            _ram_rsize_icache_o <= 4'b0100;  // 32bit 
            _ram_rlen_icache_o <= 15;    // 突发15+1次 
            burst_count <= 0;  // 清空计数器
            refill_stall <= 1;
            need_cross_sram128_reg <= 1;
          end


`ifndef YSYX_SOC 
          else if (icache_hit) begin : hit
            icache_hit_count({line_tag_reg, line_idx_reg, blk_addr_reg}, preif_raddr_i);
          end
`endif 
        end
        CACHE_MISS: begin
          if (ram_r_handshake) begin  // 在 handshake 时，向 ram 写入数据
            if (burst_count == _ram_rlen_icache_o[3:0]) begin  // 突发传输最后一个数据
              icache_state <= CACHE_IDLE;
              _ram_raddr_valid_icache_o <= 0;  // 传输结束
              icache_tag_write_valid <= 1;  // 写 tag 
            end else begin
              burst_count <= burst_count_plus1;
            end
          end
        end

        CACHE_REFILL: begin
          if (ram_r_handshake) begin  // 在 handshake 时，向 ram 写入数据
            if (burst_count == 15) begin  // 突发传输最后一个数据
              icache_state <= CACHE_IDLE;
              _ram_raddr_valid_icache_o <= 0;  // 传输结束
              refill_stall <= 0;
              need_cross_sram128_reg <= 0;
              icache_tag_write_valid <= 1;  // 写 tag 
            end 
            else begin
              burst_count <= burst_count_plus1;
            end
          end
        end


        UNCACHE_READ: begin
          if (ram_r_handshake) begin
            _ram_raddr_valid_icache_o <= 0;
            uncache_data_ready <= 1;  // 完成信号
            uncache_rdata <= ram_rdata_icache_i[31:0]; // 直接取低32位
            icache_state <= CACHE_IDLE;
          end
        end
        default: begin
          icache_state <= CACHE_IDLE;
        end
      endcase
    end
  end


wire[18:0] write_tag_reg= (icache_state == CACHE_REFILL) ? next_cache_line_tag : line_tag_reg;
wire[6:0] write_idx_reg = (icache_state == CACHE_REFILL) ? next_cache_line_idx : line_idx_reg;


  icache_tag u_icache_tag (
      .clk           (clk),
      .rst           (rst),
      
      .icache_tag_i  (write_tag_reg),            // tag
      .icache_index_i(write_idx_reg),            // index

      // 下一个地址查询
      .next_icache_tag_i       (next_line_tag_reg),
      .next_icache_index_i     (next_line_idx_reg),

      .write_valid_i (icache_tag_write_valid),  // 写使能
     
      .icache_hit_o  (icache_hit),
      .next_icache_hit_o(next_icache_hit)
  );


 wire [127:0] icache_wmask = 
    (burst_count[1:0] == 2'b00) ? 128'h00000000_00000000_00000000_FFFFFFFF :
    (burst_count[1:0] == 2'b01) ? 128'h00000000_00000000_FFFFFFFF_00000000 :
    (burst_count[1:0] == 2'b10) ? 128'h00000000_FFFFFFFF_00000000_00000000 :
                                  128'hFFFFFFFF_00000000_00000000_00000000;

wire [127:0] icache_wdate = 
    (burst_count[1:0] == 2'b00) ? {96'b0, ram_rdata_icache_i[31:0]} :
    (burst_count[1:0] == 2'b01) ? {64'b0, ram_rdata_icache_i[31:0], 32'b0} :
    (burst_count[1:0] == 2'b10) ? {32'b0, ram_rdata_icache_i[31:0], 64'b0} :
                                  {ram_rdata_icache_i[31:0], 96'b0};
  wire [127:0] icache_rdata;


wire[5:0] write_blk_addr = (icache_state == CACHE_REFILL) ? next_blk_addr_reg : blk_addr_reg;
wire[6:0] write_index = (icache_state == CACHE_REFILL) ? next_cache_line_idx : cache_line_idx;


  icache_data u_icache_data (

      .icache_index_i     (write_index),//cache_line_idx 使用直接输入数据，满足一个周期的时许要求
      .icache_blk_addr_i(write_blk_addr),  // icache_blk_addr_i 使用寄存器中的数据
      .icache_line_wdata_i(icache_wdate),
      .icache_wmask(icache_wmask),
      .icache_wen_i(ram_r_handshake),  // 握手成功的时候，同时将数据写入cache
      .burst_count_i(burst_count),
      .icache_rdata_o(icache_rdata),
      // .icache_state(icache_state),
      /* sram */
      .io_sram4_addr(io_sram4_addr),
      .io_sram4_cen(io_sram4_cen),
      .io_sram4_wen(io_sram4_wen),
      .io_sram4_wmask(io_sram4_wmask),
      .io_sram4_wdata(io_sram4_wdata),
      .io_sram4_rdata(io_sram4_rdata),
      .io_sram5_addr(io_sram5_addr),
      .io_sram5_cen(io_sram5_cen),
      .io_sram5_wen(io_sram5_wen),
      .io_sram5_wmask(io_sram5_wmask),
      .io_sram5_wdata(io_sram5_wdata),
      .io_sram5_rdata(io_sram5_rdata),
      .io_sram6_addr(io_sram6_addr),
      .io_sram6_cen(io_sram6_cen),
      .io_sram6_wen(io_sram6_wen),
      .io_sram6_wmask(io_sram6_wmask),
      .io_sram6_wdata(io_sram6_wdata),
      .io_sram6_rdata(io_sram6_rdata),
      .io_sram7_addr(io_sram7_addr),
      .io_sram7_cen(io_sram7_cen),
      .io_sram7_wen(io_sram7_wen),
      .io_sram7_wmask(io_sram7_wmask),
      .io_sram7_wdata(io_sram7_wdata),
      .io_sram7_rdata(io_sram7_rdata)
  );

  // 1. icache_hit ： 数据来自 cache
  // 2. uncache_data_ready ：数据来自 uncache
  // 5.4 预取下一个128bit块

wire [`XLEN-1:0] next_sram128_addr = preif_raddr_i + 4;  // 下一块地址（+16字节）

  wire [5:0] next_cache_blk_addr;  // 6bit块内地址（保持不变）
  wire [6:0] next_cache_line_idx;  // 7bit组号
  wire [18:0] next_cache_line_tag; // 19bit tag
  
  reg[18:0] next_line_tag_reg;
  reg[6:0] next_line_idx_reg;
  reg[5:0] next_blk_addr_reg;

  assign {next_cache_line_tag, next_cache_line_idx, next_cache_blk_addr} = next_sram128_addr;

wire [3:0] sram128_offset_byte = blk_addr_reg[3:0];  // 128bit SRAM内字节偏移(0~15)
wire [1:0] word_sel_byte = blk_addr_reg[3:2];        // 32位字选择(0~3)
wire [1:0] halfword_sel_byte = blk_addr_reg[1:0];    // 16位半字选择(0/2/4...14)
// -------------------------- 5. 跨块预取（适配32位指令跨128bit块） --------------------------
// 5.1 预取缓存寄存器
reg [127:0] next_sram128_data;  // 下一个128bit块数据缓存
reg next_sram128_valid;         // 缓存有效标记

// 5.2 当前半字数据提取
wire [15:0] curr_halfword;
assign curr_halfword = (sram128_offset_byte == 0)  ? icache_rdata[15:0]  :
                       (sram128_offset_byte == 2)  ? icache_rdata[31:16] :
                       (sram128_offset_byte == 4)  ? icache_rdata[47:32] :
                       (sram128_offset_byte == 6)  ? icache_rdata[63:48] :
                       (sram128_offset_byte == 8)  ? icache_rdata[79:64] :
                       (sram128_offset_byte == 10) ? icache_rdata[95:80] :
                       (sram128_offset_byte == 12) ? icache_rdata[111:96]:
                       icache_rdata[127:112];  // 14字节→112~127bit
wire[15:0] next_halfword;
assign next_halfword = (sram128_offset_byte == 0)  ? icache_rdata[31:16] :
                       (sram128_offset_byte == 2)  ? icache_rdata[47:32] :
                       (sram128_offset_byte == 4)  ? icache_rdata[63:48] :
                       (sram128_offset_byte == 6)  ? icache_rdata[79:64] :
                       (sram128_offset_byte == 8) ? icache_rdata[95:80] :
                       (sram128_offset_byte == 10) ? icache_rdata[111:96]:
                       icache_rdata[127:112];  // 14字节→112~127bit


// 5.3 指令宽度判断（RISC-V C扩展标准）
wire is_32bit_inst = (curr_halfword[1:0] == 2'b11);  // 32位指令opcode[1:0]=11
wire is_last_halfword_in_sram128 = (sram128_offset_byte == 14);  // 最后一个16位半字
wire need_cross_sram128 = is_32bit_inst & is_last_halfword_in_sram128;  // 需要跨块

// 预取数据模块（仅读，无写）
icache_data u_icache_data_next (
    .icache_index_i      (next_cache_line_idx),
    .icache_blk_addr_i   (next_cache_blk_addr), // !!!!!!!!!!!!!!!!!!!!!!!
    .icache_line_wdata_i (128'h0),
    .icache_wmask        (128'h0),
    .burst_count_i       (4'h0),
    .icache_wen_i        (1'b0),
    .icache_rdata_o  (next_sram128_data),
    // .icache_state(icache_state),
    /* SRAM仅读，写端口悬空 */
    .io_sram4_addr       (),
    .io_sram4_cen        (),
    .io_sram4_wen        (),
    .io_sram4_wmask      (),
    .io_sram4_wdata      (),
    .io_sram4_rdata      (io_sram4_rdata),
    .io_sram5_addr       (),
    .io_sram5_cen        (),
    .io_sram5_wen        (),
    .io_sram5_wmask      (),
    .io_sram5_wdata      (),
    .io_sram5_rdata      (io_sram5_rdata),
    .io_sram6_addr       (),
    .io_sram6_cen        (),
    .io_sram6_wen        (),
    .io_sram6_wmask      (),
    .io_sram6_wdata      (),
    .io_sram6_rdata      (io_sram6_rdata),
    .io_sram7_addr       (),
    .io_sram7_cen        (),
    .io_sram7_wen        (),
    .io_sram7_wmask      (),
    .io_sram7_wdata      (),
    .io_sram7_rdata      (io_sram7_rdata)
);

// -------------------------- 6. 指令拼接（跨块32位指令） --------------------------
// reg [31:0] cross_inst_32;
reg cross_inst_valid;

always @(posedge clk) begin
    if (refill_stall) begin
        cross_inst_valid = 1'b1;
    end
    else begin
        cross_inst_valid = 1'b0;
    end
end

wire [31:0] cross_inst_32 = (need_cross_sram128 ) ? {next_sram128_data[15:0], curr_halfword} : 32'b0;
wire[31:0] real_32bit_inst = is_32bit_inst ? {next_halfword,curr_halfword} : 32'b0;

// -------------------------- 7. 最终输出数据选择 --------------------------
wire [31:0] cache_rdata_32 = icache_rdata[word_sel_byte*32 +: 32];  // 32位字数据
wire [15:0] cache_rdata_16 = (halfword_sel_byte == 0 || halfword_sel_byte == 1) ? cache_rdata_32[15:0] : cache_rdata_32[31:16];  // 16位半字数据

/* verilator lint_off WIDTHEXPAND */
  assign cross_refill_o = (need_cross_sram128 && !next_icache_hit && icache_state == CACHE_LOOKUP  ) ;

  assign if_rdata_valid_o = (icache_hit & !cross_refill_o) | uncache_data_ready;
  // assign if_rdata_valid_o = (icache_hit & next_icache_hit ) | uncache_data_ready;
  assign next_rdata_unvalid_o = refill_stall; // 下一个128bit块数据无效，需要等待

wire [`XLEN-1:0] icache_final_data = uncache ? uncache_rdata: cross_inst_valid ? {next_sram128_data[15:0], 16'hffff} : (need_cross_sram128)  ? cross_inst_32 : is_32bit_inst ? real_32bit_inst : cache_rdata_16;
wire [`XLEN-1:0] final_if_rdata = (icache_final_data == `XLEN'b0) ? 32'h0000_0013 : icache_final_data;
assign if_rdata_o = final_if_rdata;


  assign ram_raddr_icache_o = _ram_raddr_icache_o;
  assign ram_raddr_valid_icache_o = _ram_raddr_valid_icache_o;
  assign ram_rmask_icache_o = _ram_rmask_icache_o;
  assign ram_rsize_icache_o = _ram_rsize_icache_o;
  assign ram_rlen_icache_o = _ram_rlen_icache_o;

endmodule



// module icache_top (
//     input clk,
//     input rst,
//     /* cpu<-->cache 端口 */
//     input [`XLEN-1:0] preif_raddr_i,  // CPU 的访存信息 
//     // input [7:0] preif_rmask_i,  // 访存掩码
//     input preif_raddr_valid_i,  // 地址是否有效，无效时，停止访问 cache
//     output [`XLEN-1:0] if_rdata_o,  // icache 返回读数据

//     //input  if_rdata_ready_i,  // 是否准备好接收数据
//     output if_rdata_valid_o,   // icache 读数据是否准备好(未准备好需要暂停流水线)


//       // axi4_arb 接口 - 连接到 axi4_arb 模块
//     output reg [31:0] arb_awaddr,
//     output reg arb_awvalid,
//     input arb_awready,
//     output reg [31:0] arb_wdata,
//     output reg [3:0] arb_wmask,
//     output reg [3:0] arb_wsize,
//     output reg [7:0] arb_wlen,
//     output reg arb_wvalid,
//     input arb_wready,

//     input arb_arready,
//     output reg arb_rready,
//     input arb_rlast,




//     /* cache<-->mem 端口 */
//     output [`XLEN-1:0] arb_araddr,
//     output                             arb_arvalid,
//     // output [                      3:0] ram_rmask_icache_o,
//     output [                      3:0] arb_rsize,
//     output [                      7:0] arb_rlen,
//     input                              arb_rvalid,
//     input  [    `XLEN-1:0] arb_rdata


// );

// `ifndef YSYX_SOC
//   import "DPI-C" function void icache_hit_count(
//     input int last_pc,
//     input int now_pc
//   );
//   import "DPI-C" function void icache_unhit_count();
// `endif


//   // 寄存器已复位

//   wire [5:0] cache_blk_addr;  // 6bit块内地址（保持不变）
//   wire [6:0] cache_line_idx;  // 7bit组号
//   wire [18:0] cache_line_tag; // 19bit tag
//   assign {cache_line_tag, cache_line_idx, cache_blk_addr} = preif_raddr_i;

//   wire icache_hit;
//   wire uncache;


//   /* cache 命中 */
//   localparam CACHE_RST = 4'd0;
//   localparam CACHE_IDLE = 4'd1;
//   localparam CACHE_MISS = 4'd2;
//   localparam UNCACHE_READ = 4'd3;
//   localparam CACHE_LOOKUP = 4'd4;

//   reg [`XLEN-1:0] uncache_rdata;
//   reg [3:0] icache_state;


//   reg [5:0] blk_addr_reg;
//   reg [6:0] line_idx_reg;
//   reg [18:0] line_tag_reg;
//   reg icache_tag_write_valid;

//   reg uncache_data_ready;
//   // cache<-->mem 端口 
//   reg [`XLEN-1:0] _ram_raddr_icache_o;
//   reg _ram_raddr_valid_icache_o;
//   reg [3:0] _ram_rmask_icache_o;
//   reg [3:0] _ram_rsize_icache_o;
//   reg [7:0] _ram_rlen_icache_o;
//   reg [3:0] burst_count;


//   wire ram_r_handshake = _ram_raddr_valid_icache_o & arb_rvalid;
//   wire [3:0] burst_count_plus1 = burst_count + 1;


//   uncache_check u_uncache_check (
//       .addr_check_i   ({line_tag_reg, line_idx_reg, blk_addr_reg}),
//       .uncache_valid_o(uncache)
//   );

//   always @(posedge clk) begin
//     if (rst) begin
//       icache_state              <= CACHE_RST;
//       blk_addr_reg              <= 0;
//       line_idx_reg              <= 0;
//       line_tag_reg              <= 0;
//       icache_tag_write_valid    <= 0;
//       _ram_rmask_icache_o       <= 0;
//       _ram_rsize_icache_o       <= 0;
//       _ram_raddr_valid_icache_o <= 0;
//       uncache_data_ready        <= 0;
//       _ram_raddr_icache_o       <= 0;
//       _ram_rlen_icache_o        <= 0;
//       burst_count               <= 0;
//       uncache_rdata             <= 0;
//     end else begin
//       case (icache_state)
//         CACHE_RST: begin
//           icache_state <= CACHE_IDLE;
//         end
//         CACHE_IDLE: begin
//           blk_addr_reg           <= cache_blk_addr;
//           line_idx_reg           <= cache_line_idx;
//           line_tag_reg           <= cache_line_tag;
//           icache_tag_write_valid <= 0;
//           uncache_data_ready     <= 0;
//           // 执行 fencei 指令时，保证 icache 处于 idle 状态
//           if (preif_raddr_valid_i) begin
//             icache_state <= CACHE_LOOKUP;
//           end
//         end
//         CACHE_LOOKUP: begin
//           blk_addr_reg <= cache_blk_addr;
//           line_idx_reg <= cache_line_idx;
//           line_tag_reg <= cache_line_tag;
//           icache_tag_write_valid    <= 0;
//           uncache_data_ready <= 0;
//           // 执行 fencei 指令时，保证 icache 处于 idle 状态
//         if (~icache_hit && ~uncache) begin
//             icache_state <= CACHE_MISS;
//             _ram_raddr_icache_o <= {line_tag_reg, line_idx_reg, 6'b0};  // 读地址
//             _ram_raddr_valid_icache_o <= 1;  // 地址有效
//             _ram_rmask_icache_o <= 4'b_1111;  // 读掩码
//             _ram_rsize_icache_o <= 4'b0100;  // 32bit 
//             _ram_rlen_icache_o <= 8'd15;    // 突发15+1次 
//             burst_count <= 0;  // 清空计数器
// `ifndef YSYX_SOC 
//             icache_unhit_count();
// `endif
//           end else if (~icache_hit && uncache) begin
//             icache_state              <= UNCACHE_READ;
//             _ram_raddr_icache_o       <= {line_tag_reg, line_idx_reg, blk_addr_reg};  // 读地址
//             _ram_raddr_valid_icache_o <= 1;  // 地址有效
//             _ram_rmask_icache_o       <= 4'b_1111;  // 读掩码
//             _ram_rsize_icache_o       <= 4'b0100;  //读大小 32bit,一条指令
//             _ram_rlen_icache_o        <= 8'd0;  // 不突发
//           end
// `ifndef YSYX_SOC 
//           else if (icache_hit) begin : hit
//             icache_hit_count({line_tag_reg, line_idx_reg, blk_addr_reg}, preif_raddr_i);
//           end
// `endif 
//         end
//         CACHE_MISS: begin
//           if (ram_r_handshake) begin  // 在 handshake 时，向 ram 写入数据
//             if (burst_count == _ram_rlen_icache_o[3:0]) begin  // 突发传输最后一个数据
//               icache_state <= CACHE_IDLE;
//               _ram_raddr_valid_icache_o <= 0;  // 传输结束
//               icache_tag_write_valid <= 1;  // 写 tag 
//             end else begin
//               burst_count <= burst_count_plus1;
//             end
//           end
//         end
//         UNCACHE_READ: begin
//           if (ram_r_handshake) begin
//             _ram_raddr_valid_icache_o <= 0;
//             uncache_data_ready <= 1;  // 完成信号
//             uncache_rdata <= arb_rdata[31:0]; // 直接取低32位
//             icache_state <= CACHE_IDLE;
//           end
//         end
//         default: begin
//           icache_state <= CACHE_IDLE;
//         end
//       endcase
//     end
//   end

//   icache_tag u_icache_tag (
//       .clk           (clk),
//       .rst           (rst),
//       .icache_tag_i  (line_tag_reg),            // tag
//       .icache_index_i(line_idx_reg),            // index
//       .write_valid_i (icache_tag_write_valid),  // 写使能
//       .icache_hit_o  (icache_hit)
//   );



//   wire [`XLEN-1:0] icache_rdata;

//   // wire [`XLEN-1:0] _icache_data_o = {32'b0, icache_line_rdata[blk_addr_reg*8+:32]};

//   // 1. icache_hit ： 数据来自 cache
//   // 2. uncache_data_ready ：数据来自 uncache
//   assign if_rdata_valid_o = icache_hit | uncache_data_ready;
//   wire [`XLEN-1:0] icache_final_data = uncache ? uncache_rdata : icache_rdata;
//   assign if_rdata_o = icache_final_data;


//   assign arb_araddr = _ram_raddr_icache_o;
//   assign arb_arvalid = _ram_raddr_valid_icache_o;
//   // assign ram_rmask_icache_o = _ram_rmask_icache_o;
//   assign arb_rsize = _ram_rsize_icache_o;
//   assign arb_rlen = _ram_rlen_icache_o;

// endmodule

