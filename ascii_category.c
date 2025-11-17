/*
WAPC to input a character. Categorize it as either uppercase letter,
lowercase letter, number or any other miscellaneous symbol.
*/

#include <stdio.h>

int main()
{
    char ipChar; int asciiValue;

    printf("Enter a character constant: ");
    scanf("%c",&ipChar);

    asciiValue = ipChar;

    if(asciiValue >= 65 && asciiValue <= 90)
        printf("%c is an uppercase letter\n", ipChar);
    else if(asciiValue >= 97 && asciiValue <= 122)
        printf("%c is a lowercase letter\n", ipChar);
    else if(asciiValue >= 48 && asciiValue <= 57)
        printf("%c is a digit\n", ipChar);
    else if(asciiValue == 32)
        printf("%c is a whitespace\n", ipChar);
    else
        printf("%c is a miscellaneous symbol\n", ipChar);

    return 0;
}
