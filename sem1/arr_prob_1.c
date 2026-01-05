/******************************************************************************
WAPC to do the following:
1. Declare an integer array of 5 elements
2. Fill the array with user inputs
3. Display the original array
4. Reverse the array
5. Display the reversed array
*******************************************************************************/

#include <stdio.h>

void display(int arr[], int n);
void reverse(int arr[], int n);

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    display(arr, 5);
    reverse(arr, 5);
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

void reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        arr[i] = arr[i] + arr[n - 1 - i];
        // printf("%d ", arr[i]);
        arr[n - 1 - i] = arr[i] - arr[n - 1 - i];
        // printf("%d ", arr[n - 1 - i]);
        arr[i] = arr[i] - arr[n - 1 - i];
        // printf("%d \n", arr[i]);
    }
    display(arr, n);
}