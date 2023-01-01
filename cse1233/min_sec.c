// min_sec converst seconds to minutes and seconds
#include <stdio.h>
#define SEC_PER_MIN 60
int main(void)
{
    int sec, min, left;

    printf ("convert seconds to minutes and seconds!\n"); //good practice to start with a question outside the whil loop for now
    printf ("enter the number of seconds (<=0 to quit):\n");
    scanf ("%d", &sec);
    while (sec > 0)
    {
        min = sec / SEC_PER_MIN;
        left = sec % SEC_PER_MIN;
        printf ("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
        printf ("enter next value (<=0 to quit):\n");
        scanf ("%d", &sec);
    }
    printf ("done!\n");

    return 0;
}