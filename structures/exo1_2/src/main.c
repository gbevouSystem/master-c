#include "produit.h"
#include <stdio.h>

int main() {
    Produit produit1 = {101, 1, 89.99, 50};
    Produit produit2 = {202, 2, 199.99, 30};

    Produit produit3, produit4;

    printf("Entrez les informations pour le produit 3 :\n");
    printf("Reference : ");
    scanf("%d", &produit3.reference);
    printf("Code (1: Carte Mere, 2: Processeur, 3: Barrette Memoire, 4: Carte Graphique) : ");
    scanf("%d", &produit3.code);
    printf("Prix : ");
    scanf("%f", &produit3.prix);
    printf("Quantite disponible : ");
    scanf("%d", &produit3.quantite);

    printf("Entrez les informations pour le produit 4 :\n");
    printf("Reference : ");
    scanf("%d", &produit4.reference);
    printf("Code (1: Carte Mere, 2: Processeur, 3: Barrette Memoire, 4: Carte Graphique) : ");
    scanf("%d", &produit4.code);
    printf("Prix : ");
    scanf("%f", &produit4.prix);
    printf("Quantite disponible : ");
    scanf("%d", &produit4.quantite);

    printf("\nProduit 1 :\n");
    afficherProduit(produit1);

    printf("\nProduit 2 :\n");
    afficherProduit(produit2);

    printf("\nProduit 3 :\n");
    afficherProduit(produit3);

    printf("\nProduit 4 :\n");
    afficherProduit(produit4);

    Produit produitPlusCher = clonerProduitCher(produit3, produit4);

    printf("\nProduit le plus cher cloné :\n");
    afficherProduit(produitPlusCher);

    return 0;
}
