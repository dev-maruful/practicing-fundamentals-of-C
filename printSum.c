#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter value of a");
    scanf("%d", &a);
    printf("Enter value of b");
    scanf("%d", &b);

    int sum = a + b;
    printf("The sum of a and b is: %d", sum);

    return 0;
}