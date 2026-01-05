#include <stdio.h>

void merge(int a[], int n1, int b[], int n2, int c[], int *x);
void display(int arr[], int n);

int main()
{
    int n1 = 0, n2 = 0, x = 0;

    printf("Enter length array 1: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Enter elements of array 1: \n");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter length array 2: ");
    scanf("%d", &n2);

    int arr2[n2];

    printf("Enter elements of array 2: \n");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int mergedArray[n1 + n2];
    merge(arr1, n1, arr2, n2, mergedArray, &x);
    display(mergedArray, x);
}

void merge(int a[], int n1, int b[], int n2, int c[], int *x)
{
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
            c[*x++] = a[i++];
        else if (a[i] > b[j])
            c[*x++] = b[j++];
        else 
        {
            c[*x++] = a[i++];
            j++;
        }
    }

    printf("i: %d, j: %d", i, j);

    while (i < n1)
        c[*x++] = a[i++];
    
    while (j < n2)
        c[*x++] = b[j++];
}

void display(int arr[], int n)
{
    printf("\n[");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i != n - 1)
        {
            printf(", ");
        }
    }
    printf("]\n");
}