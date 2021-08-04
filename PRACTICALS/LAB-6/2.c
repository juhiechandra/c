#include <stdio.h>
#include "1.C"
int student_array[100];
int n;
int odd_even()
{
    int oc = 0, ec = 0;
    for (int i = 0; i < n; i++)
    {
        if (student_array[i] % 2 == 0)
            ec++;
        else
            oc++;
    }
    int odd_marks[oc], even_marks[ec], odd_even_marks[oc + ec];
    int j = 0, k = 0;
    for (int i = 0; i < n; i++)
    {
        if (student_array[i] % 2 == 0)
        {
            even_marks[j] = student_array[i];
            j++;
        }
        else
        {
            odd_marks[k] = student_array[i];
            k++;
        }
    }
    for (int i = 0; i < oc + ec; i++)
    {
        if (i < oc)
        {
            odd_even_marks[i] = odd_marks[i];
        }
        else
        {
            odd_even_marks[i] = even_marks[i - oc];
        }
    }
    printf("\n");
    printf("New array is with odd first is: \n");
    for (int i = 0; i < oc + ec; i++)
    {
        printf("%d ", odd_even_marks[i]);
    }
    printf("\n");
    return 0;
}
