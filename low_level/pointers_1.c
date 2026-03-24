#include <stdio.h>
#include <stdlib.h>

void modify(int *val);

int main()
{
    int x = 7;
    modify(&x);

    printf("x: %d\n", x);

    int *arr = malloc(3 * sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        *(arr + i) = i + 1;
    }

    for (int i = 0; i < 3; i++)
    {
        modify(arr + i);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("arr[%d] : %d\n", i, *(arr + i));
    }

    return 0;
}

void modify(int *val)
{
    *val = *val * 2;
}