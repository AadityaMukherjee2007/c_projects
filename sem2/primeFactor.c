/* input a number and find its prime factors */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int is_prime(int n);
void primeFactors(int n);

int main()
{
    int n = 0;
    double cpu_time_used;
    clock_t start, end;

    printf("n: ");
    scanf("%d", &n);

    if (n < 10)
    {
        printf("Error! 1 digit numbers not allowed.\n");
        exit(1);
    }
    
    start = clock();
    primeFactors(n);
    end = clock();

    cpu_time_used = (double) (end - start) / CLOCKS_PER_SEC;
    printf("Execution Time: %f seconds\n", cpu_time_used);

    return 0;
}

int is_prime(int n)
{
    if (n <= 1)
        return 0;

    for (int i = 2; i <= n / i; i++)
        if (n % i == 0)
            return 0;

    return 1;
}

void primeFactors(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0 && is_prime(i))
        {
            printf("%d", i);
            printf("\n");
        }
    }
}