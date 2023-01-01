//  this one was tricky, it seems like there is probably a simpler way of of doing it but it works so...
#include <stdio.h>
int main (void)

{
    int count;
    float price, sum, ave_price;
    sum = 0;
    count = 0;

    printf ("This program calculates the average price of up to 10 products.\n\n"); //  this tells the user what the program does

    do
    {
        printf ("Enter the price of a product (0 to quit).\n");     //  requests the users input
        scanf ("%f", &price);                                       //  assigns the users input to the variable
        sum = sum + price;                                          //  this adds the input to the running total

        if (price !=0)                                              //  "I use the if statement so that the program doesn't
        {                                                           //   increment when the user 0s to quit"
            count++;
        }
                                                                    //  "This is similar to the previous if statement.
        if (count > 9)                                              //  I tried to use a for loop with a comma operator
        {                                                           //  so that there could be 2 conditions but that did not
            price = 0;                                              //  work. So, I used these if statements to set it to the
                                                                    //  condition of the do while loop"
        }
        ave_price = sum / count;                                    //  "This line finds the average price. I had this in the loop,
                                                                    //  together with the comment in line 35, to use as a
                                                                    //  diagnostic."
    // printf ("(count = %d) (sum = %f) (ave price = %f)\n", count, sum, ave_price);
    } while (price > 0);    //  sets the exit condition for the do while loop
    printf ("The average price of the %d products is %.2f.\n", count, ave_price);   //  prints the average price of the products

return 0;
}