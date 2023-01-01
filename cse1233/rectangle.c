//this is a program for the area of a rectangle

#include <stdio.h>
int main (void)

{
    float length; //declares a variable of type float so that the length does not have to be whole numbers
    float width;
    float area;
    
    printf ("Please enter the length of the rectangle:  "); //request that the user input lenght
    scanf ("%f", &length);                                  //assigns the users input to variable length
    
    printf ("Please enter the width of the rectangle:  ");  //request that the user input width
    scanf ("%f", &width);                                   //assigns the users input to variable width

    area = length * width;                                  //calculates the area with the users inputs

    printf ("The area of the triangle is %f\n", area);      //displays the area calculated

    return 0;
}