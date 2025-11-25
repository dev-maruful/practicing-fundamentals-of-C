/*
write a function to calculate the sum, product & average of 2 numbers. print that average in the main function.
*/

#include <stdio.h>

void calculate(int *a, int *b, int *sum, int *product, float *average);

int main()
{
    int x = 3, y = 5, sum = 0, product = 1;
    float average;

    calculate(&x, &y, &sum, &product, &average);

    printf("the sum is: %d\n", sum);
    printf("the product is: %d\n", product);
    printf("the average is: %.1f\n", average);

    return 0;
}

void calculate(int *a, int *b, int *sum, int *product, float *average)
{
    *sum = *a + *b;
    *product = *a * *b;
    *average = (*a + *b) / 2;
}