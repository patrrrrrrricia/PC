#include <stdio.h>
#include <stdlib.h>

//5
double* creare(int n, int m)
{
    double** a = calloc(n, sizeof(double*));
    for(int i=0; i<n; i++)
        a[i] = calloc(m, sizeof(double));
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            *(*(a+i) + j) = 1.0 / (i +j +1); //a[i][j] = 1.0 / (i +j +1)
}
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    double** a = creare(n, m);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            printf("%f", a[i][j]);
        printf("\n");
    }
    return 0;
}
