#include <stdio.h>

int main()
{
    int number;

    printf("if else basic function\n");
    printf("Enter a number:\n");
    scanf("%d", &number);

    if (number > 100)

    {
        printf("Your number is greater than 100");
    }

    else if (number == 100)
    {
        printf("Your number is 100");
    }

    else
        printf("Your number is less than 100");

    return 0;
}