#include <stdio.h>

int main()
{
    int n;
    printf("enter a num for length: ");
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        printf("arr[%d]: ",i);
        scanf("%d", &arr[i]);
    }
     
    printf("[");
    for (int i=0; i<n; i++)
    {
        printf("arr[%d]: %d,", i, arr[i]);
    }
    printf("]");

    int p = arr[0];
    for (int j=1; j<n; j++)
    {
        if (p<arr[j])
        {
            p = arr[j];
        }
        else
        {
            continue;
        }
    }
    printf("largest element in array is %d", p);

    int q = arr[0];
    for (int k=1; k<n; k++)
    {
        if (q>arr[k])
        {
            q = arr[k];
        }
        else
        {
            continue;
        }
    }
    printf("smallest element in array is %d", q);
    return 0;
}