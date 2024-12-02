#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "POE.h"

void encode(int H, int W, char a[H][W], char* s)
{
    int index = 0;
    for(int i = 0; i < H; i++)
    {
        for(int j = 0; j < W; j++)
        {
            if(a[i][j] != '.')   //ar dacă celula nu este goală
            {
                if(a[i][j] >= 'A' && a[i][j] <= 'Z')
                {
                    index += sprintf(s + index, "%c%d%d ", a[i][j], i, j); //jucatori
                }
                else if (a[i][j] == 'm')
                {
                    index += sprintf(s + index, "m%d%d ", i, j); //monstri
                }
                else if (a[i][j] >= '0' && a[i][j] <= '9')
                {
                    index += sprintf(s + index, "o%c%d%d ", a[i][j], i, j); //o
                }
            }
        }
    }
    if (index > 0)
        s[index - 1] = '\0'; // Eliminăm spațiul final
}



void decode(int H, int W, char a[H][W], char* s)
{
    memset(a, '.', H * W * sizeof(char)); //resetam harta
    char element;
    int x, y;
    for (int i = 0; s[i] != '\0';)
    {
        if (s[i] == 'm')
        {
            sscanf(s + i, "m%d%d", &x, &y);
            a[x][y] = 'm';
            i += 4;
        }
        else if (s[i] == 'o')
        {
            char num;
            sscanf(s + i, "o%c%d%d", &num, &x, &y);
            a[x][y] = num;
            i += 5;
        }
        else
        {
            sscanf(s + i, "%c%d%d", &element, &x, &y);
            a[x][y] = element;
            i += 4;
        }
    }
}
