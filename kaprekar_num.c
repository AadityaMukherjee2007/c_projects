/*
WAPC to input a positive integer. Check whether it is Kaprekar or not. 
Note: Kaprekar Number – A number whose square can be split into two parts
that add up to the number itself. Example: 45² = 2025 → 20 + 25 = 45
*/

#include <stdio.h>
#include <math.h>

int len(int n);
int kaprekar(int n);

int main()
{
    int n = 0;
    printf("n: ");
    scanf("%d", &n);

    if (kaprekar(n))
        printf("Kaprekar Number!\n");
    else
        printf("Not a Kaprekar Number.\n");

    return 0;
}

int len(int n)
{
    int c = 0;
    while (n != 0)
    {
        c++;
        n /= 10;
    }

    return c;
}

int kaprekar(int n)
{
    int sq = n * n;
    for (int i = 1; i < len(sq); i++)
    {
        int p1 = sq % (int) pow(10, i);
        int p2 = sq / (int) pow(10, i);

        // printf("p1: %d, p2: %d\n", p1, p2);
        
        if (p1 + p2 == n)
            return 1;
    }
    return 0;
}