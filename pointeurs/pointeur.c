#include <stdio.h>

/*
* EXPLICATION DE JASON CHAMPAGNE DE LA FORMATION VIDEO(YOUTUBE CHANNEL)
*
*   Pointeur : Variable contennant l'adresse d'une autre variable
*   %p  => Affiche une adresse de variable ou un pointeur
*
*
*   [VARIABLE]
*       maVariable      :   Valeur de la variable
*       &maVariable     :   Adresse de la variable
*
*   [POINTEURS]
*       *monPointeur = NULL ou &maVariable
*           (Declaration ou Initialisation de pointeur)
*
*       monPointeur     :   Adresse de la variable pointee
*       *monPointeur    :   Valeur de la variable pointee
*       &monPointeur    :   Adresse du pointeur
*/




void inverser_nombre(int *nb1, int *nb2){
    printf("%p\n", nb1);
    int temporaire = 0;
    temporaire = *nb2;
    *nb2 = *nb1;
    *nb1 = temporaire;
}

//PERMUTER DEUX VARIABLES SANS DECLARER DE POINTEUR
void main2 () {
    int nombre1 = 15;
    int nombre2 = 28;

    printf("Avant permutation: A = %d B = %d\n", nombre1, nombre2);
    inverser_nombre(&nombre1, &nombre2);
    printf("Apres permutation: A = %d B = %d\n", nombre1, nombre2);


    // return 0;
}

//PERMUTER DEUX VARIABLES AVEC DECLARATION DE POINTEUR
//(NORMALEMENT POUR CE PROJET CI C'EST INUTILE L'AUTRE SUFFIT AMPLEMENT)

int main () {
    main2();
    int nombre1 = 15;
    int nombre2 = 28;

    int* pointeurSurNombre1 = &nombre1;
    int* pointeurSurNombre2 = &nombre2; 

    printf("Avant permutation: A = %d B = %d\n", nombre1, nombre2);
    inverser_nombre(pointeurSurNombre1, pointeurSurNombre2);
    printf("Apres permutation: A = %d B = %d\n", nombre1, nombre2);


    return 0;
}