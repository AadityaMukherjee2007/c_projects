#include <stdio.h>

void selection_sort(int arr[], int n);
void display(int arr[], int n);

int main()
{
    int arr[] = {2, 5, 3, 9, 7, 4};
    int len = 6;

    display(arr, len);
    selection_sort(arr, len);
    display(arr, len);

    return 0;
}

void display(int arr[], int n)
{
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%d%s", arr[i], i == n - 1 ? "]\n" : ", ");
    }
}

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallest = arr[i], pos = i;
        for (int j = i + 1; j < n; j++)
        {
            if (smallest > arr[j])
            {
                smallest = arr[j];
                pos = j;
            }
        }
        
        arr[pos] = arr[i];
        arr[i] = smallest;
    }
}