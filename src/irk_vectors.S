.section .vectors, "ax"

.globl _reset

_reset:
    b Start
    b UndefinedAbortHandler
    b SVCHandler
    b PrefetchAbortHandler
    b DataAbortHandler
    nop
    b IRQHandler
    b FIQHandler


.section .text, "ax"

Start:
    /* Init VFPU */
    ldr r0, =(0xF << 20)
    mcr p15, 0, r0, c1, c0, 2
    mov r3, #0x40000000
    vmsr FPEXC, r3

    ldr r0, =StartC
    blx r0


#define CPSR_M_USR            0x00    /* User mode.  */
#define CPSR_M_FIQ            0x01    /* Fast Interrupt mode.  */
#define CPSR_M_IRQ            0x02    /* Interrupt mode.  */
#define CPSR_M_SVR            0x03    /* Supervisor mode.  */
#define CPSR_M_MON            0x06    /* Monitor mode.  */
#define CPSR_M_ABT            0x07    /* Abort mode.  */
#define CPSR_M_HYP            0x0A    /* Hypervisor mode.  */
#define CPSR_M_UND            0x0B    /* Undefined mode.  */
#define CPSR_M_SYS            0x0F    /* System mode.  */
#define CPSR_M_32BIT          0x10    /* 32-bit mode.  */
#define CPSR_T_BIT            0x20    /* Thumb bit.  */
#define CPSR_F_MASK           0x40    /* FIQ bit.  */
#define CPSR_I_MASK           0x80    /* IRQ bit.  */

#define CPSR_M_MASK           0x0F    /* Mode mask except M[4].  */

.global _stack_init

.thumb
_stack_init:
    ldr r1, =stack_init
    bx r1
.arm
stack_init:
    mrs    r4, CPSR

    ldr    sp, =__stack /* Overwrite input SP value. */
    sub    r2, sp, #0x1D000 /* Overwrite input SL value. */

    mov    r3, sp /* Save input SP value.  */

    /* FIQ mode, interrupts disabled.  */
    mov    r1, #(CPSR_M_FIQ|CPSR_M_32BIT|CPSR_I_MASK|CPSR_F_MASK)
    msr    CPSR_c, r1
    mov    sp, r3
    sub    sl, sp, #0x1000    /* FIQ mode has its own SL.  */

    /* Abort mode, interrupts disabled.  */
    mov    r3, sl
    mov    r1, #(CPSR_M_ABT|CPSR_M_32BIT|CPSR_I_MASK|CPSR_F_MASK)
    msr    CPSR_c, r1
    mov    sp, r3
    sub    r3, r3, #0x1000

    /* Undefined mode, interrupts disabled.  */
    mov    r1, #(CPSR_M_UND|CPSR_M_32BIT|CPSR_I_MASK|CPSR_F_MASK)
    msr    CPSR_c, r1
    mov    sp, r3
    sub    r3, r3, #0x1000

    /* IRQ mode, interrupts disabled.  */
    mov    r1, #(CPSR_M_IRQ|CPSR_M_32BIT|CPSR_I_MASK|CPSR_F_MASK)
    msr    CPSR_c, r1
    mov    sp, r3
    sub    r3, r3, #0x2000

    /* Supervisory mode, interrupts disabled.  */
    mov    r1, #(CPSR_M_SVR|CPSR_M_32BIT|CPSR_I_MASK|CPSR_F_MASK)
    msr    CPSR_c, r1
    mov    sp, r3

    sub    r3, r3, #0x8000    /* Min size 32k.  */
    bic    r3, r3, #0x00FF    /* Align with current 64k block.  */
    bic    r3, r3, #0xFF00

    /* System (shares regs with User) mode, interrupts disabled.  */
    mov    r1, #(CPSR_M_SYS|CPSR_M_32BIT|CPSR_I_MASK|CPSR_F_MASK)
    msr    CPSR_c, r1
    mov    sp, r3

    /* Back to original mode, presumably SVC, with diabled FIQ/IRQ.  */
    orr    r4, r4, #(CPSR_I_MASK|CPSR_F_MASK)
    msr    CPSR_c, r4

    /* Set SL register.  */
    /* Allow slop for stack overflow handling and small frames.  */
    add    sl, r2, #256

    bx lr
