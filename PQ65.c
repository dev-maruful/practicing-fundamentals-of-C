// WAP(write a program) to allocate memory to store 5 prices.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;

    ptr = (float *)malloc(5 * sizeof(float));

    // store price 1
    ptr[0] = 100;
    // store price 2
    ptr[1] = 150;
    // store price 3
    ptr[2] = 200;
    // store price 4
    ptr[3] = 250;
    // store price 5
    ptr[4] = 300;

    return 0;
}