#include <stdio.h>

int len(int n);

int main()
{
    int n = 0;
    printf("Enter 3-Digit Number: ");
    scanf("%d", &n);

    if (len(n) != 3)
    {
        printf("Only 3-digit number accepted!");
        return 1;
    }

    int sum = n % 10 + (n / 10) % 10 + n / 100;
    
    // printf("%d\n", sum);
    if (sum % 3 == 0)
        printf("%d is divisible by 3.\n", n);
    else
        printf("%d is not divisible by 3.\n", n);

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