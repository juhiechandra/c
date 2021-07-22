#include <stdio.h>
#include<math.h>
int Armstrong(int num);
int Perfect(int num);
int Prime(int num);
int main()
{
    int num;
    printf("\nInput any number : ");
    scanf("%d", &num);

    if (Armstrong(num))
        printf("%d is an Armstrong Number.\n", num);
    else
        printf("%d is not an Armstrong Number.\n", num);

    if (Prime(num))
        printf("%d is a Prime Number\n", num);
    else
        printf("%d is Not a Prime Number\n", num);

    if (Perfect(num))
        printf("%d is a Perfect Number\n", num);
    else
        printf("%d is not a Perfect Number\n", num);
    return 0;
}
int Armstrong(int num)
{
    int Temp, Reminder, Times = 0, sum = 0;
    Temp = num;
    while (Temp != 0)
    {
        Times = Times + 1;
        Temp = Temp / 10;
    }

    for (Temp = num; Temp > 0; Temp = Temp / 10)
    {
        Reminder = Temp % 10;
        sum = sum + pow(Reminder, Times);
    }
    if (num == sum)
        return 1;
    else
        return 0;
}
int Perfect(int num)
{
    int i, sum = 0;
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
            sum = sum + i;
    }
    if (sum == num)
        return 1;
    else
        return 0;
}
int Prime(int num)
{
    int i, count = 0;
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 0 && num != 1)
        return 1;
    else
        return 0;
}