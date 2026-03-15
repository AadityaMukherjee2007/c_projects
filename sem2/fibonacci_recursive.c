#include <stdio.h>

int fibonacci(int a, int b, int n);

int main()
{
    int n;
    printf("n: ");
    scanf("%d", &n);

    fibonacci(0, 1, n);
    return 0;
}

int fibonacci(int a, int b, int n)
{
    if (n == 0)
    {
        printf("\n");
        return 0;
    }

    printf("%d ", a);
    return fibonacci(b, a+b, n-1);
}
