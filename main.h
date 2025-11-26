#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

typedef struct specifier
{
	char c;
	int (*func)(va_list);

} specifier_t;

int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int _putchar(char c);
int print_binary(va_list args);
int (*get_specifier(char c))(va_list);

#endif
