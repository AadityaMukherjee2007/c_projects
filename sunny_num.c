/*
WAPC to input a positive integer. Check whether the number is Sunny or not. 
Note: Sunny Number – A number for which the next number is a perfect square. 
Example: 8 (since 8+1=9 which is 3²)
*/

#include <stdio.h>
#include <math.h>

int sunny(int n);

int main()
{
    int n = 0;
    printf("n: ");
    scanf("%d", &n);

    if (sunny(n))
        printf("Sunny Number!\n");
    else
        printf("Not a Sunny Number.\n");

    return 0;
}

int sunny(int n)
{
    float num = sqrt(n + 1);
    if (num - (int) num == 0)
        return 1;
    return 0;
}