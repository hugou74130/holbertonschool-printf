#include "main.h"

int print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char *symbols = "0123456789";
	return (print_unsigned_base(n, 10, symbols));
}
