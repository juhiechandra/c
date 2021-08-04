#include <string.h>

int main()
{
    char a[1000];
    int i, n, k = 0;

    printf("Enter  the string : ");
    gets(a);
    n = strlen(a);

    for (i = 0; i < n / 2; i++)
    {
        if (a[i] == a[n - i - 1])
            k++;
    }
    if (k == i)
        printf("string is palindrome");
    else
        printf("string is not palindrome");

    return 0;
}
