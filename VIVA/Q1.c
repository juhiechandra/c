// 3. Write programs to print following pattern
// 			1
// 		A 	B	C
// 	2	3	4	5	6
// D	E	F	G	H	I	J

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of rows:", &n);
    scanf("%d", &n);
    int t = n - 1;
    int no = 1;
    int al = 0;

    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < t; i++)
            printf(" ");
        if (i % 2 == 0)
        {
            for (int j = 0; j < 2 * i + 1; j++)
            {
                printf("%d", no);
                no++;
            }
        }
        else
        {
            for (int j = 0; j < 2 * i + 1; j++)
            {
                printf("%c", 65 + al);
                al++;
            }
        }
        printf("\n");
        t--;
    }
}