#include <stdint.h>
#include <isa.h>
#define MROM_BASE 0x20000000
#define MROM_TOP 0x20000fff
#define SRAM_BASE 0x0f000000
#define SRAM_TOP 0x0fffffff
#define FLASH_BASE 0x30000000
#define FLASH_TOP 0x3fffffff
#define SDRAM_BASE 0xa0000000
#define SDRAM_TOP 0xbfffffff
#define PSRAM_BASE 0x80000000
#define PSRAM_TOP 0x9fffffff
#define MEM_IN(addr, start, end) ((addr >= (start)) && (addr <= (end)))

uint32_t mem_read(uint32_t pc);
extern uint32_t *mrom;
extern uint32_t *flash;
extern uint32_t *mem;
extern uint32_t *psram;
extern word_t mem_size;
