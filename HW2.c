/*
a. write a program to check if a given number is Armstrong number or not.
b. write a program to check if the given number is a natural number.
*/

#include <stdio.h>

// b. write a program to check if the given number is a natural number.
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("The given number is a natural number\n");
    }

    return 0;
}