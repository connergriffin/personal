#include <stdio.h>
#include <string.h>
void no_space(char * str);


int main(void)
{
char str[24] = "this is a sample string";
no_space(str);
printf("\n");

return 0;
}

void no_space(char * str)
{
    int i;

    for(i = 0 ; i < strlen(str) ; i++)
    {
        if(str[i] != ' ')
            printf("%c", str[i]);
    }
}