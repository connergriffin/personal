#include <stdio.h>
#define STLEN 81
int main(void)
{
    char words[STLEN];
    puts("enter a string, please");
    gets(words);
    printf("ur string 2x:\n");
    printf("%s\n", words);
    puts(words);
    puts("done");

    return 0;
}