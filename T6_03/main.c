#include <stdio.h>
#include <stdlib.h>

//4
void myswap(char* c, char* d)
{
    char aux = *c;   // Salvăm valoarea la care se află pointerul c
    *c = *d;          // Atribuim valoarea la care se află pointerul d la locația lui c
    *d = aux;         // Atribuim valoarea salvată a lui c la locația lui d
}

int main()
{
    char s[] = "abcdfa";
    int n = sizeof(s) / sizeof(char);  // Calculăm lungimea șirului
    for(int iter = 0; iter < n; iter++) // Parcurgem de n ori
    {
        for(int i = 0; i < n - 1; i++)  // Comparăm caracterele adiacente
        {
            if (s[i] < s[i+1])  // Comparăm și facem swap dacă sunt în ordine greșită
                myswap(s + i, s + i + 1);  // Facem schimbul efectiv
        }
    }
    puts(s);  // Afișăm șirul sortat
    return 0;
}
