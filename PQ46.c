// create a 2D array, storing the tables of 2 and 3.

#include <stdio.h>

int main()
{
    int tables[2][10];

    for (int i = 1; i <= 10; i++)
    {
        tables[0][i - 1] = 2 * i;
        tables[1][i - 1] = 3 * i;
    }

    printf("table of 2 : ");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\t", tables[0][i - 1]);
    }
    printf("\n");

    printf("table of 3 : ");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\t", tables[1][i - 1]);
    }
    printf("\n");

    return 0;
}