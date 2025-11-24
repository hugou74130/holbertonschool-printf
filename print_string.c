#include "main.h"
#include <stdarg.h>

/**
 * print_string - Print a string
 * @args: va_list containing the string to print
 *
 * Return: Number of characters printed
 */
int print_string(va_list args)
{
 char *str;					/* declare a pointer to characters */
 int count = 0; /* declare and initialize count to 0 */

 /* extract the string argument from the va_list */
 str = va_arg(args, char *);

 if (str == NULL) /*  check if str is NULL */
		str = "(null)"; /* if yes, set str to "(null)" */

 /* loop through the string until the null terminator */
 while (*str)
 {
		_putchar(*str); /* print the current character */
		count++;								/* increment the counter */
		str++;										/* move to the next character */
 }
 return (count); /* return the total number of characters printed */
}

