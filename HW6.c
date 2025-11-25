/*
a. in an array of numbers, find how many times does a number 'x' occurs.
b. write a program to print the largest number in an array.
c. write a program to insert an element at the end of an array.
*/

#include <stdio.h>

// a. in an array of numbers, find how many times does a number 'x' occurs.

// int findCount(int arr[], int length, int number);

// int main()
// {
//     int arr[6] = {1, 2, 3, 2, 1, 2};

//     int count = findCount(arr, 6, 1);

//     printf("the number %d occurs in this array %d times\n", 1, count);

//     return 0;
// }

// int findCount(int arr[], int length, int number)
// {
//     int count = 0;

//     for (int i = 0; i < length; i++)
//     {
//         if (arr[i] == number)
//         {
//             count++;
//         }
//     }

//     return count;
// }

// b. write a program to print the largest number in an array.

// void printLargest(int arr[], int n);

// int main()
// {
//     int arr[10] = {1, 2, 3, 4, 5, 6, 70, 8, 9, 10};

//     printLargest(arr, 10);

//     return 0;
// }

// void printLargest(int arr[], int n)
// {
//     int largest = arr[0];

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > largest)
//         {
//             largest = arr[i];
//         }
//     }

//     printf("The largest number in this array is : %d\n", largest);
// }

// c. write a program to insert an element at the end of an array.

void insertElement(int arr[], int length, int element);

int main()
{
    int arr[2] = {1, 2};

    insertElement(arr, 2, 3);

    for (int i = 0; i < 3; i++)
    {
        printf("%d \t", arr[i]);
    }

    printf("\n");

    return 0;
}

void insertElement(int arr[], int length, int element)
{
    arr++;
    arr[length] = element;
}