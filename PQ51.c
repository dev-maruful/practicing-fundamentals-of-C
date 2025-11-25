// salting
// find the salted form of a password entered by user if the salt is "123" & added at the end

#include <stdio.h>
#include <string.h>

int main()
{
    char salt[] = "123";
    char password[100];

    printf("Enter your password: ");
    scanf("%s", password);
    strcat(password, salt);

    printf("Your salted password is: %s\n", password);

    return 0;
}