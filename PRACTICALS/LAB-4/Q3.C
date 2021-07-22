#include <stdio.h>
#define N 10

int main()
{
    int a[N], i, even = 0, odd = 0;

    printf("Enter %d integer numbers:\n", N);
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);

    printf("\n\n Even numbers in the array are \n");

    for (int i = 0; i < N; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d\t", a[i]);
        }
    }

    printf("\n\n Odd numbers in the array are \n");

    for (int i = 0; i < N; i++)
    {
        if (a[i] % 2 != 0)
        {
            printf("%d\t", a[i]);
        }
    }
}
