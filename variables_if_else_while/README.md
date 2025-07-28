# 0x01. C - Variables, if, else, while

Ce projet couvre les concepts de base des variables, conditions et boucles en C.

## Objectifs d'apprentissage

- Quels opérateurs arithmétiques et comment les utiliser
- Quels opérateurs logiques (parfois appelés booléens) et comment les utiliser
- Quels sont les opérateurs relationnels et comment les utiliser
- Quelles valeurs sont considérées comme TRUE et FALSE en C
- Quelles sont les règles de priorité pour tous les opérateurs mentionnés ci-dessus
- Comment utiliser les instructions `if`, `if ... else`
- Comment utiliser des commentaires
- Comment déclarer des variables de types `char`, `int`, `unsigned int`
- Comment affecter des valeurs aux variables
- Comment imprimer les valeurs des variables de type `char`, `int`, `unsigned int` avec `printf`
- Comment utiliser la boucle `while`
- Comment utiliser des variables avec la boucle `while`
- Comment imprimer des variables en utilisant `printf`
- Qu'est-ce que le code ASCII et comment l'utiliser
- Quels sont les objectifs du style de codage gcc flags `-m32` et `-m64`

## Fichiers

### 0. Positive anything is better than negative nothing
**Fichier :** `0-positive_or_negative.c`

Programme qui assigne un nombre aléatoire à la variable `n` chaque fois qu'il est exécuté. Le programme affiche si le nombre stocké dans la variable `n` est positif ou négatif.

### 1. The last digit
**Fichier :** `1-last_digit.c`

Programme qui assigne un nombre aléatoire à la variable `n` chaque fois qu'il est exécuté. Le programme affiche le dernier chiffre du nombre stocké dans la variable `n`.

### 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
**Fichier :** `2-print_alphabet.c`

Programme qui affiche l'alphabet en minuscules, suivi d'une nouvelle ligne.

### 3. alphABET
**Fichier :** `3-print_alphabets.c`

Programme qui affiche l'alphabet en minuscules, puis en majuscules, suivi d'une nouvelle ligne.

### 4. When I was having that alphabet soup, I never thought that it would pay off
**Fichier :** `4-print_alphabt.c`

Programme qui affiche l'alphabet en minuscules, suivi d'une nouvelle ligne, à l'exception des lettres `q` et `e`.

### 5. Numbers
**Fichier :** `5-print_numbers.c`

Programme qui affiche tous les chiffres de base 10 à partir de 0, suivi d'une nouvelle ligne.

### 6. Numberz
**Fichier :** `6-print_numberz.c`

Programme qui affiche tous les chiffres de base 10 à partir de 0, suivi d'une nouvelle ligne.
- Vous n'êtes pas autorisé à utiliser de variable de type `char`
- Vous ne pouvez utiliser `putchar` que deux fois dans votre code

### 7. Smile in the mirror
**Fichier :** `7-print_tebahpla.c`

Programme qui affiche l'alphabet en minuscules en ordre inverse, suivi d'une nouvelle ligne.

### 8. Hexadecimal
**Fichier :** `8-print_base16.c`

Programme qui affiche tous les nombres de la base 16 en minuscules, suivi d'une nouvelle ligne.

### 9. Patience, persistence and perspiration make an unbeatable combination for success
**Fichier :** `9-print_comb.c`

Programme qui affiche toutes les combinaisons possibles de chiffres à un seul nombre.
- Les nombres doivent être séparés par `,`, suivi d'un espace
- Les nombres doivent être affichés dans l'ordre croissant
- Vous ne pouvez utiliser `putchar` que quatre fois maximum dans votre code
- Vous n'êtes pas autorisé à utiliser de variable de type `char`

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

## Auteur

Projet réalisé dans le cadre de la formation Holberton School.
