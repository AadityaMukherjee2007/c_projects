#include <stdio.h>

int leapYear(int yr);

int main()
{
    unsigned int days, months, years;

    printf("Date [dd mm yyyy] : ");
    scanf("%u %u %u", &days, &months, &years);
    // printf("%u %u %u\n", days, months, years);

    if (days < 1 || months < 1 || years < 1 || months > 12 || days > 31)
    {
        printf("Inavlid Date\n");
        return 0;
    }

    if (leapYear(years))
    {
        if (months == 2 && (days > 29))
        {
            printf("Inavlid Date\n");
        }
        else 
        {
            printf("Valid Date\n");
        }
    }
    else 
    {
        if (months == 2 && (days > 28))
        {
            printf("Inavlid Date\n");
        }
        else 
        {
            printf("Valid Date\n");
        }
    }

    

    return 0;
}

int leapYear(int yr)
{
    return yr % 400 == 0;
}