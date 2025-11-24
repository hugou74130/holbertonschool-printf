#include "main.h"

int print_int(va_list args)
{
	int n;			 /* déclare la variable n pour stocker l'entier */
	int count = 0;	 /* déclare et initialise count à 0 pour compter les caractères */
	int divisor = 1; /* déclare et initialise divisor à 1 pour extraire les chiffres */

	n = va_arg(args, int); /* extrait l'entier des arguments */
	if (n < 0)			   /* vérifie si le nombre est négatif */
	{
		_putchar('-'); /* affiche le signe moins */
		count++;	   /* incrémente le compteur */
		n = -n;		   /* rend le nombre positif */
	}
	while (n / divisor > 9) /* trouve le divisor approprié (10, 100, 1000...) */
		divisor *= 10;
	while (divisor > 0) /* boucle pour afficher chaque chiffre */
	{
		_putchar((n / divisor) + '0'); /* affiche le chiffre actuel */
		count++;					   /* incrémente le compteur */
		n %= divisor;				   /* enlève le chiffre affiché */
		divisor /= 10;				   /* passe au chiffre suivant */
	}
	return (count); /* retourne le nombre total de caractères affichés */
}
