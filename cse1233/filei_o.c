#include <stdio.h>
#define SIZE 40

int main(void)
{
    char ch, filename[SIZE];
    unsigned long count = 0;
    FILE *fp;                                           //you need a file pointer to access a file
    printf("please enter the filename to read:  ");
    gets(filename);
    if((fp = fopen(filename, "r")) == NULL)             //fopen opens the file r to read
    {
        printf("cannot open the file, %s\n", filename);
    }
    else
    {
        puts("successfully opened, now reading\n");
        while((ch = getc(fp)) != EOF)                   //
        {
            putc(ch, stdout);
            count++;
        }
        fclose(fp);
        printf("\nthe file \"%s\" has %lu characters\n", filename, count);
    }

    return 0;
}