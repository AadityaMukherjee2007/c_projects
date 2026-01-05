#include <stdio.h>
#include "array_util.h"

void print(int arr[], int len)
{
    printf("[");
    for (int i = 0; i < len; i++)
    {
        printf("%d", arr[i]);

        if (i != len - 1)
            printf(", ");
    }
    printf("]\n");
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
