#include<stdio.h>
void merge(int* A, int* B, int* C, int size);
int main()
{
	int i;
	int a[] = { 2,5,7,8 };
	int b[] = { 1,3,4,6 };
	int c[8] = { 0 };
	merge(a, b, c, 8);


	printf("A[] = ");
	for (i = 0; i < 4; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");


	printf("B[] = ");
	for (i = 0; i < 4; i++)
	{
		printf("%d ", b[i]);
	}
	printf("\n");


	printf("C[] = ");
	for (i = 0; i < 8; i++)
	{
		printf("%d ", c[i]);
	}
	printf("\n");

	return 0;
}

void merge(int* A, int* B, int* C, int size)
{
	int j = 0;
	int k = 0;

	for (int i = 0; i < size; i++)
	{
		if (j < size / 2 && k < size / 2)
		{
			if (A[j] < B[k])
				C[i] = A[j++];

			else
				C[i] = B[k++];
		}

		else if (j == size / 2)
			C[i] = B[k++];

		else if (k == size / 2)
			C[i] = A[j++];
	}
}