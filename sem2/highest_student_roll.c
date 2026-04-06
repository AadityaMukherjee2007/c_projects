#include <stdio.h>

typedef struct Student {
	int roll;
	int marks[4];
	int total;
} ST;

int highest(ST s[], int n);

int main()
{
	ST s[10];
	int i, j, total;
	for (i = 0; i < 10; i++)
	{
		total = 0;
		printf("Student %d\n", i + 1);
		printf("Roll: ");
		scanf("%d", &s[i].roll);
		
		printf("Enter marks of 4 subjects: \n");
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &s[i].marks[j]);
			total += s[i].marks[j];
		}	
		s[i].total = total;
	}
	
	printf("Roll of highest total: %d\n", highest(s, 10));
	
	return 0;
}

int highest(ST s[], int n)
{
	int roll = s[0].roll, highest_marks = s[0].total, i;
	for (i = 1; i < n; i++)
	{
		if (s[i].total > highest_marks)
		{
			highest_marks = s[i].total;
			roll = s[i].roll;
		}
	}
	
	return roll;
}