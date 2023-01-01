#include <stdio.h>
#include <string.h>

int main (void)
{
    char word[40];
    int word_len, index;

    printf ("Please enter a single word.\n");           //requests the users input
    scanf ("%s", word);                                 //assigns the users input to the variable word
    word_len = strlen(word);                            //finds the length of the string and assigns it to word_len
    for (index = word_len - 1 ; index >= 0 ; index--)   //assigns each letter to a position in the array
        printf("%c", word[index]);
    printf("\n");

    return 0;
}