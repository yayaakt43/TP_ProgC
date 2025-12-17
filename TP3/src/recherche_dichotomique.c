#include <stdio.h>

#define TAILLE 100

int main(void) {
    int tab[TAILLE];
    int gauche = 0, droite = TAILLE - 1, milieu;
    int valeur, trouve = 0;

    for (int i = 0; i < TAILLE; i++)
        tab[i] = i * 2;

    printf("Tableau trié :\n");
    for (int i = 0; i < TAILLE; i++)
        printf("%d ", tab[i]);
    printf("\n");

    printf("\nEntrez l'entier à chercher : ");
    scanf("%d", &valeur);

    while (gauche <= droite) {
        milieu = (gauche + droite) / 2;

        if (tab[milieu] == valeur) {
            trouve = 1;
            break;
        } else if (tab[milieu] < valeur) {
            gauche = milieu + 1;
        } else {
            droite = milieu - 1;
        }
    }

    if (trouve)
        printf("Résultat : entier présent\n");
    else
        printf("Résultat : entier absent\n");

    return 0;
}
