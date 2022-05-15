#ifndef IRK_STUB_H_
#define IRK_STUB_H_

#include <stdint.h>
#include <stdbool.h>

extern void *__dso_handle;

extern bool appRunning;


void vexStartup(void) __attribute__ ((section (".boot")));

void *_init(void *ctx);

void _fini(void);

int32_t _getpid(void);

void *_sbrk(intptr_t delta);

int _kill(int pid, int sig);

void _exit(int sig);


#endif // IRK_STUB_H_
