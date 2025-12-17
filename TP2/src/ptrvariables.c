#include <stdio.h>

/* Fonction générique pour afficher une valeur en hexadécimal */
void print_hex(void *ptr, size_t size)
{
    unsigned char *p = (unsigned char *)ptr;
    for (size_t i = 0; i < size; i++)
        printf("%02x", p[i]);
}

int main(void)
{
    char c = 0x12;
    short s = 0x1234;
    int i = 0x12345678;
    long int li = 0x11223344;
    long long int lli = 0x1122334455667788LL;
    float f = 2.0f;
    double d = 3.14;
    long double ld = 1.234L;

    /* Pointeurs */
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("=== Avant manipulation ===\n");

    printf("Adresse c : %p, Valeur : ", (void *)pc);
    print_hex(pc, sizeof(c)); printf("\n");

    printf("Adresse s : %p, Valeur : ", (void *)ps);
    print_hex(ps, sizeof(s)); printf("\n");

    printf("Adresse i : %p, Valeur : ", (void *)pi);
    print_hex(pi, sizeof(i)); printf("\n");

    printf("Adresse li : %p, Valeur : ", (void *)pli);
    print_hex(pli, sizeof(li)); printf("\n");

    printf("Adresse lli : %p, Valeur : ", (void *)plli);
    print_hex(plli, sizeof(lli)); printf("\n");

    printf("Adresse f : %p, Valeur : ", (void *)pf);
    print_hex(pf, sizeof(f)); printf("\n");

    printf("Adresse d : %p, Valeur : ", (void *)pd);
    print_hex(pd, sizeof(d)); printf("\n");

    printf("Adresse ld : %p, Valeur : ", (void *)pld);
    print_hex(pld, sizeof(ld)); printf("\n");

    /* Manipulation via pointeurs */
    (*pc)++;
    (*ps)++;
    (*pi)--;
    (*pli) += 2;
    (*plli) -= 3;
    *pf = 1.0f;
    *pd = 2.0;
    *pld = 4.567L;

    printf("\n=== Après manipulation ===\n");

    printf("Adresse c : %p, Valeur : ", (void *)pc);
    print_hex(pc, sizeof(c)); printf("\n");

    printf("Adresse s : %p, Valeur : ", (void *)ps);
    print_hex(ps, sizeof(s)); printf("\n");

    printf("Adresse i : %p, Valeur : ", (void *)pi);
    print_hex(pi, sizeof(i)); printf("\n");

    printf("Adresse li : %p, Valeur : ", (void *)pli);
    print_hex(pli, sizeof(li)); printf("\n");

    printf("Adresse lli : %p, Valeur : ", (void *)plli);
    print_hex(plli, sizeof(lli)); printf("\n");

    printf("Adresse f : %p, Valeur : ", (void *)pf);
    print_hex(pf, sizeof(f)); printf("\n");

    printf("Adresse d : %p, Valeur : ", (void *)pd);
    print_hex(pd, sizeof(d)); printf("\n");

    printf("Adresse ld : %p, Valeur : ", (void *)pld);
    print_hex(pld, sizeof(ld)); printf("\n");

    return 0;
}
