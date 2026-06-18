#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int jouer(int secret)
{
    int essai;
    int tentatives = 0;

    do
    {
        printf("Ton essai : ");
        scanf("%d", &essai);

        tentatives++;

        if (essai < secret)
        {
            printf("Trop petit !\n");
        }
        else if (essai > secret)
        {
            printf("Trop grand !\n");
        }

    } while (essai != secret);

    return tentatives;
}

int main(void)
{
    int secret;
    int tentatives;

    srand(time(NULL));
    secret = rand() % 100 + 1;

    printf("=== Devine le nombre (1-100) ===\n");

    tentatives = jouer(secret);

    printf("Bravo ! Trouve en %d tentative(s).\n", tentatives);

    return 0;
}
