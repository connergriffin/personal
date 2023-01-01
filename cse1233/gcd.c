#include <stdio.h>
void gcd(int n);

int main(void)
{
    int n;

    printf("please enter an integer:\n");
    scanf("%d", &n);

    printf("\nthe group of units mod %d is:\n", n);
    gcd(n);
    printf("\n");

return 0;
}

void gcd(int n)
{
    int d;
    int m;
    m = 1;
    while(m < n)
    {
        d = m;
        while(d > 0)
        {
            if(m % d == 0 && n % d == 0 && d != 1)
            {
                break;
            }
            if(m % d == 0 && n % d == 0 && d == 1)
            {
                printf("%d  ", m);
            }
            d--;
        }
        m++;
    }
}