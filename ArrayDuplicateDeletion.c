#include <stdio.h>

void display(int arr[], int n);
void delDuplicate(int arr[], int n, int *duplicates);

int main()
{
    int n = 0, duplicates = 0;

    printf("Array Length: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter Elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    display(arr, n);
    delDuplicate(arr, n, &duplicates);
    return 0;
}


// Code under progress...
void delDuplicate(int arr[], int n, int *duplicates)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; i++)
        {
            if (arr[i] == arr[j])
            {
                *duplicates++;
                for (int k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k] + arr[k + 1];
                    arr[k + 1] = arr[k] - arr[k + 1];
                    arr[k] = arr[k] - arr[k + 1];
                }
            }
        }
    }

    //arr[0] = 100;
    //display(arr, n);
}

void display(int arr[], int n)
{
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i != n - 1)
            printf(", ");
    }
    printf("]\n");
}