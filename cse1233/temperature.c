//a program to convert celsius to fahrenheit
#include <stdio.h>
int main (void)

{
    float temp_f; //float for more precision + this variable will represent the temperature in fahrenheit
    float temp_c; //float for more precision + this variable will represent the temperature in celsius

    printf ("Please enter the temperature in Celsius:  ");      //request that user input temperature in Celsius
    scanf ("%f", &temp_c);                                      //assigns the users input to variable temp_c

    temp_f = (1.8 * temp_c) + 32;                               //takes the users input and converts it to fahrenheit

    printf ("The temperature in Fahrenheit is %f.\n", temp_f);  //displays the conversion to the user

    return 0;
}