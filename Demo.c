#include <stdio.h>

struct student
{
    char *name;
    int roll;
    float cgpa;
};

int main()
{
    struct student s1;

    s1.name = "Maruful Islam";
    printf("%s\n", s1.name);

    return 0;
}
