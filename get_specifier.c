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
