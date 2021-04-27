// <5>HCF calculator for 2 numbers (hint-: loop and if).

#include <stdio.h>
int main()
{
    int number1, number2, i;
    printf("Enter two numbers: \n");
    scanf("%d \n %d", &number1, &number2);

    while (i >= 1 && i <= number1 && i <= number2)
    {
        if (number1 % i == 0 && number2 % i == 0)
        {
            printf("HCF of these two numbers is %d.", i);
        }
    }

    return 0;
}