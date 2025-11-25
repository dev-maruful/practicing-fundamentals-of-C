/*
a. write a program to convert all lowercase vowels to uppercase in a string
b. write a program to print the highest frequency character in a string
c. write a program to remove blank spaces in a string
d. write a program to replace lowercase letters with uppercase & vice versa in a string
*/

#include <stdio.h>

// a. write a program to convert all lowercase vowels to uppercase is a string
// void convertToUppercase(char str[]);

// int main()
// {
//     char str[] = "Hello world";

//     convertToUppercase(str);

//     return 0;
// }

// void convertToUppercase(char str[])
// {
//     char newStr[100];
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         newStr[i] = str[i];

//         if (str[i] == 'a')
//         {
//             newStr[i] = 'A';
//         }
//         else if (str[i] == 'e')
//         {
//             newStr[i] = 'E';
//         }
//         else if (str[i] == 'i')
//         {
//             newStr[i] = 'I';
//         }
//         else if (str[i] == 'o')
//         {
//             newStr[i] = 'O';
//         }
//         else if (str[i] == 'u')
//         {
//             newStr[i] = 'U';
//         }
//     }

//     printf("Converted string: %s\n", newStr);
// }

// b. write a program to print the highest frequency character in a string

// void printHFChar(char str[]);

// int main()
// {
//     char str[] = "Hello World";

//     printHFChar(str);

//     return 0;
// }

// void printHFChar(char str[])
// {
//     int i = 0;
//     char highFrequency = str[i];

//     for (; str[i] != '\0'; i++)
//     {
//         if (str[i] > highFrequency)
//         {
//             highFrequency = str[i];
//         }
//     }

//     printf("The high frequency character in this string is: %c\n", highFrequency);
// }

// c. write a program to remove blank spaces in a string

// void removeBlankSpaces(char str[]);

// int main()
// {
//     char str[] = "Hello world this is a text with so much blank spaces";

//     removeBlankSpaces(str);

//     return 0;
// }

// void removeBlankSpaces(char str[])
// {
//     char newStr[100];
//     int j = 0;
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] == ' ')
//         {
//             continue;
//         }
//         newStr[j] = str[i];
//         j++;
//     }

//     printf("Your string without blank spaces is: %s\n", newStr);
// }

// d. write a program to replace lowercase letters with uppercase & vice versa in a string

#include <ctype.h>

void replaceLowercase(char str[]);
void replaceUppercase(char str[]);

int main()
{
    char str[] = "Hello World";
    replaceLowercase(str);
    replaceUppercase(str);

    return 0;
}

void replaceLowercase(char str[])
{
    char newStr[100];
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if (islower(ch))
        {
            ch = toupper(ch);
        }
        newStr[i] = ch;
    }

    printf("Your replaced string is: %s\n", newStr);
}

void replaceUppercase(char str[])
{
    char newStr[100];
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if (isupper(ch))
        {
            ch = tolower(ch);
        }
        newStr[i] = ch;
    }

    printf("Your replaced string is: %s\n", newStr);
}