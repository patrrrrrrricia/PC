#include <stdio.h>
#include <stdlib.h>
#include "POE.h"

#define H 4
#define W 6

int main()
{
    char harta[H][W] =
    {
        {'0', '0', '0', '0', '0', '.'},
        {'1', '2', '3', '4', '5', '.'},
        {'A', '.', '.', '.', 'm', '.'},
        {'B', '.', 'A', '.', '.', '1'}
    };

    char string[100]; //suficient pentru cazul general

    //codificare
    encode(H, W, harta, string);
    printf("String codificat: %s\n", string);

    //decodificare
    char hartaNoua[H][W];
    decode(H, W, hartaNoua, string);

    //afisare harta decodificata
    printf("Harta decodificată:\n");
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            printf("%c ", hartaNoua[i][j]);
        }
        printf("\n");
    }

    return 0;
}
