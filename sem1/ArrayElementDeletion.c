#include <stdio.h>
#include "array_util.h"

int pop(int a[], int n, int index);

int main()
{
    int arr[] = {9, 8, 4, 3, 2, 5, 1, 6, 7};
    print(arr, 9);
    int n = pop(arr, 9, 5);
    print(arr, n);

    return 0;
}

int pop(int a[], int n, int index)
{
    if (index < 0 || index >= n)
        return -1;

    for (int i = 0; i < n; i++)
    {
        if (i == index)
        {
            for (int j = i; j < n - 1; j++)
            {
                a[j] = a[j] + a[j+1];
                a[j+1] = a[j] - a[j+1];
                a[j] = a[j] - a[j+1];
            }
        }
    }

    return n - 1;
}