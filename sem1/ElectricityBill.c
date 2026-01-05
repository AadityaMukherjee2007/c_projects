#include <stdio.h>

float calc(int n);

int main()
{
    int units = 0;

    printf("Units: ");
    scanf("%d", &units);

    if (units < 0)
    {
        printf("Units cannot be -ve.\n");
        return 1;
    }

    float amt = calc(units);
    printf("Bill: Rs. %.2f\n", amt);
    
    return 0;
}

float calc(int n)
{
    if (n <= 100)
    {
        return n * 2;
    }
    else if (n <= 300)
    {
        float amt = 100 * 2;
        n -= 100;
        amt += n * 3;
        return amt;
    }
    else if (n > 300)
    {
        float amt = 100 * 2;
        n -= 100;
        amt += 200 * 3;
        n -= 200;
        amt += n * 4;
        amt += amt * (2.5 / 100);
        return amt;
    }
}