#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *nom = malloc(10 * sizeof(char));
    if (nom == NULL)
        return 1;

    strcpy(nom, "Alexandre");
    printf("%s\n", nom);
    free(nom);
    return 0;
}
