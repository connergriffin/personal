#include <stdio.h>

int main(void)
{
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;

    for (index = 0; index < sizeof(days) / sizeof(days[0]); index++)
        printf("month %d has %2d days\n", index +1, days[index]);

    return 0;
}