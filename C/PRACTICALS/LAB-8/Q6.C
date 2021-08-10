/*Write a program to print error message using #error directive*/

#include <stdio.h>
#ifndef __MATH_H
#error First Include then compile
#else
void main()
{
    float a;
    a = sqrt(7);
    printf("%f", a);
}
#endif
