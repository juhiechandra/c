// WAP that will print your mailing address in the following format
//     First line : <Your Name>
//                      Roll No. : <109389>
//                                     Branch : <ECE>

#include <stdio.h>
#include<string.h>
int main()
{

    char a[20], b[20], c[20];

    printf("Enter your name:\n");
    scanf("%[^\n]%*c", a);
    printf("Enter your roll no:\n");
    scanf("%[^\n]%*c", b);
    printf("Enter your branch:\n");
    scanf("%[^\n]%*c", c);
    printf("%s", a);
    printf("%s", b);
    printf("%s", c);

    return 0;
}
