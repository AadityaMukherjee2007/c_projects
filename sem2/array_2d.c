#include <stdio.h>

int main()
{
    int n;
    printf("n: ");
    scanf("%d", &n);

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[n][n]);
        }
    }

    // principal diagonal
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                printf("%d", arr[i][j]);
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}