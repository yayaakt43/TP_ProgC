#include "fichier.h"
#include <stdio.h>

void lire_fichier(const char *nom) {
    FILE *f = fopen(nom, "r");
    if (!f) {
        perror("Erreur ouverture fichier");
        return;
    }

    char ligne[256];
    while (fgets(ligne, sizeof(ligne), f)) {
        printf("%s", ligne);
    }

    fclose(f);
}

void ecrire_dans_fichier(const char *nom, const char *message) {
    FILE *f = fopen(nom, "a");
    if (!f) {
        perror("Erreur ouverture fichier");
        return;
    }

    fprintf(f, "%s\n", message);
    fclose(f);
}
