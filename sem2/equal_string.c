#include <stdio.h>
#include <string.h>

int are_equal(char *s1, char *s2);

int main()
{
	char s1[100], s2[100];
	printf("String 1: ");
	gets(s1);
	
	fflush(stdin);
	
	printf("String 2: ");
	gets(s2);
	
	if (are_equal(s1, s2))
		printf("Both the strings are equal!");
	else
		printf("Both the strings aren't equal.");
	
	return 0;
}

int are_equal(char *s1, char *s2)
{
	int i;

	if (strlen(s1) != strlen(s2))
		return 0;
		
	i = 0;
	while (*(s1 + i) != '\0')
	{
		// int d1, d2;
		// d1 = (int) *(s1 + i) - 97 < 0 ? (int) *(s1 + i) - 97 : (int) *(s1 + i) - 65;
		// d2 = (int) *(s2 + i) - 97 < 0 ? (int) *(s2 + i) - 97 : (int) *(s2 + i) - 65;
		
		int diff = (int) *(s1 + i) - (int) *(s2 + i);
		if (!(diff == 32 || diff == 0))
			return 0;
			
		/*
		printf("%d %d\n", d1, d2);
		
		
		if (d1 != d2)
			return 0;
		*/
		i++;
	}
	
	return 1;
}