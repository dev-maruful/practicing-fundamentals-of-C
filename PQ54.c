// check if a given character is present in a string or not.

#include <stdio.h>

void checkChar(char str[], char ch);

int main()
{
    char str[] = "Hello world";
    char ch;
    printf("enter your character: ");
    scanf("%c", &ch);

    checkChar(str, ch);

    return 0;
}

void checkChar(char str[], char ch)
{
    int present = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            present = 1;
        }
    }

    if (present)
    {
        printf("The character '%c' is present in the string '%s'\n", ch, str);
    }
    else
    {
        printf("The character '%c' is not present in the string '%s'\n", ch, str);
    }
}