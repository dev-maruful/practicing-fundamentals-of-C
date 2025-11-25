// make a program to read 5 integers from a file.

#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("file.txt", "r");
    int num;
    fscanf(fptr, "%d", &num);
    printf("%d\t", num);
    fscanf(fptr, "%d", &num);
    printf("%d\t", num);
    fscanf(fptr, "%d", &num);
    printf("%d\t", num);
    fscanf(fptr, "%d", &num);
    printf("%d\t", num);
    fscanf(fptr, "%d", &num);
    printf("%d\t", num);

    // while (num != NULL)
    // {
    //     printf("%d\t", num);
    //     fscanf(fptr, "%d", &num);
    // }
    // printf("\n");

    fclose(fptr);

    return 0;
}