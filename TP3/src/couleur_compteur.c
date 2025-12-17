#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

typedef struct {
    unsigned char r, g, b, a;
} Couleur;

typedef struct {
    Couleur c;
    int compteur;
} CouleurComptee;

int comparer(Couleur a, Couleur b) {
    return a.r == b.r && a.g == b.g && a.b == b.b && a.a == b.a;
}

int main(void) {
    Couleur tab[TAILLE];
    CouleurComptee distinctes[TAILLE];
    int nbDistinctes = 0;

    srand(time(NULL));

    for (int i = 0; i < TAILLE; i++) {
        tab[i].r = rand() % 256;
        tab[i].g = rand() % 256;
        tab[i].b = rand() % 256;
        tab[i].a = rand() % 256;
    }

    for (int i = 0; i < TAILLE; i++) {
        int trouve = 0;
        for (int j = 0; j < nbDistinctes; j++) {
            if (comparer(tab[i], distinctes[j].c)) {
                distinctes[j].compteur++;
                trouve = 1;
                break;
            }
        }
        if (!trouve) {
            distinctes[nbDistinctes].c = tab[i];
            distinctes[nbDistinctes].compteur = 1;
            nbDistinctes++;
        }
    }

    for (int i = 0; i < nbDistinctes; i++) {
        printf("%02x %02x %02x %02x : %d\n",
               distinctes[i].c.r,
               distinctes[i].c.g,
               distinctes[i].c.b,
               distinctes[i].c.a,
               distinctes[i].compteur);
    }

    return 0;
}
