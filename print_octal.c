#include "main.h"

int print_octal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char *symbols = "01234567";
	return (print_unsigned_base(n, 8, symbols));
}
