// <3>Write a program in C to display the pattern like right angle triangle with a number. Go to the editor

// The pattern like :

// 1
// 12
// 123
// 1234
// ----------------------------------------------------------------------------------------------------

#include <stdio.h>

void starpattern(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            printf("%d",j);
        }
        printf("\n");
    }
}

int main()
{
    int rows;
    printf("How many rows do you need?\n");
    scanf("%d", &rows);
    starpattern(rows);
   
}