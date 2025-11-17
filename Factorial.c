#include <stdio.h>

unsigned long long factorial(int n);

int main()
{
    int n = 0;
    printf("n: ");
    scanf("%d", &n);

    if (n > 65)
    {
        printf("Can't handle numbers more than 65.\n");
        return 1;
    }

    printf("Factorial: %llu\n", factorial(n));

    return 0;
}

unsigned long long factorial(int n)
{
    unsigned long long fac = 1;
    for (int i = 2; i <= n; i++)
    {
        fac *= i;
    }

    return fac;
}