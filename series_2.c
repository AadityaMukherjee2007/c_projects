/*
WAPC to display the following series of numbers: 1, 2, 4, 8, …, n-terms.
Here, ‘n’ is user input.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0;
    printf("n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", (int) pow(2, i));
    }
    return 0;
}