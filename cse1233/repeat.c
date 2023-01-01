//command line arguments

#include <stdio.h>
int main(int argc, char *argv[])                               // instead of void it takes the input in the command line
{
    int count;

    printf("The command line has %d arguments:\n", argc - 1); // -1 because we dont want the name of the file itself
    for (count = 1; count < argc; count++)
        printf("%d: %s\n", count, argv[count]);
    printf("\n");

    return 0;
}