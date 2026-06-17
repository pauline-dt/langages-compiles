#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *nom = malloc(5 * sizeof(char));
    strcpy(nom, "Alexandre");
    printf("%s\n", nom);
    free(nom);
    return 0;
}
