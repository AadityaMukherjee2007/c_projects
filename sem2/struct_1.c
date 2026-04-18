#include <stdio.h>

typedef struct Test {
    int var;
} Test;

int main() 
{
    Test s;
    Test *ptr = &s;

    // s.var = 10;
    (*ptr).var = 10;

    int *p = &ptr -> var;
    printf("%d\n", *p);

    return 0;
}