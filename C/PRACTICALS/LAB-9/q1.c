
#include <stdio.h>
#include <string.h>


struct student
{
    int rollno;
    char *name;
    int sub - marks[6];
} s[5];

void display(struct student s[], int n)
{
    int sum = 0, highest = 0, lowest = 6000;
    char high[15], low[15];
    printf("RollNo\tName\tS1\tS2\tS3\tS4\tS5\tS6\tTotal\t");
    for (int i = 0; i < n; i++)
    {
        printf("\n%d%10s\t", s[i].rollno, s[i].name);
        for (int j = 0; j < 6; j++)
        {
            printf("%d\t", s[i].sub_marks[j]);
            sum += s[i].sub_marks[j];
        }
        if (sum > highest)
        {
            highest = sum;
            high[0] = '\0';
            strcpy(high, s[i].name);
        }
        if (sum < lowest)
        {
            lowest = sum;
            low[0] = '\0';
            strcpy(low, s[i].name);
        }
        printf("%d\t", sum);
        sum = 0;
    }
    printf("\nThe highest marks obtained are %d and obtained by %s", highest, high);
    printf("\nThe lowest marks obtained are %d and obtained by %s", lowest, low);
}
int main()
{
    printf("Enter data of students\n");
    for (int i = 0; i < 5; i++)
    {
        fflush(stdin);
        printf("Enter student's name\n");
        scanf("%[^\n]s", &s[i].name);
        printf("Enter student's roll no\n");
        scanf("%d", &s[i].rollno);
        printf("Enter marks now\n");
        for (int j = 0; j < 6; j++)
        {
            printf("Enter marks of Subject %d ", j + 1);
            scanf("%d", &s[i].sub_marks[j]);
        }
        printf("\n");
    }
    display(s, 5);

    return 0;
}
