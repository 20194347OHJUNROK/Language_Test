#include<stdio.h>
void scalar_mult(int(*arr)[3], int scalar);
void transpose_mult(int(*arr1)[3], int (*arr2)[3]);
int main()
{
	int i, j;
	int scalar = 2;
	int arr1[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	int arr2[3][3] = { 0 };

	for (i = 0; i < 3; i++)
	{
		if(i==1)
			printf("%4d *", scalar);

		printf("\t");
		for (j = 0; j < 3; j++)
		{
			printf("%2d\t", arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	transpose_mult(arr1, arr2);
	scalar_mult(arr1, scalar);

	return 0;
}

void scalar_mult(int(*arr)[3], int scalar)
{
	int i, j;
	printf("\t scalar_mult 함수 호출\n");
	printf("------------------------------------\n");
	for (i = 0; i < 3; i++)
	{
		printf("\t");
		for (j = 0; j < 3; j++)
		{
			arr[i][j] *= scalar;
			printf("%2d\t", arr[i][j]);
		}
	printf("\n");
	}

	printf("\n");
}

void transpose_mult(int(*arr1)[3], int(*arr2)[3])
{
	int i, j;
	printf("\t transpose_mult 함수 호출\n");
	printf("------------------------------------\n");
	for (i = 0; i < 3; i++)
	{
		printf("\t");
		for (j = 0; j < 3; j++)
		{
			arr2[i][j] = arr1[j][i];
			printf("%2d\t", arr2[i][j]);
		}
		printf("\n");
	}

	printf("\n");
}