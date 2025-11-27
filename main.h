#ifndef MAIN_H
#define MAIN_H

/**
 * MAIN_H - Header guard to prevent double inclusion of the header file.
 * This file contains definitions, structures, and function prototypes
 * used across the entire _printf project.
 */

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

/**
 * struct specifier - Defines a structure for mapping format specifiers
 * to their corresponding printing functions.
 * @c: The format specifier character (e.g., 'c', 's', 'd').
 * @func: A function pointer to the printing function that handles the specifier.
 */

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
int (*get_specifier(char c))(va_list);
#endif
