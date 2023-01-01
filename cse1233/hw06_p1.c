#include <stdio.h>
int difference(long *arr, int n); //prototypes the custom function

int main(void)
{
    int n, i;
    long arr[10] = {1234567, 2345678, 3456789, 4567890, 5678901, 6789012, 7890123, 8901234, 9012345, 12345678}; // initialization of an array i just came up with
    n = 10;
    puts("The elements of arr are:");                                                                           // this tells user that its about to print the elements of arr
    for (i = 0 ; i < n ; i++)
    {
        printf("%ld  ", *(arr + i));                                                                            // for loop that prints the elements using a pointer
    }
    printf("\nThe difference between the largest and smallest element of arr is %d.\n", difference(arr, n));    // calls the function difference to find the difference between the largest and smallest element of arr
    return 0;
}

int difference(long *arr, int n)
{
    int i;
    long max = *arr;                // sets max to the first element of the array
    long min = *arr;                // sets min to the first element of the array
    for (i = 0 ; i < n ; i++)
        {
        if(max < *(arr + i))        // finds the max element in the array by checking whether the next element is larger than max
            max = *(arr + i);       // if it is larger than max then it assigns it to max
        }
    for (i = 0 ; i < n ; i++)   
        {
        if(min > *(arr + i))        // finds the min element in the array by checking whether the next element is smaller than min
            min = *(arr + i);       // if it is smaller than min then it assigns it to min
        }

return max - min;                   // once it finds the max and min of the array it returns the difference
}
