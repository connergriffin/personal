#include <stdio.h>
int fibonacci (int m);

int main (void)
{
    int n, m, r;
    r = 1;
    do{
    printf("please enter an integer greater than 0 less than or equal to 0 to quit:     ");
    scanf ("%d", &n);
    do{
    m = r;
    fibonacci(m);
    r++;
    } while (r <= n);
    printf("\n");
    printf("%d ", r);
    printf("\n");
    } while(n > 0);
return 0;
}

int fibonacci (int m)
{
    int s;
    if (m > 2){
        //return fibonacci(m - 1) + fibonacci(m - 2);
        s = fibonacci(m - 1) + fibonacci(m - 2);
        printf("%d ", s);
    }
    else
        return 1;
}