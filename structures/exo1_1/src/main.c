// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// #include "helpers.h"

// int main()
// {
//     int i = 1;
//     srand(time(NULL));
//     Panneau panneau1 = {3000, 300, 30, "pin"};
//     Panneau panneau2 = {7000, 100, 50, "chene"};
//     Panneau panneau3 = {rand()%10000, rand()%1000, rand()%40+20,.type_bois = (rand()%2 == 0)?  "hetre": "pin"};
//     Panneau panneau4 = {rand()%10000, rand()%1000, rand()%40+20, .type_bois = (rand()%2 == 0)? "hetre": "chene"};

//     Panneau grand_panneau[4]={panneau1, panneau2, panneau3, panneau4};

//     while (i<5)
//     {
//         printf("Panneau %d=> \nType de Bois: %s\nLongueur: %d\nLargeur: %d\nEpaisseur: %d\n", i, grand_panneau[i-1].type_bois, grand_panneau[i-1].longueur, grand_panneau[i-1].largeur, grand_panneau[i-1].epaisseur);
//         i++;
//     }
    
//     return 0;
// }



#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <time.h>

#include "helpers.h"

int main()
{
    int i = 0;
    srand(time(NULL));
    Panneau panneau1 = {3000, 300, 30, "pin"};
    Panneau panneau2 = {7000, 100, 50, "chene"};
    Panneau panneau3 = {rand() % 10000, rand() % 1000, rand() % 40 + 20, ""};
    Panneau panneau4 = {rand() % 10000, rand() % 1000, rand() % 40 + 20, ""};

    (rand() % 2 == 0) ? strcpy(panneau3.type_bois, "hetre"): strcpy(panneau3.type_bois, "pin");

    (rand() % 2 == 0) ? strcpy(panneau4.type_bois, "hetre"): strcpy(panneau4.type_bois, "chene");

    Panneau grand_panneau[4] = {panneau1, panneau2, panneau3, panneau4};

    while (i < 4)
    {
        printf("Panneau %d => \nType de Bois: %s\nLongueur: %d\nLargeur: %d\nEpaisseur: %d\n", i + 1, grand_panneau[i].type_bois, grand_panneau[i].longueur, grand_panneau[i].largeur, grand_panneau[i].epaisseur);
        i++;
    }

    return 0;
}
