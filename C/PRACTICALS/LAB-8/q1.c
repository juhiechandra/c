#include <string.h>

int main()
{
    char a[1000];
    int i, alphabets = 0, digits = 0, specialcharacters = 0;

    printf("Enter  the string : ");
    gets(a);

    for (i = 0; a[i]; i++)
    {
        if ((a[i] >= 65 && a[i] <= 90) || (a[i] >= 97 && a[i] <= 122))
            alphabets++;
        else if (a[i] >= 48 && a[i] <= 57)
            digits++;
        else
            specialcharacters++;
    }

    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d", specialcharacters);

    return 0;
}
