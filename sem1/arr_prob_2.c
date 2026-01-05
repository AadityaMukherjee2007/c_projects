/******************************************************************************
WAPC to do the following:
1. Initialize an integer array of 5 elements
2. Accept an integer from the user
3. Display whether or not the element entered by the user is present in the array
Assume all elements in the array are unique
*******************************************************************************/

#include <stdio.h>

int linearSearch(int arr[], int n, int ele);

int main() 
{
    int arr[] = {5, 12, 1, 0, -6};
    int n = 0;

    printf("Element: ");
    scanf("%d", &n);

    if (linearSearch(arr, 5, n)) 
        printf("Element present!\n");
    else 
        printf("Element not found.\n");
    
    return 0;
}

int linearSearch(int arr[], int n, int ele)
{
    for (int i = 0; i < n; i++)
    {
        if (ele == arr[i])
            return 1;
    }
    return 0;
}