# 0x00. C - Hello, World

Premier projet en C - Introduction aux concepts fondamentaux du langage.

## Objectifs d'apprentissage

- Qui a inventé C
- Qui sont Dennis Ritchie, Brian Kernighan et Linus Torvalds
- Que se passe-t-il quand vous tapez `gcc main.c`
- Qu'est-ce qu'un point d'entrée
- Qu'est-ce que `main`
- Comment afficher du texte en utilisant `printf`, `puts` et `putchar`
- Comment obtenir la taille d'un type spécifique en utilisant l'opérateur unaire `sizeof`
- Comment compiler en utilisant `gcc`
- Quel est le style de codage officiel à Holberton School et comment le vérifier avec `betty-style`
- Comment trouver les bonnes informations d'en-tête à inclure dans vos sources pour utiliser les fonctions de la bibliothèque standard
- Comment la fonction `main` influence la valeur de retour du programme

## Fichiers

### 0. Preprocessor
**Fichier :** `0-preprocessor`

Script qui exécute un fichier C à travers le préprocesseur et sauvegarde le résultat dans un autre fichier.

```bash
$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
$ ./0-preprocessor
$ cat c
```

### 1. Compiler
**Fichier :** `1-compiler`

Script qui compile un fichier C mais ne l'édite pas (pas de lien).

```bash
$ ./1-compiler
$ ls
1-compiler main.c main.o
```

### 2. Assembler
**Fichier :** `2-assembler`

Script qui génère le code assembleur d'un fichier C et le sauvegarde dans un fichier de sortie.

```bash
$ ./2-assembler
$ ls
2-assembler main.c main.s
```

### 3. Name
**Fichier :** `3-name`

Script qui compile un fichier C et crée un exécutable nommé `cisfun`.

```bash
$ ./3-name
$ ls
3-name cisfun main.c
```

### 4. Hello, puts
**Fichier :** `4-puts.c`

Programme C qui affiche exactement `"Programming is like building a multilingual puzzle`, suivi d'une nouvelle ligne.

- Vous devez utiliser la fonction `puts`
- Vous n'êtes pas autorisé à utiliser `printf`
- Votre programme doit se terminer par la valeur de retour 0

```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c && ./a.out
"Programming is like building a multilingual puzzle
```

### 5. Hello, printf
**Fichier :** `5-printf.c`

Programme C qui affiche exactement `with proper grammar, but the outcome is a piece of art,`, suivi d'une nouvelle ligne.

- Vous devez utiliser la fonction `printf`
- Vous n'êtes pas autorisé à utiliser la fonction `puts`
- Votre programme doit retourner 0
- Votre programme doit compiler sans avertissement lors de l'utilisation du flag `-Wall gcc`

```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c && ./a.out
with proper grammar, but the outcome is a piece of art,
```

### 6. Size is not grandeur, and territory does not make a nation
**Fichier :** `6-size.c`

Programme C qui affiche la taille de différents types sur l'ordinateur sur lequel il est compilé et exécuté.

```bash
$ gcc 6-size.c -o size && ./size
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
```

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

## Auteur

Projet réalisé dans le cadre de la formation Holberton School.