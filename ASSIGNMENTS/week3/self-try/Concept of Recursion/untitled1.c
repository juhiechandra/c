//prog to find sum of 5 digit numbers

#include <stdio.h>

int rsum(int n);

int main ()
{
   long m;
   printf("type a five digit number ");
   scanf("%li ", &m);
    int p=rsum(m);
    printf("%d", p);
    return 0;

}

int rsum(int n)
{

    int s, remainder;
    if (n!=0)
    {
        remainder= n%10;
        s= remainder + rsum(n/10);

        return s;

    }
    else 
    return 0;
}