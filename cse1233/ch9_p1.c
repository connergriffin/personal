#include <stdio.h>
double min(double x, double y);

int main(void)
{
    double x, y;
    printf("please enter two integers:\n");
    while (scanf("%lf", &x) == 1 && scanf("%lf", &y) == 1)
    {
        printf("the smallest of the two numbers is %lf", min(x,y));
    }
}

double min (double x, double y)
{
    return x < y ? x : y;
}