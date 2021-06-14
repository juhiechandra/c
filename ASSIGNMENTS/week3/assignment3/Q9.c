// <9>C Program to calculate a Number raised to the Power of N using Recursion

#include<stdio.h>
#include<math.h>

int power(double x,double y)
{
    int a;
    a = (pow(x,y) + 0.5);
     return a;
}

int main(){
    double x, y;
    printf("Enter the number:\n\n");
    scanf("%lf", &x);
    printf("Enter the number to which we need to raise:\n\n");
    scanf("%lf", &y);
    int p=power(x,y);
    printf("The %lf raised to power %lf is %d:", x, y, p);
    return 0;
}