#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[20];
    char prenom[20];
    char adresse[50];
    float note_prog;
    float note_sys;
};

int main() {
    struct Etudiant etudiants[5];

    // Initialisation des données
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20 Boulevard Niels Bohr, Lyon");
    etudiants[0].note_prog = 16.5;
    etudiants[0].note_sys = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22 Boulevard Niels Bohr, Lyon");
    etudiants[1].note_prog = 14.0;
    etudiants[1].note_sys = 14.1;

    strcpy(etudiants[2].nom, "Durand");
    strcpy(etudiants[2].prenom, "Luc");
    strcpy(etudiants[2].adresse, "5 Rue Victor Hugo, Paris");
    etudiants[2].note_prog = 15.2;
    etudiants[2].note_sys = 13.5;

    strcpy(etudiants[3].nom, "Bernard");
    strcpy(etudiants[3].prenom, "Sophie");
    strcpy(etudiants[3].adresse, "10 Avenue des Champs, Paris");
    etudiants[3].note_prog = 13.8;
    etudiants[3].note_sys = 15.0;

    strcpy(etudiants[4].nom, "Petit");
    strcpy(etudiants[4].prenom, "Alice");
    strcpy(etudiants[4].adresse, "3 Rue de la Paix, Marseille");
    etudiants[4].note_prog = 17.0;
    etudiants[4].note_sys = 16.2;

    // Affichage
    for (int i = 0; i < 5; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prénom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note 1 : %.1f\n", etudiants[i].note_prog);
        printf("Note 2 : %.1f\n\n", etudiants[i].note_sys);
    }

    return 0;
}
