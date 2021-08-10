// finding largest of 3 using nested if else

// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter any three numbers:  ");
//     scanf("%d \n %d \n %d", &a, &b,&c);

//     if (a>=b && a>=c)
//     {
//         printf("%d is the largest of all",a);
//     }
//     else if (b>=c && b>=a)
//     {
//         printf("%d is the largest of all",b);
//     }
//     else
//     {
//         printf("%d is the largest of all",c);
//     }
    
//     return 0;6
// }

// finding largest of 3 using else if

// #include

// finding largest of 3 using conditional operators

#include <stdio.h>
int main()
{
    int A, B, C, largest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &A, &B, &C);

    largest = A > B ? (A > C ? A : C) : (B > C ? B : C);
3
    printf("%d is the largest number.", largest);

    return 0;
}