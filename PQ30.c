/*
sum of first n natural numbers using recursion
*/

#include <stdio.h>

int calculateSum(int n);

int main()
{
    printf("sum of first %d natural numbers is: %d\n", 5, calculateSum(5));

    return 0;
}

int calculateSum(int n)
{
    if (n == 1)
        return 1;
    int sumOfNMinus1 = calculateSum(n - 1);
    int sumOfN = sumOfNMinus1 + n;
    return sumOfN;
}