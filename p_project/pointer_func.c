#include <stdio.h>

void cbr(int *x)
{
    *x = *x * 10;
}

void cbv(int y)
{
    y = y * 10;
}

int main()
{
    int x, y;

    x = 10;
    y = 20;

    printf("x: %d\n", x);
    printf("y: %d\n", y);

    cbr(&x);
    cbv(y);

    printf("x: %d\n", x);
    printf("y: %d\n", y);

    return 0;
}