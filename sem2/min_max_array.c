#include <stdio.h>

void minMax(int arr[], int n, int *min, int *max);

int main()
{
    int n, pos, min, max;
    printf("Length of array: ");
    scanf("%d", &n);
    int arr[n];
  
    printf("Enter elements: \n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    min = arr[0], max = arr[0];
    minMax(arr, n, &min, &max);

    printf("\nMax: %d, Min: %d\n", max, min);
    
    return 0;
}

void minMax(int arr[], int n, int *min, int *max)
{
    printf("\nlen: %d\n", len);
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < *min)
            *min = arr[i];

        if (arr[i] > *max)
            *max = arr[i];
    }
}