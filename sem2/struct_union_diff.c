#include <stdio.h>
#include <stdint.h>

struct S {
    uint8_t  a;   // gets its own byte
    uint32_t b;   // gets its own 4 bytes
    uint8_t  c;   // gets its own byte
};                // total: at least 6 bytes (plus padding)

union U {
    uint8_t  a;   // shares the same memory as b and c
    uint32_t b;   // shares the same memory as a and c
    uint8_t  c;   // shares the same memory as a and b
};                // total: 4 bytes (size of the LARGEST field only)

int main() {
    printf("struct size: %zu\n", sizeof(struct S));  // 8 (with padding)
    printf("union size:  %zu\n", sizeof(union U));   // 4

    // struct — all fields independent
    struct S s;
    s.a = 1;
    s.b = 1000;
    s.c = 2;
    printf("s.a=%d s.b=%d s.c=%d\n", s.a, s.b, s.c);  // 1 1000 2 — all intact

    // union — writing one field corrupts the others
    union U u;
    u.b = 0x12345678;
    printf("u.b = 0x%X\n",  u.b);   // 0x12345678
    printf("u.a = 0x%X\n",  u.a);   // 0x78 — you're reading the first byte of b
    printf("u.c = 0x%X\n",  u.c);   // 0x78 — same byte, same result

    return 0;
}