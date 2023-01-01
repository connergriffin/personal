#include <stdio.h>
#define SPACE ' '
int main (void)
{
    char ch;
    int cd;

    scanf("%d", &cd);
    while (ch != '\n')
    {
        if (ch == SPACE)
            putchar(ch);
        else
            {
            ch = (cd * 49) % 58 + 'A';
            printf ("%c", ch);
            }
    scanf("%d", &cd);
    }
    putchar (ch);

    return 0;
}