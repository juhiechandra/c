#include <stdio.h>
// #include "myHeader.h"
#include <limits.h>

void display(int *arr, int);
void min_max(int arr[], int);
void count(int *arr, int);

int main(int argc, char const *argv[])
{
    int n, i;
    int student_array[n];

    printf("Enter total number of students in the class: ");
    scanf("%d", &n);

    printf("Enter the marks of %d students of the class: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", (student_array + i));
    }

    display(student_array, n);
    min_max(student_array, n);

    return 0;
}

void display(int *arr, int n)
{
    int i, sum = 0;
    float avg;

    printf("Marks of %d students of the class are: \n", n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }

    for (i = 0; i < n; i++)
    {
        sum += *(arr + i);
    }

    avg = (float)sum / n;
    printf("\nAverage marks of students: %.2f\n", avg);

    return;
}

void min_max(int arr[], int n)
{
    int i, max, min;

    max = arr[0];
    min = arr[0];

    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("The Highest and Lowest marks in the class is %d and %d", max, min);

    return;
}

void count(int *arr, int n)
{
    int i;
}