#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Num 1: ");
    scanf("%d", &a);
    printf("Num 2: ");
    scanf("%d", &b);
    printf("Num 3: ");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("%d is the largest\n", a);
        }
        else
        {
            printf("%d is the largest\n", c);
        }
    }
    else 
    {
        if (b > c)
        {
            printf("%d is the largest\n", b);
        }
        else
        {
            printf("%d is the largest\n", c);
        }
    }
    
    return 0;
}