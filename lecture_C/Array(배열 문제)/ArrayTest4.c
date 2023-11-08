#include<stdio.h>

int main()
{
	// 2부터 시작하는 짝수를 원소에 차례대로 저장하여 출력
	int numbers[5][5] = { 0 };

	int rows = sizeof(numbers) / sizeof(numbers[0]);
	int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);

	for (int i = 0, n = 2; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			numbers[i][j] = n;
			n += 2;
			printf("[%2d] ", numbers[i][j]);
		}
		printf("\n");
	}

	

	return 0;
}
