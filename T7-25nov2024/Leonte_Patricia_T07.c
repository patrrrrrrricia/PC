#include <stdio.h>
#include <stdlib.h>

void citire_dims(int dims[], int *lungime)
{
    scanf("%d", lungime);
    for (int i = 0; i < *lungime; i++)  //*lungime pentru a accesa valoarea
        scanf("%d", &dims[i]);
}

int** alocare_matrice(int dims[], int lungime)
{
    //alocarea matricei dinamice
    int** a= calloc(lungime, sizeof(int *));
    for(int i = 0; i < lungime; i++)
        a[i] = calloc(dims[i], sizeof(int));

    //adaug in matrice numere aleatorii intre 0 si 9
    for(int i = 0; i < lungime; i++)
        for(int j = 0; j < dims[i]; j++)
            a[i][j] = rand() % 10; // a[i][j] = *(*(a+i) + j)
    return a;
}

void afisare_matrice(int** a, int dims[], int lungime)
{
    //afisarea matricei
    for(int i = 0; i < lungime; i++)
    {
        for(int j = 0; j < dims[i]; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}

void stergere_coloana(int** a, int dims[], int lungime, int j)
{
    //stergerea unei coloane
    for (int i = 0; i < lungime; i++)
    {
        if (j < dims[i])
        {
            //parcurg fiecare element al unui rând pentru a muta elementele la stânga
            //după ce o coloană este ștearsa
            for (int k = j; k < dims[i]-1; k++)
            {
                a[i][k] = a[i][k + 1];
            }
            dims[i]--; //reduc dimensiunea pe acest rand
            //a[i] = realloc(a[i], dims[i] * sizeof(int)); //realocarea memoriei pentru fiecare coloana
        }
    }
}

void stergere_rand(int **a, int dims[], int *lungime, int i)
{
    //stergerea unui rând
    if (i < *lungime)
    {
        free(a[i]);
        for (int j = i; j < *lungime - 1; j++)
        {
            a[j] = a[j + 1]; //mut randul
            dims[j] = dims[j + 1]; //mut dimensiunea
        }
        (*lungime)--; //reduc numarul de randuri
        //a[i] = realloc(a[i], (*lungime)*sizeof(int)); //realocarea memoriei pentru fiecare rand
    }
}

void dezalocare_matrice(int **a, int lungime)
{
    //dezalocarea matricei
    for (int i = 0; i < lungime; i++)
    {
        free(a[i]); //*(a + i)

    }
    free(a); //eliberez memoria
}

int main()
{
    int dims[1000], lungime;

    //-----------------citirea sirului dims-----------------
    citire_dims(dims, &lungime);

    //-----------------alocarea matricei---------------------
    int** a = alocare_matrice(dims, lungime);

    //-----------------afișarea matricei---------------------
    printf("matricea initiala:\n");
    afisare_matrice(a, dims, lungime);

    //----------stergere a unei coloane(coloana 2)-----------
    stergere_coloana(a, dims, lungime, 2);
    printf("dupa ce sterg coloana 2:\n");
    afisare_matrice(a, dims, lungime);

    //----------stergere a unui rand(rândul 1)---------------
    stergere_rand(a, dims, &lungime, 1);
    printf("dupa ce sterg randul 1:\n");
    afisare_matrice(a, dims, lungime);

    //----------------dezalocarea matricei-------------------
    dezalocare_matrice(a, lungime);

    return 0;
}
