/*
int *ptr
int x;

ptr = &x
*ptr = 0;

printf(" x = %d\n", x);
printf(" *ptr = %d\n", *ptr);

*ptr += 5;
printf(" x = %d\n", x);
printf(" *ptr = %d\n", *ptr);

(*ptr)++;
printf(" x = %d\n", x);
printf(" *ptr = %d\n", *ptr);

find outputs
*/

// first 2 output = 0
// second 2 output = 5
// third 2 output = 6