#include "main.h"

/**
 * _printf - Function to reproduce the functionality of the standard printf,
 * supporting a limited set of format specifiers.
 *
 * @format: Constant character string containing the format to print.
 * May include conversion specifiers (e.g., %c, %s, %d).
 * @...:    Variable list of arguments (var_args) corresponding to the format
 * specifiers present in the 'format' string.
 *
 * Return: The total number of characters printed (count).
 * Returns -1 on error (if 'format' is NULL or if '%' is
 * the last character of the 'format' string without a specifier).
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int count = 0;
	int (*func)(va_list) = NULL;

	if (format == NULL)
		return (-1);
	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				va_end(args);
				return (-1);
			}
			func = get_specifier(format[i]);
			if (func)
				count += func(args);
			else
			{
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
