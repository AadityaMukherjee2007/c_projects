#include <stdio.h>

int gcd(int a, int b);

int main()
{
    int a = 100, b = 60;
    printf("GCD of %d and %d = %d\n", a, b, gcd(a, b));
    return 0;
}

int gcd(int a, int b)
{
    if (a == 0)
        return b;

    return gcd(b % a, a);
}