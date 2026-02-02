// find the factorial of a number

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
    unsigned long long fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}