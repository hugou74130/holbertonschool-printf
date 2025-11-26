#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int count = 0;
	int (*func)(va_list);

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
