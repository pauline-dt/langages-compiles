#include <stdio.h>

void min_max(int tab[], int n, int *pmin, int *pmax);
double moyenne(int tab[], int n);

void min_max(int tab[], int n, int *pmin, int *pmax)
{
    *pmin = tab[0];
    *pmax = tab[0];

    for (int i = 1; i < n; i++)
    {
        if (tab[i] < *pmin)
        {
            *pmin = tab[i];
        }

        if (tab[i] > *pmax)
        {
            *pmax = tab[i];
        }
    }
}

double moyenne(int tab[], int n)
{
    int somme = 0;

    for (int i = 0; i < n; i++)
    {
        somme = somme + tab[i];
    }

    return (double)somme / n;
}

int main(void)
{
    int notes[6] = {12, 15, 8, 17, 10, 14};
    int minimum;
    int maximum;

    min_max(notes, 6, &minimum, &maximum);

    printf("Minimum : %d\n", minimum);
    printf("Maximum : %d\n", maximum);
    printf("Moyenne : %.2f\n", moyenne(notes, 6));

    return 0;
}
