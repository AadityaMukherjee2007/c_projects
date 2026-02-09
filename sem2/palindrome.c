#include <stdio.h>

int is_palindrome(int n);
int reverse(int n);

int main()
{
    int n = 0;
    printf("n: ");
    scanf("%d", &n);

    if (is_palindrome(n))
        printf("Palindrome!\n");
    else 
        printf("Not Palindrome\n");

    return 0;
}

int is_palindrome(int n)
{
    return n == reverse(n);
}

int reverse(int n)
{
    int rev = 0;
    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    return rev;
}