#include <stdio.h>

void pattern(int n);

int main()
{
    int n = 0;
    printf("n: ");
    scanf("%d", &n);
    
    pattern(n);
    
    return 0;
}

void pattern(int n)
{
    for (int i = 0, c = 65; i < n; i++, c++)
    {
        for (int k = n - 1; k > i; k--)
            printf(" ");

        for (int j = 65; j <= c; j++)
            printf("%c", (char) j);
        printf("\n");
    }
}