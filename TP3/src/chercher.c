#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main(void) {
    int tab[TAILLE];
    int valeur, trouve = 0;

    srand(time(NULL));

    for (int i = 0; i < TAILLE; i++)
        tab[i] = rand() % 100;

    printf("Tableau :\n");
    for (int i = 0; i < TAILLE; i++)
        printf("%d ", tab[i]);
    printf("\n");

    printf("\nEntrez l'entier à chercher : ");
    scanf("%d", &valeur);

    for (int i = 0; i < TAILLE; i++) {
        if (tab[i] == valeur) {
            trouve = 1;
            break;
        }
    }

    if (trouve)
        printf("Résultat : entier présent\n");
    else
        printf("Résultat : entier absent\n");

    return 0;
}
