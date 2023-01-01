#include <stdio.h>
int main(void)
{
    char ch;
    int i;

    while(i<=200){
        ch = i;
        i++;
        printf("%c  %d\n", ch, ch);
    }
    return 0;
}