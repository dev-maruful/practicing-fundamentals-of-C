// make a program that inputs user's name & prints its length.

#include <stdio.h>

int main()
{
    int length = 0;

    char *name;
    printf("Enter your name: ");
    fgets(name, 100, stdin);

    for (int i = 1; name[i] != '\0'; i++)
    {
        length++;
    }

    printf("The length of this name is: %d\n", length);

    return 0;
}