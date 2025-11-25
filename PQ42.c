// write a function to count the number of odd numbers in an array

#include <stdio.h>

void countOdd(int arr[], int n);

int main()
{
    int arr[5] = {1, 2, 3, 7, 5};

    countOdd(arr, 5);

    return 0;
}

void countOdd(int arr[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count++;
        }
    }

    printf("the count of odd numbers in this array is: %d\n", count);
}