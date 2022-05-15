#ifndef IRK_EXTERNAL_H_
#define IRK_EXTERNAL_H_


extern int _heap_start, _heap_end;
extern int __sbss_start, __sbss_end;
extern int __bss_start, __bss_end;

void __libc_init_array(void);
void __libc_fini_array(void);

int main(void);


#endif // IRK_EXTERNAL_H_
