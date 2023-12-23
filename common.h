#include <stdio.h>
#include <stdlib.h>


struct object {
    int number;
    char* name;
    float round_per_secon;
};

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long u64;
typedef char i8;
typedef short i16;
typedef int i32;
typedef long i64;
typedef float f32;


typedef struct ennemy
{
    i8 type;
    f32 nuisance;
    f32 x, y, px, py;
    i32 force;
} Ennemy;


typedef struct {
    i8 type;
    f32 nuisance;
    f32 x, y, px, py;
    i32 force;
} Player_Ennemy;


