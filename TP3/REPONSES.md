# Réponses au TP3

## Partie 1 - Conditions

### Différence entre `=` et `==`

- `=` sert à affecter une valeur à une variable.
- `==` sert à comparer deux valeurs.

Exemple :

```c
score = 100;
```

donne la valeur 100 à `score`.

```c
score == 100
```

vérifie si `score` vaut 100.

### Pourquoi utiliser `break` dans un `switch` ?

`break` arrête le `switch` après le bon `case`.

Sans `break`, le programme continue dans le `case` suivant.

## Partie 2 - Boucles

### Différence entre `while` et `do...while`

Une boucle `while` vérifie la condition avant d'exécuter le bloc.

Une boucle `do...while` exécute le bloc au moins une fois avant de vérifier la condition.

### Boucle infinie

Une boucle peut devenir infinie si la condition reste toujours vraie.

Par exemple, oublier d'incrémenter un compteur peut empêcher la boucle de se terminer.

## Partie 3 - Fonctions

### Passage par valeur

Quand une variable est passée par valeur, la fonction reçoit une copie.

Modifier cette copie ne change pas la variable d'origine.

### Prototype d'une fonction

Le prototype annonce au compilateur le nom de la fonction, ses paramètres et son type de retour.

Exemple :

```c
int minimum(int a, int b);
```

### Fonction `void`

Une fonction de type `void` ne retourne aucune valeur.

## Partie 4 - Tableaux et chaînes

### Indices d'un tableau

Les indices commencent à 0.

Un tableau de taille 5 possède les indices :

```text
0, 1, 2, 3, 4
```

Accéder à l'indice 5 dépasse le tableau et provoque un comportement indéfini.

### Fonctions de chaînes

- `strlen` calcule la longueur d'une chaîne.
- `strcpy` copie une chaîne.
- `strcmp` compare deux chaînes.

## Partie 5 - Pointeurs

### Définition

Un pointeur est une variable qui contient une adresse mémoire.

### Opérateur `&`

L'opérateur `&` donne l'adresse d'une variable.

Exemple :

```c
int *p = &x;
```

### Opérateur `*`

Dans une déclaration, `*` indique que la variable est un pointeur.

Dans une utilisation, `*` permet d'accéder à la valeur pointée.

### Pourquoi utiliser des pointeurs dans `min_max` ?

En C, une fonction ne peut retourner directement qu'une seule valeur.

Les pointeurs permettent de modifier plusieurs variables dans la fonction et donc de récupérer le minimum et le maximum.

## Mini-projet

La fonction `jouer` contient toute la logique du jeu.

Elle demande des essais tant que le nombre secret n'est pas trouvé et retourne le nombre de tentatives.
