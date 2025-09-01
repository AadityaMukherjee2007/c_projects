// code for set subtraction
#include <stdio.h>

void firstMinusSecond(int a[], int n1, int b[], int n2);
int pop(int arr[], int n, int index);

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

            }
        }
    }
}