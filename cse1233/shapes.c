//prints different shapes using nested loops
#include <stdio.h>
#define ROWS 10
#define COLS 10
int main (void)
{
    int row, col;
    char ch = '|';

    for (row = 0; row < ROWS; row++)
    {
        for (col = 0 + row; col < COLS; col++)
            {
            printf ("%c ", ch);
            }
        printf("\n");
    }

return 0;
}