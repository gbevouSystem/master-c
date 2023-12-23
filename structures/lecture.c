#include <stdio.h>
#include <stdlib.h>
#include <time.h>


typedef struct {
    float x, y;
} Coord;

typedef struct {
    const int tx;
    const int ty;
    Coord coord;
    int px, py;
    char lettre;
} Personnage;

//Valeurs par defaut
#define DEFAUT { 50, 100, 1.5f, 2.5f, rand()%100, rand()%100, "A"}

int main(){
    srand(time(NULL));
    
    //Initialisation de tous les champs dans l'orde (y compris structures imbriquees)
    Personnage p1 = { 50, 100, 1.5f, 2.5f, rand()%100, rand()%100, "A"};
    printf("%d-%d-%f-%f-%d-%d-%c\n", p1.tx, p1.py, p1.coord.x, p1.coord.y, p1.px, p1.py, p1.lettre);

    //Initialisation dans l'ordre les elements manquants sont automatiquement mis a 0
    Personnage p2 = {50, 100};
    printf("%d-%d-%f-%f-%d-%d-%c\n", p2.tx, p2.py, p2.coord.x, p2.coord.y, p2.px, p2.py, p2.lettre);

    //PRATIQUE POUR METTRE TOUT A 0
    Personnage p3 = {0};
    printf("%d-%d-%f-%f-%d-%d-%c\n", p3.tx, p3.py, p3.coord.x, p3.coord.y, p3.px, p3.py, p3.lettre);

    //Initialisation avec selection de champs (pas d'ordre a respecter, les champs manquants sont mis a 0)
    Personnage p4 = {.tx = 50, .lettre = 'b', .coord.x = 50.0f};
    printf("%d-%d-%f-%f-%d-%d-%c\n", p4.tx, p4.py, p4.coord.x, p4.coord.y, p4.px, p4.py, p4.lettre);

    //CREATION D'UNE INITIALISATION PAR DEFAUT
    Personnage p5 = DEFAUT;
    printf("%d-%d-%f-%f-%d-%d-%c\n", p5.tx, p5.py, p5.coord.x, p5.coord.y, p5.px, p5.py, p5.lettre);

    return 0;
}


/*
* LES COPIES ET LES AFFECTATIONS DE STRUCTURE A STRUCTURE DE MEME TYPE SONT AUTORISEES,
* PAR EXEMPLE:
*       Coord pt1, pt2;
*       pt1.x = 100;
*       pt1.y = 200;
*
*       pt2 = pt1;
*
* LA STRUCTURE pt1 EST INITIALISEE AVEC LES VALEURS 100 ET 200, ENSUITE LA STRUCTURE 
* pt1 EST AFFECTEE A LA STRUCTURE DE MEME TYPE pt2. LES VALEURS DE pt1 SONT RECOPIEES DANS pt2
*/