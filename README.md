<p align="center">
  <a href="https://github.com/hugou74130/holbertonschool-printf" rel="noopener">
    <img width=400px height=400px src="https://image.noelshack.com/fichiers/2025/48/2/1764078468-ok.jpg" alt="Project logo">
  </a>
</p>

<h3 align="center">Holbertonschool Printf</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]()
[![GitHub Issues](https://img.shields.io/github/issues/hugou74130/holbertonschool-printf.svg)](https://github.com/hugou74130/holbertonschool-printf/issues)
[![GitHub Pull Requests](https://img.shields.io/github/issues-pr/hugou74130/holbertonschool-printf.svg)](https://github.com/hugou74130/holbertonschool-printf/pulls)
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](/LICENSE)

</div>

---

<p align="center">
Implémentation personnalisée et complète de la fonction printf en C.
<br>
</p>

## 📝 Table of Contents

- [About](#about)
- [Project Description](#project_description)
- [Features](#features)
- [File Structure](#file_structure)
- [Getting Started](#getting_started)
- [Compilation](#compilation)
- [Running the tests](#tests)
- [Usage](#usage)
- [Supported Specifiers](#specifiers)
- [Code Examples](#examples)
- [Built Using](#built_using)
- [Authors](#authors)
- [Acknowledgments](#acknowledgement)

## 🧐 About <a name = "about"></a>

Ce projet est une implémentation complète de la fonction `_printf` en langage C. L'objectif principal est de reproduire le comportement de la fonction printf standard de la librairie C, en gérant les différents spécificateurs de format de conversion.

Cette implémentation a été développée dans le cadre de la formation Holbertonschool et démontre une compréhension approfondie de concepts avancés en C, notamment :
- La gestion des arguments variables (`va_list`, `va_arg`)
- La manipulation de pointeurs de fonctions
- L'utilisation de structures et tableaux
- La gestion des chaînes de caractères
- Les appels système (`write`)

## 📖 Project Description <a name = "project_description"></a>

Le projet `_printf` demande de créer une fonction qui produit une sortie formatée selon une chaîne de format, similaire à la fonction standard `printf` de la librairie C.

### Objectifs du projet :
- Implémenter une fonction variadic `_printf`
- Gérer plusieurs spécificateurs de conversion
- Compter et retourner le nombre de caractères affichés
- Écrire la sortie sur stdout (flux de sortie standard)
- Respecter les normes de codage de Holbertonschool (Betty)

### Contraintes :
- Ne pas reproduire la gestion du buffer de printf
- Ne pas gérer les caractères de drapeau (flags)
- Ne pas gérer la largeur du champ (field width)
- Ne pas gérer la précision
- Ne pas gérer les modificateurs de longueur

## ✨ Features <a name = "features"></a>

### Spécificateurs de conversion supportés :
- **`%c`** - Affiche un caractère unique
- **`%s`** - Affiche une chaîne de caractères (gère NULL)
- **`%d`** - Affiche un entier signé en décimal
- **`%i`** - Affiche un entier signé en décimal (identique à %d)
- **`%%`** - Affiche le caractère pourcentage (%)

### Fonctionnalités principales :
- Gestion des arguments variables
- Comptage exact des caractères affichés
- Gestion des cas NULL pour les chaînes
- Gestion des nombres négatifs
- Sortie directe vers stdout
- Retour du nombre de caractères imprimés

## 📁 File Structure <a name = "file_structure"></a>

```
holbertonschool-printf/
│
├── _printf.c              # Fonction principale (variadic)
├── _putchar.c             # Fonction pour afficher un caractère
├── main.h                 # Fichier d'en-tête avec déclarations
├── get_specifier.c        # Fonction pour récupérer le bon spécificateur
│
├── print_char.c           # Affiche un caractère (%c)
├── print_string.c         # Affiche une chaîne (%s)
├── print_int.c            # Affiche un entier (%d, %i)
├── print_percent.c        # Affiche un pourcentage (%%)
│
├── test/                  # Dossier contenant les tests
│   └── test_main.c        # Fichier de test principal
│
├── README.md              # Ce fichier
└── .gitignore             # Fichiers à ignorer par git
```

## 🏁 Getting Started <a name = "getting_started"></a>

Ces instructions vous permettront d'obtenir une copie du projet en cours d'exécution sur votre machine locale pour développement et tests.

### Prerequisites

Ce que vous devez installer pour faire fonctionner le logiciel :

```
gcc (GNU Compiler Collection) - Compilateur C
make - Outil de construction (optionnel)
git - Système de contrôle de version
```

### Vérification des prérequis :

```bash
gcc --version     # Vérifie que gcc est installé
git --version     # Vérifie que git est installé
```

### Installing

Étapes pour installer et configurer l'environnement de développement :

**Étape 1 : Clonez le dépôt**

```bash
git clone https://github.com/hugou74130/holbertonschool-printf.git
cd holbertonschool-printf
```

**Étape 2 : Vérifiez la structure du projet**

```bash
ls -la
```

Vous devriez voir tous les fichiers `.c` et le fichier `main.h`.

## 🔨 Compilation <a name = "compilation"></a>

### Compilation simple avec gcc :

```bash
gcc -Wall -Wextra -Werror -pedantic *.c -o printf_test
```

**Explication des flags :**
- `-Wall` : Active tous les avertissements standards
- `-Wextra` : Active les avertissements supplémentaires
- `-Werror` : Traite les avertissements comme des erreurs
- `-pedantic` : Force le respect strict de la norme C

### Compilation avec fichiers objets :

```bash
gcc -c *.c              # Compile tous les fichiers en .o
gcc *.o -o printf_test  # Lie les objets
```

### Compilation d'un seul fichier avec la bibliothèque :

```bash
gcc -c _printf.c _putchar.c print_char.c print_string.c print_int.c print_percent.c get_specifier.c
gcc main.c *.o -o program
```

## 🔧 Running the tests <a name = "tests"></a>

### Vérifier la compilation :

```bash
gcc -c *.c
```

Cela devrait créer des fichiers `.o` sans erreur.

### Exécuter les tests :

```bash
./printf_test
```

### Tests manuels :

Créez un fichier `test.c` :

```c
#include "main.h"
#include <stdio.h>

int main(void)
{
	int result;

	result = _printf("Test: %d\n", 42);
	printf("Caractères affichés: %d\n", result);

	result = _printf("Chaîne: %s\n", "Hello");
	printf("Caractères affichés: %d\n", result);

	result = _printf("Char: %c\n", 'A');
	printf("Caractères affichés: %d\n", result);

	result = _printf("Percent: 50%%\n");
	printf("Caractères affichés: %d\n", result);

	return (0);
}
```

Compilez et exécutez :

```bash
gcc test.c _printf.c _putchar.c print_char.c print_string.c print_int.c print_percent.c get_specifier.c -o test
./test
```

## 🎈 Usage <a name="usage"></a>

### Utilisation basique :

Pour utiliser cette implémentation de printf dans votre code :

```c
#include "main.h"

int main(void)
{
	int chars_printed;

	/* Afficher une chaîne simple */
	chars_printed = _printf("Hello, World!\n");

	/* Afficher avec des spécificateurs */
	chars_printed = _printf("Name: %s\n", "Alice");
	chars_printed = _printf("Age: %d\n", 25);
	chars_printed = _printf("Grade: %c\n", 'A');

	/* Combiner plusieurs spécificateurs */
	chars_printed = _printf("%s is %d years old and got an %c\n", "Bob", 30, 'B');

	return (0);
}
```

### Compilation du programme :

```bash
gcc main.c _printf.c _putchar.c print_char.c print_string.c print_int.c print_percent.c get_specifier.c -o program
./program
```

## 🎯 Supported Specifiers <a name = "specifiers"></a>

| Spécificateur | Description | Exemple | Sortie |
|---|---|---|---|
| `%c` | Caractère | `_printf("%c", 'A')` | `A` |
| `%s` | Chaîne | `_printf("%s", "Hello")` | `Hello` |
| `%d` | Entier signé | `_printf("%d", 42)` | `42` |
| `%i` | Entier signé | `_printf("%i", -15)` | `-15` |
| `%%` | Pourcentage | `_printf("50%%")` | `50%` |

## 💻 Code Examples <a name = "examples"></a>

### Exemple 1 : Afficher un caractère

```c
_printf("Character: %c\n", 'X');
/* Sortie : Character: X */
```

### Exemple 2 : Afficher une chaîne

```c
_printf("Welcome, %s!\n", "Developer");
/* Sortie : Welcome, Developer! */
```

### Exemple 3 : Afficher des entiers

```c
_printf("Positive: %d, Negative: %d\n", 100, -50);
/* Sortie : Positive: 100, Negative: -50 */
```

### Exemple 4 : Combiner plusieurs formats

```c
_printf("%s scored %d points with grade %c (%.1f%%)\n", "John", 95, 'A');
```

### Exemple 5 : Afficher des pourcentages

```c
_printf("Progress: 75%%\n");
/* Sortie : Progress: 75% */
```

### Exemple 6 : Gérer les valeurs NULL

```c
_printf("String: %s\n", NULL);
/* Sortie : String: (null) */
```

## ⛏️ Built Using <a name = "built_using"></a>

- [C](https://en.wikipedia.org/wiki/C_(programming_language)) - Langage de programmation
- [GCC](https://gcc.gnu.org/) - Compilateur C GNU
- [Git](https://git-scm.com/) - Système de contrôle de version
- [Linux/Unix](https://www.linux.org/) - Système d'exploitation
- [Vim/Nano](https://www.vim.org/) - Éditeur de texte

## ✍️ Authors <a name = "authors"></a>

- [@hugou74130](https://github.com/hugou74130) - Développement complet de la fonction _printf, architecture du projet, gestion des spécificateurs et des arguments variables

- [@SaraEstelle](https://github.com/SaraEstelle) - Développement complet de la fonction _printf, architecture du projet, gestion des spécificateurs et des arguments variables

Voir également la liste complète des [contributeurs](https://github.com/hugou74130/holbertonschool-printf/contributors) qui ont participé à ce projet.

## 🎉 Acknowledgements <a name = "acknowledgement"></a>

- **Holbertonschool** pour l'encadrement, les ressources pédagogiques et l'environnement d'apprentissage
- **La fonction printf standard du C** comme source d'inspiration
- **La communauté des développeurs C** pour les meilleures pratiques et conseils
- Merci à tous les contributeurs, collaborateurs et testeurs
- Inspiration du projet original de Holbertonschool

## 📞 Support

Si vous avez des questions ou des problèmes, n'hésitez pas à :
- Ouvrir une [issue](https://github.com/hugou74130/holbertonschool-printf/issues)
- Consulter la documentation officielle de [printf](https://man7.org/linux/man-pages/man3/printf.3.html)
- Contacter les auteurs

---

**Dernière mise à jour :** Novembre 2025
**Statut :** Actif et en maintenance
