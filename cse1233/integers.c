//this tells you all of the integers n to n+10
#include <stdio.h>

int main (void)
{
    int num;
    int counter;        //declares variable
    counter = 0;         //initializes counter

    printf ("If you input an integer, n, then it will print all a where a is an integer and (n <= a <= n+10).\n");

    printf ("Enter an integer:  ");
    scanf ("%d", &num);

    while (counter < 10)            //loop ends after 10 times
    {
        printf ("%d\n", num + counter);
        counter++;
    }

    return 0;
}