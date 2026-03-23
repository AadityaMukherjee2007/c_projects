#include <stdio.h>

int main()
{
	int n, i, j;
	printf("Dimensions of Square Matrix: ");
	scanf("%d", &n);
	
	int arr[n][n];
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("arr[%d][%d]: ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	
	printf("Principal Diagonal: \n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				printf("%d ", arr[i][j]);
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	printf("\nNon-Principal Diagonal: \n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i + j == n - 1)
			{
				printf("%d ", arr[i][j]);
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	printf("\nBoundary elements: \n");
	for (i = 0; i < n; i++)
	{
		
		for (j = 0; j < n; j++)
		{
			if (((i != 0 || i != - 1 ) && (j == 0 || j == n - 1)) || i == 0 || i == n - 1)
			{
				printf("%d ", arr[i][j]);
			}
			else
			{
				printf("  ");
			}
		}
		
		printf("\n");
	}
	
	printf("");
	return 0;
}
