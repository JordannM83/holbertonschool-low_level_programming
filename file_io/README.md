# File I/O

Ce projet couvre les opérations d'entrée/sortie de fichiers en C, en utilisant les appels système Unix/Linux pour manipuler les fichiers.

## Description

Ce projet fait partie du curriculum de Holberton School et se concentre sur :
- La lecture de fichiers
- La création de fichiers  
- L'ajout de contenu à des fichiers existants
- La copie de fichiers
- La gestion des permissions de fichiers
- La gestion d'erreurs lors des opérations sur les fichiers

## Fichiers

### Fichiers d'en-tête
- `main.h` - Contient les prototypes de fonctions et les includes nécessaires

### Fonctions implémentées

#### 0. Tread lightly, she is near
- **Fichier:** `0-read_textfile.c`
- **Prototype:** `ssize_t read_textfile(const char *filename, size_t letters);`
- **Description:** Lit un fichier texte et l'affiche sur la sortie standard POSIX
- **Retour:** Le nombre réel de lettres lues et affichées, 0 en cas d'erreur

#### 1. Under the snow
- **Fichier:** `1-create_file.c`
- **Prototype:** `int create_file(const char *filename, char *text_content);`
- **Description:** Crée un fichier avec des permissions rw-------
- **Retour:** 1 en cas de succès, -1 en cas d'échec
- **Spécifications:**
  - Si le fichier existe, le tronquer
  - Si filename est NULL, retourner -1
  - Si text_content est NULL, créer un fichier vide

#### 2. Speak gently, she can hear
- **Fichier:** `2-append_text_to_file.c`
- **Prototype:** `int append_text_to_file(const char *filename, char *text_content);`
- **Description:** Ajoute du texte à la fin d'un fichier
- **Retour:** 1 en cas de succès, -1 en cas d'échec

#### 3. cp
- **Fichier:** `3-cp.c`
- **Description:** Programme qui copie le contenu d'un fichier vers un autre fichier
- **Usage:** `cp file_from file_to`
- **Codes de sortie:**
  - 97: Mauvais nombre d'arguments
  - 98: Impossible de lire le fichier source
  - 99: Impossible d'écrire dans le fichier destination
  - 100: Impossible de fermer un descripteur de fichier

## Compilation

Tous les fichiers sont compilés avec :
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *.c -o [nom_executable]
```

## Concepts clés

- **Descripteurs de fichier** : Utilisation des fonctions système `open()`, `read()`, `write()`, `close()`
- **Permissions de fichier** : Gestion des permissions avec `chmod()` et les modes octaux
- **Gestion d'erreurs** : Vérification des valeurs de retour et gestion appropriée des erreurs
- **Appels système** : Utilisation des appels système de bas niveau pour les opérations sur fichiers

## Fichiers de test

Les fichiers `*-main.c` contiennent des fonctions de test pour chaque tâche.

## Auteur

Projet réalisé dans le cadre du cursus Holberton School.