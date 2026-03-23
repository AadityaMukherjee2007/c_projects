#include <stdio.h>
#include <string.h>

int main()
{
	char txt[100], abr[50];
	int i, j, l;
	
	printf("Text: ");
	scanf("%[^\n]", &txt);
	
	j = 0, i = 0, l = strlen(txt);
	abr[j++] = txt[i++];
	
	for (; i < l; i++)
	{
		if (txt[i - 1] == ' ')
			abr[j++] = txt[i];
	}
	abr[j] = '\0';
	
	printf("Abbreviation: %s\n", abr);
	
	return 0;
}
