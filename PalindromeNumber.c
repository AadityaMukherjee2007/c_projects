#include <stdio.h>

int reverse(int n);

int main()
{
    int n = 0;

    printf("n: ");
    scanf("%d", &n);

    if (n == reverse(n))
    {
        printf("Palindrome\n");
    }
    else 
    {
        printf("Not Palindrome\n");
    }
    return 0;
}

int reverse(int n)
{
    int reverseNumber = 0;
    while (n != 0)
    {
        reverseNumber = reverseNumber * 10 + n % 10;
        n /= 10;
    }

    return reverseNumber;
}