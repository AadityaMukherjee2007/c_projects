/*
WAPC to input an array of ‘n’ elements from the user. 
Find and display the second highest element of the array.
*/

#include <stdio.h>

int secondLargest(int arr[], int n);

int main()
{
    int n = 0;
    printf("Length of Array: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Second Largest: %d\n", secondLargest(arr, n));

    return 0;
}

int secondLargest(int arr[], int n)
{
    int largest = arr[0], second_largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (largest < arr[i])
        {
            if (i != 1)
                second_largest = largest;
            largest = arr[i];
        }
        
        if (i == 1 && arr[i] < largest && second_largest == largest)
            second_largest = arr[i];
        else if (i != 1 && second_largest < arr[i] && arr[i] < largest)
            second_largest = arr[i];
    }
    return second_largest;
}