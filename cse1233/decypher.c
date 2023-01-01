#include <stdio.h>
#define SPACE ' '
int main (void)
{
    char ch;
    char cd;

    cd = getchar();
    while (cd != '\n')
    {
        if (cd == SPACE)
            putchar(cd);
        else
            {
            ch = (((cd-33)*3) % 94)+94;
            printf ("%c", ch);
            }
    cd = getchar();
    }
    putchar (cd);

    return 0;
}