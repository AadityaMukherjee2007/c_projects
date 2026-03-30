#include <stdio.h>

int main()
{
    int age;
    age = 19;

    int *p;
    p = &age;

    int *pu_age = p;
    

    printf("Age: %d\n", age);
    printf("p: %p\n", p);

    printf("*p: %d\n", *p);
    printf("pu_age: %p\n", pu_age);
    printf("*pu_age: %d\n", *pu_age);

    *pu_age = 10;
    printf("*pu_age: %d\n", *pu_age);
    printf("*p: %d\n", *p);
    
    return 0;
}