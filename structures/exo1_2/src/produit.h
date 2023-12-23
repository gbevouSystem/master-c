#ifndef PRODUIT_H
#define PRODUIT_H

typedef struct {
    int reference;
    int code;
    float prix;
    int quantite;
} Produit;

void afficherProduit(Produit p);
Produit clonerProduitCher(Produit p1, Produit p2);

#endif // PRODUIT_H
