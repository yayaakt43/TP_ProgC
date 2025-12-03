#include <stdio.h>

int main() {
    int compteur = 5;  // modifier pour tester

    if (compteur >= 10 || compteur < 1) {
        printf("Erreur : compteur doit être entre 1 et 9.\n");
        return 1;
    }

    int i = 1;
    while (i <= compteur) {

        if (i == 1 || i == compteur) {
            // lignes pleines d'étoiles
            int j = 1;
            while (j <= i) {
                printf("* ");
                j++;
            }
        } else {
            printf("* ");  // début

            int j = 1;
            while (j <= i - 2) {  // # au milieu
                printf("# ");
                j++;
            }

            printf("* ");  // fin
        }

        printf("\n");
        i++;
    }

    return 0;
}
