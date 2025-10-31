// WAPC to find the missing number in an array of length 'n' containing numbers from 1 to n+1

#include <stdio.h>

void inputArray(int arr[], int n);
void display(int arr[], int n);
void missing(int arr[], int n);

// driver code
int main()
{
    int n = 0;
    printf("n: ");
    scanf("%d", &n);

    int arr[n];

    inputArray(arr, n);
    printf("\n");
    display(arr, n);

    printf("\n");
    missing(arr, n);

    return 0;
}

// function to find the missing elements...
void missing(int arr[], int n)
{
    for (int i = 1; i <= n + 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d is missing from the array.\n", i);
    }
}

// function to input elements of the array...
void inputArray(int arr[], int n)
{
    printf("\nEnter elements form in the range 1 to n + 1: \n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

// function to display the array...
void display(int arr[], int n)
{
    printf("[");
    for (int i = 0; i < n; i++)
        printf("%d%s", arr[i], i == n - 1 ? "" : ", ");
    printf("]\n");
}