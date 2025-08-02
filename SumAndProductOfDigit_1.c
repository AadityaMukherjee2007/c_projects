#include <stdio.h>

int len(int n);
void extract(int n, int l, int *left, int *right);

int main()
{
    int num, length, left, right;

    printf("Number: ");
    scanf("%d", &num);

    length = len(num);
    extract(num, length, &left, &right);

    printf("\nSum: %d\n", (left + right));
    printf("Product: %d\n", (left * right));

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

void extract(int n, int l, int *left, int *right)
{
    int pow = 10;
    for (int i = 1; i < l - 1; i++)
    {
        pow *= 10;
    }

    *left = n / pow;
    *right = n % 10;
}