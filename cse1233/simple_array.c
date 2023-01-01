// this is a very simple example of an array

#include <stdio.h>

int main (void)
{
    int num[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        num[i] = i;
    }
    for (i = 0; i < 10; i++)
    {
        printf ("%d ", num[i]);
    }
    printf ("\n");
    
    return 0;
}