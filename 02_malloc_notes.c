#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("Combien de notes ? ");
    scanf("%d", &n);

    int *notes = malloc(n * sizeof(int));
    if (notes == NULL)
    {
        printf("Erreur d'allocation\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
        notes[i] = 10 + i;

    for (int i = 0; i < n; i++)
        printf("notes[%d] = %d\n", i, notes[i]);

    free(notes);
    return 0;
}
