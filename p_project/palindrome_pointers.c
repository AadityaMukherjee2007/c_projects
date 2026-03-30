#include <stdio.h>
#include <string.h>

int palindrome(char *s);

int main()
{
    char s[100];
    printf("s: ");
    scanf("%[^\n]", s);

    if (palindrome(s))
        printf("Palindrome!\n");
    else
        printf("Not Palindrome.\n");

    return 0;
}

int palindrome(char *s)
{
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++)
    {
        if (*(s + i) != *(s + len - i - 1))
            return 0;
    }
    return 1;
}