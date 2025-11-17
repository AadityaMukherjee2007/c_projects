/*
WAPC to input a positive integer. Assume that the number is of 3 digits. 
Check and print if the number is Armstrong or not. 
Note: An Armstrong number is a number that is equal to the sum of its own
digits each raised to the power of the number of digits, 
for example, 153 = 1³ + 5³ + 3³.
*/

#include <stdio.h>
#include <math.h>

int len(int n);
int armstrong(int n);

int main()
{
    int n = 0;
    printf("n: ");
    scanf("%d", &n);

    if (armstrong(n))
        printf("Armstrong number\n");
    else 
        printf("Not an Armstrong number\n");

    return 0;
}

int armstrong(int n)
{
    int copy = n, sum = 0, l = len(n);

    while (copy != 0)
    {
        sum += pow(copy % 10, l);
        copy /= 10;
    }

    if (sum == n)
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