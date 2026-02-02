#include <stdio.h>

float areaOfRect(float b, float h);

int main()
{
    float base, height, area;

    printf("Base: ");
    scanf("%f", &base);

    printf("Height: ");
    scanf("%f", &height);

    printf("Area: %.2f\n", areaOfRect(base, height));

    return 0;
}

float areaOfRect(float b, float h)
{
    return b * h;
}
