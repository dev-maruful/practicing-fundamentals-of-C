/*
a. write a program to print the average of 3 numbers
b. write a program to check if given character is digit or not
c. write a program to print the smallest number
*/

// a. write a program to print the average of 3 numbers
#include <stdio.h>

// int main()
// {
//     int num1, num2, num3;
//     float avg;

//     printf("Enter first number: ");
//     scanf("%d", &num1);
//     printf("Enter second number: ");
//     scanf("%d", &num2);
//     printf("Enter third number: ");
//     scanf("%d", &num3);

//     avg = (num1 + num2 + num3) / 3;

//     printf("The average is: %f", avg);

//     return 0;
// }

// b. write a program to check if given character is digit or not

#include <ctype.h>

// int main()
// {
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c", &ch);

//     // solution 1
//     // ch >= '0' && ch <= '9' ? printf("The character is digit\n") : printf("The character is not digit\n");

//     // solution 2
//     isdigit(ch) ? printf("The character is digit\n") : printf("The character is not digit\n");

//     return 0;
// }

// c. write a program to print the smallest number

int main()
{
    int a = 2, b = 3, c = 4;

    if (a < b && a < c)
    {
        printf("a is smallest\n");
    }
    else if (b < a && b < c)
    {
        printf("b is smallest\n");
    }
    else
    {
        printf("c is smallest\n");
    }

    return 0;
}