#include <stdint.h>
#include <stdio.h>


#define REG(type, addr) (*(volatile type *)(addr))

#define TTC0(offset) (0xF8001000 + (offset))

#define TTC_CLK_CNTRL_1     (0x00000000)
#define TTC_CNT_CNTRL_1     (0x0000000C)
#define TTC_INTERVAL_VAL_1  (0x00000024)
#define TTC_ISR_1           (0x00000054)
#define TTC_IER_1           (0x00000060)


#define ISR_OFFSET(id) (id % 32)
#define ISR_MASK(id) (1 << ISR_OFFSET(id))
#define ISR_BYTE(id) (4 * (id / 32))


volatile uintptr_t PERIPHBASE;
volatile uint32_t timer;


void __attribute__ ((interrupt)) UndefinedAbortHandler(void) {
  while (1) {}
}

void __attribute__ ((interrupt)) SVCHandler(void) {
  while (1) {}
}

void __attribute__ ((interrupt)) PrefetchAbortHandler(void) {
  while (1) {}
}

void __attribute__ ((interrupt)) DataAbortHandler(void) {
  while (1) {}
}

void __attribute__ ((interrupt)) IRQHandler(void) {
  int id = *((volatile unsigned int *)(PERIPHBASE + 0x10C));

  if (id == 42) {
    int a = REG(uint8_t,  TTC0(TTC_ISR_1));
    REG(uint8_t,  TTC0(TTC_ISR_1)) = a;

    timer++;
  }
  else {
    while (1) {}
  }

  *((volatile unsigned int *)(PERIPHBASE + 0x110)) = id;
}

void __attribute__ ((interrupt)) FIQHandler(void) {
  while (1) {}
}


extern struct _reent *_impure_ptr;
struct _reent impure_ptr;
void _start(void);

void StartC(void) {
  _impure_ptr = &impure_ptr;
  _start();
}


void config_interrupt(int N, int cpu) {
  int reg_offset = (N >> 3) & 0xFFFFFFFC;
  int index = N & 0x1F;
  int value = 0x1 << index;
  int address = PERIPHBASE + 0x1100 + reg_offset;
  *(volatile unsigned int *)address |= value;
  reg_offset = (N & 0xFFFFFFFC);
  index = N & 0x3;
  address = PERIPHBASE + 0x1800 + reg_offset + index;
  *(volatile unsigned char *)address = (char)cpu;
}

void config_gic(void) {
  config_interrupt(42, 1);

  *((volatile unsigned int *)(PERIPHBASE + 0x00000104)) = 0xFFFF;

  *((volatile unsigned int *)(PERIPHBASE + 0x00000100)) = 1;

  *((volatile unsigned int *)(PERIPHBASE + 0x00001000)) = 1;
}

void disable_A9_interrupts(void) {
  asm volatile ("cpsid i");
}

void enable_A9_interrupts(void) {
  asm volatile ("cpsie i");
}


void (*const vexStartup)(void) = (void (*const)(void))0x3800020;

void main(void) {
  asm volatile ("mrc p15, 4, %0, c15, c0, 0" : "=r" (PERIPHBASE));

  disable_A9_interrupts();

  REG(uint8_t,  TTC0(TTC_CLK_CNTRL_1))    = 0b0011111; // 0b0000011
  REG(uint16_t, TTC0(TTC_INTERVAL_VAL_1)) = 33489; // TODO: Figure out actual value for 1ms, this was just determined via testing
  REG(uint8_t,  TTC0(TTC_ISR_1))          = 0b000001;
  REG(uint8_t,  TTC0(TTC_IER_1))          = 0b000001;
  REG(uint8_t,  TTC0(TTC_CNT_CNTRL_1))    = 0b0100010;

  config_gic();
  //*((volatile unsigned int *)(PERIPHBASE + 0x1100 + ISR_BYTE(42))) |= ISR_MASK(42); // Enable interrupt 42
  enable_A9_interrupts();

  printf("test\n");
  while (1) {
    int c = getchar();
    if (c > -1) {
      if (c == '\r')
        printf("\n");
      else if (c >= 'A' && c <= 'Z')
        printf("%c", c + ('a' - 'A'));
      else if (c >= 'a' && c <= 'z')
        printf("%c", c - ('a' - 'A'));
      else if (c == '\\')
        printf("\n%d\n", timer);
      else
        printf("%c", c);
    }
    else
      clearerr(stdin);
  }

  vexStartup();
}
