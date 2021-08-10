#include <stdio.h>
#include<math.h>
int main()
{
    char alphabet;
    printf("Check whether a vowel or consonant\n\n Enter a character:");

    scanf("%c", &alphabet);
    if (alphabet == 'a' || alphabet == 'e'|| alphabet == 'i'|| alphabet == 'o'|| alphabet == 'u')
    {
        printf("Congratulation! You've found a vowel.", alphabet);
    }
    else
    {
        printf("Not a vowel.");
    }

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

//     char ch;
//     printf("Input a Character :  ");
//     scanf("%c", &ch);

//     switch (ch)
//     {
//     case 'a':
//     case 'A':
//     case 'e':
//     case 'E':
//     case 'i':
//     case 'I':
//     case 'o':
//     case 'O':
//     case 'u':
//     case 'U':
//         printf("\n\n%c is a vowel.\n\n", ch);
//         break;
//     default:
//         printf("%c is not a vowel.\n\n", ch);
//     }
//     printf("\n\n\t\t\tCoding is Fun !\n\n\n");
//     return 0;
// }