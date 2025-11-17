/*
WAPC to input a positive integer. Check and print if the number is perfect or not.
Note: Perfect number is a number which is equal to the sum of all its proper divisors
(excluding itself). Example: 28 = 1 + 2 + 4 + 7 + 14
*/

#include <stdio.h>

int perfectNum(int n);

int main()
{
    int n = 0; 
    printf("n: ");
    scanf("%d", &n);

    if (perfectNum(n))
        printf("Perfect Number!\n");
    else 
        printf("Not a Perfect Number.\n");
    
    return 0;
}

int perfectNum(int n)
{
    int sum = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n)
        return 1;
    return 0;
}