# 0x04. C - More functions, more nested loops

Ce projet approfondit les concepts de fonctions et de boucles imbriquées en C.

## Objectifs d'apprentissage

- Que sont les boucles imbriquées et comment les utiliser
- Qu'est-ce qu'une fonction et comment l'utiliser
- Quelle est la différence entre une déclaration et une définition d'une fonction
- Qu'est-ce qu'un prototype
- Scope des variables
- Que sont les flags gcc `-Wall -Werror -pedantic -Wextra -std=gnu89`
- Que sont les fichiers d'en-tête et comment les utiliser avec `#include`

## Fichiers

### 0. isupper
**Fichier :** `0-isupper.c`

Fonction qui vérifie si un caractère est en majuscule.
- Prototype : `int _isupper(int c);`

### 1. isdigit
**Fichier :** `1-isdigit.c`

Fonction qui vérifie si un caractère est un chiffre (0 à 9).
- Prototype : `int _isdigit(int c);`

### 2. Collaboration is multiplication
**Fichier :** `2-mul.c`

Fonction qui multiplie deux entiers.
- Prototype : `int mul(int a, int b);`

### 3. The numbers speak for themselves
**Fichier :** `3-print_numbers.c`

Fonction qui affiche les nombres de 0 à 9, suivis d'une nouvelle ligne.
- Prototype : `void print_numbers(void);`

### 4. I believe in numbers and signs
**Fichier :** `4-print_most_numbers.c`

Fonction qui affiche les nombres de 0 à 9, suivis d'une nouvelle ligne.
- N'affiche pas 2 et 4
- Prototype : `void print_most_numbers(void);`

### 5. Numbers constitute the only universal language
**Fichier :** `5-more_numbers.c`

Fonction qui affiche 10 fois les nombres de 0 à 14, suivis d'une nouvelle ligne.
- Prototype : `void more_numbers(void);`

### 6. The shortest distance between two points is a straight line
**Fichier :** `6-print_line.c`

Fonction qui trace une ligne dans le terminal.
- Prototype : `void print_line(int n);`

### 7. I feel like I am diagonally parked in a parallel universe
**Fichier :** `7-print_diagonal.c`

Fonction qui trace une ligne diagonale dans le terminal.
- Prototype : `void print_diagonal(int n);`

### 8. You are so much sunshine in every square inch
**Fichier :** `8-print_square.c`

Fonction qui affiche un carré, suivi d'une nouvelle ligne.
- Prototype : `void print_square(int size);`

### 9. Fizz-Buzz
**Fichier :** `9-fizz_buzz.c`

Programme qui affiche les nombres de 1 à 100, suivis d'une nouvelle ligne. Mais pour les multiples de trois, affiche `Fizz` au lieu du nombre et pour les multiples de cinq affiche `Buzz`. Pour les nombres qui sont des multiples de trois et de cinq, affiche `FizzBuzz`.

### 10. Triangles
**Fichier :** `10-print_triangle.c`

Fonction qui affiche un triangle, suivi d'une nouvelle ligne.
- Prototype : `void print_triangle(int size);`

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

## Auteur

Projet réalisé dans le cadre de la formation Holberton School.
