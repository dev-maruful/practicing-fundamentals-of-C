// ask the user to enter their firstName & print it back to them.

#include <stdio.h>

int main()
{

    char firstName[50];

    printf("Enter your first name: ");
    scanf("%s", firstName);
    printf("Your first name is: %s\n", firstName);

    return 0;
}