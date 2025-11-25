// make a program to input student information from a user & enter it to a file.

#include <stdio.h>

int main()
{
    char name[100];
    int roll;

    printf("Enter student name: ");
    scanf("%s", name);
    printf("Enter student roll: ");
    scanf("%d", &roll);

    FILE *fptr;
    fptr = fopen("student.txt", "w");

    fprintf(fptr, "%s", name);
    fprintf(fptr, "%d", roll);

    fclose(fptr);
    return 0;
}