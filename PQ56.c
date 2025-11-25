// enter address (house no, block, city, state) of 5 people.

#include <stdio.h>

typedef struct address
{
    int houseNo;
    char block;
    char *city;
    char *state;
} address;

int main()
{
    address a1 = {1, 'C', "Dhaka", "Bangladesh"};
    address a2 = {2, 'F', "Feni", "Uganda"};
    address a3 = {5, 'T', "Tangail", "Nigeria"};
    address a1 = {20, 'D', "Dohar", "Pakistan"};
    address a1 = {43, 'B', "Bidesh", "Europe"};

    return 0;
}
