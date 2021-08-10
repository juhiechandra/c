#include<stdio.h>
#include<math.h>

int main()
{
    int s1, s2, angle;
    float area;

    printf("Enter side : \n");
    scanf("%d", &s1);

    printf("Enter side : \n");
    scanf("%d", &s2);

    printf("Enter included angle: \n");
    scanf("%d", &angle);

    area = (s1 * s2 * sin((M_PI / 180) * angle)/2);
    
    printf("Area of Scalene Triangle : %f", area);
    return (0);
}