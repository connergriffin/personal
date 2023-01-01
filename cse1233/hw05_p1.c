#include <stdio.h>
int fibonacci (int n); //function prototype

int main (void)
{
    int n;              //declares variable n
    do{
    printf("\n");
    printf("Please enter an integer greater than 0 (<= 0 to quit):  ");
    scanf ("%d", &n);                                       //assigns users input to n
    if (n%10 == 3 && n%100 != 13)                           //multiple choice if-else to determine the suffix of the result
    printf("%d is the %drd fibonacci\n", fibonacci(n), n);  //calls the function fibonacci with the users input
    else if (n%10 == 2 && n%100 != 12)
    printf("%d is the %dnd fibonacci\n", fibonacci(n), n);
    else if (n%10 == 1 && n%100 != 11)
    printf("%d is the %dst fibonacci\n", fibonacci(n), n);
    else if(n > 0)
    printf("%d is the %dth fibonacci\n", fibonacci(n), n);
    } while(n > 0);
return 0;
}

int fibonacci (int n)
{ 
    if (n > 2)
        return fibonacci(n - 1) + fibonacci(n - 2);         //recursion that finds the nth fibonacci by adding the two previous fibonacci numbers
    else
        return 1;                                           //the 1st and 2nd fibonacci are both one so this provides the base case
}