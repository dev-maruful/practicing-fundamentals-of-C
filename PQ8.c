/*
print 1(true) or 0(false) for following statements:
a. if it's sunday & it's snowing -> true
b. if it's monday or it's raining -> true
c. if a number is greater than 9 & less than 100 -> true(2 digit number)
*/

#include <stdio.h>

int main()
{
    int sunday = 1;
    int snowing = 1;
    int monday = 1;
    int raining = 0;
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d\n", num > 9 && num < 100);

    printf("%d\n", sunday && snowing);
    printf("%d\n", monday || raining);

    return 0;
}
