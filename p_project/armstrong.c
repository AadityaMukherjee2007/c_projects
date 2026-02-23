#include <stdio.h>
#include <math.h>

int len(int n);
int is_armstrong(int n);

int main()
{
    int n;
    printf("n: ");
    scanf("%d", &n);

    if (is_armstrong(n))
        printf("Armstrong!\n");
    else
        printf("Not Armstrong.\n");

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

int is_armstrong(int n)
{
    int sum = 0, num = n;
    int l = len(n);
    while (num != 0)
    {
        int r = num % 10;
        sum += pow(r, l);
        num /= 10;
    }

    return sum == n;
}

/*
153 = 1^3 + 3^3 + 5^3 = 1 + 27 + 125 = 153 --> Armstrong
21 = 2^2 + 1^2 = 5 --> Not Armstrong
*/