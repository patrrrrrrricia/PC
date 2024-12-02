#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float a, b, c, delta, x1, x2, radical, parteReala, parteImag;
    scanf("%f %f %f", &a, &b, &c);
    x1 = (-b + radical) / (2 * a);
    x2 = (-b - radical) / (2 * a);
    if(a == 0)
    {
        //ec contsanta
        if(b == 0)
        {
            if(c == 0)
                puts("adevarata pt orice x");
            else
                puts("nu are solutii");

        }
        else
        {
            //bx + c = 0
            printf("%f", -c/b);
        }
    }
    delta = b * b - 4 * a * c;
    radical = sqrt(delta);
    if(delta > 0)
    {
        x1 = (-b + radical) / (2 * a);
        x2 = (-b - radical) / (2 * a);
        printf("%f%f\n", x1, x2);
    }
    else if(delta == 0)
    {
        x1 = -b / (2 * a);
        printf("%f", x1);
    }
    //pt delta < 0 (negativ)
    else
    {
        //radacini complexe
        parteReala = -b / (2 * a);
        parteImag = sqrt(-delta) / (2 * a);
        printf("%f + %fi\n", parteReala, parteImag); //i-parteimag
        printf("%f - %fi\n", parteReala, parteImag); //i-parteimag
    }
    return 0;
}
