#include <stdio.h>

int valid(int a, int b, int c);
char* type(int a, int b, int c);

int main()
{
    int s1, s2, s3, validTriangle;

    printf("Enter sides of triangle:\n");

    printf("Side 1: ");
    scanf("%d", &s1);

    printf("Side 2: ");
    scanf("%d", &s2);

    printf("Side 3: ");
    scanf("%d", &s3);

    validTriangle = valid(s1, s2, s3);

    if (validTriangle == 1)
    {
        printf("\n%s\n", type(s1, s2, s3));
    }
    else 
    {
        printf("Invalid Triangle\n");
    }

    return 0;
}

int valid(int a, int b, int c)
{
    if ((a + b) > c && (b + c) > a && (a + c) > b)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

char* type(int a, int b, int c)
{
    if (a == b && b == c)
    {
        return "Equilateral";
    }
    else if (a == b || b == c || a == c)
    {
        return "Isosceles";
    }
    else
    {
        return "Scalene";
    }
}