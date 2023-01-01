#include <stdio.h>
//this is a program that displays your name and hometown
int main (void)
{
    char first_name[40];    //first_name is an array of 40 char it seems like an ample amount
    char last_name[40];     //last_name is also an array of 40 char
    char hometown[40];      //i also made hometown an array of 40 char

    printf ("Pleasse enter your first name.\n");    //request that the user input their name
    scanf ("%s", first_name);                       //assigns their input to variable first_name
    printf ("Please enter your last name.\n");      //request that the user input last name
    scanf ("%s", last_name);                        //assigns their input to variable last_name
    printf ("Okay, %s %s, where are you from?\n", first_name, last_name);   //request that the user input their hometown
    scanf ("%s", hometown);                                                 //assigns their input to hometown
    printf ("You are %s, %s from %s\n", last_name, first_name, hometown);   /*prints their name and hometown in the form 
                                                                            last_name, first_name and hometown*/
    
    return 0;
}