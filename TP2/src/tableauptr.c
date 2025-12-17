#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 11

int main(void)
{
    int tabInt[SIZE];
    float tabFloat[SIZE];

    int *pInt = tabInt;
    float *pFloat = tabFloat;

    srand(time(NULL));

    /* Remplissage aléatoire */
    for (int i = 0; i < SIZE; i++)
    {
        *(pInt + i) = rand() % 100;
        *(pFloat + i) = (float)(rand() % 1000) / 100.0f;
    }

    printf("Tableau d'entiers (avant) :\n");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", *(pInt + i));

    printf("\n\nTableau de flottants (avant) :\n");
    for (int i = 0; i < SIZE; i++)
        printf("%.2f ", *(pFloat + i));

    /* Multiplication par 3 si indice divisible par 2 */
    for (int i = 0; i < SIZE; i++)
    {
        if (i % 2 == 0)
        {
            *(pInt + i) *= 3;
            *(pFloat + i) *= 3.0f;
        }
    }

    printf("\n\nTableau d'entiers (après) :\n");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", *(pInt + i));

    printf("\n\nTableau de flottants (après) :\n");
    for (int i = 0; i < SIZE; i++)
        printf("%.2f ", *(pFloat + i));

    printf("\n");

    return 0;
}
