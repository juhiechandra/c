#include <stdio.h>
#include <math.h>
struct complex
{
    int real;
    int imaginary;
};
int main()
{
    struct complex a, b;
    printf("Enter real and imaginary part of 1st complex number\n");
    scanf("%d %d", &a.real, &a.imaginary);
    printf("Enter real and imaginary part of second complex number\n");
    scanf("%d %d", &b.real, &b.imaginary);
    printf("Addition of above two complex numbers is %d + %di\n", a.real + b.real, a.imaginary + b.imaginary);
    printf("Subtraction of above two complex numbers is %d+%di\n", a.real - b.real, a.imaginary - b.imaginary);
    printf("Multiplication of above two complex numbers is %d +%di\n", a.real * b.real - a.imaginary * b.imaginary, a.real * b.imaginary + a.imaginary * b.real);
    printf("Modulus of first complex number is %.2f\n", sqrt(a.real * a.real + a.imaginary * a.imaginary));
    printf("Modulus of second complex number is %.2f\n", sqrt(b.real * b.real + b.imaginary * b.imaginary));
    return 0;
}
