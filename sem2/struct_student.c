#include <stdio.h>

struct Student
{
	int roll;
	char name[50];
	float marks[4];
};

int main()
{
	struct Student s;
	int i;
	
	printf("Name: ");
	scanf("%[^\n]", s.name);
	printf("Roll: ");
	scanf("%d", &s.roll);
	
	printf("Enter marks of 4 subjects:\n");
	for (i = 0; i < 4; i++)
	{
		scanf("%f", &s.marks[i]);
	}
	
	printf("\n\nName: %s\n", s.name);
	printf("Roll: %d\n", s.roll);
	printf("Marks: \n");
	for (i = 0; i < 4; i++)
	{
		printf("%.2f\n", s.marks[i]);
	}
	return 0;
}