#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    char caractere;  // La lettre représentant le flocon
    int positionX;   // La position horizontale du flocon
    int positionY;   // La position verticale du flocon
} Flocon;

int main() {
    // Initialiser un flocon à la déclaration
    Flocon flocon1 = {'*', 10, 5};

    // Initialiser un autre flocon avec des valeurs aléatoires
    srand(time(NULL));
    Flocon flocon2 = {(char)('A' + rand() % 26), rand() % 80, rand() % 24};

    // Copier chaque flocon
    Flocon flocon3 = flocon1;
    Flocon flocon4 = flocon2;

    // Afficher les valeurs des quatre flocons de manière claire
    printf("Flocon 1 : Caractere = %c, PositionX = %d, PositionY = %d\n", flocon1.caractere, flocon1.positionX, flocon1.positionY);
    printf("Flocon 2 : Caractere = %c, PositionX = %d, PositionY = %d\n", flocon2.caractere, flocon2.positionX, flocon2.positionY);
    printf("Flocon 3 : Caractere = %c, PositionX = %d, PositionY = %d\n", flocon3.caractere, flocon3.positionX, flocon3.positionY);
    printf("Flocon 4 : Caractere = %c, PositionX = %d, PositionY = %d\n", flocon4.caractere, flocon4.positionX, flocon4.positionY);

    return 0;
}
