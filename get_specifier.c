#include "main.h"

int (*get_specifier(char c))(va_list)
{
	specifier_t specifiers[] = {
		{'d', print_int},
		{'i', print_int},
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_hex_lower},
		{'X', print_hex_upper},
		{'\0', NULL},

	};
	int i = 0;
	while (specifiers[i].c != '\0')
	{
		if (specifiers[i].c == c)
			return (specifiers[i].func);
		i++;
	}
	return (NULL);
}
