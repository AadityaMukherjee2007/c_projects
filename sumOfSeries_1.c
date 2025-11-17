#include <stdio.h>
#include <math.h>

int main()
{
    float sum = 1, prev = 0, x = 4, eps = 0.00001;
    int c = 1;

    while (fabs(sum - prev) > eps)
    {
        prev = sum;

        if (c % 2 == 0)
            sum += 1 / (x * c);
        else 
            sum -= 1 / (x * c);

        c++;
    }

    printf("Sum: %f\n", sum);
    return 0;
}