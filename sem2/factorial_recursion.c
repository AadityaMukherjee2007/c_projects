#include <stdio.h>

unsigned long long factorial(int n);

int main()
{
    int n = 0;
    printf("n: ");
    scanf("%d", &n);

    printf("Factorial: %llu\n", factorial(n));

    return 0;
}

unsigned long long factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}