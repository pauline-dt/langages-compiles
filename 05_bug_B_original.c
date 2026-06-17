#include <stdio.h>

int *creer_tableau(int n)
{
    int tableau[n];
    for (int i = 0; i < n; i++)
        tableau[i] = i;
    return tableau;
}

int main(void)
{
    int *t = creer_tableau(5);
    printf("%d\n", t[0]);
    return 0;
}
