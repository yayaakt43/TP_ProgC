#include <stdio.h>

int main() {
    int compteur = 5;  // à modifier pour tester d'autres valeurs (<10)

    if (compteur >= 10 || compteur < 1) {
        printf("Erreur : compteur doit être entre 1 et 9.\n");
        return 1;
    }

    for (int i = 1; i <= compteur; i++) {

        // première ou dernière ligne : que des étoiles
        if (i == 1 || i == compteur) {
            for (int j = 1; j <= i; j++) {
                printf("* ");
            }
        } else {
            // début
            printf("* ");

            // milieu (i - 2 fois le caractère #)
            for (int j = 1; j <= i - 2; j++) {
                printf("# ");
            }

            // fin
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
