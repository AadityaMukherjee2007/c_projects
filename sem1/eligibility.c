/*
WAPC to do the following:
    Input: age, citizenship status (Y/N), criminal record (Y/N).
    Eligible if: 
    1. age ≥ 18 and citizenship = Y and no criminal record.
    2. If age ≥ 60, print "Senior Citizen Eligible".
    3. If not eligible, specify why.
*/

#include <stdio.h>

int main()
{
    char ct, cr;
    int age;

    printf("age, citizenship status (Y/N), criminal record (Y/N): ");
    scanf("%d %c %c", &age, &ct, &cr);

    if (age >= 60)
        printf("Senior Citizen Eligible\n");
    else if (age >= 18)
        if (ct == 'Y')
            if (cr == 'N')
                printf("Eligible\n");
            else 
                printf("Not eligible due to presence criminal record.\n");
        else
            printf("Not eligible due to absence of citizenship.\n");
    else
        printf("Not eligible since age is less than 18.\n");

    return 0;
}