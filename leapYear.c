#include <stdio.h>

int main()
{
    int year = 0;
    printf("Year: ");
    scanf("%d", &year);

    if (year % 100 == 0)
    {
        if (year % 4 == 0)
        {
            printf("Leap Year!\n");
        }
        else
        {
            printf("Century Year but not a Leap Year.\n");
        }
    }
    else 
    {
        printf("Not a Century Year.\n");
    }

    return 0;
}