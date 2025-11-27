#include "main.h"

int print_hex_lower(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char *symbols = "0123456789abcdef";
	return (print_unsigned_base(n, 16, symbols));
}
