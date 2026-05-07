#include <stdio.h>

int hcf(int a, int b);
int lcm(int a, int b);

int main()
{
    int a, b;
    printf("a, b: ");
    scanf(" %d %d", &a, &b);

    printf("HCF: %d\n", hcf(a, b));
    printf("LCM: %d\n", lcm(a, b));

    return 0;
}

int hcf(int a, int b)
{
    if (b == 0)
        return a;
    return hcf(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / hcf(a, b);
}