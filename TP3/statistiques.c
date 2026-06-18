#include <stdio.h>

int somme_notes(int notes[], int taille);
double moyenne_notes(int notes[], int taille);
int note_minimum(int notes[], int taille);
int note_maximum(int notes[], int taille);

int somme_notes(int notes[], int taille)
{
    int somme = 0;

    for (int i = 0; i < taille; i++)
    {
        somme = somme + notes[i];
    }

    return somme;
}

double moyenne_notes(int notes[], int taille)
{
    return (double)somme_notes(notes, taille) / taille;
}

int note_minimum(int notes[], int taille)
{
    int minimum = notes[0];

    for (int i = 1; i < taille; i++)
    {
        if (notes[i] < minimum)
        {
            minimum = notes[i];
        }
    }

    return minimum;
}

int note_maximum(int notes[], int taille)
{
    int maximum = notes[0];

    for (int i = 1; i < taille; i++)
    {
        if (notes[i] > maximum)
        {
            maximum = notes[i];
        }
    }

    return maximum;
}

int main(void)
{
    int notes[8] = {14, 17, 9, 12, 18, 11, 15, 13};
    int taille = 8;

    printf("Somme : %d\n", somme_notes(notes, taille));
    printf("Moyenne : %.2f\n", moyenne_notes(notes, taille));
    printf("Minimum : %d\n", note_minimum(notes, taille));
    printf("Maximum : %d\n", note_maximum(notes, taille));

    return 0;
}
