#include <stdio.h>
#define SPACE ' '
int main (void)
{
    char ch;
    char cd;

    ch = getchar();
    while (ch != '\n')
    {
        if (ch == SPACE)
            putchar(ch);
        else
            {
            cd = (63 * ch) % 94 + 33;
            printf ("%c", cd);
            
            }
        ch = getchar ();
    }
    putchar (ch);

    return 0;
}