#include "produit.h"
#include <stdio.h>

void afficherProduit(Produit p) {
    printf("Reference: %d\nCode: %d\nPrix: %.2f\nQuantite: %d\n", p.reference, p.code, p.prix, p.quantite);
}

Produit clonerProduitCher(Produit p1, Produit p2) {
    return (p1.prix > p2.prix) ? p1 : p2;
}
