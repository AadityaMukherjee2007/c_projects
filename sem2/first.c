#include <stdio.h>

int main() {
    unsigned int m, n, p;
    // printf("Our first program\n");

    printf("Enter 2 nums: ");
    scanf("%u%u", &m, &n);

    p = n + m;
    printf("Sum: %d\n", p);

    return 0;
}