#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    // Opérations arithmétiques
    printf("Addition : %d + %d = %d\n", a, b, a + b);
    printf("Soustraction : %d - %d = %d\n", a, b, a - b);
    printf("Multiplication : %d * %d = %d\n", a, b, a * b);
    printf("Division : %d / %d = %d\n", a, b, a / b);
    printf("Modulo : %d %% %d = %d\n", a, b, a % b);

    // Opérateurs logiques/comparaison
    printf("a est-il égal à b ? %d\n", a == b);
    printf("a est-il supérieur à b ? %d\n", a > b);

    return 0;
}
