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


void exercice_4_1(void) {
    int num1, num2;
    char op;

    printf("Entrez num1 : ");
    scanf("%d", &num1);
    printf("Entrez num2 : ");
    scanf("%d", &num2);
    printf("Entrez l'opérateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op);

    int resultat = 0;

    switch (op) {
        case '+': resultat = somme(num1, num2); break;
        case '-': resultat = difference(num1, num2); break;
        case '*': resultat = produit(num1, num2); break;
        case '/': resultat = quotient(num1, num2); break;
        case '%': resultat = modulo(num1, num2); break;
        case '&': resultat = et(num1, num2); break;
        case '|': resultat = ou(num1, num2); break;
        case '~': resultat = negation(num1); break;
        default:
            printf("Opérateur invalide\n");
            return;
    }

    printf("Résultat : %d\n", resultat);
}

void exercice_4_2(void) {
    int choix;
    char nom[100];
    char message[256];

    printf("1 - Lire un fichier\n");
    printf("2 - Écrire dans un fichier\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    if (choix == 1) {
        printf("Nom du fichier : ");
        scanf("%s", nom);
        lire_fichier(nom);
    } else if (choix == 2) {
        printf("Nom du fichier : ");
        scanf("%s", nom);
        getchar(); // consommer \n
        printf("Message : ");
        fgets(message, sizeof(message), stdin);
        ecrire_dans_fichier(nom, message);
    } else {
        printf("Choix invalide\n");
    }
}



