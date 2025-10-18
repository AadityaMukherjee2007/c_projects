/*
WAPC to input a positive integer. Check whether the number is abundant or not. 
Abundant Number – A number for which the sum of proper divisors is greater than 
the number. Example: 12 → 1+2+3+4+6=16 > 12
*/

#include <stdio.h>

int abundant(int n);

int main()
{
    int n = 0;
    printf("n: ");
    scanf("%d", &n);

    if (abundant(n))
        printf("Abundant Number!\n");
    else
        printf("Not a Abundant Number.\n");

    return 0;
}

int abundant(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }

    if (sum > n)
        return 1;
    return 0;
}