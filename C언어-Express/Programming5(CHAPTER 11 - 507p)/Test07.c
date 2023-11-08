#include<stdio.h>
void array_add(int* a, int* b, int* c, int size);
int main()
{
	int a[10] = { 1, 2, 3, 0, 0, 0, 0, 0, 0, 0 };
	int b[10] = { 0 };
	int c[10] = { 0 };

	array_add(a, b, c, 10);
	return 0;
}

void array_add(int* a, int* b, int* c, int size)
{
	int i;

	printf("A[] = ");
	for (i = 0; i < size; i++)
		printf("%d ", a[i]);
	printf("\n");


	printf("B[] = ");
	for (i = 0; i < size; i++)
		printf("%d ", b[i]);
	printf("\n");


	printf("C[] = ");
	for (i = 0; i < size; i++)
	{
		c[i] = a[i] + b[i];
		printf("%d ", c[i]);
	}
	printf("\n");
}