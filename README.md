<p align="center">
  <a href="https://github.com/hugou74130/holbertonschool-printf" rel="noopener">
    <img width=600px height=600px src="https://image.noelshack.com/fichiers/2025/48/2/1764059618-giphy.gif" alt="Project logo">
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
Implémentation personnalisée de la fonction printf en C.
<br>
</p>

## 📝 Table of Contents

- [About](#about)
- [Getting Started](#getting_started)
- [Deployment](#deployment)
- [Usage](#usage)
- [Built Using](#built_using)
- [TODO](../TODO.md)
- [Contributing](../CONTRIBUTING.md)
- [Authors](#authors)
- [Acknowledgments](#acknowledgement)

## 🧐 About <a name = "about"></a>

Ce projet est une implémentation complète de la fonction printf en langage C. L'objectif est de reproduire le comportement de la fonction printf standard de la librairie C, en gérant les différents formats de conversion et les modificateurs associés.

Ce projet a été réalisé dans le cadre de la formation Holbertonschool et démontre une compréhension approfondie de la programmation en C, de la gestion de la mémoire et de la manipulation de chaînes de caractères.

## 🏁 Getting Started <a name = "getting_started"></a>

Ces instructions vous permettront d'obtenir une copie du projet en cours d'exécution sur votre machine locale pour développement et tests. Consultez [deployment](#deployment) pour les notes sur la façon de déployer le projet sur un système en direct.

### Prerequisites

Ce qui vous devez installer pour faire fonctionner le logiciel:

```
gcc (GNU Compiler Collection)
make
git
```

### Installing

Étapes pour installer et configurer l'environnement de développement:

Clonez le dépôt:

```
git clone https://github.com/hugou74130/holbertonschool-printf.git
cd holbertonschool-printf
```

Compilez le projet:

```
make
```

Testez la compilation:

```
gcc -c *.c
```

## 🔧 Running the tests <a name = "tests"></a>

Expliquez comment exécuter les tests automatisés pour ce système.

### End to end tests

Tests d'intégration pour vérifier le comportement complet de la fonction printf avec différents formats:

```
./printf_test
```

### Coding style tests

Tests pour vérifier la conformité du code aux normes de style (betty):

```
betty *.c
```

## 🎈 Usage <a name="usage"></a>

Pour utiliser cette implémentation de printf dans votre code:

```c
#include "main.h"

int main(void)
{
    _printf("Hello, %s!\n", "World");
    _printf("Number: %d\n", 42);
    return (0);
}
```

Compilez avec:

```
gcc main.c _printf.c -o program
./program
```

## 🚀 Deployment <a name = "deployment"></a>

Pour déployer ce projet sur un système en direct, assurez-vous que gcc est installé et que vous avez accès au dépôt. Clonez le projet et compilez-le en utilisant les instructions ci-dessus.

## ⛏️ Built Using <a name = "built_using"></a>

- [C](https://en.wikipedia.org/wiki/C_(programming_language)) - Language
- [GCC](https://gcc.gnu.org/) - Compiler
- [Make](https://www.gnu.org/software/make/) - Build Tool
- [Git](https://git-scm.com/) - Version Control

## ✍️ Authors <a name = "authors"></a>

- [@hugou74130](https://github.com/hugou74130) - Développement complet de la fonction printf, gestion des formats et conversions
- [@SaraEstelle](https://github.com/SaraEstelle) - Développement complet de la fonction printf, gestion des formats et conversions

Voir également la liste des [contributeurs](https://github.com/hugou74130/holbertonschool-printf/contributors) qui ont participé à ce projet.

## 🎉 Acknowledgements <a name = "acknowledgement"></a>

- Holbertonschool pour l'encadrement et les ressources
- Inspiration de la fonction printf standard du C
- Merci à tous les contributeurs et collaborateurs
