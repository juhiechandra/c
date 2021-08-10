// Consider a class having ‘n’ students. You need to read all the student marks for a particular subject and store only marks in a one dimensional array named as student_array and then have to do the following things one-by-one using recursion. Marks should be between 0 to 100.
// i ) display all the marks on the screen and find the total and average marks scored in that subject.
// ii ) find the minimum and maximum among all the marks.
// iii ) counting the number of marks scored by the students which are below the average marks, total number of marks which are similar, and frequency of each mark stored in the array.

#include <stdio.h>
min_max(student_array);

int main()
{

    int student_array[5];
    int i, sum, average;

    printf("\nEnter students marks in X subject:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Enter marks of student [%d]: ", i + 1);
        scanf("%d", &student_array[i]);
    }
    // displaying marks in list
    printf("Marks are :\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", student_array[i]);
    }

    // sum and average
    printf("Calculating sum and averagen\n");
    for (i = 0; i < 5; i++)
    {
        sum = sum + student_array[i];
    }

    printf("Sum of all marks = %d\n\n", sum);

    average = sum / 5;
    printf("Average of all marks = %d \n \n", average);

    // minimum and maximum of array

    printf(min_max);

    //

    return 0;
}
//finding minimum and maximum from the marks

void max_min(int student_array[5])
{
    int i;
    int c = student_array[0];

    for (int x = 0; x < 5; x++)
    {
        if (student_array[x]>c)
        {
            c = student_array[x];
        }
    
    }

    printf("Max is %d",c);

    int i;
    int f = student_array[0];

    for (int y = 0; y < 5; y++)
    {
        if (student_array[y] < f)
        {
            f = student_array[y];
        }
    
    }

    printf("Min is %d", f);

}


  

