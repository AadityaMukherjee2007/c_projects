#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100000

void selection_sort(int *arr, int l);
void bubble_sort(int *arr, int l);
int compare(const void *a, const void *b);

int main()
{
    double cpu_time_used;
    clock_t start, end;

    int base[SIZE];
    int arr_sel[SIZE];
    int arr_bub[SIZE];
    int arr_qs[SIZE];

    srand(time(NULL));

    // Generate random base array
    for (int i = 0; i < SIZE; i++)
        base[i] = rand() % 100000;

    // Copy into separate arrays
    for (int i = 0; i < SIZE; i++)
    {
        arr_sel[i] = base[i];
        arr_bub[i] = base[i];
        arr_qs[i]  = base[i];
    }

    // Selection Sort
    start = clock();
    selection_sort(arr_sel, SIZE);
    end = clock();
    cpu_time_used = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Selection Sort Time: %f seconds\n", cpu_time_used);

    // Bubble Sort
    start = clock();
    bubble_sort(arr_bub, SIZE);
    end = clock();
    cpu_time_used = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Bubble Sort Time:    %f seconds\n", cpu_time_used);

    // qsort
    start = clock();
    qsort(arr_qs, SIZE, sizeof(int), compare);
    end = clock();
    cpu_time_used = (double)(end - start) / CLOCKS_PER_SEC;
    printf("qsort Time:          %f seconds\n", cpu_time_used);

    return 0;
}

// selection sort
void selection_sort(int *arr, int l)
{
    for (int i = 0; i < l - 1; i++)
    {
        int smallest = arr[i];
        int pos = i;

        for (int j = i + 1; j < l; j++)
        {
            if (arr[j] < smallest)
            {
                smallest = arr[j];
                pos = j;
            }
        }

        arr[pos] = arr[i];
        arr[i] = smallest;
    }
}

// bubble sort (improved version)
void bubble_sort(int *arr, int l)
{
    for (int i = 0; i < l - 1; i++)
    {
        int swapped = 0;

        for (int j = 0; j < l - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }

        if (!swapped)
            break;
    }
}

// comparison function for qsort
int compare(const void *a, const void *b)
{
    int x = *(const int*)a;
    int y = *(const int*)b;

    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}