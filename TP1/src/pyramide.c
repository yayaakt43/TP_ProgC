#include <stdio.h>

int main(void)
{
    int compteur = 5;   // Doit être strictement inférieur à 10
    int i, j;

    for (i = 1; i <= compteur; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || i == compteur)
            {
                printf("* ");
            }
            else
            {
                printf("# ");
            }
        }
        printf("\n");
    }

    return 0;
}

