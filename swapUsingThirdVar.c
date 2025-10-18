#include <stdio.h>

int main()
{
    int n1, n2, temp;
    
    printf("N1: ");
    scanf("%d", &n1);
    printf("N2: ");
    scanf("%d", &n2);

    temp = n1;
    n1 = n2;
    n2 = temp;

    printf("\nAfter Swap:\nN1: %d\nN2: %d\n", n1, n2);

    return 0;
}