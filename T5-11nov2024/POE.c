#include "POE.h"
#include <stdio.h>

void create_empty_map(int H, int W, char a[H][W])
{
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
            a[i][j] = '.';
    }
    //plasarea jucatorilor A si B
    a[0][0] = 'A';         //jucatorul A in coltul din stanga sus
    //a[0][1] = 'A';
    a[H-1][W-1] = 'B';     //jucatorul B in coltul din dreapta jos
}

void print_map(int H, int W, char a[H][W])
{
    for(int i = 0; i < 2; i++)
    {
        printf(" ");
        for(int j = 0; j < W; j++)
        {
            if(i == 0)
                printf("%d", (j + 1) / 10);
            else
                printf("%d", (j + 1) % 10);
        }
        printf("\n");
    }
    for(int i = 0; i <H; i++)
    {
        if(i >= 26)
            printf("%c", 'a' + i - 26);
        else
            printf("%c", 'A' + i);
        for(int j = 0; j < W; j++)
            printf("%c", a[i][j]);
        printf("\n");
    }
}

int find_in_map(int H, int W, char a[H][W], char x, char rows[], int cols[])
{
    int nrAp = 0;  //numar cate apariții ale lui x sunt
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (a[i][j] == x)
            {
                if(i >= 26)
                    rows[nrAp]='a' + i - 26;
                else
                    rows[nrAp] = 'A' + i;  //litera corespunzatoare randului (A, B, C, ...)
                cols[nrAp] = j + 1;    //pozitia coloanei ca număr (1, 2, 3, ...)
                nrAp++;
            }
        }
    }
    return nrAp;
}
