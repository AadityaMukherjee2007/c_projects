/*
WAPC to input a positive integer. Check whether it is Happy or not. 
Note: Happy Number – A number that eventually reaches 1 when replaced 
repeatedly by the sum of the squares of its digits. 
Example: 19 → 1²+9²=82 → 8²+2²=68 → 6²+8²=100 … → 1
*/

#include <stdio.h>

int happy(int n);
int sq(int n);
int sq_digits(int n);

int main()
{
    int n = 0;
    printf("n: ");
    scanf("%d", &n);

    if (happy(n))
        printf("Happy Number!\n");

    return 0;
}

int sq(int n)
{
    return n * n;
}

int sq_digits(int n)
{
    int sq_sum = 0;
    while (n != 0)
    {
        sq_sum += sq(n % 10);
        n /= 10;
    }
    return sq_sum;
}

int happy(int n)
{
    while (1)
    {   
        if (sq_digits(n) == 1)
            return 1;
        else
            n = sq_digits(n);
    }
}
