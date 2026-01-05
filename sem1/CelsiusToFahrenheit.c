#include <stdio.h>

float convert(float c);

int main()
{
    float celsius, fahrenheit;
    printf("Enter Temperature (°C): ");
    scanf("%f", &celsius);

    fahrenheit = convert(celsius);
    printf("Fahrenheit: %.2f°F\n", fahrenheit);
    return 0;
}

float convert(float c)
{
    return ((9 * c) / 5) + 32;
}