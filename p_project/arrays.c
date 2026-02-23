#include <stdio.h>

int main()
{
    int arr[5]; // declare an array
    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Printing out the elements of the array: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d]: %d\n", i, arr[i]);
    }

    return 0;
}