#include "main.h"
#include <stdarg.h>

int print_string(va_list args)

{
	int *str;
	int count = 0;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = 'nul';
		while (*str)

			_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
