#include <stdio.h>
#include <stdlib.h>
#include "POE.h"
#define MAX_H 52
#define MAX_W 100

int main()
{
    int H, W;
    char a[H][W];

    create_empty_map(2, 3, a);
    print_map(2, 3, a);

    printf("\n");


    //----------------------C-------------------------

    char rows[H*W]; //nr total de elemente
    int cols[H*W];

    char x;
    scanf("%d %d %c", &H, &W, &x);

    printf("%d\n", find_in_map(H, W, a, x, rows, cols));

    int nr = find_in_map(H, W, a, x, rows, cols);

    //nr de aparitii

    //rows
    for(int i = 0; i < nr; i++)
        printf("%c ", rows[i]);

    //cols
    for(int i = 0; i < nr; i++)
        printf("%d ", cols[i]);
    printf("\n");
    return 0;
}
