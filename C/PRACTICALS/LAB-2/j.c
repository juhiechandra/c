// // // // // #include <stdio.h>
// // // // // int main()
// // // // // {
// // // // //     int month;
// // // // //     printf("Enter the number of month: \n");
// // // // //     scanf("%d", &month);

// // // // //     switch (month)
// // // // //     {
// // // // //     case (1):
// // // // //         printf("January");
// // // // //         break;
// // // // //     case (2):
// // // // //         printf("February");
// // // // //         break;
// // // // //     case (3):
// // // // //         printf("March");
// // // // //         break;
// // // // //     case (4):
// // // // //         printf("April");
// // // // //         break;
// // // // //     case (5):
// // // // //         printf("May");
// // // // //         break;
// // // // //     case (6):
// // // // //         printf("June");
// // // // //         break;
// // // // //     case (7):
// // // // //         printf("July");
// // // // //         break;
// // // // //     case (8):
// // // // //         printf("August");
// // // // //         break;
// // // // //     case (9):
// // // // //         printf("September");
// // // // //         break;
// // // // //     case (10):
// // // // //         printf("October");
// // // // //         break;
// // // // //     case (11):
// // // // //         printf("Novmeber");
// // // // //         break;
// // // // //     case (12):
// // // // //         printf("December");
// // // // //         break;
// // // // //     }

// // // // //     return 0;
// // // // // }

// // // // // #include <stdio.h>
// // // // // int main()
// // // // // {
// // // // //     int A, B, C, largest;

// // // // //     printf("Enter three numbers: ");
// // // // //     scanf("%d %d %d", &A, &B, &C);

// // // // //     largest = A > B ? (A > C ? A : C) : (B > C ? B : C);

// // // // //     printf("%d is the largest number.", largest);

// // // // //     return 0;
// // // // // }

// // // // // #include <stdio.h>
// // // // // int main()
// // // // // {
// // // // //     int A, B, C;

// // // // //     printf("Enter three numbers: ");
// // // // //     scanf("%d %d %d", &A, &B, &C);

// // // // //     if (A >= B)
// // // // //     {
// // // // //         if (A >= C)
// // // // //             printf("%d is the largest number.", A);
// // // // //         else
// // // // //             printf("%d is the largest number.", C);
// // // // //     }
// // // // //     else
// // // // //     {
// // // // //         if (B >= C)
// // // // //             printf("%d is the largest number.", B);
// // // // //         else
// // // // //             printf("%d is the largest number.", C);
// // // // //     }

// // // // //     return 0;
// // // // // }

// // // // #include <stdio.h>
// // // // int main()

// // // // {
// // // //     int num;
// // // //     printf("Enter a number: ");
// // // //     scanf("%d", &num);

// // // //     switch (num % 2)
// // // //     {
// // // //     case 0:
// // // //         printf("The number %d is even", num);

// // // //         break;

// // // //     case 1:
// // // //         printf("The number %d is odd", num);
// // // //         break;
// // // //     }
// // // //     return 0;
// // // // }

// // // // #include <stdio.h>

// // // // int main()
// // // // {
// // // //     char ch;

// // // //     printf("Enter any alphabet: ");
// // // //     scanf("%c", &ch);

// // // //     switch (ch)
// // // //     {
// // // //     case 'a':
// // // //         printf("Vowel");
// // // //         break;
// // // //     case 'e':
// // // //         printf("Vowel");
// // // //         break;
// // // //     case 'i':
// // // //         printf("Vowel");
// // // //         break;
// // // //     case 'o':
// // // //         printf("Vowel");
// // // //         break;
// // // //     case 'u':
// // // //         printf("Vowel");
// // // //         break;
// // // //     case 'A':
// // // //         printf("Vowel");
// // // //         break;
// // // //     case 'E':
// // // //         printf("Vowel");
// // // //         break;
// // // //     case 'I':
// // // //         printf("Vowel");
// // // //         break;
// // // //     case 'O':
// // // //         printf("Vowel");
// // // //         break;
// // // //     case 'U':
// // // //         printf("Vowel");
// // // //         break;
// // // //     default:
// // // //         printf("Consonant");
// // // //     }

// // // //     return 0;
// // // // }

// // // // finding largest of 3 using nested if else

// // // #include <stdio.h>
// // // int main()
// // // {
// // //     int a, b, c;
// // //     printf("Enter any three numbers:  ");
// // //     scanf("%d \n %d \n %d", &a, &b, &c);

// // //     if (a >= b && a >= c)
// // //     {
// // //         printf("%d is the largest of all", a);
// // //     }
// // //     else if (b >= c && b >= a)
// // //     {
// // //         printf("%d is the largest of all", b);
// // //     }
// // //     else
// // //     {
// // //         printf("%d is the largest of all", c);
// // //     }

// // //     return 0;
// // // }

// // // #include <stdio.h>
// // // int main()
// // // {
// // //     float sub_1;
// // //     float sub_2;
// // //     float sub_3;
// // //     float sub_4;
// // //     float sub_5;
// // //     printf("\nEnter your marks in Subject 1: ");
// // //     scanf("%f", &sub_1);
// // //     printf("\nEnter your marks in Subject 2: ");
// // //     scanf("%f", &sub_2);
// // //     printf("\nEnter your marks in Subject 3: ");
// // //     scanf("%f", &sub_3);
// // //     printf("\nEnter your marks in Subject 4: ");
// // //     scanf("%f", &sub_4);
// // //     printf("\nEnter your marks in Subject 5: ");
// // //     scanf("%f", &sub_5);

// // //     float Percentage;
// // //     Percentage = ((sub_1 + sub_2 + sub_3 + sub_4 + sub_5) / 500) * 100;
// // //     printf("\nYou have scored %f Percentage", Percentage);
// // //     if (Percentage >= 90)
// // //         printf("\nGrade A");
// // //     else if (Percentage >= 80)
// // //         printf("\nGrade B");
// // //     else if (Percentage >= 70)
// // //         printf("\nGrade C");
// // //     else if (Percentage >= 60)
// // //         printf("\nGrade D");
// // //     else if (Percentage >= 40)
// // //         printf("\nGrade E");
// // //     else if (Percentage < 40)
// // //     {
// // //         printf("\nFail");
// // //     }
// // //     return 0;
// // // }

// // #include <math.h>
// // #include <stdio.h>
// // int main()
// // {
// //     float a, b, c, discriminant, root1, root2, realPart, imagPart;
// //     printf("Enter coefficients a, b and c: ");
// //     scanf("%f %f %f", &a, &b, &c);

// //     discriminant = b * b - 4 * a * c;

// //     // condition for real and different roots
// //     if (discriminant > 0)
// //     {
// //         root1 = (-b + sqrt(discriminant)) / (2 * a);
// //         root2 = (-b - sqrt(discriminant)) / (2 * a);
// //         printf("root1 = %f and root2 = %f", root1, root2);
// //     }

// //     // condition for real and equal roots
// //     else if (discriminant == 0)
// //     {
// //         root1 = root2 = -b / (2 * a);
// //         printf("root1 = root2 = %f;", root1);
// //     }

// //     // if roots are not real
// //     else
// //     {
// //         realPart = -b / (2 * a);
// //         imagPart = sqrt(-discriminant) / (2 * a);
// //         printf("root1 = %f+%fi and root2 = %f-%fi", realPart, imagPart, realPart, imagPart);
// //     }

// //     return 0;
// // }

// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//     printf("\nEnter the three sides of the triangle: ");
//     scanf("%d%d%d", &a, &b, &c);
//     if (a + b > c || a + c > b || b + c > a)
//         printf("\nThe triangle is valid");
//     else
//         printf("\nThe triangle is not valid");
//     return 0;
// }

#include<stdio.h>
int main()
{
    char character;
    printf("\nEnter character: ");
    scanf("%c", &character);
    if (character >= 65 && character <= 90 || character >= 97 && character <= 122)
    {
        if (character >= 65 && character <= 90)
            printf("\nEntered character is a Capital Letters");
        else if (character >= 97 && character <= 122)
        {
            switch (character)
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("\nEntered character is a lower case letter and a vowel");
                break;
            default:
                printf("\nEntered character is a lower case letter");
            }
        }
        else if (character >= 48 && character <= 57)
        {
            if (character % 2 == 0 && character % 5 == 0)
                printf("'%c' is a digit and divisible by both 2 and 5.", character);
            else
                printf("\nEntered character is a digit and not divisible by either 2 or 5");
        }
    }

    return 0;
}
