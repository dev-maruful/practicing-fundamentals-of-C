// write a program to store the first n fibonacci numbers.
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ...

#include <stdio.h>

void storeFib(int n);

int main()
{
    storeFib(13);

    return 0;
}

void storeFib(int n)
{
    int arr[n];
    int firstVal = 0, secondVal = 1;
    arr[0] = firstVal;
    arr[1] = secondVal;

    for (int i = 2; i < n; i++)
    {
        arr[i] = firstVal + secondVal;
        firstVal = arr[i - 1];
        secondVal = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }

    printf("\n");
}