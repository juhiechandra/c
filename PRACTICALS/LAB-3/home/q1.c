#include <stdio.h>
int main()
{
    int i, num;
    int oddSum = 0, evenSum = 0;
    printf("Enter the value of num: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
            evenSum = evenSum + i;
        else
            oddSum = oddSum + i;
    }
    printf("Sum of all odd numbers are: %d", oddSum);
    printf("\nSum of all even numbers are: %d", evenSum);
    return 0;
}
While Loop :
#include <stdio.h>
    int
    main()
{
    int i, num;
    int oddSum = 0, evenSum = 0;

    printf("Enter the value of num: ");
    scanf("%d", &num);
    i = 1;
    while (i <= num)
    {
        if (i % 2 == 0)
            evenSum = evenSum + i;
        else
            oddSum = oddSum + i;
        i++;
    }
    printf("Sum of all odd numbers are: %d", oddSum);
    printf("\nSum of all even numbers are: %d", evenSum);
    return 0;
}
Do While Loop :
#include <stdio.h>
#include <stdlib.h>
    int
    main()
{
    int i, num;
    int oddSum = 0, evenSum = 0;

    printf("Enter the value of num: ");
    scanf("%d", &num);
    i = 1;
    do
    {
        if (i % 2 == 0)
            evenSum = evenSum + i;
        else
            oddSum = oddSum + i;
        i++;

    } while (i <= num);
    printf("Sum of all odd numbers are: %d", oddSum);
    printf("\nSum of all even numbers are: %d", evenSum);
    return 0;
}
