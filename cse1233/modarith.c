#include <stdio.h> //this program finds the inverse of a number in U(n)
#include <ctype.h>
void units(int n);
int inverse(int a, int n);

int main (void)
{
    int a, b, n;
    n = 1;
    while(n != 0){
    b = 1;
    printf ("enter an integer greater than zero\n");
    scanf ("%d", &n);
    if(n != 0){
    while(b != 0)
    {
    printf("choose an option\n1. find the inverse of an element in the group of units mod %d\n2. be given a list of elements in the group of units mod %d\n0. to quit\n", n, n);
    scanf("%d", &b);
    switch(b)
    {
    case 0:
        break;
    case 1:
        printf ("\nEnter an integer in the group of units mod %d:   ", n);
        scanf ("%d", &a);
        printf("The inverse of %d in U(%d) is %d\n\n", a, n, inverse(a, n));
        break;
    case 2:
        units(n);
        printf("\n\n");
        break;
    default:
        printf("wrong input\n");
        break;
    }
    }
    }
    }
    return 0;
}

void units(int n)
{
    int d;
    int m;
    int s;
    s=0;
    m = 1;
    while(m < n)
    {
        d = m;
        while(d > 0)
        {
            if(m % d == 0 && n % d == 0 && d != 1)
            {
                break;
            }
            if(m % d == 0 && n % d == 0 && d == 1)
            {
                printf("%d  ", m);
                s++;
            }
            d--;
        }
        m++;
    }
    printf("\n\nThe size of U(%d) is %d", n, s);
}

int inverse(int a, int n)
{
    int b = 0;
    int c = 0;
    while (c != 1)
    {
        b++;
        c = (a * b) % n;
    }
    return b;
}