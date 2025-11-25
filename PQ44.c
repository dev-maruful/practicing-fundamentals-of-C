// write a function to reverse an array.

#include <stdio.h>

void reverseArray(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    reverseArray(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d \t", arr[i]);
    }

    printf("\n");

    return 0;
}

void reverseArray(int arr[], int n)
{
    int newArr[5];

    for (int i = 0; i < n; i++)
    {
        newArr[(n - 1) - i] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = newArr[i];
    }
}