#include<stdio.h>
void array_copy(int* a, int* b, int size);
int main()
{
	int arr1[10] = { 1,2,3,0,0,0,0,0,0,0 };
	int arr2[10] = {0};

	array_copy(arr1, arr2, 10);
	return 0;
}

void array_copy(int* a, int* b, int size)
{
	int i;

	printf("A[ ] = ");
	for (i = 0; i < size; i++)
		printf("%d ", a[i]);
	printf("\n");


	printf("A[ ] = ");
	for (i = 0; i < size; i++)
	{
		*(b + i) = *(a + i);
		printf("%d ", *(b + i));
	}
	printf("\n");
}