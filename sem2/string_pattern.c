#include <stdio.h>
#include <string.h>

void pattern1(char str[], int n);
void pattern2(char str[], int n);

int main()
{
    char text[] = "LANDSCAPE";
    int n = strlen(text);
    
    pattern1(text, n);
    printf("\n");
    pattern2(text, n);
    return 0;
}

void pattern1(char str[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }
}

void pattern2(char str[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }
}