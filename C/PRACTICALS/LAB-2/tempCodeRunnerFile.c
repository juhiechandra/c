#include <stdio.h>
int main()
{
    int a, b, c;
    printf("\nEnter the three sides of the triangle: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a == b && b == c)
        printf("\nEquilateral triangle");
    else if (a == b && b != c || a == c && c != b)
        printf("\nTriangle is isosceles");
    else
        printf("\nTriangle is scalene");
    return 0;
}