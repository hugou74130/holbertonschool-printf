#include "main.h"

/**
 * print_percent - Print a percent sign
 * @args: va_list (unused in this function)
 *
 * Return: Number of characters printed (always 1)
 */

int print_percent(va_list args)
{

 (void)args;				/* explicitly mark args as unused to avoid warnings */
 _putchar('%'); /* print the percent sign character */
 return (1);				/* return 1 since exactly one character was printed */
}

