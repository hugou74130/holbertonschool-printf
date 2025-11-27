#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

#define BUFF_SIZE 1024

typedef struct specifier
{
	char c;
	int (*func)(va_list);

} specifier_t;
void flush_buffer(void);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int _putchar(char c);
int print_binary(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex_lower(va_list args);
int print_hex_upper(va_list args);
int print_unsigned_base(unsigned int n, unsigned int base, char *symbols);
int (*get_specifier(char c))(va_list);

#endif
