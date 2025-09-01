#include <stdio.h>
#include <math.h>

double limitingValue();

int main()
{
    printf("Limiting value of n / (5 * n + 2) : %lf\n", limitingValue());
    return 0;
}

double limitingValue()
{
    double E = 1.00, n = 1.00, A = 1.00, prev = 1.00;

    while (E > 0.0000001)
    {
        A = n / (5 * n + 2);
        printf("%lf\n", A);
        E = fabs(A - prev);
        prev = A;
        n++;
    }

    return A;
}