#ifndef POE_H_INCLUDED
#define POE_H_INCLUDED

void create_empty_map(int H, int W, char a[H][W]);
void print_map(int H, int W, char a[H][W]);
int find_in_map(int H, int W, char a[H][W], char x, char rows[], int cols[]);

#endif // POE_H_INCLUDED
