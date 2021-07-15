// Q2.WAP to print Fibonacci series up to ‘n’ terms where n is entered from user.

#include <stdio.h>
int main()
{
    int n, a , b, c, i;

    printf("Enter the number of terms\n");
    scanf("%d", &n);

    printf("First %d terms of Fibonacci series are:\n", n);

    for (i = 1; i < n; i++)
    {
        if (i <= 1)
            c = i;
        else
        {
            c = a + b;
            b = c;
            a = b;
        }
        printf("%d\n", c);
    }

    return 0;
}