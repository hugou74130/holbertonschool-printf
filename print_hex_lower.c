#include "main.h"

int print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char *symbols = "01234567abcdef";
	return (print_unsigned_base(n, 16, symbols));
}
