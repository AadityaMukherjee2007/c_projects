/*
WAPC to input a positive integer. Check whether it is Automorphic or not. 
Note: A number whose square ends with the number itself is an Automorphic number. 
Example: 25² = 625 (ends with 25)
*/

#include <stdio.h>
#include <math.h>

int automorphic(int n);
int len(int n);

int main()
{
    int n = 0;
    printf("n: ");
    scanf("%d", &n);

    if (automorphic(n))
        printf("Automorphic Number!\n");
    else 
        printf("Not a Automorphic Number.\n");

    return 0;
}

int automorphic(int n)
{
    int sq = n * n;
    if (sq % (int) pow(10, len(n)) == n)
        return 1;
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