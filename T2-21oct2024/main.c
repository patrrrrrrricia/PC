#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, d, e, f;
    scanf("%f %f", &a, &b); //intervalul 1 [a,b]
    scanf("%f %f", &c, &d); //intervalul 2 [c,d]
    scanf("%f %f", &e, &f); //intervalul 3 [e,f]

    //intersectia celor 3 intervale

    //maximul dintre val inferioare
    float Max = a;
    if(c > Max)  //max dintre a si c
    {
        Max = c;
    }
    if(e > Max) //max dintre a si e
    {
        Max = e;
    }

    //minimul dintre val superioare
    float Min = b;
    if(d < Min) //min dintre b si d
    {
        Min = d;
    }
    if(f < Min) //min dintre b si f
    {
        Min = f;
    }

    //caut si afisez primul nr intreg din intersectia celor 3 intervale
    int gasit = 0;
    int PrimulNr = 0;
    for(int i = a; i <= b; i++)
    {

        if(i >= a && i <= b)
        {
            gasit = 1;
            PrimulNr = i; //primul nr intreg gasit
        }
    }
    if(gasit == 1)
        printf("%d", PrimulNr);
    else
        printf("Nu exista numar intreg in intersectie\n");
    return 0;
}
