# 0x17. C - Doubly linked lists

Ce projet explore les listes doublement chaînées en C.

## Objectifs d'apprentissage

- Qu'est-ce qu'une liste doublement chaînée
- Comment utiliser les listes doublement chaînées
- Commencer à chercher les bonnes sources d'information sans trop d'aide

## Structure

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

## Fichiers

### 0. Print list
**Fichier :** `0-print_dlistint.c`

Fonction qui affiche tous les éléments d'une liste `dlistint_t`.
- Prototype : `size_t print_dlistint(const dlistint_t *h);`
- Retourne : le nombre de nœuds
- Format : un nombre par ligne
- Vous êtes autorisé à utiliser printf

```bash
$ ./a
0
1
2
3
4
-> 5 elements
```

### 1. List length
**Fichier :** `1-dlistint_len.c`

Fonction qui retourne le nombre d'éléments dans une liste `dlistint_t`.
- Prototype : `size_t dlistint_len(const dlistint_t *h);`

```bash
$ ./b
-> 5 elements
```

### 2. Add node
**Fichier :** `2-add_dnodeint.c`

Fonction qui ajoute un nouveau nœud au début d'une liste `dlistint_t`.
- Prototype : `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
- Retourne : l'adresse du nouvel élément, ou NULL si elle a échoué

```bash
$ ./c
1024
402
98
4
3
2
1
0
-> 8 elements
```

### 3. Add node at the end
**Fichier :** `3-add_dnodeint_end.c`

Fonction qui ajoute un nouveau nœud à la fin d'une liste `dlistint_t`.
- Prototype : `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
- Retourne : l'adresse du nouvel élément, ou NULL si elle a échoué

```bash
$ ./d
0
1
2
3
4
98
402
1024
-> 8 elements
```

### 4. Free list
**Fichier :** `4-free_dlistint.c`

Fonction qui libère une liste `dlistint_t`.
- Prototype : `void free_dlistint(dlistint_t *head);`

```bash
$ valgrind ./e 
==3063== All heap blocks were freed -- no leaks are possible
==3063== ERROR SUMMARY: 0 errors from 0 contexts
```

### 5. Get nth node
**Fichier :** `5-get_dnodeint.c`

Fonction qui retourne le nième nœud d'une liste `dlistint_t`.
- Prototype : `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
- où index est l'index du nœud, commençant de 0
- si le nœud n'existe pas, retourne NULL

```bash
$ ./h
0
1
2
3
4
98
402
1024
----------------
Node at index [5] = [98]
```

### 6. Sum list
**Fichier :** `6-sum_dlistint.c`

Fonction qui retourne la somme de toutes les données (n) d'une liste `dlistint_t`.
- Prototype : `int sum_dlistint(dlistint_t *head);`
- si la liste est vide, retourne 0

```bash
$ ./i
0
1
2
3
4
98
402
1024
----------------
sum = 1534
```

### 7. Insert at index
**Fichier :** `7-insert_dnodeint.c`

Fonction qui insère un nouveau nœud à une position donnée.
- Prototype : `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
- où idx est l'index de la liste où le nouveau nœud doit être ajouté. Index commence à 0
- Retourne : l'adresse du nouveau nœud, ou NULL si elle a échoué
- si il n'est pas possible d'ajouter le nouveau nœud à l'index idx, n'ajoutez pas le nouveau nœud et retournez NULL

```bash
$ ./j
0
1
2
3
4
98
402
1024
-----------------
0
1
2
1024
3
4
98
402
1024
```

### 8. Delete at index
**Fichier :** `8-delete_dnodeint.c`

Fonction qui supprime le nœud à l'index index d'une liste `dlistint_t`.
- Prototype : `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
- où index est l'index du nœud qui doit être supprimé. Index commence à 0
- Retourne : 1 si elle a réussi, -1 si elle a échoué

```bash
$ ./k
0
1
2
3
4
98
402
1024
-----------------
1
2
3
4
98
402
1024
```

## Concepts clés

### Listes doublement chaînées vs simples

| Aspect | Simple | Doublement chaînée |
|--------|---------|-------------------|
| **Pointeurs** | `next` seulement | `prev` + `next` |
| **Navigation** | Une direction → | Bidirectionnelle ↔ |
| **Mémoire** | Moins (1 pointeur) | Plus (2 pointeurs) |
| **Suppression** | O(n) recherche | O(1) si nœud connu |
| **Complexité code** | Plus simple | Plus complexe |

### Avantages des listes doublement chaînées
- **Navigation bidirectionnelle** (parcours avant/arrière)
- **Suppression efficace** sans recherche du nœud précédent
- **Insertion flexible** à n'importe quelle position
- **Opérations sur queue** efficaces (O(1) si pointeur tail)

### Inconvénients
- **Plus de mémoire** (pointeur supplémentaire par nœud)
- **Complexité accrue** (gérer 2 liens au lieu d'1)
- **Plus d'opérations** lors des modifications

## Gestion mémoire

### Structure d'un nœud
```c
dlistint_t *new_node = malloc(sizeof(dlistint_t));
new_node->n = value;
new_node->prev = NULL;
new_node->next = NULL;
```

### Insertion au début
```c
// Créer nouveau nœud
// Connecter new->next = *head
// Si *head existe: (*head)->prev = new
// Mettre à jour *head = new
```

### Insertion à la fin
```c
// Parcourir jusqu'au dernier nœud
// Connecter last->next = new
// Connecter new->prev = last
// new->next = NULL
```

### Suppression
```c
// Sauvegarder les liens
// Si prev existe: prev->next = current->next
// Si next existe: next->prev = current->prev
// Libérer le nœud
```

### Libération complète
```c
while (current != NULL)
{
    next = current->next;
    free(current);
    current = next;
}
```

## Patterns de programmation

### Parcours avant
```c
while (current != NULL)
{
    // traiter current
    current = current->next;
}
```

### Parcours arrière (depuis la fin)
```c
// Aller à la fin d'abord
while (current->next != NULL)
    current = current->next;

// Puis parcourir en arrière
while (current != NULL)
{
    // traiter current
    current = current->prev;
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