#include <stdio.h>

int remove_duplicates(int *arr, int n);
void display(int *arr, int n);

int main()
{
    int n;
    printf("n: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: \n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    
    n = remove_duplicates(arr, n);
    display(arr, n);

    return 0;
}

int remove_duplicates(int *arr, int n)
{   
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(arr + j) == *(arr + i))
            {
                for (int k = j; k < n - 1; k++)
                {
                    int temp = *(arr + k);
                    *(arr + k) = *(arr + k + 1);
                    *(arr + k + 1) = temp;
                }
                n--;
                j--;
            }
        }
    }

    return n;
}

void display(int *arr, int n)
{
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%d%s", *(arr + i), i != n - 1 ? ", " : "]\n");
    }
}