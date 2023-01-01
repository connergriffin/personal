// this is a program that finds the number of water molecules in a quart of water
#include <stdio.h>

int main (void)
{
    float volume;       //float allows for more precision + quarts represents the volume of water
    double molecules;   //double because this will be a very large number

    printf ("Please enter the amount of water in quarts:  ");   //requests that the user input volume of water in quarts
    scanf ("%f", &volume);                                      //assigns the users input to variable volume

    molecules = ((volume * 950) / 3.0e-25);     //calculates the number of molecules in the users volume of water

    printf ("You have %e molecules of H2O\n", molecules);       //displays the result to the user
    
    return 0;
 }