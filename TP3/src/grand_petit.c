#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main(void) {
    int tab[TAILLE];
    int min, max;

    srand(time(NULL));

    for (int i = 0; i < TAILLE; i++) {
        tab[i] = rand() % 1000 + 1;
    }

    min = max = tab[0];

    for (int i = 1; i < TAILLE; i++) {
        if (tab[i] < min)
            min = tab[i];
        if (tab[i] > max)
            max = tab[i];
    }

    printf("Le numéro le plus grand est : %d\n", max);
    printf("Le numéro le plus petit est : %d\n", min);

    return 0;
}
