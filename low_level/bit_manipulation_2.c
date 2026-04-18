#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t reg = 0b11001010;
    printf("%08b\n", reg);

    // printf("%08b\n", 0b10101010 >> 1);

    // reg = 0b11001010 | (0b10101010 >> 1);
    // printf("%08b\n", reg);

    reg = reg | 0b00000001;
    printf("%08b\n", reg);

    reg = reg & 0b11111101;
    printf("%08b\n", reg);

    reg = reg ^ 0b01000000;
    printf("%08b\n", reg);

    uint8_t flipped = ~reg;
    printf("%08b\n", flipped);

    return 0;
}