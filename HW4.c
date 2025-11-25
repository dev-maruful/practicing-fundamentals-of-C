/*
a. write a function to find sum of digits of a number
b. write a function to find square root of a number
c. write a function to print "Hot" or "Cold" depends on the temperature user enters
d. make your own pow function
*/

#include <stdio.h>
#include <math.h>

// a. write a function to find sum of digits of a number

int findSum(int n);
float findSquareRoot(int n);
void printHotOrCold(int n);
int ownPow(int number, int power);

// int main()
// {
//     int n;
//     printf("enter a number: ");
//     scanf("%d", &n);
//     printf("sum of digits of the number %d is: %d\n", n, findSum(n));

//     return 0;
// }

int findSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    return sum;
}

// b. write a function to find square root of a number

// int main()
// {
//     int n;
//     printf("enter a number: ");
//     scanf("%d", &n);

//     printf("the square root of the number %d is: %.2f", n, findSquareRoot(n));

//     return 0;
// }

float findSquareRoot(int n)
{
    return pow(n, 0.5);
}

// c. write a function to print "Hot" or "Cold" depends on the temperature user enters

// int main()
// {
//     int temp;
//     printf("enter temperature in celsius: ");
//     scanf("%d", &temp);

//     printHotOrCold(temp);

//     return 0;
// }

void printHotOrCold(int temp)
{
    if (temp > 5)
    {
        printf("Hot\n");
    }
    else
    {
        printf("Cold\n");
    }
}

// d. make your own pow function

int main()
{
    printf("%d\n", ownPow(2, 0));

    return 0;
}

int ownPow(int number, int power)
{
    int pow = 1;

    for (int i = 1; i <= power; i++)
    {
        pow *= number;
    }

    return pow;
}
