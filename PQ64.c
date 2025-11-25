// 2 numbers a & b, are written in a file. write a program to replace them with their sum.

#include <stdio.h>

int main()
{
    int a, b;
    FILE *fptr;
    fptr = fopen("PQ64.txt", "r");

    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);

    fptr = fopen("PQ64.txt", "w");

    fprintf(fptr, "%d", a + b);

    fclose(fptr);
    return 0;
}