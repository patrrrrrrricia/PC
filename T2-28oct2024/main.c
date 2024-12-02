#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char c1, c2;
    scanf("%d %c %c", &n, &c1, &c2);

    if(c1 == 's' && c2 == 's') //stanga sus
        for(int i = 0; i < n; i++) //linie
        {
            for(int j = 0; j < n - i; j++) //coloana
                printf("#");
            printf("\n");

        }

    else if(c1 == 's' && c2 == 'j') //stanga jos
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < i + 1; j++)
                printf("#");
            printf("\n");

        }
    }

    else if(c1 == 'd' && c2 == 's') //dreapta sus
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < i; j++)
                printf("#");
            printf("\n");

        }
    }

    else if(c1 == 'd' && c2 == 'j') //dreapta jos
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = n - i; j > 0; j--)
                printf("#");
            printf("\n");
        }
    }

    return 0;
}
