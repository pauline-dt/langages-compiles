#include <stdio.h>

int minimum(int a, int b);
int maximum(int a, int b);
int valeur_absolue(int x);
int est_pair(int x);
long factorielle(int n);

int minimum(int a, int b)
{
    if (a < b)
    {
        return a;
    }

    return b;
}

int maximum(int a, int b)
{
    if (a > b)
    {
        return a;
    }

    return b;
}

int valeur_absolue(int x)
{
    if (x < 0)
    {
        return -x;
    }

    return x;
}

int est_pair(int x)
{
    if (x % 2 == 0)
    {
        return 1;
    }

    return 0;
}

long factorielle(int n)
{
    long resultat = 1;

    for (int i = 1; i <= n; i++)
    {
        resultat = resultat * i;
    }

    return resultat;
}

int main(void)
{
    printf("Minimum entre 8 et 3 : %d\n", minimum(8, 3));
    printf("Maximum entre 8 et 3 : %d\n", maximum(8, 3));
    printf("Valeur absolue de -12 : %d\n", valeur_absolue(-12));
    printf("10 est pair : %d\n", est_pair(10));
    printf("Factorielle de 5 : %ld\n", factorielle(5));

    return 0;
}
