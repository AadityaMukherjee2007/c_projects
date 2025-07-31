#include <stdio.h>

float calc(float b, float h);

int main()
{
    float base, height;
    printf("Base: ");
    scanf("%f", &base);

    printf("Height: ");
    scanf("%f", &height);

    printf("Area: %.2f\n", calc(base, height));
    return 0;
}

float calc(float b, float h)
{
    return (b * h) / 2;
}