// rite a C program to input radius of circle from user and find diameter, circumference and area of the given circle using function.

#include <stdio.h>
double getArea(float x);

int main()

{

    float area, radius;

    printf("Enter the radius:\n");
    scanf("%f", &radius);
    area = getArea(radius);

    printf("Area of the circle = %.2f sq. units", area);
    return 0;
}

double getArea(float x)
{
    return (3.14 * x * x);
}