#include <stdio.h>

// helper functions
void sort(int arr[], int n);
void display(int arr[], int n);
void inputArray(int arr[], int n);

int main()
{
    int n = 0;
    printf("Length of array: ");
    scanf("%d", &n);

    int arr[n];
    inputArray(arr, n);
    display(arr, n);
    sort(arr, n);

    printf("Sorted Array: ");
    display(arr, n);

    return 0;
}

// implementing bubble sort...
void sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
            }
        }
    }
}

// function to input elements of the array...
void inputArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

// function to display the array...
void display(int arr[], int n)
{
    printf("[");
    for (int i = 0; i < n; i++)
        printf("%d%s", arr[i], i == n - 1 ? "" : ", ");
    printf("]\n");
}