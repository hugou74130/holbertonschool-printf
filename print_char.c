#include "main.h"

/**
 * print_char - print a character
 * @args: va_list containing the character to print
 *
 * Return: number of characters printed (1)
 */

int print_char(va_list args)
{
 char c;
 c = va_arg(args, int);

 if (write(1, &c, 1) == -1)
		return (-1);

 return (1);
}
