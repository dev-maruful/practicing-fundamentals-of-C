// write a function to count the occurrence of vowels in a string.

#include <stdio.h>

void countVowels(char str[]);

int main()
{
    char str[] = "Adnan";

    countVowels(str);

    return 0;
}

void countVowels(char str[])
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }

    printf("the count of vowels in this string is: %d\n", count);
}