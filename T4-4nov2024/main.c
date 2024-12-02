#include <stdio.h>
#include <stdlib.h>

int cifre(long long x, int a[])
{
    int NrCifre = 0;

    //salvez cifrele în ordine inversă
    while (x > 0)
    {
        a[NrCifre] = x % 10; //ultima cifra
        NrCifre++;
        x /= 10;
    }
    return NrCifre;
}

int mul(int na, int a[], int nb, int b[], int c[])
{
    int Putere, Putere1, Putere2, Nr, Nr1, Nr2, Sum, ProdPartial;
    Putere = Putere1 = Putere2 = 1;
    Nr = Nr1 = Nr2 = Sum = ProdPartial = 0;

    //nr cif a primului nr
    scanf("%d", &na);
    for(int i = 0; i < na; i++)
        scanf("%d", &a[i]);

    //nr cif al doilea nr
    scanf("%d", &nb);
    for(int i = 0; i< nb; i++)
        scanf("%d", &b[i]);

    //nr construit din cifrele lui a
    for(int i = 0; i < na; i++)
    {
        Nr1 = Nr1 + a[i] * Putere1;
        Putere1 *= 10;
    }

    //nr construit din cifrele lui b
    for(int i = 0; i < nb; i++)
    {
        Nr2 = Nr2 + b[i] * Putere2;
        Putere2 *= 10;
    }

    while(Nr1 != 0)
    {
        //prod partial
        ProdPartial = (Nr1%10 * Nr2) * Putere;
        Sum += ProdPartial;
        Putere *= 10;
        Nr1 /= 10;
    }
    return cifre(Sum, c); //nr de cifre rezultat
}

int main()
{
    //----------------------A-------------------------
    int n, a[101];

//  long long x;
//  scanf("%lld", &x);

//    for(int i = 0; i < n; i++)
//    {
//        scanf("%d ", &a[i]);
//    }

    int NrCifre = cifre(123, a);

    printf("%d\n", NrCifre);

    for(int i = 0; i < NrCifre; ++i)
    {
        printf("%d ", a[i]);
    }

    //----------------------B-------------------------
    int b[101], c[101], na, nb;
//2
//9 1
//3
//1 3 8

//5
//9, 8, 7, 5, 1

    int Q = mul(na, a, nb, b, c);
    printf("%d\n", Q);

    for(int i = 0; i < Q; ++i)
    {
        printf("%d ", c[i]);
    }
    return 0;
}
