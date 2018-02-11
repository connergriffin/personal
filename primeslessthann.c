#include <stdio.h>

int main (void)
{
    int n, m, integer, counter, pcounter;
    counter = 0;

    printf("Please enter an integer between 99999 and 0:    ");     //asks the user for an integer
    scanf("%d", &integer);                                          //assigns input to the variable integer
    printf("\n");

    for(n = 2 ; n <= integer ; n++)
    {
        m = 1;                              //assigns 1 to m
        while (m < n)                       //while loop that makes sure that the numbers used to check if n is prime are less than n
        {
            m++;                            //increments m by one
            if (n % m == 0 && m != n)
                //printf("%-*d  ", 5, m);
                break;

        }
        if (n == m)               //if the lowest integer, greater than or equal to 2, that divides n is n itself then n is prime
        {
            if(counter == 30)     //this if else is for formatting so that numbers do not get cut off
            {
                printf("\n");
                counter = 0;
            }
            else
                counter++;
            printf("%-*d  ", 5, n); //prints n if n is equal to the greatest integer that divides it
            pcounter++;
        }
    }
    printf("\nThe number of primes less than %d is %d\n", integer, pcounter);   //i thought this was kind of interesting so i added it

    return 0;
}