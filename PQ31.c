/*
factorial of n using recursion
*/

#include <stdio.h>

int calculateFactorial(int n);

int main()
{
    printf("factorial of %d is %d\n", 1, calculateFactorial(1));

    return 0;
}

int calculateFactorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int factorialOfNMinus1 = calculateFactorial(n - 1);
    int factorialOfN = factorialOfNMinus1 * n;
    return factorialOfN;
}