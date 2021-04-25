#include<stdio.h>
#include<math.h>
// this is a programme for calculating area of right angle triangle
int main()
{
    int base, heigth;
    float area;

    printf("Enter height of the right triangle : \n");
    scanf("%d" ,&base);

    printf("Enter base of the right trianglr : \n");
    scanf("%d" ,&heigth);

    area = 0.5 * base * heigth;
    printf("The area of the right angle triangle is : %f ", area);
    
    return(0);
    

}