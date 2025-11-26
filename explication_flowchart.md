
C'est parti. Pour réussir ta Manual Review, tu ne dois pas seulement lire le schéma, tu dois raconter "l'histoire de la donnée" à travers ton programme.

Voici un script structuré que tu peux suivre ou adapter pour présenter ton flowchart à tes pairs.

Introduction
"Voici le flowchart de la fonction principale _printf. Son rôle est de recevoir une chaîne de format et des arguments variables, de les traiter, et de retourner le nombre total de caractères imprimés."

Étape 1 : Entrée et Sécurité (Haut du schéma)
"Tout commence au bloc Start.

Input : Je récupère la chaîne format et les arguments variables args.

Sécurité (Decision) : La première action est critique : je vérifie si format est NULL.

Si Oui : Le programme s'arrête immédiatement et retourne -1 (branche de droite), car on ne peut rien traiter.

Si Non : On continue."

Étape 2 : Initialisation (Le bloc rouge)
"J'initialise la liste d'arguments avec va_start pour pouvoir lire les paramètres variables. J'initialise aussi mes compteurs : i pour parcourir la chaîne et count pour le résultat final."

Étape 3 : La Boucle Principale (Le cœur du programme)
"Je rentre dans une boucle qui tourne tant que je n'ai pas atteint la fin de la chaîne (\0). À chaque tour, je regarde le caractère actuel format[i] :

Cas 1 : Ce n'est pas un '%' (Branche de droite) C'est un caractère normal. Je l'imprime simplement (_putchar), j'incrémente mon compteur total, j'avance i, et je boucle."

Étape 4 : La Gestion du '%' (Branche de gauche)
"Si je rencontre un %, on rentre dans la logique de formatage :

Avancer : Je fais i++ tout de suite pour inspecter le caractère après le %.

Edge Case (Le piège) : Je vérifie immédiatement si la chaîne s'arrête là (ex: "Hello %").

Si c'est la fin (\0), c'est une erreur de syntaxe. Je nettoie la mémoire (va_end) et je retourne -1."

Étape 5 : Le Parser et l'Exécution (Bas gauche)
"Si la chaîne continue, j'appelle ma fonction get_specifier avec le caractère actuel. Elle me renvoie un pointeur vers la bonne fonction d'impression.

Cas A : Fonction trouvée (Specifier valide, ex: %s, %d)

J'appelle cette fonction en lui passant les arguments.

Elle imprime et me renvoie sa propre longueur que j'ajoute à count.

J'incrémente i (pour ne pas réimprimer le 's' ou le 'd') et je retourne au début de la boucle.

Cas B : Fonction NULL (Specifier inconnu, ex: %k)

Ici, je considère que le % n'était pas spécial.

J'imprime manuellement le % puis le caractère inconnu (format[i]).

J'ajoute 2 au count.

Important : Je remonte dans la boucle pour continuer l'analyse du reste de la phrase (c'est la correction que nous venons de faire)."

Étape 6 : Fin du programme (Bas droite)
"Une fois que la boucle rencontre le caractère de fin \0 :

Je ferme proprement ma liste d'arguments avec va_end.

Je retourne la valeur finale de count."

💡 Questions probables de tes reviewers (Prépare-toi !)
Reviewer : "Pourquoi tu retournes -1 si le format est NULL ?"

Toi : "C'est le comportement standard de la fonction printf. Elle doit signaler une erreur."

Reviewer : "Pourquoi tu fais i++ deux fois dans la branche de gauche (une fois après le %, une fois après l'exécution) ?"

Toi : "Le premier i++ sert à sauter le symbole %. Le deuxième sert à sauter le caractère spécificateur (le 'd' de '%d') pour qu'il ne soit pas imprimé comme un caractère normal au prochain tour de boucle."

Reviewer : "Pourquoi avoir séparé get_specifier ?"

Toi : "Pour respecter la règle de Betty (pas plus de 40 lignes par fonction) et pour rendre le code modulaire. Si je veux ajouter %b (binaire) demain, je touche juste à get_specifier, pas à la boucle principale."
