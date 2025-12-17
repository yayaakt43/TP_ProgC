#include "liste.h"
#include <stdio.h>
#include <stdlib.h>

void init_liste(struct liste_couleurs *l) {
    l->tete = NULL;
}

void insertion(struct couleur *c, struct liste_couleurs *l) {
    struct noeud *n = malloc(sizeof(struct noeud));
    n->c = *c;
    n->suivant = l->tete;
    l->tete = n;
}

void parcours(struct liste_couleurs *l) {
    struct noeud *courant = l->tete;
    while (courant) {
        printf("R:%d G:%d B:%d A:%d\n",
               courant->c.r, courant->c.g,
               courant->c.b, courant->c.a);
        courant = courant->suivant;
    }
}
