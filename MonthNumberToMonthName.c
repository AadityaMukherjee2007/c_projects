#include <stdio.h>

int main()
{
    int monthNumber = 0;
    while (1)
    {
        printf("Month Number[1-12]: ");
        scanf("%d", &monthNumber);

        switch (monthNumber)
        {
            case 1 : 
                printf("January");
                break;
            case 2 : 
                printf("February");
                break;
            case 3 : 
                printf("March");
                break;
            case 4 : 
                printf("April");
                break;
            case 5 : 
                printf("May");
                break;
            case 6 : 
                printf("June");
            case 7 : 
                printf("July");
                break;
            case 8 : 
                printf("August");
                break;
            case 9 : 
                printf("September");
                break;
            case 10 : 
                printf("October");
                break;
            case 11 : 
                printf("November");
                break;
            case 12 : 
                printf("December");
                break;
            default:
                return 0;
        }
        printf("\n");
    }
    return 0;
}