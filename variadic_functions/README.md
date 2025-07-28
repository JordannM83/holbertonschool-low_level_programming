# 0x10. C - Variadic functions

Ce projet explore les fonctions à nombre variable d'arguments en C.

## Objectifs d'apprentissage

- Que sont les fonctions variadiques
- Comment utiliser les macros `va_start`, `va_arg` et `va_end`
- Pourquoi et comment utiliser l'attribut `const`

## Fichiers

### 0. Beauty is variable, ugliness is constant
**Fichier :** `0-sum_them_all.c`

Fonction qui retourne la somme de tous ses paramètres.
- Prototype : `int sum_them_all(const unsigned int n, ...);`
- Si n == 0, retourne 0

### 1. To be is to be the value of a variable
**Fichier :** `1-print_numbers.c`

Fonction qui affiche des nombres, suivis d'une nouvelle ligne.
- Prototype : `void print_numbers(const char *separator, const unsigned int n, ...);`
- Où separator est la chaîne à afficher entre les nombres
- et n est le nombre d'entiers passés à la fonction
- Vous êtes autorisé à utiliser printf
- Si separator est NULL, ne l'affichez pas
- Affichez une nouvelle ligne à la fin de votre fonction

### 2. One woman's constant is another woman's variable
**Fichier :** `2-print_strings.c`

Fonction qui affiche des chaînes, suivies d'une nouvelle ligne.
- Prototype : `void print_strings(const char *separator, const unsigned int n, ...);`
- Où separator est la chaîne à afficher entre les chaînes
- et n est le nombre de chaînes passées à la fonction
- Vous êtes autorisé à utiliser printf
- Si separator est NULL, ne l'affichez pas
- Si l'une des chaînes est NULL, affichez (nil) à la place
- Affichez une nouvelle ligne à la fin de votre fonction

### 3. To be is a to be the value of a variable
**Fichier :** `3-print_all.c`

Fonction qui affiche n'importe quoi.
- Prototype : `void print_all(const char * const format, ...);`
- où format est une liste des types d'arguments passés à la fonction
  - c: char
  - i: integer
  - f: float
  - s: char * (si la chaîne est NULL, affichez (nil) à la place)
  - tout autre caractère doit être ignoré
- Vous n'êtes pas autorisé à utiliser for, goto, opérateur ternaire, else, do ... while
- Vous pouvez utiliser un maximum de
  - 2 boucles while
  - 2 if
- Vous pouvez déclarer un maximum de 9 variables
- Vous êtes autorisé à utiliser printf
- Affichez une nouvelle ligne à la fin de votre fonction

**Contraintes strictes pour le fichier 3 :**
- Maximum 2 `while` loops
- Maximum 2 `if` statements
- Maximum 9 variables
- Pas de `for`, `goto`, opérateur ternaire, `else`, `do...while`

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

## Exemple d'utilisation

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-print_all.c -o d
$ ./d 
B, 3, stSchool
```

## Auteur

Projet réalisé dans le cadre de la formation Holberton School.