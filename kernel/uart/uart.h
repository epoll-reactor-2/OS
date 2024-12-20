#ifndef UART_H
#define UART_H

#include <stddef.h>
#include <stdarg.h>
#include <stdint.h>

// 0x10000000 is memory-mapped address of UART according to device tree
#define __uart_addr 0x10000000

#define __to_hex_digit(n) ('0' + (n) + ((n) < 10 ? 0 : 'a' - '0' - 10))

void uart_init(void);
uint8_t uart_get(void);
int kputchar(int);
int kputs(const char *);
void kvprintf(const char *, va_list);
void kprintf(const char *, ...);

#endif
