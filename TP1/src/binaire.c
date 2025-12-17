#include <stdio.h>

int main(void)
{
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    for (int i = 0; i < taille; i++)
    {
        int n = nombres[i];
        int bits[32];
        int index = 0;

        printf("%d en binaire : ", n);

        if (n == 0)
        {
            printf("0\n");
            continue;
        }

        while (n > 0)
        {
            bits[index++] = n % 2;
            n /= 2;
        }

        for (int j = index - 1; j >= 0; j--)
            printf("%d", bits[j]);

        printf("\n");
    }

    return 0;
}
