#include <stdio.h>
#define MSG "im special"

int main(void)
{
    char ar[] = MSG;
    const char *pt = MSG;
    printf("  address of \"im special\": %p\n", "im special");    //exactly the same as MSG
    printf("               address ar: %p\n", ar);                //prints the memory address of the message as the string arrays
    printf("               address pt: %p\n", pt);
    printf("           address of MSG: %p\n", MSG);
    printf("address of \"I'm special.\": %p\n", "I'm special.");  //slightly different from MSG

    return 0;
}