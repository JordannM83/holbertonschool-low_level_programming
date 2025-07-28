# 0x02. C - Functions, nested loops

Ce projet introduit les fonctions en C et les boucles imbriquées.

## Objectifs d'apprentissage

- Que sont les boucles imbriquées et comment les utiliser
- Qu'est-ce qu'une fonction et comment l'utiliser
- Quelle est la différence entre une déclaration et une définition d'une fonction
- Qu'est-ce qu'un prototype
- Scope des variables
- Que sont les flags gcc `-Wall -Werror -pedantic -Wextra -std=gnu89`
- Que sont les fichiers d'en-tête et comment les utiliser avec `#include`

## Fichiers

### 0. _putchar
**Fichier :** `0-putchar.c`

Programme qui affiche `_putchar`, suivi d'une nouvelle ligne.

### 1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
**Fichier :** `1-alphabet.c`

Fonction qui affiche l'alphabet, en minuscules, suivi d'une nouvelle ligne.
- Prototype : `void print_alphabet(void);`

### 2. 10 x alphabet
**Fichier :** `2-print_alphabet_x10.c`

Fonction qui affiche 10 fois l'alphabet, en minuscules, suivi d'une nouvelle ligne.
- Prototype : `void print_alphabet_x10(void);`

### 3. islower
**Fichier :** `3-islower.c`

Fonction qui vérifie si un caractère est en minuscule.
- Prototype : `int _islower(int c);`
- Retourne 1 si `c` est en minuscule, 0 sinon

### 4. isalpha
**Fichier :** `4-isalpha.c`

Fonction qui vérifie si un caractère est alphabétique.
- Prototype : `int _isalpha(int c);`
- Retourne 1 si `c` est une lettre, minuscule ou majuscule, 0 sinon

### 5. Sign
**Fichier :** `5-sign.c`

Fonction qui affiche le signe d'un nombre.
- Prototype : `int print_sign(int n);`
- Retourne 1 et affiche `+` si n est supérieur à zéro
- Retourne 0 et affiche `0` si n est zéro
- Retourne -1 et affiche `-` si n est inférieur à zéro

### 6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you
**Fichier :** `6-abs.c`

Fonction qui calcule la valeur absolue d'un entier.
- Prototype : `int _abs(int);`

### 7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important
**Fichier :** `7-print_last_digit.c`

Fonction qui affiche le dernier chiffre d'un nombre.
- Prototype : `int print_last_digit(int);`

### 8. I'm federal agent Jack Bauer, and today is the longest day of my life
**Fichier :** `8-24_hours.c`

Fonction qui affiche chaque minute d'une journée de Jack Bauer, en commençant par 00:00 à 23:59.
- Prototype : `void jack_bauer(void);`

### 9. Learn your times table
**Fichier :** `9-times_table.c`

Fonction qui affiche la table de multiplication de 9, en commençant par 0.
- Prototype : `void times_table(void);`

### 10. a + b
**Fichier :** `10-add.c`

Fonction qui additionne deux entiers et retourne le résultat.
- Prototype : `int add(int, int);`

### 11. 98 Battery Street, the OG
**Fichier :** `11-print_to_98.c`

Fonction qui affiche tous les nombres naturels de n à 98, suivis d'une nouvelle ligne.
- Prototype : `void print_to_98(int n);`

## Fichiers d'en-tête

### main.h
Contient tous les prototypes de fonctions utilisées dans ce projet.

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

## Auteur

Projet réalisé dans le cadre de la formation Holberton School.
