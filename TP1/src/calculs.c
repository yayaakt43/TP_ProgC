#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    printf("Entrez num1 : ");
    scanf("%d", &num1);

    printf("Entrez num2 : ");
    scanf("%d", &num2);

    printf("Entrez un opérateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("Résultat : %d\n", num1 + num2);
            break;

        case '-':
            printf("Résultat : %d\n", num1 - num2);
            break;

        case '*':
            printf("Résultat : %d\n", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("Résultat : %d\n", num1 / num2);
            else
                printf("Erreur : division par zéro !\n");
            break;

        case '%':
            if (num2 != 0)
                printf("Résultat : %d\n", num1 % num2);
            else
                printf("Erreur : modulo par zéro !\n");
            break;

        case '&':
            printf("Résultat (ET bit-à-bit) : %d\n", num1 & num2);
            break;

        case '|':
            printf("Résultat (OU bit-à-bit) : %d\n", num1 | num2);
            break;

        case '~':
            printf("Résultat (~num1) : %d\n", ~num1);
            printf("Résultat (~num2) : %d\n", ~num2);
            break;

        default:
            printf("Opérateur non reconnu !\n");
            break;
    }

    return 0;
}


