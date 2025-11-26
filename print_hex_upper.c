#include "main.h"

int print_hex_upper(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char *symbols = "01234567ABCDEF";
	return (print_unsigned_base(n, 16, symbols));
}
