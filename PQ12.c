/*
write a program to find a character entered by user is uppercase or not
*/

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a charater(a-z or A-Z): ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("The character is uppercase\n");
    }
    else
    {
        printf("The character is lowercase\n");
    }

    return 0;
}