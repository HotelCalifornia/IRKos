
__RAM_BASE   = 0x00100000;
__RAM_SIZE   = 0x03700000;

__STACK_SIZE = 0x01000000;
__HEAP_SIZE  = 0x01000000;

INCLUDE "irk_jumptable.ld"

INCLUDE "gcc_arm32_ram.ld"
