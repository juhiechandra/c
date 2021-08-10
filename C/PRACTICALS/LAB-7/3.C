#include <stdio.h>
int w[3] = {0};
void details(int a, int (*n)[6])
{
    printf("Roll Number= %d\n\n", a);
    a = a - 1;
    for (int i = 0; i < 6; i++)
    {
        printf("subject %d =%d\n", i + 1, n[a][i]);
    }
}
void total(int (*n)[6])
{
    int s[6] = {0}, g = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            s[j] += n[i][j];
            g += n[i][j];
            w[i] += n[i][j];
        }
    }
    printf("*Student-wise total*\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Student %d Total : %d\n", i + 1, w[i]);
    }
    printf("\n**Subject-wise total*\n\n");
    for (int i = 0; i < 6; i++)
    {
        printf("Subject %d total : %d\n", i + 1, s[i]);
    }
    printf("\nGrand-Total :%d", g);
}
void topper(int (*n)[6])
{
    int c = 0, a = 0;
    for (int i = 1; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            w[i] += n[i][j];
        }
        if (w[i] > a)
        {
            a = w[i];
            c = i;
        }
    }
    printf("\n**Topper details\n\n");
    printf("Roll number: %d\nMarks:\n", c + 1);
    for (int i = 0; i < 6; i++)
    {
        printf("subject %d =%d\n", i + 1, n[c][i]);
    }
}
int main()
{

    int a, nums[3][6];
    printf("Enter the marks of the students\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            scanf("%d", &nums[i][j]);
        }
    }
    printf("Table\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf(" %d", nums[i][j]);
        }
        printf("\n");
    }
    printf("\nPress:\n1 for the detail of any student\n2 for the subjectwise and studentwise total along with grand total\n3 For the detail of topper\n");
    scanf("%d", &a);
    printf("\n");
    switch (a)
    {
        int g;
        printf("roll");
        scanf("%d", &g);
    case 1:
        details(a, nums);
        break;
    case 2:
        total(nums);
        break;
    case 3:
        topper(nums);
        break;
    default:
        printf("INVALID ENTRY");
        break;
    }
    return 0;
}
