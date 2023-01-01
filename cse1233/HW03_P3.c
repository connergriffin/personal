#include <stdio.h>
#define DAYS_PER_MONTH 30
#define MONTHS_PER_YEAR 12

int main (void)
{
    int days, years, months, left;

    printf  ("This program converts a number of days greater than or equal to 1000 to years months and days.\n\n");   //    this tells the user what the program is for

    do
    {
        printf  ("Enter a number of days greater than 1000 (less than 1000 to quit):  ");        //  request that the user input a number of days greater than 1000
        scanf   ("%d", &days);                                          //  assigns input to the variable days
        
        years =                                                         //  calculates the years without the remainder
        days / (DAYS_PER_MONTH * MONTHS_PER_YEAR);
        
        months =                                                        //  calculates the months from the remainder of the
        (days % (DAYS_PER_MONTH * MONTHS_PER_YEAR)) / DAYS_PER_MONTH;   //  previous calculation and removes the remainder
        
        left =                                                          //  shows the remainder of the previous calculation
        ((days % (DAYS_PER_MONTH * MONTHS_PER_YEAR)) % DAYS_PER_MONTH);
        
        if (days >= 1000)                                               //  "this while loop is here so that when the user
        {                                                               //  inputs a value less than 1000 it does not execute line 28"
        printf  ("%d days are %d years, %d months, and %d days.\n", days, years, months, left);
        }

    }  while (days >= 1000);    //  this is the exit condition as long as the user wants to keep using the program they can

return 0;
}