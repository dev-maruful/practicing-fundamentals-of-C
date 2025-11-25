/*
keep taking numbers as input from user until user enters a number which is multiple of 7.
*/

#include <stdio.h>

int main()
{
    while (1)
    {
        int n;
        printf("enter a number: ");
        scanf("%d", &n);

        if (n % 7 == 0)
        {
            break;
        }

        printf("%d\n", n);
    }

    return 0;
}