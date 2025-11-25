/*
a. write a program to read a string form a file & output to the user
b. replace the data in file of Q(a) with the number of vowels in the string
c. format the information of 5 students(name, marks, cgpa, course) in a table like structure in file
*/

#include <stdio.h>

// a. write a program to read a string form a file & output to the user
// b. replace the data in file of Q(a) with the number of vowels in the string

// int main()
// {
//     FILE *fptr;
//     fptr = fopen("HW9.txt", "r");

//     char str[100];
//     fscanf(fptr, "%s", str);
//     printf("%s\n", str);
//     int count = 0;

//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] == 'a' || str[i] == 'o' || str[i] == 'e' || str[i] == 'i' || str[i] == 'u')
//         {
//             count++;
//         }
//     }

//     fptr = fopen("HW9.txt", "w");
//     fprintf(fptr, "%d", count);

//     fclose(fptr);
//     return 0;
// }

// c. format the information of 5 students(name, marks, cgpa, course) in a table like structure in file

typedef struct student
{
    char *name;
    int mark;
    float cgpa;
    char *course;
} std;

int main()
{
    std students[5];

    students[0].name = "Shadat";
    students[0].mark = 90;
    students[0].cgpa = 4.5;
    students[0].course = "Math";

    students[1].name = "Badon";
    students[1].mark = 85;
    students[1].cgpa = 4.0;
    students[1].course = "Physics";

    students[2].name = "Rokibul";
    students[2].mark = 95;
    students[2].cgpa = 4.8;
    students[2].course = "Chemistry";

    students[3].name = "Moheet";
    students[3].mark = 88;
    students[3].cgpa = 4.23;
    students[3].course = "Computer";

    students[4].name = "Fahim";
    students[4].mark = 75;
    students[4].cgpa = 3.5;
    students[4].course = "Marketing";

    FILE *fptr;
    fptr = fopen("HW9.txt", "w");

    fprintf(fptr, "%s\t\t\t", "Name");
    fprintf(fptr, "%s\t", "Mark");
    fprintf(fptr, "%s\t", "CGPA");
    fprintf(fptr, "%s\n", "Course");

    for (int i = 0; i < 5; i++)
    {
        fprintf(fptr, "%s\t\t\t", students[i].name);
        fprintf(fptr, "%i\t\t", students[i].mark);
        fprintf(fptr, "%.2f\t", students[i].cgpa);
        fprintf(fptr, "%s\n", students[i].course);
    }

    fclose(fptr);
    return 0;
}