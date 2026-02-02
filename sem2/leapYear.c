#include <stdio.h>

int is_leap(int yr);

int main()
{
    int year = 0;
    printf("Year: ");
    scanf("%d", &year);

    printf("")

    return 0;
}

int is_leap(int yr)
{
    if (yr % 400 == 0)
        return 1;
    else
        return 0;
}