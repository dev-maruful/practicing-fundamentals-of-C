/*
write a program to enter price of 3 items and print their final cost with gst.
*/

#include <stdio.h>

int main()
{
    int prices[3];

    printf("enter price of first item: ");
    scanf("%d", &prices[0]);

    printf("enter price of second item: ");
    scanf("%d", &prices[1]);

    printf("enter price of third item: ");
    scanf("%d", &prices[2]);

    int finalPrice = (prices[0] + prices[1] + prices[2]);
    float gst = finalPrice * 0.18;
    float finalPriceWithGst = finalPrice + gst;

    printf("final price with gst is: %.2f\n", finalPriceWithGst);

    return 0;
}