#include <stdio.h>
int main (void)
{
    int a, b, c;
    b = 0;

    printf ("This program will take an even(odd) integer, a, and print all of the the even(odd) integers in [a, a+20].\n\n");

    printf ("Please enter an integer:  ");  //  requests the user for an integer
    scanf ("%d", &a);                       //  assigns input to variable a

    b = a;
    while (b - a != 20)                          //  initiates the condition with the condition that b != 18
    {
        if ((b - a) != 20)
            printf ("%d,    ", b);
        else
            printf ("%d.\n", b);  
        
        b = b + 2;
    }
    
return 0;
}