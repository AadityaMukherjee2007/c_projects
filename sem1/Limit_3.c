#include <stdio.h>
#include <math.h>

double limitingValue();

int main()
{
    printf("Limiting value of (2^(2x+1) + 3^x + 4) / (4^x + 2^x - 1) : %lf\n", limitingValue());
    return 0;
}

double limitingValue()
{
    double E = 1.00, x = 1.00, A = 1.00, prev = 1.00;

    while (E > 0.0000000000001)
    {
        A = (pow(2, (2 * x + 1)) + pow(3, x) + 4) / (pow(4, x) + pow(2, x) - 1);
        // printf("%lf\n", A);
        E = fabs(A - prev);
        prev = A;
        x++;
    }

    return A;
}