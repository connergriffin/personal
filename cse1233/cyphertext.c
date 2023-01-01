#include <stdio.h>
#define SPACE ' '
int main (int argc, const char *argv[])
{
    FILE *fp;
    FILE *fp1;
    char ch;
    char cd;
    char *name;
    
    if(argc != 2){
        printf("usage: %s \"filename\"", argv[0]);
    }
    if(argc == 2){
    name = strcat(argv[1], "encrypted");
    fp = fopen(argv[1], "r");
    fp1 = fopen(name, "a+");
    ch = getc(fp);
    while (ch != EOF)
    {
        if (ch == SPACE)
            putc(ch, fp1);
        else
            {
            cd = (63 * ch) % 94 + 33;
            putc (cd, fp1);
            
            }
        ch = getc(fp);
    }
    putc (ch, name);
    printf("\n");
    }
    fclose(fp);
    fclose(fp1);
    return 0;
}