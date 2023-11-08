#include<stdio.h>

int main()
{
	int arr[3][5] = { {12, 56, 32, 16, 98},
		{99, 56, 34, 41, 3},
		{65, 3, 87, 78, 21}
	};
	int i, j;
	int rows = sizeof(arr) / sizeof(arr[0]);
	int columns = sizeof(arr[0]) / sizeof(int);
	int total;

	for (i = 0; i < rows; i++)
	{
		total = 0;
		for (j = 0; j < columns; j++)
		{
			total += arr[i][j];
		}
		printf("%d행의 합계 : %d\n",i,total);
	}

	for (i = 0; i < columns; i++)
	{
		total = 0;
		for (j = 0; j < rows; j++)
		{
			total += arr[j][i];
		}
		printf("%d열의 합계 : %d\n", i, total);
	}

	return 0;
}