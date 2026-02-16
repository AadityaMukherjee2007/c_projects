#include <stdio.h>

int HCF(int a, int b);
int LCM(int a, int b);

int main()
{
    int a, b, hcf, lcm;
    printf("a, b: ");
    scanf("%d %d", &a, &b);

    hcf = HCF(a, b);
    printf("HCF of %d and %d is %d.\n", a, b, hcf);
    printf("LCM of %d and %d is %d.\n", a, b, LCM(a, b));

    return 0;
}

int HCF(int a, int b)
{
    while (a != 0)
    {
        int r = b % a;
        b = a;
        a = r;
    }

    return b;
}

int LCM(int a, int b)
{
    return (a * b) / HCF(a, b);
}