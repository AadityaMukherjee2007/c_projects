#include <stdio.h>
#include <stddef.h>

struct Bad {
    char a;
    int b;
    char c;
};

struct Good {
    int b;
    char a;
    char c;
};

int main()
{
    // sizeof tells you total bytes the struct uses
    printf("Bad  size: %zu\n", sizeof(struct Bad));    // 12 — 4 bytes wasted
    printf("Good size: %zu\n", sizeof(struct Good));   // 6 — only 2 wasted

    // offsetof tells you where inside the struct each field starts
    printf("Bad.a starts at byte: %zu\n", offsetof(struct Bad, a));  // 0
    printf("Bad.b starts at byte: %zu\n", offsetof(struct Bad, b));  // 4 (not 1!)
    printf("Bad.c starts at byte: %zu\n", offsetof(struct Bad, c));  // 8

    printf("Good.a starts at byte: %zu\n", offsetof(struct Good, a));  
    printf("Good.b starts at byte: %zu\n", offsetof(struct Good, b));  
    printf("Good.c starts at byte: %zu\n", offsetof(struct Good, c)); 
    return 0;
}