// create a string firstName & lastName to store details of user & print all the characters using a loop.

#include <stdio.h>

int main()
{
    char firstName[] = "Tawsif";
    char lastName[] = "Adnan";

    for (int i = 0; firstName[i] != '\0'; i++)
    {
        printf("%c", firstName[i]);
    }

    printf("\n");

    return 0;
}