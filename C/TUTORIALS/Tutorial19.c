// UNDERSTANDING FUNCTIONS

// type 1

// #include <stdio.h>

// int main()
// {
//     int a = 1, b = 2, c;
//     c = sum(a, b);
//     printf("sum is %d", c);
//     return 0;
// }
// int sum(int a, int b)
// {
//     return a + b;
// }

#include <stdio.h>
int sum(int a, int b);
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}
int takenumber()
{
    int i;
    printf("Enter a number");
    scanf("%d", &i);
    return i;
}
int main()
{
    int a, b, c;
    a = 9;



DOUBT DOUBT DOUBT