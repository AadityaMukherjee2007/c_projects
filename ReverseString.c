#include <stdio.h>

int main()
{
    int n = 10;
    char str[n];
    printf("Text: ");
    scanf("%s", str);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - (i + 1); j++)
        {
            char temp = str[j];
            //printf("%c", temp);
            str[j] = str[j + 1];
            str[j + 1] = temp;
        }
        printf("%s", str);
    }

    printf("Reverse: %s\n", str);

    return 0;
}