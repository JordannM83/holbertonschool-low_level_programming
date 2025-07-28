# 0x0A. C - argc, argv

Ce projet explore l'utilisation des arguments de ligne de commande en C à travers les paramètres `argc` et `argv` de la fonction `main`.

## Concepts abordés

- Comment utiliser les arguments passés à votre programme
- Que sont `argc` et `argv` et comment les utiliser
- Comment utiliser `__attribute__((unused))` ou `(void)` pour éviter les avertissements de compilation sur les variables non utilisées

## Fichiers du projet

### 0. It ain't what they call you, it's what you answer to
**Fichier :** `0-whatsmyname.c`

Programme qui affiche son nom, suivi d'un retour à la ligne.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
$ ./mynameis 
./mynameis
$ ./mynameis Damon
./mynameis
```

### 1. Silence is argument carried out by other means
**Fichier :** `1-args.c`

Programme qui affiche le nombre d'arguments qui lui sont passés.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs
$ ./nargs 
0
$ ./nargs hello
1
$ ./nargs "hello, world"
1
$ ./nargs hello, world
2
```

### 2. The best argument against democracy is a five-minute conversation with the average voter
**Fichier :** `2-args.c`

Programme qui affiche tous les arguments qu'il reçoit, un par ligne.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args
$ ./args 
./args
$ ./args You can do anything, but not everything.
./args
You
can
do
anything,
but
not
everything.
```

### 3. Neither irony nor sarcasm is argument
**Fichier :** `3-mul.c`

Programme qui multiplie deux nombres passés en arguments.

- Si le programme ne reçoit pas exactement deux arguments, il affiche `Error` suivi d'un retour à la ligne et retourne `1`
- Vous pouvez supposer que les deux arguments sont des entiers

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
$ ./mul 2 3
6
$ ./mul 2 -3
-6
$ ./mul 2 3 4
Error
$ ./mul
Error
```

### 4. To infinity and beyond
**Fichier :** `4-add.c`

Programme qui additionne des nombres positifs.

- Affiche le résultat de l'addition, suivi d'un retour à la ligne
- Si aucun nombre n'est passé au programme, affiche `0` suivi d'un retour à la ligne
- Si l'un des nombres contient des symboles qui ne sont pas des chiffres, affiche `Error` suivi d'un retour à la ligne et retourne `1`
- Vous pouvez supposer que les nombres et le résultat de l'addition peuvent être stockés dans un `int`

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add
$ ./add 1 1
2
$ ./add 1 10 100 1000
1111
$ ./add 1 2 3 e 4 5
Error
$ ./add
0
```

## Compilation

Tous les fichiers sont compilés avec :
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89
```

## Auteur

Projet réalisé dans le cadre de la formation Holberton School.

## Notes importantes

- `argc` (argument count) : nombre d'arguments passés au programme (incluant le nom du programme)
- `argv` (argument vector) : tableau de chaînes contenant les arguments
- `argv[0]` contient toujours le nom du programme
- Les arguments sont des chaînes de caractères, utiliser `atoi()` pour les convertir en entiers