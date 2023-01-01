#include <stdio.h>
#include <ctype.h>
int main (void)
{
    char ch;

    ch = getchar();
    while (ch != '\n')
    {
        if (ch == 'z' || ch == 'Z')
            putchar (ch - 25);

        else if (isalpha (ch))
            putchar(ch + 1);
            
        else
            putchar (ch);
        ch = getchar ();
    }
    putchar (ch);

    return 0;
}