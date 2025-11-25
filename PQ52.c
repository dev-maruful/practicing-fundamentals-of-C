// write a function named slice, which takes a string & returns a sliced string from index n to m.

#include <stdio.h>
#include <string.h>

void slice(char str[], int n, int m);

int main()
{
    char str[] = "HelloWorld";

    slice(str, 2, 5);

    return 0;
}

void slice(char str[], int n, int m)
{
    char slicedStr[100];

    for (int i = 0; i <= m; i++)
    {
        slicedStr[i] = str[n + i];
    }

    puts(slicedStr);
}
