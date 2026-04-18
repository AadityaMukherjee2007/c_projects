#include <stdio.h>
#include <stdlib.h>

void display(int *arr, int len);

int main()
{
    int *arr = calloc(7, sizeof(int));

    if (arr == NULL)
    {
        printf("Allocation Failed!\n");
        exit(1);
    }
    
    for (int i = 0; i < 7; i++)
        *(arr + i) = i + 1;
    display(arr, 7);

    arr = realloc(arr, (7 + 5) * sizeof(int));
    
    if (arr == NULL)
    {
        printf("Allocation Failed!\n");
        exit(1);
    }

    display(arr, 12);

    free(arr);
    return 0;
}

void display(int *arr, int len)
{
    printf("[");
    for (int i = 0; i < len; i++)
        printf("%d%s", *(arr + i), i == len - 1 ? "]\n" : ", ");
}