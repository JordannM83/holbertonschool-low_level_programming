# Hash Tables

Ce projet couvre l'implémentation de tables de hachage (hash tables) en C, utilisant la méthode de chaînage pour gérer les collisions.

## Description

Ce projet fait partie du curriculum de Holberton School et se concentre sur :
- La création et gestion de tables de hachage
- L'implémentation de l'algorithme de hachage djb2
- La gestion des collisions par chaînage (linked lists)
- L'ajout, la recherche et la suppression d'éléments
- La libération de mémoire

## Structure de données

### hash_node_t
Structure représentant un nœud dans la liste chaînée :
```c
typedef struct hash_node_s
{
    char *key;                    // La clé (unique dans la table)
    char *value;                  // La valeur associée à la clé
    struct hash_node_s *next;     // Pointeur vers le nœud suivant
} hash_node_t;
```

### hash_table_t
Structure représentant la table de hachage :
```c
typedef struct hash_table_s
{
    unsigned long int size;       // Taille du tableau
    hash_node_t **array;         // Tableau de pointeurs vers les listes chaînées
} hash_table_t;
```

## Fichiers

### Fichier d'en-tête
- `hash_tables.h` - Contient les structures et prototypes de fonctions

### Fonctions implémentées

#### 0. >>> ht = {}
- **Fichier:** `0-hash_table_create.c`
- **Prototype:** `hash_table_t *hash_table_create(unsigned long int size);`
- **Description:** Crée une table de hachage
- **Paramètre:** `size` - taille du tableau
- **Retour:** Pointeur vers la nouvelle table de hachage, NULL en cas d'erreur

#### 1. djb2
- **Fichier:** `1-djb2.c`
- **Prototype:** `unsigned long int hash_djb2(const unsigned char *str);`
- **Description:** Fonction de hachage implémentant l'algorithme djb2
- **Paramètre:** `str` - chaîne à hacher
- **Retour:** Valeur de hachage

#### 2. key -> index
- **Fichier:** `2-key_index.c`
- **Prototype:** `unsigned long int key_index(const unsigned char *key, unsigned long int size);`
- **Description:** Donne l'index d'une clé dans la table de hachage
- **Paramètres:**
  - `key` - la clé
  - `size` - taille du tableau de la table de hachage
- **Retour:** Index où la paire clé/valeur doit être stockée

#### 3. >>> ht['betty'] = 'cool'
- **Fichier:** `3-hash_table_set.c`
- **Prototype:** `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`
- **Description:** Ajoute un élément à la table de hachage
- **Paramètres:**
  - `ht` - table de hachage
  - `key` - la clé (ne peut pas être une chaîne vide)
  - `value` - valeur associée (doit être dupliquée)
- **Retour:** 1 en cas de succès, 0 sinon
- **Note:** En cas de collision, ajouter le nouveau nœud au début de la liste

#### 4. >>> ht['betty']
- **Fichier:** `4-hash_table_get.c`
- **Prototype:** `char *hash_table_get(const hash_table_t *ht, const char *key);`
- **Description:** Récupère une valeur associée à une clé
- **Paramètres:**
  - `ht` - table de hachage
  - `key` - clé recherchée
- **Retour:** Valeur associée à l'élément, NULL si la clé n'est pas trouvée

#### 5. >>> print(ht)
- **Fichier:** `5-hash_table_print.c`
- **Prototype:** `void hash_table_print(const hash_table_t *ht);`
- **Description:** Affiche une table de hachage
- **Format:** `{'key': 'value', 'key2': 'value2'}`
- **Ordre:** Parcourt le tableau, puis les listes chaînées
- **Note:** Si ht est NULL, n'affiche rien

#### 6. >>> del ht
- **Fichier:** `6-hash_table_delete.c`
- **Prototype:** `void hash_table_delete(hash_table_t *ht);`
- **Description:** Supprime une table de hachage
- **Note:** Libère toute la mémoire allouée

## Compilation

Tous les fichiers sont compilés avec :
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *.c -o [nom_executable]
```

## Concepts clés

- **Fonction de hachage djb2** : Algorithme de hachage efficace
- **Gestion des collisions** : Utilisation du chaînage avec des listes chaînées
- **Allocation dynamique** : Gestion de la mémoire avec malloc/free
- **Duplication de chaînes** : Utilisation de strdup pour copier les valeurs

## Chaînes de test pour les collisions

Voici quelques chaînes qui entrent en collision avec l'algorithme djb2 :
- `hetairas` et `mentioner`
- `heliotropes` et `neurospora`
- `depravement` et `serafins`
- `stylist` et `subgenera`
- `joyful` et `synaphea`
- `redescribed` et `urites`
- `dram` et `vivency`

## Fichiers de test

Les fichiers `*-main.c` contiennent des fonctions de test pour chaque tâche.

## Auteur

Projet réalisé dans le cadre du cursus Holberton School.
