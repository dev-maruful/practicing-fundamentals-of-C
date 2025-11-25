/*
write a program to check if a student passed or failed
marks > 30 is PASS
marks <= 30 is FAIL
*/

#include <stdio.h>

int main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks > 30)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}