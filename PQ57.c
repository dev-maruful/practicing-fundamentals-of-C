// create a structure to store vectors. then make a function to return sum of 2 vectors

#include <stdio.h>

typedef struct vector
{
    int x;
    int y;
} vec;

void printSum(vec v1, vec v2);

int main()
{
    vec v1 = {5, 10};
    vec v2 = {3, 7};

    printSum(v1, v2);

    return 0;
}

void printSum(vec v1, vec v2)
{
    vec sum = {v1.x + v2.x, v1.y + v2.y};

    printf("Sum of x is: %d\n", sum.x);
    printf("Sum of y is: %d\n", sum.y);
}
