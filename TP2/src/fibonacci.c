#include <stdio.h>

int main(void)
{
    int n;
    int u0 = 0, u1 = 1, un;
    int i;

    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Veuillez entrer un entier positif.\n");
        return 1;
    }

    /* Cas particuliers */
    if (n >= 0)
        printf("%d", u0);

    if (n >= 1)
        printf(", %d", u1);

    /* Calcul et affichage des termes suivants */
    for (i = 2; i <= n; i++) {
        un = u0 + u1;
        printf(", %d", un);
        u0 = u1;
        u1 = un;
    }

    printf("\n");
    return 0;
}
