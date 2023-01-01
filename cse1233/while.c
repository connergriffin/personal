// this code is an example of a while loop

#include <stdio.h>

int main(void)
{
    char name[40];
    int counter = 0;

    printf ("please enter your name:  ");
    scanf ("%s", name);

    while (counter <5)
    {
        printf ("(%d)\nHey %s. Lets watch the superbowl together.\n", counter, name);
        counter++; //increments the variable y one 
        //to stop the while loop you need something that makes the condition false
    }

    return 0;
}