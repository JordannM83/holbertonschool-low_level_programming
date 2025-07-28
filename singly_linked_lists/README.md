# 0x12. C - Singly linked lists

Ce projet introduit les listes chaînées simples en C.

## Objectifs d'apprentissage

- Quand et pourquoi utiliser les listes chaînées vs les tableaux
- Comment construire et utiliser les listes chaînées

## Structure

```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```

## Fichiers

### 0. Print list
**Fichier :** `0-print_list.c`

Fonction qui affiche tous les éléments d'une liste `list_t`.
- Prototype : `size_t print_list(const list_t *h);`
- Retourne : le nombre de nœuds
- Format : `[len] str`
- Si str est NULL, affiche `[0] (nil)`
- Vous êtes autorisé à utiliser printf

### 1. List length
**Fichier :** `1-list_len.c`

Fonction qui retourne le nombre d'éléments dans une liste `list_t`.
- Prototype : `size_t list_len(const list_t *h);`

### 2. Add node
**Fichier :** `2-add_node.c`

Fonction qui ajoute un nouveau nœud au début d'une liste `list_t`.
- Prototype : `list_t *add_node(list_t **head, const char *str);`
- Retourne : l'adresse du nouvel élément, ou NULL si elle a échoué
- str doit être dupliqué
- Vous êtes autorisé à utiliser strdup

### 3. Add node at the end
**Fichier :** `3-add_node_end.c`

Fonction qui ajoute un nouveau nœud à la fin d'une liste `list_t`.
- Prototype : `list_t *add_node_end(list_t **head, const char *str);`
- Retourne : l'adresse du nouvel élément, ou NULL si elle a échoué
- str doit être dupliqué
- Vous êtes autorisé à utiliser strdup

### 4. Free list
**Fichier :** `4-free_list.c`

Fonction qui libère une liste `list_t`.
- Prototype : `void free_list(list_t *head);`

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

## Auteur

Projet réalisé dans le cadre de la formation Holberton School.
