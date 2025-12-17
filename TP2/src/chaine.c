#include <stdio.h>

/* 1. Calculer la longueur d'une chaîne */
int longueur_chaine(const char *chaine)
{
    int compteur = 0;

    while (chaine[compteur] != '\0')
    {
        compteur++;
    }

    return compteur;
}

/* 2. Copier une chaîne dans une autre */
void copier_chaine(char *destination, const char *source)
{
    int i = 0;

    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0'; /* Fin de chaîne */
}

/* 3. Concaténer deux chaînes */
void concatener_chaine(char *chaine1, const char *chaine2)
{
    int i = 0;
    int j = 0;

    /* Trouver la fin de la première chaîne */
    while (chaine1[i] != '\0')
    {
        i++;
    }

    /* Ajouter la deuxième chaîne */
    while (chaine2[j] != '\0')
    {
        chaine1[i] = chaine2[j];
        i++;
        j++;
    }

    chaine1[i] = '\0'; /* Fin de chaîne */
}

int main(void)
{
    char chaine1[100] = "Bonjour";
    char chaine2[] = " le monde";
    char copie[100];

    /* Test longueur */
    printf("Longueur de '%s' : %d\n", chaine1, longueur_chaine(chaine1));

    /* Test copie */
    copier_chaine(copie, chaine1);
    printf("Copie de la chaîne : %s\n", copie);

    /* Test concaténation */
    concatener_chaine(chaine1, chaine2);
    printf("Chaîne concaténée : %s\n", chaine1);

    return 0;
}
