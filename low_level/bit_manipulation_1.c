#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t reg = 0b00000101;
    printf("Current state: 0b%08b (%d)\n", reg, reg);
    
    reg = reg | (1 << 4);
    printf("after SET bit 4: 0b%08b (%d)\n", reg, reg);

    reg = reg & ~(1 << 0);
    printf("after CLEAR bit 0: 0b%08b (%d)\n", reg, reg);

    reg = reg ^ (1 << 0);
    printf("after TOGGLE bit 2: 0b%08b (%d)\n", reg, reg);

    if (reg & (1 << 4)) 
    {
        printf("bit 4 is ON\n");
    } 
    else 
    {
        printf("bit 4 is OFF\n");
    }

    return 0;
}