#include <stdio.h>

int mystery(int x);

int main() 
{
    int x = 10;
    int result = mystery(x);
    printf("%d %d\n", x, result);
    return 0;
}

int mystery(int x)
{
    x = x * 5;
    int y = x + 2;
    return y;
}