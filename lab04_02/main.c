#include <stdio.h>
#include <stdlib.h>

int main()
{
    //baze de numeratie
    //pb 1
//    long long int x;
//    int b, c;
//    scanf("%lli %d", &x, &b);
//    if(x != 0)
//        while(x != 0)
//        {
//            c = x % b;
//            printf("%x", c); //hexazecimal
//            x /= b;
//        }
//    else
//        printf("%lli", x);

//    //pb 2
//    double x;
//    unsigned int b, k, c;
//    scanf("%f %d %d", &x, &b, &k);
//     if(x != 0)
//        while(x != 0 && k !=0)
//        {
//            c = x * b;
//            printf("%x", c);
//            x = (x * b) - (int)(x * b);
//            k--;
//        }
//    else
//        printf("%lli", x);


    //pb 8
    int a, b;
    scanf("%d%d", &a, &b);
    if(a == 0 && b < 0)
    {
        puts("imposibil");
        return 0;
    }
    double r = 1;
    for(int i = 0; i < abs(b); i++)
        r = r * a;
    if(b < 0)
        r = 1/r;
    printf("%1.5f\n", r);
    return 0;
}
