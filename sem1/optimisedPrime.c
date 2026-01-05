#include <stdio.h>
#include <math.h>

int prime(int n);

int main()
{
    int n = 0;
    printf("n: ");
    scanf("%d", &n);

    if (prime(n))
        printf("Prime\n");
    else 
        printf("Not prime\n");

    return 0;
}

int prime(int n)
{
    if (n == 1)
        return 0;

    // int c = 0;

    for (int i = 2; i <= (int) sqrt(n); i++)
    // for (int i = 2; i < n; i++)
    {
        // c++;
        if (n % i == 0)
        {
            // printf("c: %d\n", c);
            return 0;
        }
    }

    // printf("c: %d\n", c);
    return 1;
}