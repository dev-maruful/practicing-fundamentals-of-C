/*
write a function to print n terms of the fibonacci sequence.
*/

#include <stdio.h>

int calcFibo(int n);

int main()
{
    int n;
    printf("enter value of n: ");
    scanf("%d", &n);

    int nTerms = calcFibo(n);
    printf("%d terms of the fibonacci sequence is: %d\n", n, nTerms);

    return 0;
}

int calcFibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }

    int fiboOfN = calcFibo(n - 1) + calcFibo(n - 2);
    return fiboOfN;
}