#include <stdio.h>

int power(int x, int y);

int main()
{
    int a = 2, b = 3;
    printf("%d ^ %d = %d\n", a, b, power(a, b));
    return 0;
}

int power(int x, int y)
{
    if (y == 0)
        return 1;

    return x * power(x, y - 1);
}