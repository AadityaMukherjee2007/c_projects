/*
WAPC to input an integer. Calculate and display
the square and cube of the number.
*/

#include <stdio.h>

int Pow(int m, int n);

int main()
{
    int num = 0;
    printf("Number: ");
    scanf("%d", &num);

    int sq = Pow(num, 2), cb = Pow(num, 3);
    printf("\nSquare: %d\nCube: %d\n", sq, cb);

    return 0;
}

int Pow(int m, int n)
{
    int result = 1;
    for (int i = 0; i < n; i++)
        result *= m;
    return result;
}