#include <stdio.h>

int main()
{
    char character;
    printf("Character Constant: ");
    scanf("%c", &character);

    printf("ASCII Value: %d\n", (int) character);
    return 0;
}