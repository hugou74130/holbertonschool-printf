#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * main - Entry point to test _printf with Edge Cases
 *
 * Return: Always 0
 */
int main(void)
{
 int len_std, len_user;

 printf("==================== TASKS 0 & 1 ====================\n");

 /* --- 1. Char --- */
 printf("--- 1. Char ---\n");
 len_std = printf("Standard : [%c]\n", 'H');
 len_user = _printf("User     : [%c]\n", 'H');
 printf("Length   -> Std: %d, User: %d\n\n", len_std, len_user);

 /* --- 2. String --- */
 printf("--- 2. String ---\n");
 len_std = printf("Standard : [%s]\n", "Holberton");
 len_user = _printf("User     : [%s]\n", "Holberton");
 printf("Length   -> Std: %d, User: %d\n\n", len_std, len_user);

 /* --- 3. Percent --- */
 printf("--- 3. Percent ---\n");
 len_std = printf("Standard : [%%]\n");
 len_user = _printf("User     : [%%]\n");
 printf("Length   -> Std: %d, User: %d\n\n", len_std, len_user);

 /* --- 4. Integers --- */
 printf("--- 4. Integers ---\n");
 len_std = printf("Standard : [%d] [%i]\n", -1024, 42);
 len_user = _printf("User     : [%d] [%i]\n", -1024, 42);
 printf("Length   -> Std: %d, User: %d\n\n", len_std, len_user);

 printf("==================== EDGE CASES (CRASH TEST) ====================\n");

 /* * NOTE: Pour certains tests ci-dessous, le printf standard crashe (Segfault).
		* Nous testons donc UNIQUEMENT _printf pour vérifier la valeur de retour (-1).
		*/

 /* --- 5. Format NULL --- */
 printf("--- 5. Format is NULL ---\n");
 /* printf(NULL); -> CAUSE UN SEGFAULT CHEZ STANDARD, ON NE LE LANCE PAS */
 printf("Standard : [CRASH - SKIPPED]\n");
 len_user = _printf(NULL);
 printf("User     : Resultat (doit etre -1) -> %d\n\n", len_user);

 /* --- 6. Chaîne vide --- */
 printf("--- 6. Empty String ---\n");
 len_std = printf("");
 len_user = _printf("");
 printf("\nLength   -> Std: %d, User: %d\n\n", len_std, len_user);

 /* --- 7. Pourcentage seul en fin --- */
 printf("--- 7. Percent at end ---\n");
 /* printf("Bonjour %"); -> COMPORTEMENT INDÉFINI (Souvent erreur), ON SKIP */
 printf("Standard : [UNDEFINED - SKIPPED]\n");
 len_user = _printf("Bonjour %");
 printf("User     : Resultat (doit etre -1) -> %d\n\n", len_user);

 /* --- 8. Spécificateur Inconnu --- */
 printf("--- 8. Unknown Specifier (%k) ---\n");
 len_std = printf("Standard : [%k]\n");
 len_user = _printf("User     : [%k]\n");
 printf("Length   -> Std: %d, User: %d\n\n", len_std, len_user);

 /* --- 9. NULL String Argument --- */
 printf("--- 9. NULL String Argument ---\n");
 len_std = printf("Standard : [%s]\n", (char *)NULL);
 len_user = _printf("User     : [%s]\n", (char *)NULL);
 printf("Length   -> Std: %d, User: %d\n\n", len_std, len_user);

 /* * NOTE SUR LE MANQUE D'ARGUMENT : _printf("Test %s");
		* Ce test ne peut pas être écrit ici car le compilateur avec les flags -Werror
		* refusera de compiler. C'est un comportement indéfini.
		* Si vous voulez le tester, faites-le temporairement en retirant les flags.
		*/

 return (0);
}
