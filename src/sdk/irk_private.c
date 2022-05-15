#include <stddef.h>

#include "sdk/irk_private.h"
#include "sdk/irk_external.h"
#include "sdk/v5_api.h"

void *__dso_handle = NULL;

bool appRunning = true;

void *_init(void *ctx) {
  return ctx;
}

void _fini(void) {}

int32_t _getpid(void) {
  return 1;
}

void *_sbrk(intptr_t delta) {
  static unsigned char *heap = NULL;
  unsigned char *rtn;

  if (heap == NULL) {
    heap = (unsigned char *)&_heap_start;
  }
  unsigned char *new_heap = heap + delta;

  if (new_heap >= (unsigned char *)&_heap_end) {
    rtn = (unsigned char *)0xFFFFFFFF;
  }
  else {
    if (heap == NULL) {
      rtn = (unsigned char *)0xFFFFFFFF;
    }
    else {
      rtn = heap;
    }
    heap = new_heap;
  }

  return rtn;
}

int _kill(int pid, int sig) {
  if (pid == 1) {
    _exit(sig);
  }
  return 0;
}

void _exit(int sig) {
  while (1) {
    vexBackgroundProcessing();
  }
}
