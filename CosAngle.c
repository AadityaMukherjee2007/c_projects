#include <stdio.h>
#include <math.h>

#define PI 3.1416
#define MAX 180

int main()
{
    int angle;
    float x, y;

    angle = 0;
    printf("\t  Angle       Cos(angle)\n");


    while (angle <= MAX)
    {
        x = (PI / MAX) * angle;
        y = cos(x);
        printf("%15d %13.4f\n", angle, y);
        angle += 10;
    }

    return 0;
}