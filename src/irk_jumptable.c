#include <stdio.h>

#include "jumptable/irk_jumptable_boot.h"

int32_t irkSystemTimerReinitForRtos(uint32_t priority, void (*handler)(void *)) {
  printf("0x%X\n", handler);
}
