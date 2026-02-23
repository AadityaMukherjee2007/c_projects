/*
    *
   **
  ***
 ****
*****
*/

#include <stdio.h>

int main()
{
    int n;
    printf("n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n - 1 - i; k++)
        {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}