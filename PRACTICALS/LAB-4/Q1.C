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

//NORMAL PROGRAM WITH NO USAGE OF FUNCTIONS
// #include <stdio.h>

// int main()
// {

//     int rad;
//     float PI = 3.14, area, ci;

//     printf("Enter radius of circle: \n");
//     scanf("%d", &rad);

//     area = PI * rad * rad;
//     printf("Area of circle : %f \n", area);

//     ci = 2 * PI * rad;
//     printf("Circumference : %f \n", ci);

//     return (0);
// }