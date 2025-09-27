#include <stdio.h>

int Largest(int[], int);
int Smallest(int[], int);
int k_largest(int[], int, int);

// int test_arr[] = {4,5,3,6,7,1,9,8,2};
// int n = 9;

// int test_arr[] = {500, 12, 999, 42, 87, 999, 300};
// int n = 7;

// int test_arr[] = {5, 5, 5, 3, 3, 2, 1};
// int n = 7; 

int test_arr[] = {10, 4, 7, 15, 2, 20, 9, 11};
int n = 8; 

int main()
{
    int k = 0;
    // int n;
    // printf("Lenght of Array: ");
    // scanf("%d", &n);

    // int arr[n];

    // for (int i = 0; i < n; i++)
    // {
    //     printf("arr[%d]: ", i);
    //     scanf("%d", &arr[i]);
    // }

    printf("K-th largest element: ");
    scanf("%d", &k);

    printf("\n%d-Largest Element: %d\n", k, k_largest(test_arr, n, k));

    return 0;
}

int Largest(int arr[], int n)
{
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }

    return largest;
}

int Smallest(int arr[], int n)
{
    int smallest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (smallest > arr[i])
        {
            smallest = arr[i];
        }
    }

    return smallest;
}

int k_largest(int arr[], int n, int k)
{
    if (k == 1)
        return Largest(arr, n);
    
    int largest = Largest(arr, n), smallest = Smallest(arr, n), k_largest = arr[0];
    
    for (int counter = 1; counter < k; counter++)
    {
        k_largest = smallest;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < largest && k_largest < arr[i])
            {
                k_largest = arr[i];
            }
        }
        largest = k_largest;
    }

    return k_largest;
}