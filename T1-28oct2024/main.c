#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k;
    int becuri = 0; //initial becurile sunt 0(stinse)
    char comanda;
    scanf("%d", &n);

    while(n > 0 && n <= 32)
    {
        scanf("%c", &comanda);
        if(comanda == 's') //stinge toate becurile
            becuri = 0; //becurile sunt stinse

        else if(comanda == 'a')     //aprinde toate becurile
        {
            becuri = (1 << n) - 1; //deplasez bitul 1 cu n poz la stanga si adaug n biti de 0
            //toti cei n biti sunt setati la
            //valoarea 1(toate becurile sunt aprinse)
        }

        else if(comanda == '0') //stinge becul k, bitul de la poz k devine 0
        {
            scanf("%d", &k);
            becuri = becuri &~(1<<k);

        }
        else if(comanda == '1') //aprinde becul k, bitul de la poz k devine 0
        {
            scanf("%d", &k);
            becuri = becuri | (1 << k);
        }
        else if(comanda == 't') //schimba starea becului k
        {
            scanf("%d", &k);
            becuri = becuri ^ (1 << k);
        }
        else if(comanda == 'x') //termina programul
        {
            return 0;
        }

    }
    return 0;
}


