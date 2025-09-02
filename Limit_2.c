#include <stdio.h>
#include <math.h>

double limitingValue();

int main()
{
    printf("Limiting value of (25 - n^2) / (5 - n) : %lf\n", limitingValue());
    return 0;
}

double limitingValue()
{
    double n = 1.00, A = 1.00;

    while (n < 5)
    {
        A = (25 - pow(n, 2)) / (5 - n);
        n += 0.00001;
    }

    return A;
}