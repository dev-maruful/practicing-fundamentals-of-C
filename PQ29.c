/*
write functions to calculate area of a square, a circle and a rectangle
*/

#include <stdio.h>
#include <math.h>

float calculateSquare(float side);
float calculateCircle(float radius);
float calculateRectangle(float length, float width);

int main()
{
    float side, radius, length, width;

    // printf("Enter value of a side of the square: ");
    // scanf("%f", &side);

    // printf("Enter value of the radius of the circle: ");
    // scanf("%f", &radius);

    printf("Enter value of the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter value of the width of the rectangle: ");
    scanf("%f", &width);

    // float squareArea = calculateSquare(side);
    // printf("The area of the square is: %.2f\n", squareArea);

    // float circleArea = calculateCircle(radius);
    // printf("The area of the circle is: %.2f\n", circleArea);

    float rectangleArea = calculateRectangle(length, width);
    printf("The area of the rectangle is: %.2f\n", rectangleArea);

    return 0;
}

float calculateSquare(float side)
{
    float area = pow(side, 2);

    return area;
}

float calculateCircle(float radius)
{
    float area = 3.1416 * pow(radius, 2);

    return area;
}

float calculateRectangle(float length, float width)
{
    float area = length * width;

    return area;
}