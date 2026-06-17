# Réponses TP4

## Partie 1

Les adresses de `a`, `b` et `c` sont proches. Dans mon test il y avait 4 octets entre chaque variable.

Sur ma machine la stack grandit généralement vers les adresses plus petites.

Quand la fonction `afficher` se termine les variables locales sont détruites automatiquement.

## Partie 2

### Programme A

La boucle utilise `i <= 5`, alors que les indices vont de 0 à 4. La correction est `i < 5`.

Le sanitizer signale une erreur `heap-buffer-overflow`.

### Programme B

Le programme retourne l'adresse d'un tableau local. Le tableau disparaît à la fin de la fonction. Il faut utiliser `malloc`.

### Programme C

Le programme réserve seulement 5 caractères pour le mot Alexandre. Il faut 10 caractères avec le caractère `\0`.

## Partie 3

En C, on utilise des pointeurs. En C++, on peut utiliser une référence avec `&` ce qui simplifie la syntaxe.

## Tableau récapitulatif

| Concept | Définition | Exemple |
|---|---|---|
| Stack | Zone mémoire des variables locales | `int age = 18;` |
| Heap | Zone mémoire dynamique | `malloc` ou `new` |
| malloc | Alloue de la mémoire | `malloc(5 * sizeof(int))` |
| free | Libère la mémoire | `free(tab);` |
| Memory leak | Mémoire allouée mais jamais libérée | `malloc` sans `free` |
| Dangling pointer | Pointeur vers une zone qui n'existe plus | pointeur après `free` |
| Buffer overflow | Dépassement de la taille d'un tableau | écrire dans `tab[5]` |
| Classe | Modèle pour créer des objets | `class Etudiant` |
| Constructeur | Méthode appelée à la création | `Etudiant(...)` |
| Encapsulation | Attributs privés et méthodes publiques | `private` et `public` |
