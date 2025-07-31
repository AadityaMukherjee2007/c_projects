#include <stdio.h>

float calc(float p, float r, float t);

int main()
{
    float principal, rate, time;

    printf("Principal: ");
    scanf("%f", &principal);

    printf("Rate: ");
    scanf("%f", &rate);

    printf("Time: ");
    scanf("%f", &time);

    printf("Simple Interest: %.2f\n", calc(principal, rate, time));
    return 0;
}

float calc(float p, float r, float t)
{
    return p * (r / 100) * t;
}