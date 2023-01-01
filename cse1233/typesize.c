#include <stdio.h>
int main(void)
{
    printf("type int has a size of %zd bytes\n", sizeof(int));
    printf("type char has a size of %zd byte\n", sizeof(char));
    printf("type long has a size of %zd bytes\n", sizeof(long));
    printf("type long long has a size of %zd bytes\n", sizeof(long long));
    printf("type double has a size of %zd bytes\n", sizeof(double));
    printf("tpe long double has a size of %zd bytes\n", sizeof(long double));

    return 0;
}