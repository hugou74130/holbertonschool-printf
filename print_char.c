#include "main.h"

/**
 * print_char - print a single character
 * @args: va_list containing the character to print
 *
 * Return: number of characters printed (1), or -1 if an error occurs
 */

int print_char(va_list args)
{
 char c; /* variable to store the character extracted from va_list */
 /* extract the next argument as an int, then store it as a char */
 c = va_arg(args, int);
 /* write the character to standard output */
 if (write(1, &c, 1) == -1)
		return (-1); /* return -1 if write fails */

 return (1); /* return 1 since exactly one character was printed */
}
