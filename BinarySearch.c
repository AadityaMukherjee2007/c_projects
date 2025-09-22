#include <stdio.h>

void selectionSort(int arr[], int n);
int binarySearch(int arr[], int n, int target);

int main()
{
    int test_arr[] = {8,4,6,3,9};
    int n = 5;
    // int n = 0;

    // printf("Length of array: ");
    // scanf("%d", &n);

    // int arr[n];
    // printf("Enter elements of array: \n");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("arr[%d]: ", i);
    //     scanf("%d", &arr[i]);
    // }
    
    int search_status = binarySearch(test_arr, n, 8);
    if (search_status)
        printf("Element found!\n");
    else 
        printf("Element not found!\n");

    return 0;
}

int binarySearch(int arr[], int n, int target)
{
    selectionSort(arr, n);
    int upper = n - 1, lower = 0;

    while (lower < upper)
    {
        int mid = (lower + upper) / 2;
        
        if (arr[mid] == target)
        {
            printf("%d present at index: %d\n", target, mid);
            return 1;
        }
        else if (arr[mid] < target)
        {
            lower = mid + 1;
        }
        else 
        {
            upper = mid - 1;
        }
    }

    return 0;
}

void selectionSort(int arr[], int n)
{
    // int len = sizeof(arr) / sizeof(int);
    // printf("Length: %d", sizeof(arr[0]));

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

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}