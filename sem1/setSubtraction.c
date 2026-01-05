// code for set subtraction
#include <stdio.h>
#include "array_util.h"

#define len(arr) (sizeof(arr) / sizeof((arr)[0]))

void firstMinusSecond(int a[], int n1, int b[], int n2);

int main()
{
    int n1, n2;
    printf("Enter length of array 1 : ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Enter elements for array 1: ");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter length of array 2 : ");
    scanf("%d", &n2);

    int arr2[n2];

    printf("Enter elements for array 1: ");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    /* int arr1[] = {1, 2, 3, 4, 5, 6, 7};
    int arr2[] = {3, 5, 7, 9};
    n1 = 7, n2 = 4; */
    
    firstMinusSecond(arr1, n1, arr2, n2);

    return 0;
}

void firstMinusSecond(int a[], int n1, int b[], int n2)
{
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            if (b[i] == a[j])
            {
                n1 = pop(a, n1, j);
                // printf("%d\n", n1);
                // print(a, n1);
                break;
            }
        }
    }
    // printf("\n\n%d\n", n1);

    print(a, n1);
}