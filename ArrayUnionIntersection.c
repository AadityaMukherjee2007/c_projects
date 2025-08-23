#include <stdio.h>

// helper functions
void display(int arr[], int n);
int delDuplicate(int arr[], int n);
void sort(int arr[], int n);
void merge(int a[], int n1, int b[], int n2, int c[]);

// functions for union and intersection
void array_union(int a1[], int n1, int a2[], int n2);
// void array_intersection();

int main()
{
    int len1, len2;
    printf("Enter Length of First Array: ");
    scanf("%d", &len1);

    int array1[len1];

    printf("Enter elements of First Array: ");
    for (int i = 0; i < len1; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("Enter Length of Second Array: ");
    scanf("%d", &len2);

    int array2[len2];

    printf("Enter elements of Second Array: ");
    for (int i = 0; i < len2; i++)
    {
        scanf("%d", &array2[i]);
    }

    array_union(array1, len1, array2, len2);
    return 0;
}

void array_union(int a1[], int n1, int a2[], int n2)
{
    int UnionArray[n1 + n2];
    sort(a1, n1);
    sort(a2, n2);
    merge(a1, n1, a2, n2, UnionArray);
    int n = delDuplicate(UnionArray, (n1 + n2));

    printf("Union: ");
    display(UnionArray, n);
}

void merge(int a[], int n1, int b[], int n2, int c[])
{
    int x = 0;
    for (int i = 0; i < n1; i++)
    {
        c[i] = a[i];
        x = i;
    }

    x++;

    for (int i = 0; i < n2; i++)
    {
        c[x + i] = b[i];
    }
}

void sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
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

    // printf("Array after sorting: ");
    // display(arr, n);
}


int delDuplicate(int arr[], int n)
{
    sort(arr, n);
    for (int i = 0; i <= n; i++)
    {
        int c = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] != arr[j])
            {
                if (c == 0)
                {
                    // printf("c: %d\n", c);
                    break;
                }
                else if (c != 0)
                {
                    // printf("c: %d\n", c);
                    for (int k = i + 1; k < n - c; k++)
                    {
                        arr[k] = arr[k] + arr[k + c];
                        arr[k + c] = arr[k] - arr[k + c];
                        arr[k] = arr[k] - arr[k + c];
                        // display(arr, n);
                    }
                    break;
                }
            }
            else 
            {
                c++;
            }
        }
        n -= c;
        // display(arr, n);
    }
    
    // printf("\n\nn = %d\n", n);
    // printf("Array after removing duplicates: ");
    // display(arr, n);

    return n;
}

void display(int arr[], int n)
{
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i != n - 1)
            printf(", ");
    }
    printf("]\n");
}