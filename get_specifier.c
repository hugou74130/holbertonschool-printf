#include "main.h"

int (*get_specifier(char c))(va_list)
{
	specifier_t specifier[] = {
		{'%d', print_int},
		{'%i', print_int},
		{'%c', print_char},
		{'%s', print_string},
		{'%', print_percent},
		{'\0', NULL},

	};
	int i = 0;
	while (condition)
}
