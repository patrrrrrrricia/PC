#include <stdio.h>

float getsum(float* x, int n)  // Adăugăm parametrul pentru dimensiunea tabloului
{
    float sum = 0;
    for(int i = 0; i < n; i++)  // Folosim n în loc de sizeof(x)/sizeof(float)
        sum += x[i];
    return sum;
}

int main()
{
    float x[] = {-1, 2, -5, 3};  // x are max 10 elemente
    int n = sizeof(x) / sizeof(x[0]);  // Calculăm dimensiunea tabloului
    float s = getsum(x, n);  // Transmitem dimensiunea tabloului la funcția getsum
    printf("%f\n", s);
    return 0;
}
