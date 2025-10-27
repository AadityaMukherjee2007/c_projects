#include <stdio.h>

int second(int arr[], int n);

int main()
{
    int arr[] = {10, 3, 4, 5, 2, 7, 6, 3, 1, 9};
    int n = 10;

    printf("Second Smallest Element: %d\n", second(arr, n));
    return 0;
}

int second(int arr[], int n)
{
    int smallest = arr[0], secondSmallest = arr[0];

    for (int i = 0; i < n; i++)
        if (smallest > arr[i])
            smallest = arr[i];

    for (int i = 0; i < n; i++)
    {
        if (secondSmallest == smallest && secondSmallest < arr[i] && smallest < arr[i])
            secondSmallest = arr[i];
        else if (secondSmallest != smallest && arr[i] < secondSmallest && arr[i] > smallest)
            secondSmallest = arr[i];
    }

    return secondSmallest;
}