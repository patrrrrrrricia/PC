#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, d;

    scanf("%f %f", &a, &b); //interval [a, b]
    scanf("%f %f", &c, &d); //interval [c, d]

    //intersectia celor 3 intervale

    float Max = b;
    if(d > Max)  //max dintre b si d
    {
        Max = d;
    }

    float Min = a;
    if(c < Min) //min dintre b si d
    {
        Min = c;
    }

    // verific care este inceputul și sfarsitul intervalelor
    if (b < c || d < a)
    {
        //intervalele nu se suprapun
        float lungimeTotala = (b - a) + (d - c);
        printf("%f\n", lungimeTotala);
    }
    else
    {
        //intervalele se suprapun
        float lungimeTotala = Max - Min;
        printf("%f\n", lungimeTotala);
    }
    return 0;
}
