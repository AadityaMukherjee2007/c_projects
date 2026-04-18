#include <stdio.h>
#include <string.h>

void reverse(char *str, int len);

int main()
{
    char str[100];
    printf("String: ");
    scanf(" %[^\n]", str);

    reverse(str, strlen(str));

    printf("Reversed String: %s\n", str);
    return 0;
}

void reverse(char *str, int len)
{
    for (int i = 0; i < len / 2; i++)
    {
        char temp = *(str + i);
        *(str + i) = *(str + len - i - 1);
        *(str + len - i - 1) = temp;
    }
}