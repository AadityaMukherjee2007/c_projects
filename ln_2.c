#include <stdio.h>
#include <math.h>

double ln_2();

int main()
{
    printf("ln(2) : %lf\n", ln_2());
    return 0;
}

double ln_2()
{
    double a = 0, prev = 0;
    int n = 1;

    while (n < 1000000) 
    {
        if (n % 2 == 0)
        {
            a -= 1 / (float) n;
        }
        else 
        {
            a += 1 / (float) n;
        }

        prev = a;
        n++;
    }

    return a;
}