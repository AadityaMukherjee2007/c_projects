#include <stdio.h>

int rev(int n);
int palindrome(int n);

int main()
{
    int n;
    printf("n: ");
    scanf("%d", &n);

    if (palindrome(n))
        printf("Palindrome!\n");
    else
        printf("Not Palindrome.\n");

    return 0;
}

int rev(int n)
{
    int r = 0;
    while (n != 0)
    {
        r = r * 10 + n % 10;
        n /= 10;
    }

    return r;
}

int palindrome(int n)
{
    return n == rev(n);
}