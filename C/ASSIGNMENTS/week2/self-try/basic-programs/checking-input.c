// #include <stdio.h>

// int main()
// {
//     printf("Enter one character: \n");
//     char c;
//     scanf("%c", &c);
//     if (c >= 'A' && c <= 'Z')
//     {
//         printf("The given character is upper case");
//     }
//     else if (c >= 'a' && c <= 'z')
//     {
//         printf("The given charater is lower case");
//     }
//     else if (c >= '0' && c <= '9')
//     {
//         printf("The given character is an integer");
//     }
//     else
//     {
//         printf("The given character is not character and integer");
//     }
//     return 0;
// }

#include <stdio.h>
#include <ctype.h>
int main()
{
    ​​​​​
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    char cm = toupper(c);
    if (cm >= 'A' && cm <= 'Z')
        printf("%c is an alphabet.", cm);
    else
        printf("%c is not an alphabet.", cm);

    return 0;
}
​​​​​
​