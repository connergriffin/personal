#include <stdio.h>
void toHexaD (long n);  //prototype hexadecimal conversion function
void toOctal (long n);  //prototype octal conversion function
void tobinary (long n);

int main (void)
{
    long n;
    printf("Please enter an integer (q to quit):    "); //requests the users input
    while(scanf("%ld", &n) == 1){                       //while loop whith the condition that the input is valid
        printf("octal conversion:           ");
        toOctal(n);                                     //calls the funtion toOctal to convert the users input to an octal value
        printf("\n");
        printf("hexidecimal conversion:     ");
        toHexaD(n);                                     //calls the function toHexaD to convert the users input to a hexidecimal value
        printf("\n");
        printf("binary conversion:          ");
        tobinary(n);
        printf("\n\n");
        printf("please enter an integer (q to quit):    ");
    }
return 0;
}

void toHexaD (long n)           //custom function that converts an integer to a hexadecimal
{
    int m;
    m = n % 16;                 //calculates the integer mod 16    
    if(n >= 16)                 //as long as n >= 16 then it keeps calling the function
        toHexaD(n / 16);        //recursion that calculates each digit of the converted value
    if(m < 10)                  //if the remainder is less than ten then it prints the digit
        printf("%d", m);
    switch(m)                   //10-15 are represented as a-f so the switch prints the letter according to the remainder
    {
        case 10:
        printf("a");
        break;
        case 11:
        printf("b");
        break;
        case 12:
        printf("c");
        break;
        case 13:
        printf("d");
        break;
        case 14:
        printf("e");
        break;
        case 15:
        printf("f");
    }
}

void toOctal (long n)       //custom function that converts an integer to an octal value
{
    int m;
    m = n % 8;              //calculates the given integer mod 8
    if(n >= 8)              //if n is greater than 8 then it needs to be divided by 8 again until it is no longer greater than 8
        toOctal(n / 8);     //recursion to get the value less than 8 so that you can calculate each digit of the integer as an octal value
    printf("%d", m);        //prints the digits
}

void tobinary (long n)
{
    int m;
    m = n % 2;
    if(n >= 2)
        tobinary(n / 2);
    printf("%d", m);
}