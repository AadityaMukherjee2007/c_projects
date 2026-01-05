#include <stdio.h>

void display(int arr[], int n);
void sort(int arr[], int n);

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

    printf("\n");

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

// selection sort
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
}