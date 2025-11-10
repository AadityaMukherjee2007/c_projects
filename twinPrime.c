#include <stdio.h>
#include <math.h>

int isPrime(int n);

int main()
{
    int n = 0;
    printf("Enter range: ");
    scanf("%d", &n);

    for (int i = 3; i < n - 2; i++)
        if (isPrime(i) && isPrime(i + 2))
            printf("(%d, %d)\n", i, i + 2);

    return 0;
}

int isPrime(int n)
{
    if (n == 2 || n == 3)
        return 1;

    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;

    return 1;
}