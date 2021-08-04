#include <stdio.h>
#include "1.C"
extern student_array[100];
extern n;
void elmnt()
{
    bubbleSort(n);
    printf("SORTED ARRAY : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", student_array[i]);
    }
    printf("\nEnter nth lowest element position: ");
    int pos;
    scanf("%d", &pos);
    printf("nth lowest mark from the student_array = %d\n", student_array[pos - 1]);
    return 0;
}
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int n)
{
    int i, j;
    int swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (student_array[j] > student_array[j + 1])
            {
                swap(&student_array[j], &student_array[j + 1]);
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
}
