#include <stdio.h>

int main() {
    int d = 0x10010000;  // valeur exemple

    int bit4_gauche = (d >> 28) & 1;   // 4ème bit de gauche
    int bit20_gauche = (d >> 12) & 1;  // 20ème bit de gauche

    if (bit4_gauche == 1 && bit20_gauche == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
