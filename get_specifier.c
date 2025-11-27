#include "main.h"

/**
 * get_specifier - Cherche la fonction appropriée pour un spécificateur de format donné.
 * @c: Le caractère spécificateur de format (ex: 'd', 'i', 'c', 's', '%').
 *
 * Cette fonction parcourt un tableau de structures pour trouver une correspondance
 * entre le caractère spécificateur de format passé en argument et une fonction
 * d'impression associée (handler).
 *
 * Return: Un pointeur vers la fonction d'impression (handler) qui correspond au
 * spécificateur 'c', ou NULL si aucune correspondance n'est trouvée.
 */

int (*get_specifier(char c))(va_list)
{
	specifier_t specifiers[] = {
		{'d', print_int},
		{'i', print_int},
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
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
