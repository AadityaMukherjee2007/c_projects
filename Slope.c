#include <stdio.h>

#define COORD_SYS 2

float coord1[COORD_SYS], coord2[COORD_SYS];
float slope(float c1[], float c2[]);

void in();

int main()
{
    // main function calls other helper functions and outputs the slope
    in();

    float m = slope(coord1, coord2);
    printf("\nSlope: %f\n", m);
    
    return 0;
}

void in()
{
    // to take input for the coordinates coord1, coord2
    printf("Enter Coordinates (x1, y1): ");
    for (int i = 0; i < COORD_SYS; i++)
    {
        scanf("%f", &coord1[i]);
    }

    printf("Enter Coordinates (x2, y2): ");
    for (int i = 0; i < COORD_SYS; i++)
    {
        scanf("%f", &coord2[i]);
    }
}

float slope(float c1[], float c2[])
{
    // returns the slope of corrdinates c1, c2
    return (c1[1] - c2[1]) / (c1[0] - c2[0]);
}