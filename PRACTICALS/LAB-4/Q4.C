// Q4.WAP to check whether a number is prime, Armstrong, perfect number or not using functions.Kindly check the previous assignments(Assignments I to VI) to find the definitions of prime, Armstrong and perfect number.The function prototype is as follows :
//     /* Function declarations */
//     int
//     Prime(int num);
// int Armstrong(int num);
// int Perfect(int num);
// Example : Input
//               Input any number : 11 Output 11 is prime number 11 is not a Armstrong number 11 is not a perfect number

#include <stdio.h>
#include <math.h>

int perfectn(int n);
int prime(int n);
int armstrong(int n);

int main()

{
    int n;
    printf("type a number ");
    scanf("%d", &n);

    if ((perfectn(n) == 1))
        printf("%d is a perfect number\n", n);

    else
        printf("%d is not a perfect number\n", n);

    if (armstrong(n) == 1)
        printf("%d is an armstrong number\n", n);

    else
        printf("%d is not an armstrong number\n", n);

    if (prime(n) == 1)
        printf("%d is a prime number", n);

    else
        printf("%d is not a prime number", n);

    return 0;
}

int perfectn(int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (n % i == 0)
            sum = sum + i;
    }
    if (sum == n)
        return 1;

    return 0;
}

int armstrong(int num)
{
    int n = 0, temp;
    int sum = 0;
    int rem;

    temp = num;

    while (temp != 0)
    {
        temp = temp / 10;
        n++;
    }
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + pow(rem, n);
        num = num / 10;
    }
    if (sum == num)
        return 1;

    return 0;
}

int prime(int n)
    {m = n / 2;
for (i = 2; i <= m; i++)
{
    if (n % i == 0)
    {
        printf("Number is not prime");
        flag = 1;
        break;
    }
}
if (flag == 0)
    printf("Number is prime");
return 0;
}
