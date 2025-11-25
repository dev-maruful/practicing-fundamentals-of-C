/*
print the factorial of a number n.
*/

#include <stdio.h>

int main()
{
    int n, factorial = 1;
    printf("enter a number: ");
    scanf("%d", &n);

    int i = n;
    do
    {
        if (i == 0)
        {
            printf("factorial of %d is: %d\n", n, factorial);
            break;
        }
        factorial *= i;
        i--;
    } while (i >= 1);

    printf("factorial of %d is: %d\n", n, factorial);

    return 0;
}