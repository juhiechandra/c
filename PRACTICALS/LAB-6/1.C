#include <stdio.h> 
int student_array[100];
float avrg;
// (i)
void display(int *n)
{
    for (int i = 0; i < *n; i++)
    {
        printf("%d ", student_array[i]);
    }
}
// (ii)
void min_max(int n)
{
    int min = student_array[0], max = 0;
    for (int i = 0; i < n; i++)
    {
        min = (min > student_array[i]) ? student_array[i] : min;
        max = (max < student_array[i]) ? student_array[i] : max;
    }
    printf("\nMinimum marks are: %d\n", min);
    printf("Maximum marks are: %d\n\n", max);
}
// (iii)
void count(int *n)
{
    int arr1[*n], c = 0;
    for (int i = 0; i < *n; i++)
    {
        arr1[i] = 1;
    }
    for (int i = 0; i < *n; i++)
    {
        if (arr1[i])
        {
            for (int j = i + 1; j < *n; j++)
            {
                if (student_array[j] == student_array[i])
                {
                    arr1[i]++;
                    arr1[j] = 0;
                }
            }
            printf("%d marks scored by %d students\n", student_array[i], arr1[i]);
        }
        if (student_array[i] < avrg)
            c++;
    }
    printf("\nNumber of students scored below average: %d\n", c);
}
int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    printf("\nMarks of students are: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &student_array[i]);
    }
    printf("\nMarks of %d students:\n", n);
    display(&n);
    float total = 0;
    for (int i = 0; i < n; i++)
    {
        total += student_array[i];
    }
    avrg = (float)total / n;
    printf("\n\nTotal: %.2f\nAverage: %.2f\n", total, avrg);
    min_max(n);
    count(&n);
    return 0;
}
