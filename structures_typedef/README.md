# 0x0E. C - Structures, typedef

Ce projet explore les structures et typedef en C.

## Objectifs d'apprentissage

- Que sont les structures, quand, pourquoi et comment les utiliser
- Comment utiliser typedef

## Structure

```c
/**
 * struct dog - Basic info about dogs
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};
```

## Fichiers

### 0. Poppy
**Fichier :** `dog.h`

Définition d'un nouveau type `struct dog` avec les éléments suivants :
- name, type = char *
- age, type = float
- owner, type = char *

### 1. A dog is the only thing on earth that loves you more than you love yourself
**Fichier :** `1-init_dog.c`

Fonction qui initialise une variable de type `struct dog`.
- Prototype : `void init_dog(struct dog *d, char *name, float age, char *owner);`

### 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
**Fichier :** `2-print_dog.c`

Fonction qui affiche une `struct dog`.
- Prototype : `void print_dog(struct dog *d);`
- Format : voir exemple
- Vous êtes autorisé à utiliser la bibliothèque standard
- Si un élément de d est NULL, affichez (nil) au lieu de cet élément
- Si d est NULL, n'affichez rien

### 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
**Fichier :** `dog.h`

Définissez un nouveau type `dog_t` comme un nouveau nom pour le type `struct dog`.

### 4. A door is what a dog is perpetually on the wrong side of
**Fichier :** `4-new_dog.c`

Fonction qui crée un nouveau chien.
- Prototype : `dog_t *new_dog(char *name, float age, char *owner);`
- Vous devez stocker une copie de name et owner
- Retourne NULL si la fonction échoue

### 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
**Fichier :** `5-free_dog.c`

Fonction qui libère les chiens.
- Prototype : `void free_dog(dog_t *d);`

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

## Auteur

Projet réalisé dans le cadre de la formation Holberton School.
