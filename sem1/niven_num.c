/*
WAPC to input a positive integer. Check whether it is Niven or not. 
Note: Niven number – A number divisible by the sum of its digits. 
Example: 18 ÷ (1+8) = 2
*/

#include <stdio.h>

int niven(int n);

int main()
{
    int n = 0;
    printf("n: ");
    scanf("%d", &n);

    if (niven(n))
        printf("Niven Number!\n");
    else
        printf("Not a Niven Number.\n");

    return 0;
}

int niven(int n)
{
    int copy = n, sum = 0;
    while (copy != 0)
    {
        sum += copy % 10;
        copy /= 10;
    }

    if (n % sum == 0)
        return 1;
    return 0;
}