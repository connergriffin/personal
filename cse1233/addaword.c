// uses fprintf, fscanf, and rewind
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41

int main(int argc, char *argv[])
{
    FILE *fp;
    char words[MAX];

    if (argc != 2)
    {
    if ((fp = fopen("wordy", "a+")) == NULL)
    {
        fprintf(stdout, "cant open\"wordy\" file. \n.");
        exit(EXIT_FAILURE);
    }}
    else
    {
    if ((fp = fopen(argv[1], "a+")) == NULL)
    {
        fprintf(stdout, "cant open\"wordy\" file. \n.");
        exit(EXIT_FAILURE);
    }
    }

    
    puts("enter words to add to the file; press the #");
    puts("key at the beginning of a line to terminate");
    while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
        fprintf(fp, "%s\n", words);
    
    puts("file contents:");
    rewind(fp);
    while (fscanf(fp, "%s", words) == 1)
        puts(words);
    puts("done");
    if (fclose(fp) != 0)
        fprintf(stderr, "error closing file\n");

        return 0;
}