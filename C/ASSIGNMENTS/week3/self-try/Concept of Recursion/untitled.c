#include<stdio.h>
int main(){
    float a, b;
    printf("Enter any number:");
    scanf("%f", &a);
    b = square(a);
    printf("square is %f,b");

}

float square(float x)
{
    float y;
    y = x*x;
    return(y);
}