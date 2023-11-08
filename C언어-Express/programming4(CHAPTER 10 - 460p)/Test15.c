#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int arr[10][10] = { 0 };
	int i, j;
	srand((unsigned)time(NULL));
	int random_number;

	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
		{
			random_number = rand() % 100;
			if (random_number > 30)
				arr[i][j] = 1;
			else
				arr[i][j] = 0;
		}

	
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (arr[i][j] == 1)
				printf(" . ");
			else
				printf(" # ");
		}
		printf("\n");
	}

	return 0;
}