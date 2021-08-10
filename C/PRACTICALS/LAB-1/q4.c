#include <stdio.h>
int main()
{
    float C, F;
    printf("Enter the value of temperature in degree celcius ");
    scanf("%f", &C);
    printf("The value of temperature in farenhiet is %f\n", 9 * C / 5 + 32);
    printf("Enter the value of temperature in farenhiet ");
    scanf("%f", &F);
    printf("The value of temoerature in celsius is %f\n", 5 * (F - 32) / 9);
}