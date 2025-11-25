// create a structure to store complex numbers.(use arrow operators)

#include <stdio.h>

typedef struct complex
{
    int real;
    int img;
} com;

int main()
{
    com n1 = {5, 3};
    com *ptr = &n1;

    printf("real number: %d\n", ptr->real);
    printf("imaginary number: %d\n", ptr->img);

    return 0;
}
