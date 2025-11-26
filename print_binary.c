#include "main.h"
/**
 * print_int - Print a signed integer using _putchar
 * @args: va_list containing the integer to print
 *
 * Return: Number of characters printed
 */

int print_binary(va_list args)
{
	unsigned int n;
	int count = 0;
	unsigned int power = 1;

	n = va_arg(args, unsigned int);

	while (n / (power * 2) > 0)
		power *= 2;

	while (power > 0)
	{
		_putchar(((n / power) % 2) + '0');
		count++;

		power /= 2;
	}

	return (count);
}
