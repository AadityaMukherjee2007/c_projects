#include <stdio.h>

int main()
{
    int n = 0;
    printf("n: ");
    scanf("%d", &n);

    int a = 0, b = 1;
    for (int i = 0; i < n; i++)
    {
        printf("%d%s", a, i == n - 1 ? "\n" : ", ");
        int c = a + b;
        a = b;
        b = c;
    }

    return 0;
}