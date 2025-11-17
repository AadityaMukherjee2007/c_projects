/******************************************************************************

WAPC to do the following:
1. Declare an integer array of 'n' elements
2. Accept integers from the user and store them in the array
3. Find the maximum element in the array

*******************************************************************************/

#include <stdio.h>

int max(int arr[], int n);

int main()
{
    int n = 0;
    printf("Length of Array: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nMax: %d\n", max(arr, n));
    return 0;
}

int max(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}