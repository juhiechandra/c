#include<stdio.h>
#include<math.h>

int main()
{
    int side, area;

    
        printf("Enter the side of square : \n");
        scanf("%f", &side);

        area = side * side;
        printf("Area of the square is : ", area);

        return (0);
}