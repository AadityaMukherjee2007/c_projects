#include <stdio.h>
#include <stdlib.h>

int main()
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

    return 0;
}