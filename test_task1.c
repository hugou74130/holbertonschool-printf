#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * main - Entry point to test _printf
 *
 * Return: Always 0
 */
int main(void)
{
 int len_std, len_user;

 printf("========== TEST TACHE 0 ==========\n");

 /* 1. Test Char (%c) */
 printf("--- 1. Char ---\n");
 len_std = printf("Standard : [%c]\n", 'H');
 len_user = _printf("User     : [%c]\n", 'H');
 printf("Length   -> Std: %d, User: %d\n\n", len_std, len_user);

 /* 2. Test String (%s) */
 printf("--- 2. String ---\n");
 len_std = printf("Standard : [%s]\n", "Holberton");
 len_user = _printf("User     : [%s]\n", "Holberton");
 printf("Length   -> Std: %d, User: %d\n\n", len_std, len_user);

 /* 3. Test String NULL (%s) */
 printf("--- 3. String NULL ---\n");
 /* Note : Le printf standard peut crasher sur certains OS avec NULL,
				mais sur Linux il imprime souvent (null). Ton _printf DOIT gérer ça. */
 len_std = printf("Standard : [%s]\n", (char *)NULL);
 len_user = _printf("User     : [%s]\n", (char *)NULL);
 printf("Length   -> Std: %d, User: %d\n\n", len_std, len_user);

 /* 4. Test Percent (%%) */
 printf("--- 4. Percent ---\n");
 len_std = printf("Standard : [%%]\n");
 len_user = _printf("User     : [%%]\n");
 printf("Length   -> Std: %d, User: %d\n\n", len_std, len_user);

 /* 5. Texte simple */
 printf("--- 5. Texte Simple ---\n");
 len_std = printf("Bonjour le monde\n");
 len_user = _printf("Bonjour le monde\n");
 printf("Length   -> Std: %d, User: %d\n\n", len_std, len_user);

 printf("========== TEST TACHE 1 ==========\n");

 /* 6. Entiers Positifs (%d, %i) */
 printf("--- 6. Integers Positive ---\n");
 len_std = printf("Standard : [%d] [%i]\n", 1024, 42);
 len_user = _printf("User     : [%d] [%i]\n", 1024, 42);
 printf("Length   -> Std: %d, User: %d\n\n", len_std, len_user);

 /* 7. Entiers Négatifs */
 printf("--- 7. Integers Negative ---\n");
 len_std = printf("Standard : [%d]\n", -1024);
 len_user = _printf("User     : [%d]\n", -1024);
 printf("Length   -> Std: %d, User: %d\n\n", len_std, len_user);

 /* 8. Zéro */
 printf("--- 8. Zero ---\n");
 len_std = printf("Standard : [%d]\n", 0);
 len_user = _printf("User     : [%d]\n", 0);
 printf("Length   -> Std: %d, User: %d\n\n", len_std, len_user);

 /* 9. Min / Max Values (Le Crash Test) */
 printf("--- 9. INT_MIN / INT_MAX ---\n");
 len_std = printf("Standard : [%d] [%d]\n", INT_MIN, INT_MAX);
 len_user = _printf("User     : [%d] [%d]\n", INT_MIN, INT_MAX);
 printf("Length   -> Std: %d, User: %d\n\n", len_std, len_user);

 return (0);
}
