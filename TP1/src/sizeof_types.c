#include <stdio.h>

int main() {
    printf("Taille d'un char            : %zu octet(s)\n", sizeof(char));
    printf("Taille d'un short           : %zu octet(s)\n", sizeof(short));
    printf("Taille d'un int             : %zu octet(s)\n", sizeof(int));
    printf("Taille d'un long int        : %zu octet(s)\n", sizeof(long int));
    printf("Taille d'un long long int   : %zu octet(s)\n", sizeof(long long int));
    printf("Taille d'un float           : %zu octet(s)\n", sizeof(float));
    printf("Taille d'un double          : %zu octet(s)\n", sizeof(double));
    printf("Taille d'un long double     : %zu octet(s)\n", sizeof(long double));

    return 0;
}
