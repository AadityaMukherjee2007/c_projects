#include <stdio.h>
#include <math.h>

int is_prime(int n);

int main()
{
    int n = 0;
    printf("n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        if (is_prime(i))
            printf("%d\n", i);

    return 0;
}

int is_prime(int n)
{
    if (n == 0 || n == 1)
        return 0;

    if (n == 2 || n == 3)
        return 1;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}