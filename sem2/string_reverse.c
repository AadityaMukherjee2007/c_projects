#include <stdio.h>

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

void reverse(char *str)
{
	int i, n = len(str);
	char temp;
	//printf("Original: %s\n", str);
	for (i = 0; i < n / 2; i++)
	{
		temp = *(str + i);
		printf("%c\n", temp);
		*(str + i) = *(str + n - i - 1);
		printf("%c\n", *(str + i));
		printf("%c\n", *(str + n - i - 1));
		*(str + n - i - 1) = temp;
		printf("%c\n", temp);
	}
}

int main()
{
	char txt[] = "Hello, World!";
	printf("Original: %s\n", txt);
	
	reverse(txt);
	printf("Reversed: %s\n", txt);
	
	return 0;
}
