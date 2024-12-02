#include <stdio.h>
#include <stdlib.h>

float* find_smallest(float* a, int n);

int main()
{
    const int n = 3;    // 0 < n <= 100
    float x[n];
    for(int i = 0; i < n; i++)
        *(x + i) = 1.f / (i + 1);  // Modificăm pentru a evita divizarea cu 0
    float* p = find_smallest(x, n);
    printf("%p %f\n", p, *p);  // Afișează adresa și valoarea minimului
    return 0;
}

float* find_smallest(float* a, int n) {
    float* pmin = a;  // Inițializăm pmin să pointeze la primul element
    for(int i = 1; i < n; i++) {
        if (a[i] < *pmin) {
            pmin = &a[i];  // Actualizăm pmin să pointeze la elementul minim
        }
    }
    return pmin;  // Returnăm pointerul la elementul minim din șir
}
