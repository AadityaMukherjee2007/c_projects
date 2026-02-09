#include <stdio.h>
#include <stdlib.h>

void pattern_1();
void pattern_2();

int main()
{
    int ch = 0;

    while (1)
    {
        printf("\nChoices: \n0. --> Exit\n1. --> Pattern 1\n2. --> Pattern 2\n\nEnter Choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 0:
                exit(0);
            case 1: 
                pattern_1();
            break;
            case 2:
                pattern_2();
            break;
            default: 
                printf("Invalid Choice!");
        }
    }

    return 0;
}

void pattern_1()
{
    int n = 0;
    printf("n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j < n; j++)
            printf(" ");

        for (int k = i; k < n; k++)
            printf("*");

        printf("\n");
    }
}

void pattern_2()
{
    int n = 0;
    printf("n: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Pattern can be generated for odd number only!\n");
        exit(0);
    }

    int u = n / 2 + 1;
    int l = n - u;

    // printf("%d %d", u, l);
    // exit(0);

    int c = 1;
    // upper half 
    for (int i = 0; i < u; i++)
    {
        for (int j = i; j < u - 1; j++)
            printf(" ");

        for (int k = 0; k < c; k++)
        {
            printf("*");
        }
        c += 2;

        printf("\n");
    }

    c -= 4;
    // lower half
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < i + 1; j++)
            printf(" ");

        for (int k = 0; k < c; k++)
        {
            printf("*");
        }
        c -= 2;

        printf("\n");
    }
}