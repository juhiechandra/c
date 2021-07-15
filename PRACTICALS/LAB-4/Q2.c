// Q2.WAP to find the sum of the following series from 1 to n using user - defined function.1 ! / 1 + 2 ! / 2 + 3 ! / 3 + …..+ n ! / n.For example, 1 ! / 1 + 2 ! / 2 + 3 ! / 3 + 4 ! / 4 + 5 ! / 5 = 1 + 1 + 2 + 6 + 24 = 34

#include <stdio.h>
int fact(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return (n*fact(n - 1));
    }
}
int main()
{
    int num, i, sum = 0;
    printf("Enter the sum upto which you want to print sum:\n");
    scanf("%d", &num);
    for (i = 1; i < num; i++)
    {
        long x=fact(i)/i;
        sum = sum + x;
    }
    printf("%d", sum);
}