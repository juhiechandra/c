// swapping values

#include <stdio.h>
// function definition toswap the values

int main()
{
    int a=34, b=74;
    printf("%d and %dn",a,b);
    swap(&a, &b);
    printf("%d and %d\n", a, b);
    return 0;
}

