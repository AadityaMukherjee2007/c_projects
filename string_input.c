#include <stdio.h>

int main()
{
	char str[100];
	
	printf("String: ");
	gets(str);
	
	printf("Inputted String: %s\n", str);
	
	printf("\nString: ");
	scanf("%[^\n]", &str);
	
	printf("Inputted String: %s\n", str);
	
	printf("\nString: ");
	scanf("%[^q]", &str);
	
	printf("Inputted String: %s\n", str);
	return 0;
}
