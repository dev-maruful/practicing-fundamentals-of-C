/*
swap 2 numbers, a & b.
*/

#include <stdio.h>

int swap(int *a, int *b);

int main()
{
    int a = 3, b = 5;

    swap(&a, &b);

    printf("a is : %d, b is %d\n", a, b);

    return 0;
}

int swap(int *a, int *b)
{
    int new = *a;
    *a = *b;
    *b = new;
    printf("a is : %d, b is %d\n", *a, *b);
}