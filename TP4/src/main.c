#include <stdio.h>
#include <stdlib.h>

#include "operator.h"
#include "fichier.h"
#include "liste.h"

/* Prototypes des fonctions d’entrée */
void exercice_4_1(void);
void exercice_4_2(void);
void exercice_4_7(void);

int main(void) {
    int choix;

    printf("Choisissez l'exercice à exécuter :\n");
    printf("1 - Exercice 4.1 : Calcul avec opérateurs\n");
    printf("2 - Exercice 4.2 : Gestion de fichiers\n");
    printf("3 - Exercice 4.7 : Liste de couleurs\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            exercice_4_1();
            break;
        case 2:
            exercice_4_2();
            break;
        case 3:
            exercice_4_7();
            break;
        default:
            printf("Choix invalide.\n");
    }

    return 0;
}

