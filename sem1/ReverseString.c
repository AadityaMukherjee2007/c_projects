#include <stdio.h>

int len(char s[]);

int main()
{
    int n = 100, l;
    char str[n];
    printf("Text: ");
    scanf("%[^\n]%*c", str);

    l = len(str);

    for (int i = 0; i < l; i++)
    {
        if (i >= (l - 1 - i))
        {
            break;
        }
        char temp = str[i];
        str[i] = str[l - 1 - i];
        str[l - 1 - i] = temp;
    }

    printf("Reverse: %s\n", str);

    return 0;
}

int len(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}