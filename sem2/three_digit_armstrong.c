#include <stdio.h>
#include <math.h>

int is_armstrong(int n);

int main()
{
    for (int i = 100; i <= 999; i++)
        if (is_armstrong(i))
            printf("%d\n", i);

    return 0;
}

int is_armstrong(int n)
{
    int sum = 0, num = n;
    while (n != 0)
    {
        int r = n % 10;
        sum += pow(r, 3);
        n /= 10;
    }

    if (sum == num)
        return 1;
    return 0;
}