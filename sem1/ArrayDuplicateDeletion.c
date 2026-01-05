#include <stdio.h>

void display(int arr[], int n);
void delDuplicate(int arr[], int n);
void sort(int arr[], int n);

int main()
{
    int n = 0;

    printf("Array Length: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter Elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // int arr[] = {9, 4, 3, 5, 1, 7, 8, 9, 4, 6, 6, 5, 3, 3, 3};
    // int n = 15;

    display(arr, n);
    delDuplicate(arr, n);
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

    printf("Array after sorting: ");
    display(arr, n);
}


void delDuplicate(int arr[], int n)
{
    sort(arr, n);
    for (int i = 0; i <= n; i++)
    {
        int c = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] != arr[j])
            {
                if (c == 0)
                {
                    // printf("c: %d\n", c);
                    break;
                }
                else if (c != 0)
                {
                    // printf("c: %d\n", c);
                    for (int k = i + 1; k < n - c; k++)
                    {
                        arr[k] = arr[k] + arr[k + c];
                        arr[k + c] = arr[k] - arr[k + c];
                        arr[k] = arr[k] - arr[k + c];
                        // display(arr, n);
                    }
                    break;
                }
            }
            else 
            {
                c++;
            }
        }
        n -= c;
        // display(arr, n);
    }
    
    // printf("\n\nn = %d\n", n);
    printf("Array after removing duplicates: ");
    display(arr, n);
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