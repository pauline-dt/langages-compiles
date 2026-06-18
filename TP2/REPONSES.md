# Réponses au TP2

## Partie 1 - Les étapes de compilation

### 1. Fichier `hello.i`

Le fichier `hello.i` est beaucoup plus long que le fichier source, car le contenu de `stdio.h` a été ajouté par le préprocesseur.

La ligne :

```c
#define MESSAGE "Bonjour YNOV !"
```

a disparu. Dans le code, `MESSAGE` a été remplacé directement par `"Bonjour YNOV !"`.

Pour compter le nombre de lignes :

```bash
wc -l hello.i
```

Le nombre peut varier selon la version de GCC et le système.

### 2. Fichier `hello.s`

Le fichier `hello.s` contient du code assembleur.

On peut reconnaître des instructions comme `mov`, `lea`, `call` ou `ret`.

L'assembleur est un langage de bas niveau, proche des instructions exécutées par le processeur.

### 3. Différence entre `hello.o` et `hello`

La commande :

```bash
file hello.o
```

indique qu'il s'agit d'un fichier objet. Il contient du code machine, mais il n'est pas encore exécutable tout seul.

La commande :

```bash
file hello
```

indique qu'il s'agit d'un exécutable. Le linker a relié le programme aux bibliothèques nécessaires.

### 4. Commande unique

La commande suivante réalise les quatre étapes :

```bash
gcc hello.c -o hello
```

## Partie 2 - Options GCC

Dans le programme d'origine, la variable `x` est déclarée mais jamais utilisée.

Avec :

```bash
gcc -Wall -Wextra test_options.c -o test
```

GCC affiche un warning de type :

```text
warning: unused variable 'x'
```

Cela signifie que la variable existe mais ne sert à rien.

Pour corriger le warning, on peut utiliser `x`, par exemple :

```c
printf("x = %d\n", x);
```

Il faut prendre les warnings au sérieux, car ils peuvent signaler des oublis ou des bugs possibles même si le programme compile.

## Partie 3 - Types

Sur mon système, les tailles obtenues sont généralement :

| Type | Taille |
|---|---:|
| `char` | 1 octet |
| `short` | 2 octets |
| `int` | 4 octets |
| `long` | 8 octets |
| `float` | 4 octets |
| `double` | 8 octets |

Les tailles peuvent varier selon l'architecture, le système d'exploitation et le compilateur.

## Partie 4 - `scanf`

Pour un entier ou un nombre flottant, `scanf` a besoin de l'adresse de la variable :

```c
scanf("%d", &age);
scanf("%f", &moyenne);
```

Pour un tableau de caractères, le nom du tableau est déjà une adresse :

```c
scanf("%29s", prenom);
```

Le nombre `29` évite de dépasser la taille du tableau de 30 caractères.

## Partie 5 - Erreurs provoquées

### 1. Point-virgule oublié

Exemple de message :

```text
error: expected ';' before 'return'
```

GCC indique qu'il attend un point-virgule avant la ligne suivante.

### 2. Type incompatible

Avec :

```c
int x = "hello";
```

GCC indique qu'une chaîne de caractères est utilisée pour initialiser un entier.

### 3. Fonction non déclarée

Avec :

```c
maFonction();
```

GCC indique que la fonction n'a pas été déclarée. Au moment de l'édition de liens, il peut aussi indiquer que la référence vers cette fonction est introuvable.
