#include <stdio.h>
int imin (int, int);
int imax (int, int);

int main (void)
{
    int evil1, evil2;

    printf ("enter a pair of integers (q to quit): \n");
    while (scanf("%d %d", &evil1, &evil2) == 2)
    {
        printf("the lesser of the two is %d.\n", imin(evil1,evil2));
        printf("the greater of the two is %d\n", imax(evil1, evil2));
        printf("enter a pair of integers (q to quit): \n");
    }
    printf("bye\n");
    return 0;
}

int imin(int n, int m)
{
    int min;

    if (n < m)
        min = n;
    else
        min = m;

    return min;
}

int imax(int n, int m)
{
    //int max;

    if (n > m)
        return n;
    else
        return m;

}