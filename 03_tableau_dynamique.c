#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int somme = 0;

    printf("Combien d'entiers voulez-vous stocker ? ");
    scanf("%d", &n);

    int *tableau = malloc(n * sizeof(int));
    if (tableau == NULL)
    {
        printf("Erreur d'allocation\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Valeur %d : ", i + 1);
        scanf("%d", &tableau[i]);
        somme = somme + tableau[i];
    }

    printf("\nValeurs saisies :\n");
    for (int i = 0; i < n; i++)
        printf("%d ", tableau[i]);

    double moyenne = (double)somme / n;
    printf("\nSomme : %d\n", somme);
    printf("Moyenne : %.2f\n", moyenne);

    free(tableau);
    return 0;
}
