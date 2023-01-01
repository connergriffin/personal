#include <stdio.h>
#include <string.h>

int main (void)
{
    char first_name[40], last_name[40];
    int first_len, last_len;

    printf ("please enter your first name:  ");
    scanf ("%s", first_name);

    printf ("please enter you last name:  ");
    scanf ("%s", last_name);

    first_len = strlen(first_name);
    last_len = strlen(last_name);

    printf ("%s %s\n", first_name, last_name);
    printf ("%*d %*d\n", first_len, first_len, last_len, last_len);

    return 0;
}