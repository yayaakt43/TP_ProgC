#include <stdio.h>

int main() {
    // Tableaux pour 5 étudiant.e.s
    char noms[5][20] = {"Dupont", "Martin", "Durand", "Bernard", "Petit"};
    char prenoms[5][20] = {"Marie", "Pierre", "Luc", "Sophie", "Alice"};
    char adresses[5][50] = {
        "20 Boulevard Niels Bohr, Lyon",
        "22 Boulevard Niels Bohr, Lyon",
        "5 Rue Victor Hugo, Paris",
        "10 Avenue des Champs, Paris",
        "3 Rue de la Paix, Marseille"
    };

    float note_prog[5] = {16.5, 14.0, 15.2, 13.8, 17.0};
    float note_sys[5]  = {12.1, 14.1, 13.5, 15.0, 16.2};

    // Affichage des informations
    for (int i = 0; i < 5; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prénom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Programmation C : %.1f\n", note_prog[i]);
        printf("Note Système d'exploitation : %.1f\n\n", note_sys[i]);
    }

    return 0;
}
