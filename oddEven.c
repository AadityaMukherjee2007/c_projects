#include <stdio.h>

int main()
{
    int num;

    printf("Number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        if (num % 2 == 0)
        {
            printf("Even\n");
        }
        else 
        {
            printf("Odd\n");
        }
    }
    else 
    {
        printf("Not a +ve number.\n");
    }

    return 0;
}