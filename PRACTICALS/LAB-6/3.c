#include <stdio.h>
#include <stdlib.h>
#include "1.C"
extern student_array[100];
extern n;
void insert_mark(int pos);
void delete_mark(int marks);
void edit()
{
    int entry, poss, mrks;
PING:
    printf("CHOOSE THE ACTION TO PERFORM :\n (1)NEW ENTRY  (2)DELETE ENTRY (3)EXIT\n");
    scanf("%d", &entry);
    switch (entry)
    {
    case 1:
        printf("select a position :");
        scanf("%d", &poss);
        insert_mark(poss);
        break;
    case 2:
        printf("enter marks:");
        scanf("%d", &mrks);
        delete_mark(mrks);
        break;
    case 3:
        end();
        break;
    default:
        break;
    }
    printf("new entries are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", student_array[i]);
    }
    goto PING;
}
void insert_mark(int pos)
{
    int marks;
    printf("enter the marks to enter in positon:");
    scanf("%d", &marks);
    n++;
    for (int i = n - 1; i >= pos; i--)
    {
        student_array[i] = student_array[i - 1];
    }
    student_array[pos - 1] = marks;
    n++;
}
void delete_mark(int marks)
{
    int pos;
    for (int i = 0; i < n; i++)
    {
        if (student_array[i] == marks)
        {
            pos = i;
            break;
        }
    }
    for (int i = pos; i < n - 1; i++)
    {
        student_array[i] = student_array[i + 1];
    }
    n--;
}
