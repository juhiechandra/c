#include<stdio.h>

int main()
{
    float radius ,area;

    printf("Enter the radius of the circle : \n");
    scanf("%d", &radius);

    area = 3.14*radius*radius;
    printf("Area of the circle: %f", area);

    return(0);
}