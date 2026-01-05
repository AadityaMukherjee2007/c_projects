#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d",&num1, &num2);

    if (num1 > 0 || num2 > 0)
        if (num1 > 0 && num2 > 0)
            printf("Both inputs are +ve\n");
        else 
            printf("One of the inputs is +ve\n");
    else
        printf("None of the inputs are +ve\n");

    return 0;
}
