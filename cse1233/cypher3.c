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
            cd = (45 * ch) % 58 + 'A';
            printf ("%c", cd);
            }
        ch = getchar ();
    }
    putchar (ch);

    return 0;
}