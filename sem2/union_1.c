#include <stdio.h>

typedef union IPAddress {
    unsigned int fullAddress;      // 32-bit integer
    unsigned char octets[4];       // 4 individual bytes
} IPAddress;

int main() 
{
    IPAddress ip;
    ip.fullAddress = 0xC0A80001;  // 192.168.0.1 in hex
    
    printf("Full address: 0x%X\n", ip.fullAddress);
    printf("Octets: %d.%d.%d.%d\n", 
           ip.octets[3], ip.octets[2], 
           ip.octets[1], ip.octets[0]);
    
    return 0;
}