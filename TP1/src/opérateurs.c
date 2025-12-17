#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int a = 16;
    int b = 3;

    // Opérateurs arithmétiques
    printf("Addition (a + b) = %d\n", a + b);
    printf("Soustraction (a - b) = %d\n", a - b);
    printf("Multiplication (a * b) = %d\n", a * b);

    // Division entière
    printf("Division (a / b) = %d\n", a / b);

    // Modulo
    printf("Modulo (a %% b) = %d\n", a % b);

    // Opérateurs de comparaison (logiques)
    bool egal = (a == b);
    bool superieur = (a > b);

    printf("a == b : %s\n", egal ? "true" : "false");
    printf("a > b  : %s\n", superieur ? "true" : "false");

    return 0;
}
