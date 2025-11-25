#include <stdio.h>

// write a program to check if a number is divisible by 2 or not

int main()
{
    int num;
    printf("Enter the number: \n");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("The number is divisible by 2\n");
    else
        printf("The number is not divisible by 2\n");

    return 0;
}