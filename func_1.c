#include <stdio.h>

/*---------- Program Using Function ----------*/
int mul(int a, int b); /*---------- Declaration ----------*/

/*---------- Main Program Begins ----------*/
void main ()
{
    int a, b, c;
    a = 5;
    b = 10;
    c = mul(a, b);

    printf("Multiplication of %d and %d is %d\n", a, b, c);
}

/*---------- Main Program Ends ----------*/
/*---------- mul () Function Starts ----------*/
int mul (int x, int y)
{
    int p;

    p = x * y;
    return (p);
}
/*---------- mul () Function Ends ----------*/