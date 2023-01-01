#include <stdio.h>

int main (void)
{
    int n, m, integer;

    printf("please enter an integer between 99999 and 0:    ");
    scanf("%d", &integer);
    while (integer != 0)
    {
        for(n = 2 ; n <= integer ; n++)
        {
            if (integer % n == 0)
            break;
        }
        if (n != integer)
            printf("%d is not prime.\n", integer);
        else
            printf("%d is prime.\n", integer);
        printf("please enter an integer between 99999 and 0:    ");
        scanf("%d", &integer);
    }
    printf("\n");
    return 0;
}