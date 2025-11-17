/*
WAPC to display the sum of the first ‘n’ odd numbers and 
the sum of the first ‘n’ even numbers separately. 
Here, ‘n’ is the user input.
*/
#include <stdio.h>

int main()
{
    int n = 0;
    printf("n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}