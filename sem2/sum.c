// sum of n natural numbers

#include <stdio.h>

unsigned long sum(int n);

int main()
{
    int n = 0;
    printf("n: ");
    scanf("%d", &n);

    printf("Sum: %lu\n", sum(n));

    return 0;
}

unsigned long sum(int n)
{
    return (n * (2 + (n - 1))) / 2;
}