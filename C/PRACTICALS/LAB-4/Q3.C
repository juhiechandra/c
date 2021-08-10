#include <stdio.h>
int count_even(int arr[], int arr_size)
{
    int even_count = 0;
    for (int i = 0; i < arr_size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even_count++;
        }
    }
    return even_count;
}
int main()
{
    int n;
    printf("How many numbers: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Total even numbers are: %d", count_even(arr, n));
}