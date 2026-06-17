#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *tab = malloc(5 * sizeof(int));
    if (tab == NULL)
        return 1;

    for (int i = 0; i < 5; i++)
    {
        tab[i] = i * 10;
        printf("%d\n", tab[i]);
    }

    free(tab);
    return 0;
}
