#include <stdio.h>
#define LEN 10
int max_arr(const int ar[], int n);

int main (void)
{

}

int max_arr(const int ar[], int n) //finds the largest element of an array
{
    int i;
    int max = ar[0];

    for (i = 1 ; i < n ; i++)
        if(max < ar[i])
            max = ar[i];
    return max;
}

void show_arr(const int ar[], int n)
{
    int i;

}