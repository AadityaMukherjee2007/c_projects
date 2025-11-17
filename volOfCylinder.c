/*
WAPC to input radius and height of a cylinder. Calculate the volume of the cylinder.
*/

#include <stdio.h>

#define PI 3.142

int main()
{
    float rad = 0, height = 0;
    printf("Radius: ");
    scanf("%f", &rad);
    printf("Height: ");
    scanf("%f", &height);

    float vol = PI * rad * rad * height;
    printf("Volume: %f\n", vol);

    return 0;
}