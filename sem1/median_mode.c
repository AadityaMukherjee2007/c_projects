#include <stdio.h>

int mode(int arr[], int n);
float median(int arr[], int n);
void sort(int arr[], int n);

int main()
{
    int arr[] = {4, 1, 2, 2, 3, 5, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("\nMedian: %.1f\n", median(arr, n));
    // mode(arr, n);

    return 0;
}

void sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int smallest = arr[i], pos = i;
        for (int j = i + 1; j < n; j++)
        {
            if (smallest > arr[j])
            {
                smallest = arr[j];
                pos = j;
            }
        }

        arr[pos] = arr[i];
        arr[i] = smallest;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
}

float median(int arr[], int n)
{
    sort(arr, n);
    if (n % 2 == 0)
        return (float) (arr[n / 2 - 1] + arr[n / 2]) / 2;
    else
        return arr[n / 2];
}

int mode(int arr[], int n)
{
    sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        
    }

    return 0;
}