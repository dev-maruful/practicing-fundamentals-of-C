/*
keep taking numbers as input from user until user enters an odd number.
*/

#include <stdio.h>

int main()
{
    while (1)
    {
        int n;
        printf("enter a number: ");
        scanf("%d", &n);

        if (n % 2 != 0)
        {
            break;
        }

        printf("%d\n", n);
    }

    return 0;
}