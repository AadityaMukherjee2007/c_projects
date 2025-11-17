/*
WAPC to input a positive integer from the user. 
Find and display the number of digits in the number, 
sum of the digits of the number and product of the digits of the number.
*/

#include <stdio.h>

void compute(int n);

int main()
{
    int num = 0; 
    printf("Num: ");
    scanf("%d", &num);

    compute(num);

    return 0;
}

void compute(int n)
{
    int sum = 0, prod = 1, c = 0;
    while (n != 0)
    {
        int r = n % 10;
        sum += r;
        prod *= r;
        c++;
        printf("%d\n", r);
        n /= 10;
    }

    printf("No. of Digits: %d\n", c);
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", prod);
}