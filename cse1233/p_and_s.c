#include <stdio.h>

int main (void)
{
    const char * mesg = "dont be a fool!";
    const char * copy;
    copy = mesg;
    printf("%s\n", copy);
    printf("mesg = %s; &mesg = %p; value = %p\n", mesg, &mesg, mesg);

    return 0;
}