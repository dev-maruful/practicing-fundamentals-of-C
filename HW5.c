/*
a. write a program in C to find the maximum number between two numbers using a pointer.
b. write a program in C to print the elements of an array in reverse order.
c. write a program in C to print all the letters in English alphabet using a pointer.
*/

#include <stdio.h>

// a. write a program in C to find the maximum number between two numbers using a pointer.

// int main()
// {
//     int a = 8, b = 5;

//     int *ptr1 = &a;
//     int *ptr2 = &b;

//     if (*ptr1 > *ptr2)
//     {
//         printf("a is maximum\n");
//     }
//     else
//     {
//         printf("b is maximum\n");
//     }

//     return 0;
// }

// b. write a program in C to print the elements of an array in reverse order.

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    for (int i = 4; i >= 0; i--)
    {
        // int *ptr = &arr[i];
        printf("%d,", arr[i]);
        // ptr--;
    }

    return 0;
}

// c. write a program in C to print all the letters in English alphabet using a pointer.

// int main()
// {
//     for (char i = 'a'; i <= 'z'; i++)
//     {
//         char *ptr = &i;
//         printf("%c\n", *ptr);
//     }

//     return 0;
// }