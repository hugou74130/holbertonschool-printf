#include "main.h"

int print_unsigned_base(unsigned n, unsigned int base, char *symbols)
{
	int count = 0;
	if (n / base != 0)
		count += print_unsigned_base(n / base, base, symbols);
	_putchar(symbols[n % base]);
	count++;
	return (count);
}
