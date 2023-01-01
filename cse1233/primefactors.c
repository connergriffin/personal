//does not work
#include <stdio.h>
int primefactors(int n);

int main(void)
{
    int n;
    printf("please enter an integer:    ");
    scanf("%d", &n);
    printf("the prime factors of %d are:\n", n);
    primefactors(n);
    printf("\n");

    return 0;
}

int primefactors(int n)
{
    int i;
    i=2;
    while(n > i)
    {
        if(n % i == 0)
        {
            printf("%d  ", i);
            n=n/i;
        }
        else
            i++;
    }
    printf("%d", n);
}