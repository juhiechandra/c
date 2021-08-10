#include <stdio.h>
int checkPrime(int n);
int main()
{
    int n, num;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("1 is neither prime nor composite.");
    }
    else
    {
        if (checkPrime(n))
            printf("%d is a prime number.", n);
        else
            printf("%d is not a prime number.", n);
    }

 printf("\nEnter the number till which prime numbers are
needed: ");
 scanf("%d",&num);
 for(int i=2; i<=num; i++){
        if (checkPrime(i))
        {
            printf("%d ", i);
        }
 }
 return 0;
}
int checkPrime(int n)
{
    int flag = 1;
    for (int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }

    return flag;
}