#include <stdio.h>

/*---------- Investment Problem ----------*/

#define PERIOD 10
#define PRINCIPAL 5000.00

/*---------- Main Program Begins ----------*/

void main()
{
    /*---------- Investment Problem ----------*/
    int year;
    float amount, value, inrate;

    /*---------- Assignment Statements ----------*/
    amount = PRINCIPAL;
    inrate = 0.11;
    year = 0;

    /*---------- Computation Statements ----------*/
    /*---------- Computation Using While Loop ----------*/
    while (year <= PERIOD)
    {
        printf("%2d\t%8.2f\n", year, amount);
        value = amount + inrate * amount;
        year += 1;
        amount = value;
    }
    /*---------- While Loop Ends ----------*/
}
/*---------- Program Ends ----------*/