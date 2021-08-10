#include <stdio.h>
#include "ques_1.c"
extern student_array[];
extern n;
int search(int mrks)
{
    int pos, flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (student_array[i] == mrks)
        {
            pos = i;
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        return pos;
    }
    else
    {
        return -1;
    }
}
int find()
{
    printf("\nEnter the value you want to search: ");
    int val;
    scanf("%d", &val);
    int x = search(val);
    if (x == -1)
    {
        printf("\nNot Found\n");
    }
    else
    {
        printf("\nFound\n");
        printf("Index of element is :%d\n", x + 1);
    }
    return 0;
}
