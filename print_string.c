#include "main.h"
#include <stdarg.h>

int print_string(va_list args)
{
	char *str;	   /* déclare un pointeur de caractères */
	int count = 0; /* déclare et initialise count à 0 */

	str = va_arg(args, char *); /* extrait la chaîne des arguments */
	if (str == NULL)			/* vérifie si str est NULL */
		str = "(null)";			/* si oui, affiche "(null)" */

	while (*str) /* boucle tant qu'il y a des caractères */
	{
		_putchar(*str); /* affiche le caractère pointé */
		count++;		/* incrémente le compteur */
		str++;			/* passe au caractère suivant */
	}
	return (count); /* retourne le nombre de caractères affichés */
}
