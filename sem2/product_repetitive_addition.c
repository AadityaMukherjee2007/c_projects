#include <stdio.h>

int prod(int a, int b);

int main()
{
    int a = 3, b = 5;
    printf("%d x %d = %d\n", a, b, prod(a, b));
    return 0;
}

int prod(int a, int b)
{
    if (b == 0)
        return 0;

    return a + prod(a, b - 1);
}