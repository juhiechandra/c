#include <stdio.h>
int fact(int);
void main()
{
    int i, n;
    float sum = 0;

    printf("Enter the value: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += fact(i) / i;
    }

    printf("The sum of the series is : %f\n\n", sum);
}
int fact(int n)
{
    int num = 0, f = 1;
    while (num <= n - 1)
    {
        f = f + f * num;
        num++;
    }
    return f;
}