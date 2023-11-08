#include<stdio.h>

int main()
{
	int rows = 7;
	int columns = 7;

	for (int i = 1; i <= rows; i++)
	{
		for(int j = columns; j>i; j--)
		{
			printf(" ");
		}
		for (int k = 0; k < i; k++)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}