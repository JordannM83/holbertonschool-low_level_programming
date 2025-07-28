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

```bash
$ ./a
[5] Hello
[3] World
[4] !
-> 3 elements
```

### 1. List length
**Fichier :** `1-list_len.c`

Fonction qui retourne le nombre d'éléments dans une liste `list_t`.
- Prototype : `size_t list_len(const list_t *h);`

```bash
$ ./b
-> 3 elements
```

### 2. Add node
**Fichier :** `2-add_node.c`

Fonction qui ajoute un nouveau nœud au début d'une liste `list_t`.
- Prototype : `list_t *add_node(list_t **head, const char *str);`
- Retourne : l'adresse du nouvel élément, ou NULL si elle a échoué
- str doit être dupliqué
- Vous êtes autorisé à utiliser strdup

```bash
$ ./c
[6] Holberton
[5] Hello
[3] World
[4] !
-> 4 elements
```

### 3. Add node at the end
**Fichier :** `3-add_node_end.c`

Fonction qui ajoute un nouveau nœud à la fin d'une liste `list_t`.
- Prototype : `list_t *add_node_end(list_t **head, const char *str);`
- Retourne : l'adresse du nouvel élément, ou NULL si elle a échoué
- str doit être dupliqué
- Vous êtes autorisé à utiliser strdup

```bash
$ ./d
[5] Hello
[3] World
[4] !
[8] Holberton
[6] School
-> 5 elements
```

### 4. Free list
**Fichier :** `4-free_list.c`

Fonction qui libère une liste `list_t`.
- Prototype : `void free_list(list_t *head);`

```bash
$ valgrind ./e 
==2389== Memcheck, a memory error detector
==2389== All heap blocks were freed -- no leaks are possible
==2389== 
==2389== For counts of detected and suppressed errors, rerun with: -v
==2389== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```

## Concepts clés

### Listes chaînées vs Tableaux

| Aspect | Tableaux | Listes chaînées |
|--------|----------|------------------|
| **Accès** | O(1) par index | O(n) séquentiel |
| **Insertion début** | O(n) (décalage) | O(1) |
| **Insertion fin** | O(1) si taille connue | O(n) |
| **Suppression** | O(n) (décalage) | O(1) si nœud connu |
| **Mémoire** | Contiguë | Dispersée |
| **Cache** | Efficace | Moins efficace |

### Avantages des listes chaînées
- Taille dynamique (croît/décroît selon les besoins)
- Insertion/suppression efficace au début
- Pas de gaspillage mémoire (allocation exacte)

### Inconvénients des listes chaînées
- Pas d'accès direct (doit parcourir)
- Surcoût mémoire (pointeur `next`)
- Localité cache moins bonne

## Gestion mémoire

### Allocation
- Chaque nœud : `malloc(sizeof(list_t))`
- Chaque chaîne : `strdup(str)` ou `malloc + strcpy`

### Libération
- Pour chaque nœud : libérer la chaîne puis le nœud
- Ordre important : sauvegarder `next` avant `free()`

```c
// Exemple de libération correcte
while (current != NULL)
{
    next = current->next;  // Sauvegarder AVANT
    free(current->str);    // Libérer la chaîne
    free(current);         // Libérer le nœud
    current = next;        // Passer au suivant
}
```

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

## Tests avec Valgrind

```bash
valgrind --tool=memcheck --leak-check=full --show-reachable=yes ./program
```

## Auteur

Projet réalisé dans le cadre de la formation Holberton School.
