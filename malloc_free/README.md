# 0x0B. C - malloc, free

Ce projet introduit l'allocation dynamique de mémoire en C.

## Objectifs d'apprentissage

- Quelle est la différence entre l'allocation automatique et l'allocation dynamique
- Que sont `malloc` et `free` et comment les utiliser
- Pourquoi et quand utiliser `malloc`
- Comment utiliser `valgrind` pour vérifier les fuites de mémoire

## Fichiers

### 0. Float like a butterfly, sting like a bee
**Fichier :** `0-create_array.c`

Fonction qui crée un tableau de chars, et l'initialise avec un char spécifique.
- Prototype : `char *create_array(unsigned int size, char c);`

### 1. The woman who has no imagination has no wings
**Fichier :** `1-strdup.c`

Fonction qui retourne un pointeur vers une nouvelle chaîne qui est un duplicata de la chaîne donnée en paramètre.
- Prototype : `char *_strdup(char *str);`

### 2. He who is not courageous enough to take risks will accomplish nothing in life
**Fichier :** `2-str_concat.c`

Fonction qui concatène deux chaînes.
- Prototype : `char *str_concat(char *s1, char *s2);`

### 3. If you even dream of beating me you'd better wake up and apologize
**Fichier :** `3-alloc_grid.c`

Fonction qui retourne un pointeur vers un tableau 2D d'entiers.
- Prototype : `int **alloc_grid(int width, int height);`

### 4. It's not bragging if you can back it up
**Fichier :** `4-free_grid.c`

Fonction qui libère un tableau 2D précédemment créé par votre fonction alloc_grid.
- Prototype : `void free_grid(int **grid, int height);`

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