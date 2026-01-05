#include <stdio.h>

void display(int arr[], int n);
void sort(int arr[], int n);

int main()
{
    // int n = 0;
    // printf("Length of Array: ");
    // scanf("%d", &n);

    // int arr[n];

    // for (int i = 0; i < n; i++)
    // {
    //     printf("arr[%d]: ", i);
    //     scanf("%d", &arr[i]);
    // }

    // printf("\n");

    int arr[] = {10, 9, 8, 11, 7};
    int n = 5;

    display(arr, n);
    sort(arr, n);
    display(arr, n);
    return 0;
}

void display(int arr[], int n)
{
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%d%s", arr[i], i == n-1 ? "" : ", ");
    }
    printf("]\n");
}

// insertion sort in desc order
void sort(int arr[], int n)
{
    // My first attempt

    // for (int i = 1; i < n; i++)
    // {
    //     int target = arr[i];
    //     for (int j = 0; j < i; j++)
    //     {
    //         if (target > arr[j])
    //         {
    //             for (int k = i; k > j; k--)
    //             {
    //                 arr[k] = arr[k - 1];
    //                 // display(arr, n);
    //             }
    //             arr[j] = target;
    //             break;
    //         }
    //     }
    //     // printf("\n");
    //     // display(arr, n);
    // }

    // More optimised code 

    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}