// <2>Write a program in C to display the pattern like right angle triangle using an asterisk. Go to the editor

// The pattern like :

// *
// **
// ***
// ****

#include <stdio.h>

void starpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {

            printf("*");
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
    return 0;
}