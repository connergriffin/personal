#include <stdio.h>
#include <string.h>
int main (void)
{
    char first_name[40];
    char last_name[40];
    int first_len, last_len;
    
    printf ("Please enter your first name:  "); //  request for the users first name
    scanf ("%s", first_name);                   //  assigns input to the variable
    printf ("Please enter your last name:  ");  //  request for the users last name
    scanf ("%s", last_name);                    //  assigns input to the variable
    first_len = strlen(first_name);             //  assigns the length of first_name as an integer
    last_len = strlen(last_name);   //  assigns the length of last_name to last_len

    if (last_len < 10)                                                                          //  "This if else statement is here for formatting output.
    {                                                                                           //  The way I had it originally, if last_len was greater than 10 then it
        printf ("%s %s\n%d %*d\n", first_name, last_name, first_len, first_len, last_len);      //  would print the second digit underneath the space between the first and
                                                                                                //  last name."
    }
    else
    {
        printf ("%s %s\n%d %*d\n", first_name, last_name, first_len, first_len + 1, last_len);   
    }

    return 0;
}