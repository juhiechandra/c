#include <stdio.h>
#include <string.h>
union student
{
    char name[15];
    int mark;
    int rollno;
} s[3];

int main()
{
    int m, r;
    char a[15];
    printf("Enter data of students\n");
    for (int i = 0; i < 3; i++)
    {

        printf("Enter student's name\n");
        fflush(stdin);
        scanf("%[^\n]s", &s[i].name);
        strcpy(a, s[i].name);
        printf("Enter Roll No\n");
        scanf("%d", &s[i].rollno);
        r = s[i].rollno;
        printf("Enter marks\n");
        scanf("%d", &s[i].mark);
        m = s[i].mark;
        printf("RollNo\tName\tMarks\n");
        printf("%d\t%s\t%d\n", r, a, m);
        a[0] = '\0';
    }
    return 0;
}
