#include "main.h"

/**
 * print_char - print a single character
 * @args: va_list containing the character to print
 *
 * Return: number of characters printed (1), or -1 if an error occurs
 */

int print_char(va_list args)
{
	char c;
	int result;
	c = va_arg(args, int);

	result = _putchar(c);

	if (result == -1)
		return (-1);

	return (1);
}
