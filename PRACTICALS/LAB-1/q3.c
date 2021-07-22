#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of first integer ");
    scanf("%d", &a);
    printf("Enter the value of second integer ");
    scanf("%d", &b);
    printf("The sum of two integers is %d\n", a + b);
    printf("The difference of two integers is %d\n", a - b);
    printf("The product of two integers is %d\n", a * b);
    printf("The division of two integers is %f\n", a / b);
    printf("The mode of two integers is %d\n", a % b);
    return 0;
}