/*
print the sum of first n natural numbers
n = 4

also print them in reverse
*/

#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        sum += i;
        printf("%d\n", i);
    }

    printf("sum: %d\n", sum);

    return 0;
}