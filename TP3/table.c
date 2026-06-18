#include <stdio.h>

int main(void)
{
    int nombre;

    do
    {
        printf("Nombre (0 pour quitter) : ");
        scanf("%d", &nombre);

        if (nombre != 0)
        {
            for (int i = 1; i <= 10; i++)
            {
                printf("%d x %d = %d\n", nombre, i, nombre * i);
            }
        }

    } while (nombre != 0);

    printf("Au revoir !\n");

    return 0;
}
