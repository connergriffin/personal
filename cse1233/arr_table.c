#include <stdio.h>
#define SIZE 12
#define RANGE 12

int main (void)
{
    int time_table [RANGE][SIZE];
    int i, j;

    for(i = 0; i < RANGE; i++){
    for (j = 0; j < SIZE; j++){
        time_table[i][j] = (j + 1) * (i + 1);
    }}

    for (i = 0; i < RANGE; i++){
    for (j = 0; j < SIZE; j++){
        printf ("%-*d", 5, time_table[i][j]);
    }
    printf("\n");
    }

    return 0;
}