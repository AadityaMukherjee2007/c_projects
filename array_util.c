#include <stdio.h>
#include "array_util.h"

void print(int arr[], int len)
{
    printf("[");
    for (int i = 0; i < len - 1; i++)
    {
        printf("%d", arr[i]);

        if (i != len - 2)
            printf(", ");
    }
    printf("]\n");
}

int len(int arr[])
{
    int c = 0;

    while (1)
    {
        printf("%d", (char) arr[c]);
        c++;
    }
}

