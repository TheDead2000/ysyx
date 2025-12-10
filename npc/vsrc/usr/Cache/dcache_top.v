`include "sysconfig.v"
// 地址位宽 32,dcache<->cpu (数据64位) mem<-->dcache(数据128位)
// 连接方式 ram<-->cache<-->cpu
// cache<-->cpu : 地址线宽度:32 数据线宽度:64
/* 改造后的 dcache */
// 1. cache 总容量: 4KB (4096Byte)
// 2. cache 块大小: 64Byte
// 3. cache 块个数: 64个 (64*64Byte==4096Byte)
// 4. 映射方式 直接映射
// 5. 块内地址: 6bit(2^6==64)
// 6. 组号: 6bit（2^6==64）
// 6. tag: 32-6-6 == 20 bit 


module dcache_top (
    input clk,
    input rst,

    /* cpu<-->cache 端口 */
    input [`XLEN-1:0] mem_addr_i,  // CPU 的访存信息 
    input [3:0] mem_mask_i,  // 访存掩码
    input [3:0] mem_size_i,
    input mem_addr_valid_i,  // 地址是否有效，无效时，停止访问 cache
    input mem_write_valid_i,  // 1'b1,表示写;1'b0 表示读 
    input [`XLEN-1:0] mem_wdata_i,  // 写数据
    output [`XLEN-1:0] mem_rdata_o,  // dcache 返回读数据
    output mem_data_ready_o,  // dcache 读数据是否准备好(未准备好需要暂停流水线)
    output mem_wdata_ready_o,
    /* dcache<-->mem 端口 */
    // 读端口
    output [`XLEN-1:0] ram_raddr_dcache_o,
    output                             ram_raddr_valid_dcache_o,
    output [                      3:0] ram_rmask_dcache_o,
    output [                      3:0] ram_rsize_dcache_o,
    output [                      7:0] ram_rlen_dcache_o,
    input                              ram_rdata_ready_dcache_i,
    input  [    `XLEN-1:0] ram_rdata_dcache_i,
    // 写端口
    output [`XLEN-1:0] ram_waddr_dcache_o,        // 地址
    output                             ram_waddr_valid_dcache_o,  // 地址是否准备好
    output [                      3:0] ram_wmask_dcache_o,        // 数据掩码,写入多少位
    output [                      3:0] ram_wsize_dcache_o,
    output [                      7:0] ram_wlen_dcache_o,         // 突发传输的长度
    input                              ram_wdata_ready_dcache_i,  // 数据是否已经写入
    output [    `XLEN-1:0] ram_wdata_dcache_o,        // 写入的数据


    /* sram */
    output [  6:0] io_sram0_addr,
    output         io_sram0_cen,
    output         io_sram0_wen,
    output [127:0] io_sram0_wmask,
    output [127:0] io_sram0_wdata,
    input  [127:0] io_sram0_rdata,
    output [  6:0] io_sram1_addr,
    output         io_sram1_cen,
    output         io_sram1_wen,
    output [127:0] io_sram1_wmask,
    output [127:0] io_sram1_wdata,
    input  [127:0] io_sram1_rdata,
    output [  6:0] io_sram2_addr,
    output         io_sram2_cen,
    output         io_sram2_wen,
    output [127:0] io_sram2_wmask,
    output [127:0] io_sram2_wdata,
    input  [127:0] io_sram2_rdata,
    output [  6:0] io_sram3_addr,
    output         io_sram3_cen,
    output         io_sram3_wen,
    output [127:0] io_sram3_wmask,
    output [127:0] io_sram3_wdata,
    input  [127:0] io_sram3_rdata
);
  // 寄存器已复位

`ifndef YSYX_SOC
  import "DPI-C" function void dcache_hit_count();
  import "DPI-C" function void dcache_unhit_count();
`endif


  // uncache 检查
  wire uncache;
  uncache_check u_uncache_check1 (
      .addr_check_i   (mem_addr_i),
      .uncache_valid_o(uncache)
  );



  wire [5:0] cache_blk_addr;  // 保持不变
  wire [6:0] cache_line_idx;  // 7位
  wire [18:0] cache_line_tag; // 19位
  assign {cache_line_tag, cache_line_idx, cache_blk_addr} = mem_addr_i;


  wire dcache_hit;
  wire [31:0] wmask_bit;
  wire dirty_bit_read;
  wire [18:0] dcache_tag_read;
  wire [`XLEN-1:0] dcache_writeback_data;

  /* cache 命中 */
  localparam CACHE_RST = 4'd0;
  localparam CACHE_IDLE = 4'd1;
  localparam CACHE_FENCEI = 4'd2;
  localparam CACHE_MISS_ALLOCATE = 4'd3;
  localparam CACHE_WRITE_BACK = 4'd4;
  localparam CACHE_FENCEI_WRITE_BACK = 4'd5;
  localparam CACHE_FENCEI_WAIT = 4'd6;
  localparam CACHE_WRITE_MISS = 4'd7;
  localparam UNCACHE_READ = 4'd8;
  localparam UNCACHE_WRITE = 4'd9;

  reg [3:0] dcache_state;


  reg [5:0] blk_addr_reg;

  // reg [19:0] line_tag_reg;
  reg dcache_tag_wen;

  reg dcache_wdata_ready;
  reg dcache_data_ready;
  // cache<-->mem 端口 
  reg [`XLEN-1:0] _ram_raddr_dcache_o;
  reg _ram_raddr_valid_dcache_o;
  reg [3:0] _ram_rmask_dcache_o;
  reg [3:0] _ram_rsize_dcache_o;
  reg [7:0] _ram_rlen_dcache_o;

  reg [`XLEN-1:0] _ram_waddr_dcache_o;
  reg _ram_waddr_valid_dcache_o;
  reg [3:0] _ram_wmask_dcache_o;
  reg [3:0] _ram_wsize_dcache_o;
  reg [7:0] _ram_wlen_dcache_o;
  reg [`XLEN-1:0] _ram_wdata_dcache_o;


  reg [127:0] dcache_wdata_writehit;
  reg [`XLEN-1:0] uncache_rdata;
  reg dcache_data_wen;
  reg _dirty_bit_write;
  reg dcache_write_hit_valid;


  reg [127:0] dcache_wmask_writehit;


  reg [3:0] burst_count;
  wire [3:0] burst_count_plus1 = burst_count + 1;
 
  reg _dirty_flush;
  wire ram_r_handshake = _ram_raddr_valid_dcache_o & ram_rdata_ready_dcache_i;
  wire ram_w_handshake = _ram_waddr_valid_dcache_o & ram_wdata_ready_dcache_i;

  always @(posedge clk) begin
    if (rst) begin
      dcache_state <= CACHE_RST;
      burst_count <= 0;

      blk_addr_reg <= 0;
      //line_tag_reg <= 0;
      dcache_tag_wen <= 0;
      dcache_data_wen <= 0;
      _dirty_bit_write <= 0;
      _dirty_flush <= 0;

      dcache_write_hit_valid <= 0;
      dcache_wdata_writehit <= 0;
      _ram_rsize_dcache_o <= 0;
      _ram_wsize_dcache_o <= 0;
      _ram_rlen_dcache_o <= 0;
      _ram_wlen_dcache_o <= 0;
      uncache_rdata <= 0;
      _ram_wdata_dcache_o <= 0;
      _ram_waddr_dcache_o <= 0;
      _ram_rmask_dcache_o <= 0;
      dcache_data_ready <= 0;
      _ram_raddr_valid_dcache_o <= 0;
      _ram_waddr_valid_dcache_o <= 0;
      dcache_wmask_writehit <= 0;
      _ram_raddr_dcache_o <= 0;
      _ram_wmask_dcache_o <= 0;

    end else begin
      case (dcache_state)
        CACHE_RST: begin
          dcache_state <= CACHE_IDLE;
        end
        CACHE_IDLE: begin
          blk_addr_reg <= cache_blk_addr;
          // line_tag_reg <= cache_line_tag;
          _dirty_flush <= 0;
          //dcache_wmask <= 0;
          // cache data 为单端口 ram,不能同时读写, uncache 直接访问内存
          if (mem_addr_valid_i && ~dcache_data_wen && ~uncache && ~dcache_tag_wen) begin
            case ({
              dcache_hit, mem_write_valid_i
            })
              2'b11: begin : write_hit  // TODO : 只写入 cache ，不写入内存
`ifndef YSYX_SOC
                dcache_hit_count();
`endif
                dcache_state <= CACHE_IDLE;
                //写 cache
                dcache_data_wen <= 1;
                dcache_data_ready <= 1;  // 完成信号
                dcache_tag_wen <= 1;
                _dirty_bit_write <= 1;  // 标记为脏
                dcache_write_hit_valid <= 1;  //写信号

              //?????
               dcache_wdata_writehit <= {96'b0, mem_wdata_i} << (mem_addr_i[3:2] * 32);
               dcache_wmask_writehit <= {96'b0, wmask_bit} << (mem_addr_i[3:2] * 32);
              end
              2'b10: begin : read_hit
`ifndef YSYX_SOC
                dcache_hit_count();
`endif
                dcache_data_ready <= 1;
                dcache_state <= CACHE_IDLE;
              end
              2'b00, 2'b01: begin : miss_allocate  // miss 时 分配 cache，需要考虑脏位
`ifndef YSYX_SOC
                dcache_unhit_count();
`endif
                if (dirty_bit_read) begin  // 需要写回
                  dcache_state <= CACHE_WRITE_BACK;
                  dcache_data_ready <= 0;
                  _ram_waddr_dcache_o <= {dcache_tag_read, cache_line_idx, 6'b0};  // 写地址
                  _ram_waddr_valid_dcache_o <= 1;  // 地址有效
                  _ram_wmask_dcache_o <= 4'b_1111;  // 写掩码
                  _ram_wdata_dcache_o <= dcache_writeback_data;  // 写数据
                  _ram_wsize_dcache_o <= 4'b0100;  //写大小 32b
                  _ram_wlen_dcache_o <= 8'd15;  // 突发 16 次
                  burst_count <= 0;  // 清空计数器
                end else begin  // 不需要写回
                  dcache_state              <= CACHE_MISS_ALLOCATE;
                  dcache_data_ready         <= 0;
                  _ram_raddr_dcache_o       <= {cache_line_tag, cache_line_idx, 6'b0};  // 读地址
                  _ram_raddr_valid_dcache_o <= 1;  // 地址有效
                  _ram_rmask_dcache_o       <= 4'b1111;  // 读掩码
                  _ram_rsize_dcache_o       <= 4'b0100;  //读大小 32b
                  _ram_rlen_dcache_o        <= 8'd15;  // 突发 15 次
                  burst_count               <= 0;  // 清空计数器
                end
              end
            endcase
          end else if (mem_addr_valid_i && uncache) begin : uncache_rw
            // 判断是读还是写
            if (mem_write_valid_i) begin
              dcache_state              <= UNCACHE_WRITE;
              dcache_data_ready         <= 0;
              _ram_waddr_dcache_o       <= mem_addr_i;  // 写地址
              _ram_waddr_valid_dcache_o <= 1;  // 地址有效
                case (mem_size_i)
                    4'b0001: begin // 字节访问
                        case (mem_addr_i[1:0])
                            2'b00: _ram_wmask_dcache_o <= 4'b0001; // 字节0
                            2'b01: _ram_wmask_dcache_o <= 4'b0010; // 字节1
                            2'b10: _ram_wmask_dcache_o <= 4'b0100; // 字节2
                            2'b11: _ram_wmask_dcache_o <= 4'b1000; // 字节3
                        endcase
                    end
                    4'b0010: begin // 半字访问
                        case (mem_addr_i[1])
                            1'b0: _ram_wmask_dcache_o <= 4'b0011; // 低半字
                            1'b1: _ram_wmask_dcache_o <= 4'b1100; // 高半字
                        endcase
                    end
                    4'b0100: begin // 字访问
                        _ram_wmask_dcache_o <= 4'b1111; // 所有字节
                    end
                    default: begin
                        _ram_wmask_dcache_o <= 4'b1111; // 默认全写
                    end
                endcase
              _ram_wdata_dcache_o       <= mem_wdata_i;  // 写数据
              _ram_wsize_dcache_o       <= mem_size_i;  //写大小
              _ram_wlen_dcache_o        <= 8'd0;  // 不突发
            end else begin
              dcache_state              <= UNCACHE_READ;
              dcache_data_ready         <= 0;
              _ram_raddr_dcache_o       <= mem_addr_i;  // 读地址
              _ram_raddr_valid_dcache_o <= 1;  // 地址有效
                case (mem_size_i)
                    4'b0001: begin // 字节访问
                        case (mem_addr_i[1:0])
                            2'b00: _ram_rmask_dcache_o <= 4'b0001; // 字节0
                            2'b01: _ram_rmask_dcache_o <= 4'b0010; // 字节1
                            2'b10: _ram_rmask_dcache_o <= 4'b0100; // 字节2
                            2'b11: _ram_rmask_dcache_o <= 4'b1000; // 字节3
                        endcase
                    end
                    4'b0010: begin // 半字访问
                        case (mem_addr_i[1])
                            1'b0: _ram_rmask_dcache_o <= 4'b0011; // 低半字
                            1'b1: _ram_rmask_dcache_o <= 4'b1100; // 高半字
                        endcase
                    end
                    4'b0100: begin // 字访问
                        _ram_rmask_dcache_o <= 4'b1111; // 所有字节
                    end
                    default: begin
                        _ram_rmask_dcache_o <= 4'b1111; // 默认全写
                    end
                endcase
              _ram_rsize_dcache_o       <= mem_size_i;  //读大小
              _ram_rlen_dcache_o        <= 8'd0;  // 不突发
            end

          end else begin
            dcache_data_ready <= 0;
            _ram_raddr_valid_dcache_o <= 0;
            _ram_waddr_valid_dcache_o <= 0;
            dcache_tag_wen <= 0;
            dcache_data_wen <= 0;
            _dirty_bit_write <= 0;
            dcache_wdata_writehit <= 0;
            dcache_write_hit_valid <= 0;  //写信号
          end
        end

        CACHE_MISS_ALLOCATE: begin
          if (ram_r_handshake) begin  // 在 handshake 时，向 ram 写入数据
            if (burst_count == _ram_rlen_dcache_o[3:0]) begin  // 突发传输最后一个数据
              dcache_state              <= CACHE_IDLE;
              dcache_tag_wen            <= 1;  // 写 tag 
              _dirty_bit_write          <= 0;
              _ram_raddr_valid_dcache_o <= 0;  // 传输结束
              burst_count               <= 0;
            end else begin
              burst_count <= burst_count_plus1;
            end
          end
        end

        CACHE_WRITE_MISS: begin
          if (_ram_waddr_valid_dcache_o & ram_wdata_ready_dcache_i) begin

            _ram_waddr_valid_dcache_o <= 0;
            dcache_data_ready <= 1;  // 完成信号
            dcache_state <= CACHE_IDLE;
          end
        end

        CACHE_WRITE_BACK: begin
          if (ram_w_handshake) begin
            if (burst_count == 4'd15) begin  // 收到最后一个写响应
              _ram_waddr_valid_dcache_o <= 0;  // 传输结束

              // 写入 cache 中
              dcache_state              <= CACHE_MISS_ALLOCATE;
              dcache_data_ready         <= 0;
              _ram_raddr_dcache_o       <= {cache_line_tag, cache_line_idx, 6'b0};  // 读地址
              _ram_raddr_valid_dcache_o <= 1;  // 地址有效
              _ram_rmask_dcache_o       <= 4'b_1111;  // 读掩码
              _ram_rsize_dcache_o       <= 4'b0100;  //读大小 32bit
              _ram_rlen_dcache_o        <= 8'd15;  // 突发 15 次
              burst_count               <= 0;  // 清空计数器
            end else begin
              burst_count <= burst_count_plus1;
              _ram_wdata_dcache_o <= dcache_writeback_data;  // 更新写数据
            end
          end
        end
        UNCACHE_READ: begin
          if (_ram_raddr_valid_dcache_o & ram_rdata_ready_dcache_i) begin
            _ram_raddr_valid_dcache_o <= 0;
            dcache_data_ready <= 1;  // 完成信号
            uncache_rdata <= ram_rdata_dcache_i[31:0];  // 数据返回
            dcache_state <= CACHE_IDLE;
          end
        end
        UNCACHE_WRITE: begin
          if (_ram_waddr_valid_dcache_o & ram_wdata_ready_dcache_i) begin
            _ram_waddr_valid_dcache_o <= 0;
            dcache_wdata_ready         <= 1;  // 完成信号
            dcache_state              <= CACHE_IDLE;
          end
        end

        CACHE_FENCEI: begin
          if (dirty_bit_read) begin
            dcache_state <= CACHE_FENCEI_WRITE_BACK;
            dcache_data_ready <= 0;
            _ram_waddr_valid_dcache_o <= 1;  // 地址有效
            _ram_wmask_dcache_o <= 4'b_1111;  // 写掩码
            _ram_wdata_dcache_o <= dcache_writeback_data;  // 写数据
            _ram_wsize_dcache_o <= 4'b0100; // 32位
            _ram_wlen_dcache_o <= 8'd15;    // 16次突发
            burst_count <= 0;  // 清空计数器
          end else begin
            dcache_state <= CACHE_FENCEI_WAIT;
          end
        end
        CACHE_FENCEI_WRITE_BACK: begin
          if (ram_w_handshake) begin
            if (burst_count == 4'd15) begin  // 收到最后一个写响应
              _ram_waddr_valid_dcache_o <= 0;  // 传输结束
              dcache_state              <= CACHE_FENCEI_WAIT;

            end else begin
              burst_count <= burst_count_plus1;
              _ram_wdata_dcache_o <= dcache_writeback_data;  // 更新写数据
            end
          end
        end
        CACHE_FENCEI_WAIT:  begin
            dcache_state <= CACHE_FENCEI;
          end
        default: begin
        end
      endcase
    end
  end



 wire [31:0] wmask_bit = {
  {8{mem_mask_i[3]}},
  {8{mem_mask_i[2]}},
  {8{mem_mask_i[1]}},
  {8{mem_mask_i[0]}}
};



 wire [127:0] dcache_wmask_readmiss = 
    (burst_count[1:0] == 2'b00) ? 128'h00000000_00000000_00000000_FFFFFFFF :
    (burst_count[1:0] == 2'b01) ? 128'h00000000_00000000_FFFFFFFF_00000000 :
    (burst_count[1:0] == 2'b10) ? 128'h00000000_FFFFFFFF_00000000_00000000 :
                                  128'hFFFFFFFF_00000000_00000000_00000000;

wire [127:0] dcache_wdate_readmiss = 
    (burst_count[1:0] == 2'b00) ? {96'b0, ram_rdata_dcache_i[31:0]} :
    (burst_count[1:0] == 2'b01) ? {64'b0, ram_rdata_dcache_i[31:0], 32'b0} :
    (burst_count[1:0] == 2'b10) ? {32'b0, ram_rdata_dcache_i[31:0], 64'b0} :
                                  {ram_rdata_dcache_i[31:0], 96'b0};


  wire state_readmiss = dcache_state == CACHE_MISS_ALLOCATE;
  wire state_writehit = dcache_write_hit_valid;
  wire state_writeback = dcache_state == CACHE_WRITE_BACK;

wire [127:0] dcache_wmask = ({128{state_readmiss}} & dcache_wmask_readmiss)
                          | ({128{state_writehit}} & dcache_wmask_writehit);

wire [127:0] dcache_wdata = ({128{state_readmiss}} & dcache_wdate_readmiss)
                          | ({128{state_writehit}} & dcache_wdata_writehit);


  wire dcache_wwen = (state_readmiss & ram_r_handshake) | (state_writehit & dcache_data_wen);


  wire dirty_bit_write = _dirty_bit_write;
  wire [18:0] dcache_tag_write = cache_line_tag;

  wire dirty_flush = _dirty_flush;

  wire dcache_allocate_valid = state_readmiss;
  wire dcache_writeback_valid = state_writeback ;

  wire [6:0] dcache_index = cache_line_idx;

  wire [`XLEN-1:0] dcache_rdata;
  
  dcache_tag u_dcache_tag (
      .clk              (clk),
      .rst              (rst),
      .dcache_tag_i     (dcache_tag_write),  // tag
      .dcache_index_i   (dcache_index),      // index
      .write_valid_i    (dcache_tag_wen),    // 写使能
      .dcache_tag_o     (dcache_tag_read),
      .dirty_bit_read_o (dirty_bit_read),
      .dirty_bit_write_i(dirty_bit_write),
      .dirty_flush_i    (dirty_flush),
      .dcache_hit_o     (dcache_hit)
  );

  dcache_data u_dcache_data (
      // .clk                     (clk),
      // .rst                     (rst),
      .dcache_index_i          (dcache_index),
      // index
      .dcache_blk_addr_i       (cache_blk_addr),
      .dcache_line_wdata_i     (dcache_wdata),
      .dcache_wmask            (dcache_wmask),
      .dcache_wen_i            (dcache_wwen),
      .burst_count_i           (burst_count),
      .dcache_allocate_valid_i (dcache_allocate_valid),
      .dcache_writeback_valid_i(dcache_writeback_valid),
      .dcache_writeback_data_o (dcache_writeback_data),
      .dcache_rdata_o          (dcache_rdata),
      /* sram */
      .io_sram0_addr           (io_sram0_addr),
      .io_sram0_cen            (io_sram0_cen),
      .io_sram0_wen            (io_sram0_wen),
      .io_sram0_wmask          (io_sram0_wmask),
      .io_sram0_wdata          (io_sram0_wdata),
      .io_sram0_rdata          (io_sram0_rdata),
      .io_sram1_addr           (io_sram1_addr),
      .io_sram1_cen            (io_sram1_cen),
      .io_sram1_wen            (io_sram1_wen),
      .io_sram1_wmask          (io_sram1_wmask),
      .io_sram1_wdata          (io_sram1_wdata),
      .io_sram1_rdata          (io_sram1_rdata),
      .io_sram2_addr           (io_sram2_addr),
      .io_sram2_cen            (io_sram2_cen),
      .io_sram2_wen            (io_sram2_wen),
      .io_sram2_wmask          (io_sram2_wmask),
      .io_sram2_wdata          (io_sram2_wdata),
      .io_sram2_rdata          (io_sram2_rdata),
      .io_sram3_addr           (io_sram3_addr),
      .io_sram3_cen            (io_sram3_cen),
      .io_sram3_wen            (io_sram3_wen),
      .io_sram3_wmask          (io_sram3_wmask),
      .io_sram3_wdata          (io_sram3_wdata),
      .io_sram3_rdata          (io_sram3_rdata)
  );



  assign ram_wlen_dcache_o = _ram_wlen_dcache_o;
  assign ram_rlen_dcache_o = _ram_rlen_dcache_o;



  assign mem_rdata_o = (uncache) ? uncache_rdata : dcache_rdata;

  assign mem_data_ready_o = dcache_data_ready && (dcache_state == CACHE_IDLE);
  assign mem_wdata_ready_o = dcache_wdata_ready && (dcache_state == CACHE_IDLE);
  assign ram_raddr_dcache_o = _ram_raddr_dcache_o;
  assign ram_raddr_valid_dcache_o = _ram_raddr_valid_dcache_o;
  assign ram_rmask_dcache_o = _ram_rmask_dcache_o;
  assign ram_rsize_dcache_o = _ram_rsize_dcache_o;


  assign ram_waddr_dcache_o = _ram_waddr_dcache_o;
  assign ram_waddr_valid_dcache_o = _ram_waddr_valid_dcache_o;
  assign ram_wmask_dcache_o = _ram_wmask_dcache_o;
  assign ram_wdata_dcache_o = dcache_writeback_valid ? dcache_writeback_data : _ram_wdata_dcache_o;
  assign ram_wsize_dcache_o = _ram_wsize_dcache_o;

endmodule



// module dcache_top (
//     input clk,
//     input rst,

//     /* cpu<-->cache 端口 */
//     input [`XLEN-1:0] mem_addr_i,  // CPU 的访存信息 
//     input [3:0] mem_mask_i,  // 访存掩码
//     input [3:0] mem_size_i,
//     input mem_addr_valid_i,  // 地址是否有效，无效时，停止访问 cache
//     input mem_write_valid_i,  // 1'b1,表示写;1'b0 表示读 
//     input [`XLEN-1:0] mem_wdata_i,  // 写数据
//     output [`XLEN-1:0] mem_rdata_o,  // dcache 返回读数据
//     output mem_data_ready_o,  // dcache 读数据是否准备好(未准备好需要暂停流水线)
//     output mem_wdata_ready_o,  // dcache 写数据是否准备好(未准备好需要暂停流水线)
//     // axi4_arb 接口 - 连接到 axi4_arb 模块
  
//     // input arb_awready,

//     // output reg arb_wvalid,

//     // output reg arb_wlast,

//     // input arb_arready,

//     // output reg arb_rready,
  
//     // input arb_rlast,
    
//     /* dcache<-->mem 端口 */
//     // 读端口
//     output [`XLEN-1:0] arb_araddr,
//     output                             arb_arvalid,
//     //output [                      3:0] ram_rmask_dcache_o,
//     output [                      3:0] arb_rsize,
//     output [                      7:0] arb_rlen,
//     input                              arb_rvalid,
//     input  [    `XLEN-1:0] arb_rdata,
//     // 写端口
//     output [`XLEN-1:0] arb_awaddr,        // 地址
//     output                             arb_awvalid,  // 地址是否准备好
//     output [                      3:0] arb_wmask,        // 数据掩码,写入多少位
//     output [                      3:0] arb_wsize,
//     output [                      7:0] arb_wlen,         // 突发传输的长度
//     input                              arb_wready,  // 数据是否已经写入
//     output [    `XLEN-1:0] arb_wdata        // 写入的数据

// );
//   // 寄存器已复位

// `ifndef YSYX_SOC
//   import "DPI-C" function void dcache_hit_count();
//   import "DPI-C" function void dcache_unhit_count();
// `endif


//   // uncache 检查
//   wire uncache;
//   uncache_check u_uncache_check1 (
//       .addr_check_i   (mem_addr_i),
//       .uncache_valid_o(uncache)
//   );



//   wire [5:0] cache_blk_addr;  // 保持不变
//   wire [6:0] cache_line_idx;  // 7位
//   wire [18:0] cache_line_tag; // 19位
//   assign {cache_line_tag, cache_line_idx, cache_blk_addr} = mem_addr_i;


//   wire dcache_hit;
//   wire [31:0] wmask_bit;
//   wire dirty_bit_read;
//   wire [18:0] dcache_tag_read;
//   wire [`XLEN-1:0] dcache_writeback_data;

//   /* cache 命中 */
//   localparam CACHE_RST = 4'd0;
//   localparam CACHE_IDLE = 4'd1;
//   localparam CACHE_FENCEI = 4'd2;
//   localparam CACHE_MISS_ALLOCATE = 4'd3;
//   localparam CACHE_WRITE_BACK = 4'd4;
//   localparam CACHE_FENCEI_WRITE_BACK = 4'd5;
//   localparam CACHE_FENCEI_WAIT = 4'd6;
//   localparam CACHE_WRITE_MISS = 4'd7;
//   localparam UNCACHE_READ = 4'd8;
//   localparam UNCACHE_WRITE = 4'd9;

//   reg [3:0] dcache_state;


//   reg [5:0] blk_addr_reg;

//   // reg [19:0] line_tag_reg;
//   reg dcache_tag_wen;


//   reg dcache_data_ready;
//   reg dcache_wdata_ready;
//   // cache<-->mem 端口 
//   reg [`XLEN-1:0] _ram_raddr_dcache_o;
//   reg _ram_raddr_valid_dcache_o;
//   reg [3:0] _ram_rmask_dcache_o;
//   reg [3:0] _ram_rsize_dcache_o;
//   reg [7:0] _ram_rlen_dcache_o;

//   reg [`XLEN-1:0] _ram_waddr_dcache_o;
//   reg _ram_waddr_valid_dcache_o;
//   reg [3:0] _ram_wmask_dcache_o;
//   reg [3:0] _ram_wsize_dcache_o;
//   reg [7:0] _ram_wlen_dcache_o;
//   reg [`XLEN-1:0] _ram_wdata_dcache_o;


//   reg [31:0] dcache_wdata_writehit;
//   reg [`XLEN-1:0] uncache_rdata;
//   reg dcache_data_wen;
//   reg _dirty_bit_write;
//   reg dcache_write_hit_valid;


//   reg [127:0] dcache_wmask_writehit;


//   reg [3:0] burst_count;
//   wire [3:0] burst_count_plus1 = burst_count + 1;
 
//   reg _dirty_flush;
//   wire ram_r_handshake = _ram_raddr_valid_dcache_o & arb_rvalid;
//   wire ram_w_handshake = _ram_waddr_valid_dcache_o & arb_wready;

//   always @(posedge clk) begin
//     if (rst) begin
//       dcache_state <= CACHE_RST;
//       burst_count <= 0;

//       blk_addr_reg <= 0;
//       //line_tag_reg <= 0;
//       dcache_tag_wen <= 0;
//       dcache_data_wen <= 0;
//       _dirty_bit_write <= 0;
//       _dirty_flush <= 0;

//       dcache_write_hit_valid <= 0;
//       dcache_wdata_writehit <= 0;
//       _ram_rsize_dcache_o <= 0;
//       _ram_wsize_dcache_o <= 0;
//       _ram_rlen_dcache_o <= 0;
//       _ram_wlen_dcache_o <= 0;
//       uncache_rdata <= 0;
//       _ram_wdata_dcache_o <= 0;
//       _ram_waddr_dcache_o <= 0;
//       _ram_rmask_dcache_o <= 0;
//       dcache_data_ready <= 0;
//       _ram_raddr_valid_dcache_o <= 0;
//       _ram_waddr_valid_dcache_o <= 0;
//       dcache_wmask_writehit <= 0;
//       _ram_raddr_dcache_o <= 0;
//       _ram_wmask_dcache_o <= 0;

//     end else begin
//       case (dcache_state)
//         CACHE_RST: begin
//           dcache_state <= CACHE_IDLE;
//         end
//         CACHE_IDLE: begin
//           blk_addr_reg <= cache_blk_addr;
//           // line_tag_reg <= cache_line_tag;
//           _dirty_flush <= 0;
//           //dcache_wmask <= 0;
//           // cache data 为单端口 ram,不能同时读写, uncache 直接访问内存
//           if (mem_addr_valid_i && ~dcache_data_wen && ~uncache && ~dcache_tag_wen) begin
//             case ({
//               dcache_hit, mem_write_valid_i
//             })
//               2'b11: begin : write_hit  // TODO : 只写入 cache ，不写入内存
// `ifndef YSYX_SOC
//                 dcache_hit_count();
// `endif
//                 dcache_state <= CACHE_IDLE;
//                 //写 cache
//                 dcache_data_wen <= 1;
//                 dcache_data_ready <= 1;  // 完成信号
//                 dcache_tag_wen <= 1;
//                 _dirty_bit_write <= 1;  // 标记为脏
//                 dcache_write_hit_valid <= 1;  //写信号

//                dcache_wdata_writehit <= mem_wdata_i;
//               end
//               2'b10: begin : read_hit
// `ifndef YSYX_SOC
//                 dcache_hit_count();
// `endif
//                 dcache_data_ready <= 1;
//                 dcache_state <= CACHE_IDLE;
//               end
//               2'b00, 2'b01: begin : miss_allocate  // miss 时 分配 cache，需要考虑脏位
// `ifndef YSYX_SOC
//                 dcache_unhit_count();
// `endif
//                 if (dirty_bit_read) begin  // 需要写回
//                   dcache_state <= CACHE_WRITE_BACK;
//                   dcache_data_ready <= 0;
//                   dcache_wdata_ready <= 0;
//                   _ram_waddr_dcache_o <= {dcache_tag_read, cache_line_idx, 6'b0};  // 写地址
//                   _ram_waddr_valid_dcache_o <= 1;  // 地址有效
//                   _ram_wmask_dcache_o <= 4'b_1111;  // 写掩码
//                   _ram_wdata_dcache_o <= dcache_writeback_data;  // 写数据
//                   _ram_wsize_dcache_o <= 4'b0100;  //写大小 8byte
//                   _ram_wlen_dcache_o <= 8'd15;  // 突发 7 次
//                   burst_count <= 0;  // 清空计数器
//                 end else begin  // 不需要写回
//                   dcache_state              <= CACHE_MISS_ALLOCATE;
//                   dcache_data_ready         <= 0;
//                   dcache_wdata_ready <= 0;
//                   _ram_raddr_dcache_o       <= {cache_line_tag, cache_line_idx, 6'b0};  // 读地址
//                   _ram_raddr_valid_dcache_o <= 1;  // 地址有效
//                   _ram_rmask_dcache_o       <= 4'b_1111;  // 读掩码
//                   _ram_rsize_dcache_o       <= 4'b0100;  //读大小32
//                   _ram_rlen_dcache_o        <= 8'd15;  // 突发 7 次
//                   burst_count               <= 0;  // 清空计数器
//                 end
//               end
//             endcase
//           end else if (mem_addr_valid_i && uncache) begin : uncache_rw
//             // 判断是读还是写
//             if (mem_write_valid_i) begin
//               dcache_state              <= UNCACHE_WRITE;
//               dcache_data_ready         <= 0;
//               dcache_wdata_ready         <= 0;
//               _ram_waddr_dcache_o       <= mem_addr_i;  // 写地址
//               _ram_waddr_valid_dcache_o <= 1;  // 地址有效
//     case (mem_size_i)
//         4'b0001: begin // 字节访问
//             case (mem_addr_i[1:0])
//                 2'b00: _ram_wmask_dcache_o <= 4'b0001; // 字节0
//                 2'b01: _ram_wmask_dcache_o <= 4'b0010; // 字节1
//                 2'b10: _ram_wmask_dcache_o <= 4'b0100; // 字节2
//                 2'b11: _ram_wmask_dcache_o <= 4'b1000; // 字节3
//             endcase
//         end
//         4'b0010: begin // 半字访问
//             case (mem_addr_i[1])
//                 1'b0: _ram_wmask_dcache_o <= 4'b0011; // 低半字
//                 1'b1: _ram_wmask_dcache_o <= 4'b1100; // 高半字
//             endcase
//         end
//         4'b0100: begin // 字访问
//             _ram_wmask_dcache_o <= 4'b1111; // 所有字节
//         end
//         default: begin
//             _ram_wmask_dcache_o <= 4'b1111; // 默认全写
//         end
//     endcase
//               _ram_wdata_dcache_o       <= mem_wdata_i;  // 写数据
//               _ram_wsize_dcache_o       <= mem_size_i;  //写大小
//               _ram_wlen_dcache_o        <= 8'd0;  // 不突发
//             end else begin
//               dcache_state              <= UNCACHE_READ;
//               dcache_data_ready         <= 0;
//               _ram_raddr_dcache_o       <= mem_addr_i;  // 读地址
//               _ram_raddr_valid_dcache_o <= 1;  // 地址有效
//               _ram_rmask_dcache_o       <= 4'b_1111;  // 读掩码
//               _ram_rsize_dcache_o       <= mem_size_i;  //读大小
//               _ram_rlen_dcache_o        <= 8'd0;  // 不突发
//             end

//           end else begin
//             dcache_data_ready <= 0;
//             dcache_wdata_ready <= 0;
//             _ram_raddr_valid_dcache_o <= 0;
//             _ram_waddr_valid_dcache_o <= 0;
//             dcache_tag_wen <= 0;
//             dcache_data_wen <= 0;
//             _dirty_bit_write <= 0;
//             dcache_wdata_writehit <= 0;
//             dcache_write_hit_valid <= 0;  //写信号
//           end
//         end

//         CACHE_MISS_ALLOCATE: begin
//           if (ram_r_handshake) begin  // 在 handshake 时，向 ram 写入数据
//             if (burst_count[3:0] == _ram_rlen_dcache_o[3:0]) begin  // 突发传输最后一个数据
//               dcache_state              <= CACHE_IDLE;
//               dcache_tag_wen            <= 1;  // 写 tag 
//               _dirty_bit_write          <= 0;
//               _ram_raddr_valid_dcache_o <= 0;  // 传输结束
//               burst_count               <= 0;
//             end else begin
//               burst_count <= burst_count_plus1;
//             end
//           end
//         end

//         CACHE_WRITE_MISS: begin
//           if (_ram_waddr_valid_dcache_o & arb_wready) begin

//             _ram_waddr_valid_dcache_o <= 0;
//             dcache_data_ready <= 1;  // 完成信号
//             dcache_state <= CACHE_IDLE;
//           end
//         end

//         CACHE_WRITE_BACK: begin
//           if (ram_w_handshake) begin
//             if (burst_count == 4'd15) begin  // 收到最后一个写响应
//               _ram_waddr_valid_dcache_o <= 0;  // 传输结束

//               // 写入 cache 中
//               dcache_state              <= CACHE_MISS_ALLOCATE;
//               dcache_data_ready         <= 0;
//               _ram_raddr_dcache_o       <= {cache_line_tag, cache_line_idx, 6'b0};  // 读地址
//               _ram_raddr_valid_dcache_o <= 1;  // 地址有效
//               _ram_rmask_dcache_o       <= 4'b_1111;  // 读掩码
//               _ram_rsize_dcache_o       <= 4'b0100;  //读大小 32bit
//               _ram_rlen_dcache_o        <= 8'd15;  // 突发 15 次
//               burst_count               <= 0;  // 清空计数器
//             end else begin
//               burst_count <= burst_count_plus1;
//               _ram_wdata_dcache_o <= dcache_writeback_data;  // 更新写数据
//             end
//           end
//         end
//         UNCACHE_READ: begin
//           if (_ram_raddr_valid_dcache_o & arb_rvalid) begin
//             _ram_raddr_valid_dcache_o <= 0;
//             dcache_data_ready <= 1;  // 完成信号
//             // uncache_rdata <= arb_rdata[31:0];  // 数据返回
//             // $display("memsize_i:%x\n",mem_size_i);
//             // $display("uncache_rdata:%x\n",uncache_rdata);
//       case (mem_size_i)
//       4'b0001: begin // 字节访问 (8位)
//         case (mem_addr_i[1:0])
//           2'b00: uncache_rdata <= {24'b0, arb_rdata[7:0]};    // 字节0
//           2'b01: uncache_rdata <= {24'b0, arb_rdata[15:8]};   // 字节1  
//           2'b10: uncache_rdata <= {24'b0, arb_rdata[23:16]};  // 字节2
//           2'b11: uncache_rdata <= {24'b0, arb_rdata[31:24]};  // 字节3
//         endcase
//       end
//       4'b0010: begin // 半字访问 (16位)
//         case (mem_addr_i[1])
//           1'b0: uncache_rdata <= {16'b0, arb_rdata[15:0]};    // 半字0
//           1'b1: uncache_rdata <= {16'b0, arb_rdata[31:16]};   // 半字1
//         endcase
//       end
//       4'b0100: begin // 字访问 (32位) - lw指令
//         uncache_rdata <= arb_rdata;  // 直接返回整个32位
//       end
//       default: begin
//         uncache_rdata <= arb_rdata;  // 默认情况
//       end
//     endcase


//             dcache_state <= CACHE_IDLE;
//           end
//         end
//         UNCACHE_WRITE: begin
//           if (_ram_waddr_valid_dcache_o & arb_wready) begin
//             _ram_waddr_valid_dcache_o <= 0;
//             dcache_wdata_ready         <= 1;  // 完成信号
//             dcache_state              <= CACHE_IDLE;
//             // $display("mem_size:%x mem_write:%x\n",mem_size_i,mem_wdata_i);
//           end
//         end

//         CACHE_FENCEI: begin
//           if (dirty_bit_read) begin
//             dcache_state <= CACHE_FENCEI_WRITE_BACK;
//             dcache_data_ready <= 0;
//             _ram_waddr_valid_dcache_o <= 1;  // 地址有效
//             _ram_wmask_dcache_o <= 4'b_1111;  // 写掩码
//             _ram_wdata_dcache_o <= dcache_writeback_data;  // 写数据
//             _ram_wsize_dcache_o <= 4'b0100; // 32位
//             _ram_wlen_dcache_o <= 8'd15;    // 16次突发
//             burst_count <= 0;  // 清空计数器
//           end else begin
//             dcache_state <= CACHE_FENCEI_WAIT;
//           end
//         end
//         CACHE_FENCEI_WRITE_BACK: begin
//           if (ram_w_handshake) begin
//             if (burst_count == 4'd15) begin  // 收到最后一个写响应
//               _ram_waddr_valid_dcache_o <= 0;  // 传输结束
//               dcache_state              <= CACHE_FENCEI_WAIT;

//             end else begin
//               burst_count <= burst_count_plus1;
//               _ram_wdata_dcache_o <= dcache_writeback_data;  // 更新写数据
//             end
//           end
//         end
//         CACHE_FENCEI_WAIT:  begin
//             dcache_state <= CACHE_FENCEI;
//           end
//         default: begin
//         end
//       endcase
//     end
//   end



//  wire [31:0] wmask_bit = {
//   {8{mem_mask_i[3]}},
//   {8{mem_mask_i[2]}},
//   {8{mem_mask_i[1]}},
//   {8{mem_mask_i[0]}}
// };



//   wire state_readmiss = dcache_state == CACHE_MISS_ALLOCATE;
//   wire state_writehit = dcache_write_hit_valid;
//   wire state_writeback = dcache_state == CACHE_WRITE_BACK;


//   wire dcache_wwen = (state_readmiss & ram_r_handshake) | (state_writehit & dcache_data_wen);


//   wire dirty_bit_write = _dirty_bit_write;
//   wire [18:0] dcache_tag_write = cache_line_tag;

//   wire dirty_flush = _dirty_flush;

//   wire dcache_allocate_valid = state_readmiss;
//   wire dcache_writeback_valid = state_writeback ;

//   wire [6:0] dcache_index = cache_line_idx;

//   wire [`XLEN-1:0] dcache_rdata;
  
//   dcache_tag u_dcache_tag (
//       .clk              (clk),
//       .rst              (rst),
//       .dcache_tag_i     (dcache_tag_write),  // tag
//       .dcache_index_i   (dcache_index),      // index
//       .write_valid_i    (dcache_tag_wen),    // 写使能
//       .dcache_tag_o     (dcache_tag_read),
//       .dirty_bit_read_o (dirty_bit_read),
//       .dirty_bit_write_i(dirty_bit_write),
//       .dirty_flush_i    (dirty_flush),
//       .dcache_hit_o     (dcache_hit)
//   );

//   assign arb_wlen = _ram_wlen_dcache_o;
//   assign arb_rlen = _ram_rlen_dcache_o;



//   assign mem_rdata_o = (uncache) ? uncache_rdata : dcache_rdata;

//   assign mem_data_ready_o = dcache_data_ready && (dcache_state == CACHE_IDLE);
//   assign mem_wdata_ready_o = dcache_wdata_ready && (dcache_state == CACHE_IDLE);
//   assign arb_araddr = _ram_raddr_dcache_o;
//   assign arb_arvalid = _ram_raddr_valid_dcache_o;
//   //assign ram_rmask_dcache_o = _ram_rmask_dcache_o;
//   assign arb_rsize = _ram_rsize_dcache_o;


//   assign arb_awaddr = _ram_waddr_dcache_o;
//   assign arb_awvalid = _ram_waddr_valid_dcache_o;
//   assign arb_wmask = _ram_wmask_dcache_o;
//   assign arb_wdata = dcache_writeback_valid ? dcache_writeback_data : _ram_wdata_dcache_o;
//   assign arb_wsize = _ram_wsize_dcache_o;

// endmodule
