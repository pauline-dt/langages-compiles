# Réponses au TP1

## Partie 1 - Compilé et interprété

| Critère | Langage compilé | Langage interprété |
|---|---|---|
| Quand la traduction se fait-elle ? | Avant l'exécution | Pendant l'exécution |
| Vitesse d'exécution | Généralement plus rapide | Généralement plus lente |
| Portabilité du binaire | Le binaire dépend du système | Le même code peut fonctionner si l'interpréteur est installé |
| Détection des erreurs | Beaucoup d'erreurs sont détectées à la compilation | Certaines erreurs sont détectées pendant l'exécution |
| Besoin d'un runtime installé ? | Pas toujours | Oui, il faut un interpréteur |
| Exemples | C, C++, Rust | Python, JavaScript, Ruby |

## Questions de réflexion

### 1. Pourquoi un programme C est-il souvent plus rapide que Python ?

Le programme C est transformé en langage machine avant son exécution. Le processeur peut donc l'exécuter directement. Python utilise un interpréteur pendant l'exécution.

### 2. Peut-on exécuter sur Linux un programme compilé sur Windows ?

En général non, car le fichier exécutable dépend du système d'exploitation. Il faut recompiler le code pour Linux.

### 3. Pourquoi les interpréteurs sont-ils souvent écrits en C ou C++ ?

Cela montre que les langages compilés sont importants pour créer des programmes rapides et proches du système.

### 4. Deux exemples d'applications utilisant un langage compilé

- Les systèmes d'exploitation.
- Les jeux vidéo.

## Partie 2 - Version de GCC

Version utilisée :

```text
gcc 13.3.0
```

Système d'exploitation utilisé :

```text
Ubuntu 24.04 avec WSL 2
```

## Partie 3 - Code de sortie

Après avoir lancé `hello` :

```bash
./hello
echo $?
```

Le terminal affiche `0`, ce qui signifie que le programme s'est terminé correctement.

Le fichier `code_sortie.c` retourne `42`.

Un code différent de zéro indique généralement qu'une erreur ou une situation particulière s'est produite.

## Partie 4 - Correction des erreurs

### Programme 1

Il manque un point-virgule après `printf`.

Correction :

```c
printf("Bonjour le monde!");
```

### Programme 2

Il manque un point-virgule après `int nombre = 42`.

Les formats sont aussi inversés :

- `%d` est utilisé pour un entier.
- `%f` est utilisé pour un nombre flottant.

Correction :

```c
printf("Nombre : %d, Pi : %.2f\n", nombre, pi);
```

### Programme 3

Le programme essaie de diviser par zéro.

Il faut vérifier que `b` est différent de zéro avant de faire la division.

### Programme 4

Le programme utilise `=` au lieu de `==`.

- `=` sert à donner une valeur.
- `==` sert à comparer deux valeurs.

Correction :

```c
if (score == 100)
```

## Warnings avec `-Wall -Wextra`

GCC peut signaler plusieurs problèmes :

- des variables non utilisées ;
- des formats incorrects dans `printf` ;
- une affectation utilisée dans une condition ;
- d'autres constructions pouvant provoquer un bug.

Il est recommandé d'utiliser `-Wall -Wextra` pour repérer plus facilement les erreurs avant l'exécution.
