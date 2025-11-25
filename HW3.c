/*
a. search on what a "nested loop" is and print this pattern using it:
*****
*****
*****
*****
*****

b. write a program to check if a number is prime or not.
c. write a program to print prime numbers in a range.
*/

/*
a. search on what a "nested loop" is and print this pattern using it:
*****
*****
*****
*****
*****
*/

#include <stdio.h>

// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// b.write a program to check if a number is prime or not.

// int main()
// {
//     int n, count = 0;
//     printf("enter a number: ");
//     scanf("%d", &n);

//     if (n <= 1)
//     {
//         printf("the given number is not a prime number\n");
//     }
//     else
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             if (n % i == 0)
//             {
//                 count++;
//             }
//         }

//         if (count == 2)
//         {
//             printf("the given number is a prime number\n");
//         }
//         else
//         {
//             printf("the given number is not a prime number\n");
//         }
//     }

//     return 0;
// }

// c.write a program to print prime numbers in a range.

int main()
{
    for (int i = 2; i <= 100; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}