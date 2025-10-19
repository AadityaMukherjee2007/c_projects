#include <stdio.h>

int main()
{
    char letter;
    printf("Enter a lowercase letter: ");
    scanf("%c",&letter);
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
    {
        printf("%c is a vowel\n", letter);
    }
    else if (letter >= 'a' && letter <= 'z')
    {
        printf("%c is a consonant\n", letter);
    }
    else
    {
        printf("%c is a not an alphabet\n", letter);
    }
    return 0;
}
