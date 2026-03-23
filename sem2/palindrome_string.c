#include <stdio.h>

int len(char *str);
int is_palindrome(char *str);

int main()
{
	char txt[100];
	printf("Text: ");
	scanf("%[^\n]", &txt);
	
	if (is_palindrome(txt))
		printf("True\n");
	else
		printf("False\n");
	
	return 0;
}

int len(char *str)
{
	int l = 0, i = 0;
	while (*(str + i) != '\0')
	{
		l++;
		i++;
	}
	
	return l;
}

int is_palindrome(char *str)
{	
	int i;
	int n = len(str);
	for (i = 0; i < n / 2; i++)
	{
		if (*(str + i) != *(str + n - i - 1))
			return 0;
	}
	return 1;
}
