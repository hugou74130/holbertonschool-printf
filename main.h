#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

int _printf(const char *format, ...);
int print_char(char c);
int print_string(char *s);
int print_percent(void);
int print_int(int n);
int _putchar(char c);
int (*get_specifier(char c))(va_list);

typedef struct specifier
{
	char c;
	int (*func)(va_list);

} specifier_t;

#endif
