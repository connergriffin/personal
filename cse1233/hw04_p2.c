#include <stdio.h>

int main(void)
{
    int integer;
    unsigned int counte = 0;
    unsigned int counto = 0;
    unsigned int sume = 0;
    unsigned int sumo = 0;
    float avee = 0;
    float aveo = 0;

    printf ("Please enter some integers enter 0 when you're ready to quit.\n");     //asks for the user to input some integers
    scanf ("%d", &integer);                                                         //assigns input to the variable integer
    while (integer != 0)                                                            //sets up a while loop so that the user can zero to quit
    {
        if (integer % 2 != 0)           //the if else seperates the input into even and odd
        {
            counto++;                   //adds one to the count of odd numbers
            sumo = sumo + integer;      //adds the input to the sum of odd numbers
        }
        else
        {
            counte++;                   //adds one to the count of even numbers
            sume = sume + integer;      //adds the input to the sum of even numbers
        }
        scanf ("%d", &integer);         //scans for new input
    }
    printf("\n");
    if (counte != 0)
        avee = sume / counte;           //only calculates the ave if the count is not zero so that the program does not divide by zero
    if (counto != 0)
        aveo = sumo / counto;
    printf("Thanks for entering the integers! Here's a summary.\n");    //prints the results
    printf("The number of even integers:    %d\n", counte);
    printf("The average of the even integers:    %.2f\n", avee);
    printf("The number of odd integers:    %d\n", counto);
    printf("The average of the odd integers:    %.2f\n", aveo);

    return 0;
}