#include "main.h"
/**
 * print_int - Print a signed integer using _putchar
 * @args: va_list containing the integer to print
 *
 * Return: Number of characters printed
 */

int print_int(va_list args)
{
 int n;											/* store the integer value */
 int count = 0;			/* count how many characters are printed */
 int divisor = 1; /* extract digits by dividing (1, 10, 100, ...) */

 n = va_arg(args, int); /* get the integer from the variadic arguments */

 if (n < 0) /* if the number is negative */
 {
		_putchar('-'); /* print the minus sign */
		count++;							/* increase the printed characters count */
		n = -n;								/* make the number positive */
 }
 while (n / divisor > 9) /* find the highest power of 10 for the number */
		divisor *= 10;

 while (divisor > 0) /* print digits from most significant to least */
 {
		_putchar((n / divisor) + '0'); /* print current digit as a character */
		count++;																							/* increase the printed characters count */
		n %= divisor;																		/* remove the printed most significant digit */
		divisor /= 10;																	/* move to the next lower digit */
 }

 return (count); /* return total number of printed characters */
}

