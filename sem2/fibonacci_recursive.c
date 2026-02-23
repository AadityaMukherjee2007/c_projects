#include <stdio.h>

void fibonacci(int a, int b, int n);

int main()
{
    fibonacci(0, 1, 10);
    return 0;
}

void fibonacci(int a, int b, int n)
{
    if (n == 1)
    {
        printf("%d\n", a);
        return;
    }

    printf("%d, ", a);
    int c = a + b;
    a = b;
    b = c;
    return fibonacci(a, b, n - 1);
    
}