#include <stdio.h>

int main()
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
    return 0;
}