#include <stdio.h>

int main()
{
    int S = 0, n = 0;

    printf("n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        S += i;
    }

    float avg = (float) S / n;

    printf("Sum: %d\nAverage: %f\n", S, avg);
}