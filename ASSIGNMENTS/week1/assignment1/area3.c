#include<stdio.h>
#include<math.h>

int main()
{
    int side;
    float area, r;

    r = sqrt(3)/4;
    printf("Enter the Length of side: \n");
    scanf("%d", &side);

    area = side * side * r;
    
    printf("Area of the equilateral triangle : %f, area");
    return(0);
}