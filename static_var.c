#include <stdio.h>

int mystery();

int main()
{
    for (int i = 1; i <= 5; i++)
        printf("%d\n", mystery());
    return 0;
}

int mystery()
{
    static int temp = 0;
    ++temp;
    return temp;
}