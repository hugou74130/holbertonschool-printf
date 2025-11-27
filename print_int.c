#include "main.h"

/**
 * print_int - Print a signed integer using _putchar
 * @args: va_list containing the integer to print
 *
 * Return: Number of characters printed
 */

int print_int(va_list args)
{
	int n;
	int count = 0;
	int divisor = 1;

	n = va_arg(args, int);

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}
	while (n / divisor > 9)
		divisor *= 10;

	while (divisor > 0)
	{
		_putchar((n / divisor) + '0');
		count++;
		n %= divisor;
		divisor /= 10;
	}

	return (count);
}
