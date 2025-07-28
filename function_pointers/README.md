# 0x0F. C - Function pointers

Ce projet explore les pointeurs sur fonctions en C.

## Objectifs d'apprentissage

- Que sont les pointeurs sur fonctions et comment les utiliser
- Que contient exactement un pointeur sur fonction
- Où pointe un pointeur sur fonction dans la mémoire virtuelle

## Fichiers

### 0. What's my name
**Fichier :** `0-print_name.c`

Fonction qui affiche un nom.
- Prototype : `void print_name(char *name, void (*f)(char *));`

### 1. If you spend too much time thinking about a thing, you'll never get it done
**Fichier :** `1-array_iterator.c`

Fonction qui exécute une fonction donnée en paramètre sur chaque élément d'un tableau.
- Prototype : `void array_iterator(int *array, size_t size, void (*action)(int));`

### 2. To hell with circumstances; I create opportunities
**Fichier :** `2-int_index.c`

Fonction qui recherche un entier.
- Prototype : `int int_index(int *array, int size, int (*cmp)(int));`

### 3. A goal is not always meant to be reached, it often serves simply as something to aim at
**Fichiers :** `3-main.c`, `3-op_functions.c`, `3-get_op_func.c`, `3-calc.h`

Programme qui effectue des opérations arithmétiques simples.
- Usage : `calc num1 operator num2`
- L'opérateur peut être : `+`, `-`, `*`, `/`, `%`
- Le programme affiche le résultat de l'opération, suivi d'une nouvelle ligne
- Vous pouvez supposer que le résultat de toutes les opérations peut être stocké dans un int
- Si le nombre d'arguments est incorrect, affichez Error, suivi d'une nouvelle ligne, et quittez avec le statut 98
- Si l'opérateur n'est aucun de ceux ci-dessus, affichez Error, suivi d'une nouvelle ligne, et quittez avec le statut 99
- Si l'utilisateur essaie de diviser (/ ou %) par 0, affichez Error, suivi d'une nouvelle ligne, et quittez avec le statut 100

**Structure :**
```c
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;
```

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

## Exemple d'utilisation

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
$ ./calc 1 + 1
2
$ ./calc 97 + 1
98
$ ./calc 1024 / 10
102
$ ./calc 1024 '*' 98
100352
```

## Auteur

Projet réalisé dans le cadre de la formation Holberton School.
