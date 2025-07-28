# 0x0C. C - More malloc, free

Ce projet approfondit les concepts d'allocation dynamique de mémoire avec `calloc` et `realloc`.

## Objectifs d'apprentissage

- Comment utiliser les fonctions `exit`
- Que sont les fonctions `calloc` et `realloc` de la bibliothèque standard et comment les utiliser

## Fichiers

### 0. Trust no one
**Fichier :** `0-malloc_checked.c`

Fonction qui alloue de la mémoire en utilisant malloc.
- Prototype : `void *malloc_checked(unsigned int b);`
- Si malloc échoue, la fonction malloc_checked doit causer la terminaison normale du programme avec un statut de 98

### 1. string_nconcat
**Fichier :** `1-string_nconcat.c`

Fonction qui concatène deux chaînes.
- Prototype : `char *string_nconcat(char *s1, char *s2, unsigned int n);`
- La fonction retourne un pointeur vers une nouvelle chaîne allouée en mémoire, qui contient s1, suivi des premiers n caractères de s2, et terminé par null

### 2. calloc
**Fichier :** `2-calloc.c`

Fonction qui alloue de la mémoire pour un tableau, en utilisant malloc.
- Prototype : `void *_calloc(unsigned int nmemb, unsigned int size);`
- La fonction _calloc alloue de la mémoire pour un tableau de nmemb éléments de size bytes chacun et retourne un pointeur vers la mémoire allouée
- La mémoire est mise à zéro

### 3. array_range
**Fichier :** `3-array_range.c`

Fonction qui crée un tableau d'entiers.
- Prototype : `int *array_range(int min, int max);`
- Le tableau créé doit contenir toutes les valeurs de min (inclus) à max (inclus), dans cet ordre

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

## Vérification des fuites mémoire

```bash
valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-callers=20 --track-fds=yes ./program
```

## Auteur

Projet réalisé dans le cadre de la formation Holberton School.