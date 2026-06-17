#include <stdio.h>

void afficher(void)
{
    int a = 10;
    int b = 20;
    int c = 30;

    printf("a : valeur=%d, adresse=%p\n", a, (void *)&a);
    printf("b : valeur=%d, adresse=%p\n", b, (void *)&b);
    printf("c : valeur=%d, adresse=%p\n", c, (void *)&c);
}

int main(void)
{
    printf("Premier appel :\n");
    afficher();
    printf("\nDeuxieme appel :\n");
    afficher();
    return 0;
}
