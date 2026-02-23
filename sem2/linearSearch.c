#include <stdio.h>

int search(int *arr, int n, int target);

int main()
{
    int n, pos, target;
    printf("Length of array: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter elements: \n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nTarget: ");
    scanf("%d", &target);
    pos = search(arr, n, target);

    if (pos == -1)
        printf("Element not found :(\n");
    else 
        printf("%d found at index %d.\n", target, pos);
    
    return 0;
}

int search(int *arr, int n, int target)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == target)
            return i;
    return -1;
}